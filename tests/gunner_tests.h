// Plan 030 M-S4: gunner compensation against the recoil walk-up (Config::gunnerCompensation).
// Two parts. (1) The burst fixture: the per-shot aim equations of the firing stage (SwayOffset, the
// recoil or HeldRecoil, the random yaw and pitch cone from the battle generator, ApplyRecoil, the hold,
// two DecayRecoil ticks between rounds at the 0.10 s cyclic rate) for sustained bursts of 18 at 50,
// 100 and 150 m: the mean vertical offset of rounds 1..18 from the aim point, and the rounds passing
// within 2.2 m of a standing man's body point (the near-miss radius) or striking his body, off vs on.
// (2) Fixture battles: a gun behind a 1.15 m wall firing at a squad in the open, off vs on.
// Build with -DGUNNER_TESTS_UNCHANGED against an unchanged source to print the off half alone.
#pragma once
#include "ImportedMap.h"
#include "Diagnostics.h"
#include <sstream>
namespace gunner_tests {
using namespace army;
// The battle generator (BattleSim.cpp `Random`), so the cone draws have the firing stage's distribution.
struct Draw { uint32_t state; explicit Draw(uint32_t seed):state(seed?seed:1){}
    float Next(){state^=state<<13;state^=state>>17;state^=state<<5;return float(state>>8)/16777216.f;} };
struct BurstResult { std::array<double,18> vertical{}; double meanVertical=0; int rounds=0,near=0,struck=0; };
// One gunner, `bursts` sustained bursts of 18 from rest at `range` m; `on` holds against the recoil as the
// firing stage does. vertical[i] is the recoil part of round i+1's vertical offset at the target, in m
// (deterministic: no sway, no cone). near/struck count every round with sway and cone included.
static BurstResult Burst(Stance stance,float range,bool on,int bursts,float dexterity=100,float suppression=0){
    BurstResult out;Draw rng(20260923u);
    const float aimZ=.9f*BodyHeight(Stance::Standing),bodyZ=.7f*BodyHeight(Stance::Standing);
    for(int b=0;b<=bursts;++b){
        Soldier g;EquipWeapon(g,{WeaponId::MachineGun,{}});g.stance=stance;g.suppression=suppression;
        g.stats.value[size_t(Stat::Dexterity)]=dexterity;
        g.swayPhase=6.2831853f*rng.Next();g.swayPhase2=6.2831853f*rng.Next();g.recoilSign=rng.Next()<.5f?-1.f:1.f;
        float time=20*rng.Next();
        for(int round=0;round<18;++round){
#ifdef GUNNER_TESTS_UNCHANGED
            const Vec3 recoil=g.recoil;
#else
            const Vec3 recoil=on?HeldRecoil(g):g.recoil;
#endif
            if(b==bursts)out.vertical[size_t(round)]=range*std::tan(recoil.y);   // the deterministic pass
            else{
                const Vec3 off=SwayOffset(g,time)+recoil;
                const float yaw=off.x+(rng.Next()-.5f)*2*ShotSpread(g);
                const float pitch=std::tan(off.y)+(rng.Next()-.5f)*VerticalSpread(g);
                const float lateral=range*std::sin(yaw),z=aimZ+range*pitch;
                ++out.rounds;out.near+=std::hypot(lateral,z-bodyZ)<2.2f;out.struck+=std::abs(lateral)<.4f&&z>=0&&z<=BodyHeight(Stance::Standing);
            }
            ApplyRecoil(g);
#ifndef GUNNER_TESTS_UNCHANGED
            if(on)g.recoilHold=RecoilHold(g);
#endif
            for(int tick=0;tick<2;++tick){DecayRecoil(g,TickSeconds);time+=TickSeconds;}
        }
    }
    for(double v:out.vertical)out.meanVertical+=v/18;
    return out;
}
static void BurstFixture(){
    for(Stance stance:{Stance::Standing,Stance::Crouched})for(float range:{50.f,100.f,150.f}){
        const auto off=Burst(stance,range,false,400);
#ifdef GUNNER_TESTS_UNCHANGED
        std::cout<<"GUNNER burst (unchanged build) "<<(stance==Stance::Standing?"standing":"crouched")<<' '<<range<<" m: rounds 1/2/5/10/18 "
                 <<off.vertical[0]<<'/'<<off.vertical[1]<<'/'<<off.vertical[4]<<'/'<<off.vertical[9]<<'/'<<off.vertical[17]<<" m, mean "<<off.meanVertical
                 <<" m; within 2.2 m "<<off.near<<'/'<<off.rounds<<", struck "<<off.struck<<"\n";
#else
        const auto on=Burst(stance,range,true,400);
        std::cout<<"GUNNER burst "<<(stance==Stance::Standing?"standing":"crouched")<<' '<<range<<" m: rounds 1/2/5/10/18 off "
                 <<off.vertical[0]<<'/'<<off.vertical[1]<<'/'<<off.vertical[4]<<'/'<<off.vertical[9]<<'/'<<off.vertical[17]<<" on "
                 <<on.vertical[0]<<'/'<<on.vertical[1]<<'/'<<on.vertical[4]<<'/'<<on.vertical[9]<<'/'<<on.vertical[17]<<" m; mean walk-up off "<<off.meanVertical<<" on "<<on.meanVertical
                 <<" m; within 2.2 m off "<<off.near<<" on "<<on.near<<" of "<<off.rounds<<"; struck off "<<off.struck<<" on "<<on.struck<<"\n";
        // The first round is untouched (nothing to hold against yet); the walk-up is at least halved.
        assert(off.vertical[0]==0&&on.vertical[0]==0);
        assert(on.meanVertical<=.5*off.meanVertical&&on.meanVertical>0);
        for(size_t k=1;k<18;++k)assert(on.vertical[k]<off.vertical[k]);
        // Beyond 50 m, where the walk-up carries rounds out of the 2.2 m radius, more rounds stay in it.
        if(range>=100)assert(on.near>off.near);
        // The same burst twice is the same burst.
        const auto again=Burst(stance,range,true,400);assert(again.near==on.near&&again.meanVertical==on.meanVertical);
#endif
    }
#ifndef GUNNER_TESTS_UNCHANGED
    // The hold: 0.7 at the reference, scaled by dexterity, halved fully suppressed, never above 1.
    Soldier g;EquipWeapon(g,{WeaponId::MachineGun,{}});
    assert(std::abs(RecoilHold(g)-.7f)<1e-6f);
    g.suppression=1;assert(std::abs(RecoilHold(g)-.35f)<1e-6f);g.suppression=.5f;assert(std::abs(RecoilHold(g)-.525f)<1e-6f);g.suppression=0;
    g.stats.value[size_t(Stat::Dexterity)]=120;assert(std::abs(RecoilHold(g)-.84f)<1e-5f);
    g.stats.value[size_t(Stat::Dexterity)]=160;assert(RecoilHold(g)==1.f);
    g.stats.value[size_t(Stat::Dexterity)]=80;assert(std::abs(RecoilHold(g)-.56f)<1e-5f);
    g.recoil={.01f,.02f,0};g.recoilHold=.7f;assert(std::abs(HeldRecoil(g).y-.006f)<1e-7f&&std::abs(HeldRecoil(g).x-.003f)<1e-7f);
    // Fully suppressed and clumsy, a gunner still halves less of it: the walk-up at 100 m is larger.
    const auto good=Burst(Stance::Standing,100,true,0),pinned=Burst(Stance::Standing,100,true,0,80,.6f);
    assert(pinned.meanVertical>good.meanVertical);
    std::cout<<"GUNNER hold: 0.7 at dexterity 100, 0.84 at 120, 0.56 at 80, 0.35 fully suppressed, capped at 1 PASS\n";
#endif
}
// Gun (Ember 39) at (20,0) behind a 1.15 m wall 1.4 m west of him (he fires over it standing); squad 0
// starts `range` m west of him in the open and walks 4 m nearer; everyone else in a closed pen.
static std::string RangeMap(float range){
    std::ostringstream m;m<<"ARMYMAP 2 city 30\nBOUNDS 150 60 0\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low,int move){m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<' '<<move<<"\n";};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx,-8.3f,0,8.f,.3f,3.2f,0,1);O(cx,8.3f,0,8.f,.3f,3.2f,0,1);}
    O(18.6f,0,0,.3f,1.5f,1.15f,1,1);
    for(int i=0;i<UnitCount;++i){
        Vec3 p,g;
        if(i<8){p={20-range,-14.f+4.f*float(i),0};g={24-range,-3.f+2.f*float(i%4),0};}
        else if(i<32){const int k=i-8;p={-136.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};g=p;}
        else if(i==39){p={20,0,0};g=p;}
        else{const int k=i-32-(i>39?1:0);p={124.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};g=p;}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<g.x<<' '<<g.y<<' '<<g.z<<'\n';
    }
    m<<"END\n";return m.str();
}
struct FixtureRun { uint64_t digest=0,frames=0; int shots=0,gunShots=0,gunHits=0; float firstTime=-1; Vec3 firstVelocity{};
    std::array<double,3> climb{};std::array<int,3> climbCount{}; };
static FixtureRun RunFixture(const std::shared_ptr<const ImportedBattlefield>& map,bool on,uint32_t seed,float seconds){
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=seconds;
#ifndef GUNNER_TESTS_UNCHANGED
    c.gunnerCompensation=on;
#else
    (void)on;
#endif
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);
    LeanRecorder recorder;for(const auto& f:r.frames)recorder.Record_(r,f);
    FixtureRun out;out.digest=recorder.Digest(r);out.frames=recorder.frameHash;out.shots=int(r.shots.size());
    // The vertical error of each gun round at its aimed range, from its first flight step (as the suite's
    // aim check reads it), by its place in the burst (1, 2, 3: the gun's aimed bursts are three rounds).
    const float speed=r.frames.front().soldiers[39].gun.muzzleVelocity;const Shot* prior=nullptr;int place=0;
    for(const auto& shot:r.shots){if(shot.owner!=39||shot.flight.size()<2)continue;
        if(out.firstTime<0){out.firstTime=shot.time;out.firstVelocity=shot.flight[1].position-shot.flight[0].position;}
        ++out.gunShots;out.gunHits+=shot.hit;
        place=prior&&shot.time-prior->time<.16f?place+1:0;prior=&shot;
        const auto& a=shot.flight[0];const auto& b=shot.flight[1];const float dt=b.time-a.time;
        const float travel=Distance(shot.start,{shot.aimedAt.x,shot.aimedAt.y})/speed;
        const float error=(b.position.z-a.position.z)/dt+4.905f*dt-((shot.aimedAt.z-a.position.z)/travel+4.905f*travel);
        if(place<3){out.climb[size_t(place)]+=error*travel;++out.climbCount[size_t(place)];}
    }
    for(size_t k=0;k<3;++k)if(out.climbCount[k])out.climb[k]/=out.climbCount[k];
    return out;
}
static void BattleFixture(){
    std::string error;
    for(float range:{50.f,90.f}){
        const auto map=ImportBattlefield(RangeMap(range),error);assert(map&&error.empty());
        for(uint32_t seed:{1u,2u,3u}){
            const auto off=RunFixture(map,false,seed,60);
#ifdef GUNNER_TESTS_UNCHANGED
            std::cout<<"GUNNER fixture (unchanged build) "<<range<<" m seed "<<seed<<": gun rounds "<<off.gunShots<<" hits "<<off.gunHits
                     <<", vertical error by place in burst "<<off.climb[0]<<'/'<<off.climb[1]<<'/'<<off.climb[2]<<" m, digest "<<off.digest<<"\n";
#else
            const auto on=RunFixture(map,true,seed,60);
            std::cout<<"GUNNER fixture "<<range<<" m seed "<<seed<<": gun rounds off "<<off.gunShots<<" on "<<on.gunShots<<", hits off "<<off.gunHits<<" on "<<on.gunHits
                     <<"; vertical error by place in burst off "<<off.climb[0]<<'/'<<off.climb[1]<<'/'<<off.climb[2]<<" on "<<on.climb[0]<<'/'<<on.climb[1]<<'/'<<on.climb[2]<<" m, digest off "<<off.digest<<"\n";
            assert(off.gunShots>0&&on.gunShots>0);
            // The first round of the battle is the same round: nothing to hold against yet, same draws.
            assert(off.firstTime==on.firstTime&&off.firstVelocity.x==on.firstVelocity.x&&off.firstVelocity.y==on.firstVelocity.y&&off.firstVelocity.z==on.firstVelocity.z);
            // The second and third rounds of a burst climb less.
            assert(on.climb[2]<off.climb[2]);
            // Deterministic, and the switch is folded into the digest.
            assert(on.digest==RunFixture(map,true,seed,60).digest&&on.digest!=off.digest);
#endif
        }
    }
#ifndef GUNNER_TESTS_UNCHANGED
    // A 90 s fixture battle reproduces with the switch on.
    {const auto map=ImportBattlefield(RangeMap(50),error);const auto a=RunFixture(map,true,7,90),b=RunFixture(map,true,7,90);
     assert(a.digest==b.digest&&a.frames==b.frames&&a.shots==b.shots);
     std::cout<<"GUNNER 90 s fixture battle reproduces: digest "<<a.digest<<", "<<a.shots<<" rounds PASS\n";}
    Config a,b;b.gunnerCompensation=true;assert(!SameConfig(a,b)&&SameConfig(b,b));
#endif
}
}
static void GunnerTests(){
    std::cout.setf(std::ios::unitbuf);
    gunner_tests::BurstFixture();gunner_tests::BattleFixture();
    std::cout<<"GUNNER all PASS\n";
}
