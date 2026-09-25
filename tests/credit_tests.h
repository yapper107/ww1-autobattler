// Plan 029 F-E: the covering-fire delivery credit ray from the muzzle (Config::muzzleCredit).
// E-1 found Legacy's credit ray starts at the shooter's feet: a village's earth complement (top at
// z 0) blocks every one, and on a town a wall the man fires over does too. Two parts: the ray itself
// (DeliveryLineClear, one shot against each kind of ground) and fixture battles (a machine gun on a
// village-style earth box, over a 1.15 m wall, and past the end of a 3 m wall) counting credited deliveries.
#pragma once
#include "ImportedMap.h"
#include "Diagnostics.h"
#include <sstream>
namespace credit_tests {
using namespace army;
// A shot fired from `feet` in `stance`: shot.start is his feet, the flight record's first sample
// his muzzle, as the firing stage writes them.
static Shot ShotFrom(Vec3 feet,Stance stance,bool flight=true){
    Shot s;s.start=s.end=feet;s.aimedEnemy=1;
    if(flight)s.flight.push_back({0,feet+Vec3{0,0,Posture(stance).muzzle}});
    return s;
}
static Soldier Shooter(Vec3 feet,Stance stance){Soldier s;s.position=feet;s.stance=stance;return s;}
static void RayTests(){
    Config off,on;off.muzzleCredit=false;on.muzzleCredit=true;
    Config drills;drills.drills=drills.foundations=true;drills.muzzleCredit=false;Config drillsOn=drills;drillsOn.muzzleCredit=true;
    const Vec3 end{-20,0,1.2f};   // where a round has got to, near the man it was aimed at
    // 1. Village ground: a whole-map earth box from -1.4 to 0 (as every generated village carries).
    {Map m;m.halfWidth=60;m.halfHeight=40;m.groundBase=-1.4f;
        m.obstacles.push_back({{0,0,-1.4f},{60,40,0},false,true,1.4f});PrepareGeometry(m);
        const Vec3 feet{20,0,0};const Shot shot=ShotFrom(feet,Stance::Standing);const Soldier man=Shooter(feet,Stance::Standing);
        assert(!DeliveryLineClear(m,off,shot,man,end));        // the defect: his feet are on the box's top face
        assert(DeliveryLineClear(m,on,shot,man,end));
        assert(DeliveryLineClear(m,drills,shot,man,end)&&DeliveryLineClear(m,drillsOn,shot,man,end)); // typed: muzzle already
        // A round that went into the ground short of the man is still not credited through the earth.
        assert(!DeliveryLineClear(m,on,shot,man,{-20,0,-.5f}));
        // No flight record: his present stance's muzzle height.
        assert(DeliveryLineClear(m,on,ShotFrom(feet,Stance::Standing,false),man,end));}
    // 2. Town ground: a 1.15 m wall 1.4 m in front of him. Standing, he fires over it; crouched, his muzzle
    //    (0.72 m) is below its top and the line is blocked either way.
    {Map m;m.halfWidth=60;m.halfHeight=40;m.obstacles.push_back({{18.6f,0,0},{.3f,1.5f,0},false,true,1.15f});PrepareGeometry(m);
        const Vec3 feet{20,0,0};
        const Shot stand=ShotFrom(feet,Stance::Standing),crouch=ShotFrom(feet,Stance::Crouched);
        assert(!DeliveryLineClear(m,off,stand,Shooter(feet,Stance::Standing),end));
        assert(DeliveryLineClear(m,on,stand,Shooter(feet,Stance::Standing),end));
        assert(!DeliveryLineClear(m,on,crouch,Shooter(feet,Stance::Crouched),end)&&!DeliveryLineClear(m,off,crouch,Shooter(feet,Stance::Crouched),end));
        assert(DeliveryLineClear(m,on,ShotFrom(feet,Stance::Standing,false),Shooter(feet,Stance::Standing),end));
        assert(!DeliveryLineClear(m,on,ShotFrom(feet,Stance::Crouched,false),Shooter(feet,Stance::Crouched),end));
        // Open ground beside the wall: clear from the feet and from the muzzle.
        const Vec3 open{20,10,0};const Shot free=ShotFrom(open,Stance::Standing);
        assert(DeliveryLineClear(m,off,free,Shooter(open,Stance::Standing),{-20,10,1.2f})&&DeliveryLineClear(m,on,free,Shooter(open,Stance::Standing),{-20,10,1.2f}));}
    // 3. A hedge (concealment) on the line: off, the sight ray denies the credit; on, the solid ray (ruling A)
    //    credits the round that went through it. A solid wall of the same size denies it either way.
    {Map m;m.halfWidth=60;m.halfHeight=40;Obstacle hedge{{0,0,0},{.3f,6,0},false,false,1.8f};hedge.concealment=true;hedge.flags=1;
        m.obstacles.push_back(hedge);PrepareGeometry(m);assert(m.hasConcealment);
        const Vec3 feet{20,0,0};const Shot shot=ShotFrom(feet,Stance::Standing);const Soldier man=Shooter(feet,Stance::Standing);
        assert(!DeliveryLineClear(m,off,shot,man,end)&&DeliveryLineClear(m,on,shot,man,end));
        Map wall;wall.halfWidth=60;wall.halfHeight=40;wall.obstacles.push_back({{0,0,0},{.3f,6,0},false,false,1.8f});PrepareGeometry(wall);
        assert(!DeliveryLineClear(wall,off,shot,man,end)&&!DeliveryLineClear(wall,on,shot,man,end));}
    std::cout<<"CREDIT ray: village earth blocks the feet ray and not the muzzle ray; a 1.15 m wall blocks it standing only off; a hedge only off; a wall always PASS\n";
}
// The fixture battle: squad 0 (ids 0-7) in the open 50 m west of the Ember gun (id 39) at (20,0), which
// holds there behind a wall 1.4 m west of him; everyone else in a closed pen at either end. `village`: an
// earth box -1.4..0 over the whole map (a generated village's complement). `wall`: 1.15 m (he fires over
// it standing) or 3 m (he peeks past its end, so his feet ray is as clear as his muzzle ray).
static std::string FixtureMap(bool village,float wall){
    std::ostringstream m;m<<"ARMYMAP 2 "<<(village?"village":"city")<<" 29\nBOUNDS 150 60 "<<(village?"-1.4":"0")<<"\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low,int move){m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<' '<<move<<"\n";};
    if(village)O(0,0,-1.4f,150,60,1.4f,1,0);
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx,-8.3f,0,8.f,.3f,3.2f,0,1);O(cx,8.3f,0,8.f,.3f,3.2f,0,1);}
    O(18.6f,0,0,.3f,1.5f,wall,wall<1.2f?1:0,1);
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
struct FixtureRun { uint64_t digest=0,frames=0; int shots=0,gunShots=0,credits=0,gunCredits=0,gunStanding=0; };
static FixtureRun RunFixture(const std::shared_ptr<const ImportedBattlefield>& map,bool muzzle,uint32_t seed){
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=60;c.muzzleCredit=muzzle;
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);
    LeanRecorder recorder;for(const auto& f:r.frames)recorder.Record_(r,f);
    FixtureRun out;out.digest=recorder.Digest(r);out.frames=recorder.frameHash;out.shots=int(r.shots.size());
    for(const auto& shot:r.shots)out.gunShots+=shot.owner==39;
    // A credit is a delivery the shooter recorded for himself at this frame's time.
    for(const auto& f:r.frames)for(const auto& s:f.soldiers){
        for(const auto& d:s.deliveries)if(d.shooter==s.id&&d.observedAt==f.time){++out.credits;if(s.id==39)++out.gunCredits;}
        if(s.id==39&&s.Active()&&s.stance==Stance::Standing&&f.time-s.lastShotAt<.1f)++out.gunStanding;}
    return out;
}
static void BattleTests(){
    std::string error;
    const auto village=ImportBattlefield(FixtureMap(true,3),error);assert(village&&error.empty()&&village->map.groundBase<-1);
    const auto low=ImportBattlefield(FixtureMap(false,1.15f),error);assert(low&&error.empty());
    const auto tall=ImportBattlefield(FixtureMap(false,3),error);assert(tall&&error.empty());
    int villageOn=0,lowOn=0,tallBoth=0;
    for(uint32_t seed:{1u,2u,3u}){
        const auto vOff=RunFixture(village,false,seed),vOn=RunFixture(village,true,seed);
        const auto lOff=RunFixture(low,false,seed),lOn=RunFixture(low,true,seed);
        const auto tOff=RunFixture(tall,false,seed),tOn=RunFixture(tall,true,seed);
        std::cout<<"CREDIT fixture seed "<<seed<<": village gun shots "<<vOff.gunShots<<"/"<<vOn.gunShots<<", credits off "<<vOff.credits<<" on "<<vOn.credits<<" (gun "<<vOn.gunCredits<<")"
                 <<"; behind the 1.15 m wall gun shots "<<lOff.gunShots<<"/"<<lOn.gunShots<<" (fired standing "<<lOn.gunStanding<<"), gun credits off "<<lOff.gunCredits<<" on "<<lOn.gunCredits
                 <<"; past the 3 m wall's end gun credits off "<<tOff.gunCredits<<" on "<<tOn.gunCredits<<"\n";
        // Village: nobody is ever credited from his feet; from the muzzle the gun is.
        assert(vOff.gunShots>0&&vOff.credits==0&&vOn.gunCredits>0);
        // The low wall: the gun fires standing over it; credited only from the muzzle.
        assert(lOff.gunShots>0&&lOn.gunStanding>0&&lOff.gunCredits==0&&lOn.gunCredits>0);
        // Past the tall wall's end both rays are clear: the same battle frame for frame (only the digest's switch fold differs).
        assert(tOff.gunCredits>0&&tOff.gunCredits==tOn.gunCredits&&tOff.frames==tOn.frames&&tOff.shots==tOn.shots&&tOff.digest!=tOn.digest);
        // Deterministic, and the switch is folded into the digest.
        assert(vOn.digest==RunFixture(village,true,seed).digest&&vOn.digest!=vOff.digest);
        villageOn+=vOn.gunCredits;lowOn+=lOn.gunCredits;tallBoth+=tOff.gunCredits;
    }
    Config a,b;b.muzzleCredit=false;assert(!SameConfig(a,b)&&SameConfig(b,b));
    std::cout<<"CREDIT fixture: gun credits on the village "<<villageOn<<" (0 off), over the 1.15 m wall "<<lowOn<<" (0 off), past the 3 m wall "<<tallBoth<<" both ways PASS\n";
}
}
static void CreditTests(){
    std::cout.setf(std::ios::unitbuf);
    credit_tests::RayTests();credit_tests::BattleTests();
    std::cout<<"CREDIT all PASS\n";
}
