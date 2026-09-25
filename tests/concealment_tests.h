// Plan 029 M-B: concealment behind Config::concealment. Jordan's rulings (23 September 2026): a hedge
// blocks sight, not bullets; hidden counts as safe for planning; self-preservation uses solid cover
// only. Four parts: the rays against one hedge (sight blocked, bullets and cover through it, movement
// blocked, never a cover source), the solid ray equal to the sight ray on maps without concealment,
// the soldier's own decisions against the hedge (seen or not, protected or not, friendly fire), and a
// fixture battle: a squad under a machine gun with a hedge and two low walls between them.
#pragma once
#include "ImportedMap.h"
#include <sstream>
namespace concealment_tests {
using namespace army;
// A hedge 12 m long north-south at x=0 (0.6 m thick, 1.8 m high), and the same box as a wall.
static Obstacle Hedge(){Obstacle o{{0,0,0},{.3f,6,0},false,false,1.8f};o.concealment=true;o.flags=1;return o;}
static float ExactContact(const Map& m,Vec3 a,Vec3 b,bool solidOnly){
    float first=2;for(const auto& o:m.obstacles){if(solidOnly&&o.concealment)continue;float t=SegmentObstacle(a,b,o);if(t>=0)first=std::min(first,t);}
    return first<=1?first:-1;
}
static void RayTests(){
    Map m;m.halfWidth=60;m.halfHeight=40;m.obstacles.push_back(Hedge());
    m.obstacles.push_back({{-4,9,0},{.3f,1.5f,0},false,true,1.f});   // a solid low wall behind it
    PrepareGeometry(m);
    assert(m.hasConcealment&&m.prepared);
    const Vec3 west{-6,0,1.2f},east{6,0,1.2f};
    // Sight is blocked, the round passes, the solid ray is clear; the unskipped contact still finds it.
    assert(!ClearLine3D(m,west,east)&&ClearLine3DSolid(m,west,east));
    assert(MapContact(m,west,east)<0&&IndexedContact(m,west,east,false)>=0&&IndexedContact(m,west,east,false,-1,true)<0);
    // Over the top it is clear for both.
    assert(ClearLine3D(m,{-6,0,2.2f},{6,0,2.2f})&&ClearLine3DSolid(m,{-6,0,2.2f},{6,0,2.2f}));
    // The memo keeps the two answers apart (kind 0 and kind 2 for the same segment, either order).
    for(int k=0;k<3;++k){assert(ClearLine3DSolid(m,west,east));assert(!ClearLine3D(m,west,east));}
    // Movement: a hedge blocks the way like any wall.
    assert(!ClearLine(m,{-3,0,0},{3,0,0},.48f)&&ClearLine(m,{-3,8,0},{3,8,0},.48f));
    // Cover: a man behind it is not protected from a level threat; behind the same box as a wall he is.
    const Vec3 man{-.9f,0,0},gun{20,0,0};
    assert(!ProtectedAt(m,man,gun,Stance::Standing)&&!ProtectedAt(m,man,gun,Stance::Crouched));
    Map wall=m;wall.obstacles[0].concealment=false;InvalidateGeometry(wall);assert(!wall.hasConcealment);
    assert(ProtectedAt(wall,man,gun,Stance::Standing)&&ProtectedAt(wall,man,gun,Stance::Crouched));
    assert(!ClearLine3DSolid(wall,west,east)&&MapContact(wall,west,east)>=0);
    // Never a cover source, in either catalogue; the same box as a wall is one.
    auto sources=[](const Map& map,uint64_t id){int n=0;for(const auto& c:CoverPositions(map))n+=c.source==id;return n;};
    assert(sources(m,m.obstacles[0].id)==0&&sources(m,m.obstacles[1].id)>0&&sources(wall,wall.obstacles[0].id)>0);
    {Map linked=m;linked.linkedSurfaceRouting=true;InvalidateGeometry(linked);Map linkedWall=wall;linkedWall.linkedSurfaceRouting=true;InvalidateGeometry(linkedWall);
     assert(sources(linked,linked.obstacles[0].id)==0&&sources(linkedWall,linkedWall.obstacles[0].id)>0);}
    // The unprepared loops skip it the same way.
    {Map raw=m;raw.prepared=false;raw.spatial.reset();raw.segments.reset();
     assert(!ClearLine3D(raw,west,east)&&ClearLine3DSolid(raw,west,east)&&MapContact(raw,west,east)<0);}
    // Replacing the hedge by a wall recomputes the map flag.
    {Map edited=m;Obstacle solid=edited.obstacles[0];solid.concealment=false;solid.flags=0;assert(ReplaceObstacle(edited,edited.obstacles[0].id,solid));
     assert(!edited.hasConcealment&&!ClearLine3DSolid(edited,west,east));}
    // Against brute force over many rays: the solid ray and the round skip the hedge, sight does not.
    int blockedBySight=0,passedByRound=0;
    for(int i=0;i<240;++i){Vec3 a{-12+float(i%7),float(i%23)-11,float(i%9)*.3f},b{12-float((i*3)%7),float((i*7)%23)-11,float((i*5)%9)*.3f};
        const float all=ExactContact(m,a,b,false),solid=ExactContact(m,a,b,true);
        assert(ClearLine3D(m,a,b)==(all<0)&&ClearLine3DSolid(m,a,b)==(solid<0));
        assert(std::abs(MapContact(m,a,b)-solid)<1e-5f);
        blockedBySight+=all>=0&&solid<0;passedByRound+=MapContact(m,a,b)<0&&all>=0;}
    assert(blockedBySight>20&&passedByRound==blockedBySight);
    std::cout<<"CONCEALMENT rays: a hedge blocks sight ("<<blockedBySight<<" of 240 rays) and movement, not rounds, cover or the solid ray; never a cover source PASS\n";
}
static void SameRayTests(){
    // Maps without concealment: the solid ray is the sight ray, the round unchanged, over 240 rays each.
    int blocked=0;
    for(Map m:{MakeSkirmishMap(),MakeTrenchMap()}){
        assert(m.prepared&&!m.hasConcealment);
        for(int i=0;i<240;++i){Vec3 a{float((i*37)%240)-120,float((i*53)%200)-100,float(i%9)*.8f},b{float((i*71)%240)-120,float((i*29)%200)-100,float((i*5)%9)*.8f};
            const bool sight=ClearLine3D(m,a,b);assert(ClearLine3DSolid(m,a,b)==sight);blocked+=!sight;
            assert(std::abs(MapContact(m,a,b)-ExactContact(m,a,b,false))<1e-5f);}
    }
    assert(blocked>100);
    std::cout<<"CONCEALMENT without hedges: ClearLine3DSolid == ClearLine3D on 480 rays of both authored maps ("<<blocked<<" blocked) PASS\n";
}
// A rifleman just behind the hedge, a gun forty metres east he knows of and cannot see.
static Soldier BehindHedge(float time){
    Soldier s;s.id=3;s.team=0;s.squad=0;s.position={-.9f,0,0};s.goal=s.position;s.facing={1,0};
    s.assignment.task=Task::Advance;s.assignment.position={40,0,0};s.assignment.serial=1;
    s.action=Action::Advance;s.reason=Reason::OrderedAdvance;
    auto& ct=s.contacts[39];ct.known=true;ct.visible=false;ct.position={40,0,0};ct.observedAt=time;ct.aimHeight=1.45f;ct.automaticWeapon=true;
    return s;
}
static void SoldierTests(){
    Map m;m.halfWidth=90;m.halfHeight=60;m.obstacles.push_back(Hedge());
    m.obstacles.push_back({{-4,9,0},{.3f,1.5f,0},false,true,1.f});
    PrepareGeometry(m);
    Map wall=m;wall.obstacles[0].concealment=false;InvalidateGeometry(wall);
    // Seen: the gun does not see him behind the hedge (it does not see him behind the wall either),
    // though the solid line between them is clear; beside the hedge he is seen.
    Soldier gun;gun.id=39;gun.team=1;gun.position={40,0,0};gun.facing={-1,0};gun.stance=Stance::Standing;
    Soldier man=BehindHedge(10);
    assert(!SenseEnemy(gun,man,m,10).visible&&!SenseEnemy(gun,man,wall,10).visible);
    assert(ClearLine3DSolid(m,gun.position+Vec3{0,0,1.7f},man.position+Vec3{0,0,1.2f}));
    {Soldier beside=man;beside.position={-.9f,9.5f,0};assert(SenseEnemy(gun,beside,m,10).visible);}
    // Safe: pressed by the gun he cannot see, he is not protected by the hedge and goes for solid cover
    // (the low wall), not for the hedge. Behind the same box as a wall he is protected where he stands.
    Config on;on.concealment=true; // ChooseOrder reads the geometry; the switch acts in Simulate
    {Soldier s=BehindHedge(10);s.suppression=.6f;Tactics memory;
     const Order o=ChooseOrder(s,m,on,{},memory,10);
     const float fromHedge=std::max(std::abs(o.goal.x)-.3f,std::abs(o.goal.y)-6.f);
     std::cout<<"CONCEALMENT behind the hedge under fire: action "<<int(o.action)<<" reason "<<int(o.reason)<<" goal ("<<o.goal.x<<","<<o.goal.y<<")\n";
     assert(o.action==Action::Cover&&memory.assigned&&fromHedge>1.5f&&Distance(o.goal,{-4,9,0})<2.5f);
     assert(ProtectedAt(m,memory.shelter,{40,0,0},memory.halfCover?Stance::Crouched:Stance::Standing));}
    {Soldier s=BehindHedge(10);s.suppression=.6f;assert(ProtectedAt(wall,s.position,{40,0,0},s.stance));}
    // Friendly fire: a friend beyond the hedge on the line of fire is not masked by it; beyond a wall he is.
    {Soldier shooter;shooter.id=0;shooter.team=0;shooter.position={-20,0,0};shooter.action=Action::Fire;shooter.facing={1,0};
     shooter.allies[1]={true,true,{10,0,0},10};shooter.allies[1].aimHeight=1.85f;
     const float through=FriendlyFireRisk(shooter,m,{25,0,1.45f},10),behindWall=FriendlyFireRisk(shooter,wall,{25,0,1.45f},10);
     assert(ShouldHoldFire(shooter,through)&&!ShouldHoldFire(shooter,behindWall)&&behindWall==0);}
    std::cout<<"CONCEALMENT soldier: hidden behind the hedge, not protected by it, seeks the low wall under fire; friendly fire is not masked by it PASS\n";
}
// The fixture battle (ARMYMAP 2 city): squad 0 (ids 0-7) in the open 20 m west of a hedge at x=-10,
// the Ember gun (id 39) behind its own low wall 30 m east of the hedge, two low walls beside the hedge's
// ends, everyone else in a closed pen at either end of the map. hedgeFlags 0 writes the hedge as a wall.
static std::string FixtureMap(int hedgeFlags){
    std::ostringstream m;m<<"ARMYMAP 2 city 29\nBOUNDS 150 60 0\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low,int flags){m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<" 1 "<<flags<<"\n";};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0,0);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0,0);O(cx,-8.3f,0,8.f,.3f,3.2f,0,0);O(cx,8.3f,0,8.f,.3f,3.2f,0,0);}
    O(18.6f,0,0,.3f,1.5f,1.f,1,0);                 // O 9: the gun's low wall
    O(-10,0,0,.3f,6,1.8f,0,hedgeFlags);            // O 10: the hedge
    O(-14,11,0,.3f,1.5f,1.f,1,0);O(-14,-11,0,.3f,1.5f,1.f,1,0); // O 11, 12: solid low walls
    for(int i=0;i<UnitCount;++i){
        Vec3 p,g;
        if(i<8){p={-30,-14.f+4.f*float(i),0};g={-11,-3.f+2.f*float(i%4),0};}
        else if(i<32){const int k=i-8;p={-136.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};g=p;}
        else if(i==39){p={20,0,0};g=p;}
        else{const int k=i-32-(i>39?1:0);p={124.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};g=p;}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<g.x<<' '<<g.y<<' '<<g.z<<'\n';
    }
    m<<"END\n";return m.str();
}
static float SegDistance(Vec3 a,Vec3 b,Vec3 p){Vec3 d=b-a;const float l=d.x*d.x+d.y*d.y+d.z*d.z;float t=l>0?((p.x-a.x)*d.x+(p.y-a.y)*d.y+(p.z-a.z)*d.z)/l:0;t=std::max(0.f,std::min(1.f,t));return Distance(a+d*t,p);}
struct FixtureRun { uint64_t digest=0,frames=0; int shots=0,through=0,hidden=0,suppressedThrough=0,coverAtHedge=0,coverElsewhere=0; };
static FixtureRun RunFixture(const std::shared_ptr<const ImportedBattlefield>& map,bool concealment,uint32_t seed){
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=90;c.concealment=concealment;
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);
    LeanRecorder recorder;for(const auto& f:r.frames)recorder.Record_(r,f);
    FixtureRun out;out.digest=recorder.Digest(r);out.frames=recorder.frameHash;out.shots=int(r.shots.size());
    const Obstacle hedge=map->map.obstacles[9];
    for(const auto& f:r.frames){const auto& g=f.soldiers[39];const Vec3 eye=g.position+Vec3{0,0,Posture(g.stance).eye};
        for(int n=0;n<SquadSize;++n){const auto& s=f.soldiers[size_t(n)];if(!s.Active())continue;
            const Vec3 body=s.position+Vec3{0,0,BodyHeight(s.stance)*.7f};
            // Known to the gun, not seen, and the hedge on the line between them while the solid line is clear.
            if(g.contacts[size_t(n)].known&&!g.contacts[size_t(n)].visible&&SegmentObstacle(eye,body,hedge)>=0&&ClearLine3DSolid(r.map,eye,body))++out.hidden;
            if(s.action==Action::Cover){const float away=std::max(std::abs(s.goal.x-hedge.center.x)-hedge.half.x,std::abs(s.goal.y-hedge.center.y)-hedge.half.y);
                if(away<1.5f)++out.coverAtHedge;else ++out.coverElsewhere;}}}
    for(const auto& shot:r.shots){
        // A round that crosses the hedge, not one that stops in its face.
        bool passed=false;for(size_t k=1;k<shot.flight.size();++k){const float t=SegmentObstacle(shot.flight[k-1].position,shot.flight[k].position,hedge);if(t>=0&&!(k+1==shot.flight.size()&&t>.99f))passed=true;}
        if(!passed)continue;
        ++out.through;
        if(shot.owner!=39)continue;
        // and within 2.2 m of a man behind the hedge whose suppression rose while it flew.
        const Frame* before=nullptr;const Frame* after=nullptr;
        for(const auto& f:r.frames){if(f.time<=shot.time)before=&f;if(f.time>=shot.impactTime){after=&f;break;}}
        if(!before||!after)continue;
        for(int n=0;n<SquadSize;++n){const auto& a=before->soldiers[size_t(n)];const auto& b=after->soldiers[size_t(n)];if(!a.Active())continue;
            float d=1e9f;for(size_t k=1;k<shot.flight.size();++k)d=std::min(d,SegDistance(shot.flight[k-1].position,shot.flight[k].position,a.position+Vec3{0,0,BodyHeight(a.stance)*.7f}));
            if(d<2.2f&&b.suppression>a.suppression+.1f&&SegmentObstacle(shot.start,a.position+Vec3{0,0,1},hedge)>=0)++out.suppressedThrough;}
    }
    return out;
}
static void BattleTests(){
    std::string error;
    auto hedged=ImportBattlefield(FixtureMap(1),error);assert(hedged&&error.empty()&&hedged->map.hasConcealment&&hedged->map.obstacles[9].concealment);
    // The same map with the hedge written as a wall, under the hedged map's identity (the digest folds the
    // imported text's digest; everything else is the geometry).
    auto walled=ImportBattlefield(FixtureMap(0),error);assert(walled&&error.empty()&&!walled->map.hasConcealment);
    auto walledCopy=std::make_shared<ImportedBattlefield>(*walled);walledCopy->digest=hedged->digest;
    std::shared_ptr<const ImportedBattlefield> wall=walledCopy;
    int through=0,hidden=0,suppressed=0,coverAtHedge=0,cover=0;
    for(uint32_t seed:{1u,2u,3u}){
        const auto on=RunFixture(hedged,true,seed),off=RunFixture(hedged,false,seed),asWall=RunFixture(wall,false,seed);
        std::cout<<"CONCEALMENT fixture seed "<<seed<<": on shots "<<on.shots<<", through the hedge "<<on.through<<", hidden-by-hedge gun contacts "<<on.hidden
                 <<", suppressed through it "<<on.suppressedThrough<<", cover orders at the hedge "<<on.coverAtHedge<<" elsewhere "<<on.coverElsewhere
                 <<"; off shots "<<off.shots<<", through "<<off.through<<", cover at the hedge "<<off.coverAtHedge<<"\n";
        // Off: the hedge is a wall, digest for digest.
        assert(off.digest==asWall.digest&&off.frames==asWall.frames&&off.through==0);
        assert(on.digest!=off.digest&&on.digest==RunFixture(hedged,true,seed).digest);
        // On: nobody takes the hedge for cover.
        assert(on.coverAtHedge==0);
        through+=on.through;hidden+=on.hidden;suppressed+=on.suppressedThrough;coverAtHedge+=off.coverAtHedge;cover+=on.coverElsewhere;
    }
    // Contacts go unseen behind it, rounds cross it and suppress the men behind it, and those men look for
    // solid cover elsewhere; with the switch off the same hedge is a wall men shelter behind.
    assert(hidden>50&&through>=10&&suppressed>=3&&cover>100&&coverAtHedge>100);
    // A map without concealment: on and off play the same battle frame for frame (the digest folds the switch).
    {const auto on=RunFixture(walled,true,1),off=RunFixture(walled,false,1);assert(on.frames==off.frames&&on.shots==off.shots&&on.digest!=off.digest);}
    Config a,b;b.concealment=true;assert(!SameConfig(a,b)&&SameConfig(b,b));
    std::cout<<"CONCEALMENT fixture: "<<hidden<<" hidden-by-hedge contact samples, "<<through<<" rounds through it, "<<suppressed<<" suppressing men behind it; off equals the wall map PASS\n";
}
}
static void ConcealmentTests(){
    std::cout.setf(std::ios::unitbuf);
    concealment_tests::RayTests();concealment_tests::SameRayTests();concealment_tests::SoldierTests();concealment_tests::BattleTests();
    std::cout<<"CONCEALMENT all PASS\n";
}
