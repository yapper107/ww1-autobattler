// Plan 030 M-S: suppression mechanics. Fixtures that measure hypotheses H1-H3 on the build as it is, then the
// three switches: S1 impacts on cover suppress (Config::impactSuppression), S2 nerve / pinned hysteresis
// (Config::nerve), S3 stacked suppression (Config::stackedSuppression).
//   H1  a gun 50 m from men behind a 0.6 m rim (village ground, prone), a 1.15 m wall and a window sill: rounds
//       that end in the solid sheltering a man within 1.5 m of him, against the near misses the rule registers.
//   H2  four riflemen 50 m from one man behind a 1.15 m wall: his suppression over 20 s (max, time above 0.52);
//       one burst then silence: seconds until he pops up again (decision level).
//   H3  (report only) sustained bursts of 18 at 50 m and 100 m: rounds within 2.2 m of the target per burst.
// Built with -DMS_ORIG against the parent sources, only the measurements compile (the switches do not exist there).
#pragma once
#include "ImportedMap.h"
#include "Diagnostics.h"
#include <random>
#include <sstream>
#include <iomanip>
namespace suppression_tests {
using namespace army;
static float PointSegment(Vec3 a,Vec3 b,Vec3 p){const Vec3 d=b-a;const float len=d.x*d.x+d.y*d.y+d.z*d.z;
    const float t=len>1e-10f?std::clamp(((p.x-a.x)*d.x+(p.y-a.y)*d.y+(p.z-a.z)*d.z)/len,0.f,1.f):0.f;return Distance(p,a+d*t);}
static void Step(Soldier& s,const Config& c,float time,float dt){
#ifdef MS_ORIG
    (void)c;(void)time;s.suppression=std::max(0.f,s.suppression-dt*0.15f*StatScale(s.stats.Get(Stat::Composure)));
#else
    StepSuppression(s,c,time,dt);
#endif
}
enum class Kind { Rim, Wall, Window };
static const char* KindName(Kind k){return k==Kind::Rim?"0.6 m rim (village, prone)":k==Kind::Wall?"1.15 m wall":"window sill";}
// One Ember rifleman (id 34) sheltering at x 25 behind a cover facing west; the Azure shooters (ids `shooters`:
// {0,7} the sergeant and the gun, {0,1,2,3} four riflemen) 50 m west behind a 1.15 m wall with crouched records;
// everyone else in a closed pen at either end (the Ember gun too). Rim: a village (earth complement -1.4..0), a
// 0.6 m crater rim and a prone record half a metre behind it (Config::prone on). Wall: a 1.15 m wall and a crouched
// record. Window: a 3.2 m wall with a 1.4 m opening (sill 1.05 m, lintel from 2.35 m), a crouched window record
// 0.85 m inside.
static std::string TargetFixtureMap(Kind kind,const std::vector<int>& shooters){
    const bool village=kind==Kind::Rim;
    std::ostringstream m;m<<"ARMYMAP 2 "<<(village?"village":"city")<<" 30\nBOUNDS 150 60 "<<(village?"-1.4":"0")<<"\n";
    int id=1;auto O=[&](float x,float y,float z,float hx,float hy,float h,int low,int move,int flags=-1){
        m<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<' '<<move;if(flags>=0)m<<' '<<flags;m<<'\n';return id-1;};
    if(village)O(0,0,-1.4f,150,60,1.4f,1,0);
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx+8.3f,0,0,.3f,8.6f,3.2f,0,1);O(cx,-8.3f,0,8.f,.3f,3.2f,0,1);O(cx,8.3f,0,8.f,.3f,3.2f,0,1);}
    const int west=O(-24.2f,0,0,.3f,5,1.15f,1,1);
    int source=0;float shelter=25;
    if(kind==Kind::Rim)source=O(24.2f,0,0,.3f,2,.6f,1,0,2);
    else if(kind==Kind::Wall)source=O(24.2f,0,0,.3f,2,1.15f,1,1);
    else{shelter=25.05f;O(24.2f,-1.85f,0,.22f,1.15f,3.2f,0,1);O(24.2f,1.85f,0,.22f,1.15f,3.2f,0,1);source=O(24.2f,0,0,.22f,.7f,1.05f,1,1);O(24.2f,0,2.35f,.22f,.7f,.85f,0,1);}
    int cid=1000000;
    for(size_t k=0;k<shooters.size();++k){const float y=-3.f+2.f*float(k);m<<"C "<<cid++<<' '<<west<<" -25 "<<y<<" 0 -25 "<<y<<" 0 1 0 1 0\n";}
    m<<"C "<<cid++<<' '<<source<<' '<<shelter<<" 0 0 "<<shelter<<" 0 0 -1 0 "<<(kind==Kind::Rim?2:1)<<' '<<(kind==Kind::Window?1:0)<<"\n";
    int westK=0,eastK=0;
    for(int i=0;i<UnitCount;++i){
        Vec3 p;auto slot=std::find(shooters.begin(),shooters.end(),i);
        if(slot!=shooters.end())p={-25,-3.f+2.f*float(slot-shooters.begin()),0};
        else if(i<32){const int k=westK++;p={-136.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        else if(i==34)p={shelter,0,0};
        else{const int k=eastK++;p={124.f+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<' '<<p.z<<' '<<p.x<<' '<<p.y<<' '<<p.z<<'\n';
    }
    m<<"END\n";return m.str();
}
// The frame in force at time t (the last recorded at or before it).
static const Frame& FrameAt(const Record& r,float t){
    auto it=std::upper_bound(r.frames.begin(),r.frames.end(),t,[](float time,const Frame& f){return time<f.time;});
    return it==r.frames.begin()?r.frames.front():*(it-1);
}
struct Fire { int rounds=0,nearMiss=0,hits=0,solid=0,coverImpact=0,impactOnly=0,blockedPass=0,surfaceOnly=0; };
struct Target {
    Fire gun,rifle;float first=-1,max=0,mean=0,above=0,down=0;bool alive=true,held=true;int impactSuppressions=0;uint64_t digest=0;
    void Add(const Target& o){for(auto [a,b]:{std::pair<Fire*,const Fire*>{&gun,&o.gun},{&rifle,&o.rifle}}){a->rounds+=b->rounds;a->nearMiss+=b->nearMiss;a->hits+=b->hits;a->solid+=b->solid;a->coverImpact+=b->coverImpact;a->impactOnly+=b->impactOnly;a->blockedPass+=b->blockedPass;a->surfaceOnly+=b->surfaceOnly;}
        max=std::max(max,o.max);mean+=o.mean;above+=o.above;down+=o.down;alive&=o.alive;held&=o.held;impactSuppressions+=o.impactSuppressions;}
};
// Every Azure round of the first 20 s after the first one, judged offline from its flight record and the recorded
// frames. A near miss is the simulator's rule on Ember 34 (a leg of the flight within 2.2 m of his body point at 0.7
// of his height, with a solid-clear line from the leg's end to it). A cover impact is a round stopped by a solid
// within 1.5 m of him (his body from his feet up) with that solid between him and a point 5 cm short of the stop:
// what S1 counts. His suppression over the same 20 s: max, mean, seconds above 0.52 (his duck threshold), seconds
// down (not firing, not standing).
static Target RunTarget(const std::shared_ptr<const ImportedBattlefield>& map,Kind kind,uint32_t seed,const Config& base,float radius=1.5f){
    Config c=base;c.battlefield=map;c.seed=seed;c.maxSeconds=40;c.supportWeapon=true;c.prone=kind==Kind::Rim;
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);Target t;
    {LeanRecorder recorder;for(const auto& f:r.frames)recorder.Record_(r,f);t.digest=recorder.Digest(r);}
#ifndef MS_ORIG
    t.impactSuppressions=r.impactSuppressions;
#endif
    for(const auto& shot:r.shots)if(shot.owner<32&&(t.first<0||shot.time<t.first))t.first=shot.time;
    if(t.first<0)return t;
    const float until=t.first+20;int n=0;
    for(size_t k=1;k<r.frames.size();++k){const auto& f=r.frames[k];if(f.time<t.first||f.time>until)continue;const auto& s=f.soldiers[34];
        const float dt=f.time-r.frames[k-1].time;
        t.max=std::max(t.max,s.suppression);if(s.suppression>.52f)t.above+=dt;t.mean+=s.suppression;++n;
        if(s.Active()&&s.action!=Action::Fire&&s.stance!=Stance::Standing)t.down+=dt;
        if(Distance(s.position,map->positions[34])>1.5f)t.held=false;}
    t.mean/=float(std::max(1,n));t.alive=FrameAt(r,until).soldiers[34].Active();
    for(const auto& shot:r.shots){if(shot.owner>=32||shot.time<t.first||shot.time>until)continue;
        Fire& x=FrameAt(r,shot.time).soldiers[size_t(shot.owner)].machineGun?t.gun:t.rifle;++x.rounds;
        for(const auto& v:shot.victims)x.hits+=v.soldier==34;
        const auto& s=FrameAt(r,shot.impactTime).soldiers[34];if(!s.Active())continue;
        const float body=BodyHeight(s.stance);const Vec3 point=s.position+Vec3{0,0,body*.7f};bool near=false;
        bool passed=false,surface=false;
        for(size_t k=1;k<shot.flight.size()&&!near;++k)if(PointSegment(shot.flight[k-1].position,shot.flight[k].position,point)<2.2f){
            const Vec3 a=shot.flight[k-1].position,b=shot.flight[k].position;
            if(ClearLine3DSolid(r.map,b,point))near=true;
            else{passed=true;const float l=Distance(a,b);if(l>.05f&&ClearLine3DSolid(r.map,b+(a-b)*(.05f/l),point))surface=true;}}
        x.nearMiss+=near;x.blockedPass+=!near&&passed;x.surfaceOnly+=!near&&surface;
        if(shot.impact!=Shot::Impact::Cover||shot.flight.size()<2)continue;
        ++x.solid;
        const Vec3 end=shot.end,prev=shot.flight[shot.flight.size()-2].position;const float leg=Distance(prev,end);
        const Vec3 back=leg>.05f?end+(prev-end)*(.05f/leg):prev;
        if(PointSegment(s.position,s.position+Vec3{0,0,body},end)>radius||ClearLine3DSolid(r.map,back,point))continue;
        ++x.coverImpact;x.impactOnly+=!near;
    }
    return t;
}
static std::string Show(const Target& t,int seeds,float radius=1.5f){
    std::ostringstream o;o<<std::fixed<<std::setprecision(2);
    auto fire=[&](const char* who,const Fire& x){o<<who<<" "<<x.rounds<<" rounds: "<<x.nearMiss<<" near misses, "<<x.hits<<" hits, "<<x.solid<<" stopped by a solid, "<<x.coverImpact<<" in his cover within "<<radius<<" m ("
        <<x.impactOnly<<" without a near miss); "<<x.blockedPass<<" within 2.2 m but refused by the solid line ("<<x.surfaceOnly<<" only by the surface the round stopped on); ";};
    fire("gun",t.gun);fire("rifles",t.rifle);
    o<<"his suppression over 20 s (per battle): max "<<t.max<<", mean "<<t.mean/float(seeds)<<", s above 0.52 "<<t.above/float(seeds)<<", s down "<<t.down/float(seeds);
    if(!t.alive)o<<" (hit down in some)";
    if(!t.held)o<<" (left his post in some)";
    return o.str();
}
static void TargetArm(const char* label,Kind kind,const std::vector<int>& shooters){
    std::string error;const auto map=ImportBattlefield(TargetFixtureMap(kind,shooters),error);if(!map)std::cout<<error<<"\n";assert(map&&error.empty());
    const std::vector<uint32_t> seeds{1,2,3,4,5,6};
    Target off;for(uint32_t seed:seeds){const auto t=RunTarget(map,kind,seed,Config{});assert(t.first>=0);off.Add(t);}
    std::cout<<"SUPPRESSION "<<label<<" "<<KindName(kind)<<", switches off: "<<Show(off,int(seeds.size()))<<"\n";
    if(off.gun.nearMiss+off.rifle.nearMiss)std::cout<<"SUPPRESSION "<<label<<" "<<KindName(kind)<<": cover impacts per near miss, gun "<<std::setprecision(3)<<(off.gun.nearMiss?float(off.gun.coverImpact)/float(off.gun.nearMiss):0.f)
        <<", rifles "<<(off.rifle.nearMiss?float(off.rifle.coverImpact)/float(off.rifle.nearMiss):0.f)<<std::setprecision(6)<<"\n";
#ifndef MS_ORIG
    for(int arm=0;arm<4;++arm){Config c;c.impactSuppression=arm==0||arm==3;c.nerve=arm==1||arm==3;c.stackedSuppression=arm==2||arm==3;
        Target on;for(uint32_t seed:seeds){const auto t=RunTarget(map,kind,seed,c);on.Add(t);
            if(seed==1)assert(t.digest==RunTarget(map,kind,seed,c).digest&&t.digest!=RunTarget(map,kind,seed,Config{}).digest);}
        std::cout<<"SUPPRESSION "<<label<<" "<<KindName(kind)<<", "<<(arm==0?"S1":arm==1?"S2":arm==2?"S3":"S1+S2+S3")<<": "<<Show(on,int(seeds.size()));
        if(c.impactSuppression)std::cout<<"; impact suppressions (simulator, all men) "<<on.impactSuppressions;
        std::cout<<"\n";
        // The intended effect: each switch keeps him down longer than the parent does under the same fire.
        // The intended effect under the same fire (both sides obey the switches, so the incoming fire itself changes):
        // with all three on he spends longer down; stacking alone keeps four rifles' target above his threshold longer.
        if(arm==3)assert(on.down>off.down);
        if(arm==2&&kind==Kind::Wall&&shooters.size()==4)assert(on.above>off.above);
        if(arm==0)assert(on.impactSuppressions>0);
    }
#endif
}
#ifndef MS_ORIG
// Plan 030 S1b: M-S's H1 fixtures (and the four-rifle wall) with S1 at 1.5 m and at 2.2 m, the near-miss radius. The
// offline cover-impact count uses the arm's radius; the simulator's impact suppressions count every man.
static void S1bArm(const char* label,Kind kind,const std::vector<int>& shooters){
    std::string error;const auto map=ImportBattlefield(TargetFixtureMap(kind,shooters),error);assert(map&&error.empty());
    const std::vector<uint32_t> seeds{1,2,3,4,5,6};int impacts[2]={0,0};float down[3]={0,0,0};
    for(int arm=0;arm<3;++arm){Config c;c.impactSuppression=arm>0;if(arm==2)c.impactRadius=2.2f;const float radius=arm==2?2.2f:1.5f;
        Target on;for(uint32_t seed:seeds){const auto t=RunTarget(map,kind,seed,c,radius);on.Add(t);
            if(seed==1&&arm==2){Config narrow=c;narrow.impactRadius=1.5f;assert(t.digest==RunTarget(map,kind,seed,c,radius).digest&&t.digest!=RunTarget(map,kind,seed,narrow).digest);}}
        down[arm]=on.down/float(seeds.size());if(arm)impacts[arm-1]=on.impactSuppressions;
        std::cout<<"SUPPRESSION S1b "<<label<<" "<<KindName(kind)<<", "<<(arm==0?"off":arm==1?"S1 1.5 m":"S1 2.2 m")<<": "<<Show(on,int(seeds.size()),radius);
        if(arm)std::cout<<"; impact suppressions (simulator, all men) "<<on.impactSuppressions;
        std::cout<<"\n";}
    std::cout<<"SUPPRESSION S1b "<<label<<" "<<KindName(kind)<<": s down per battle off / 1.5 m / 2.2 m "<<down[0]<<" / "<<down[1]<<" / "<<down[2]<<"\n";
    assert(impacts[1]>0);
}
static void S1b(){for(Kind kind:{Kind::Rim,Kind::Wall,Kind::Window})S1bArm("gun and rifle at 50 m,",kind,{0,7});S1bArm("four rifles at 50 m,",Kind::Wall,{0,1,2,3});}
#endif
static void H1(){for(Kind kind:{Kind::Rim,Kind::Wall,Kind::Window})TargetArm("H1 gun and rifle at 50 m,",kind,{0,7});}
static void H2Battle(){TargetArm("H2 four rifles at 50 m,",Kind::Wall,{0,1,2,3});}
// H2, decision level: the H1 wall fixture's rifleman at his shelter, the gun visible 50 m west; he pops up and fires. A burst
// of `misses` near misses 0.1 s apart (each 0.23 at composure 100), then silence. Every tick (0.05 s) the fire on
// him decays by StepSuppression and he decides (a sheltered man thinks every tick). His suppression is fed straight
// to the decision (a battle adds his reaction lag, 0.2 s sampling and about 0.4 s). Returns the seconds from the
// burst's last round to the first order that raises him to fire again, and the peak suppression.
static std::pair<float,float> PopUp(const Config& c,int misses){
    std::string error;const auto map=ImportBattlefield(TargetFixtureMap(Kind::Wall,{0,7}),error);assert(map&&error.empty());
    const Map& m=map->map;
    Soldier s;s.id=34;s.team=1;s.squad=4;s.position=m.windows.back().shelter;s.goal=s.position;s.facing={-1,0};
    s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.serial=1;
    auto& ct=s.contacts[7];ct.known=ct.visible=true;ct.position={-25,-1,0};ct.aimHeight=1.665f;ct.automaticWeapon=true;
    Tactics memory;float time=10;Order o{};float peak=0;
    auto think=[&]{for(auto& k:s.contacts)if(k.known&&k.visible)k.observedAt=time;o=ChooseOrder(s,m,c,{},memory,time);s.action=o.action;s.reason=o.reason;s.stance=o.stance;if(Distance(o.goal,s.position)<.01f)s.goal=o.goal;};
    for(;time<14&&!(o.action==Action::Fire);time+=TickSeconds){Step(s,c,time,TickSeconds);think();}
    assert(o.action==Action::Fire&&memory.assigned);
    const float start=time;
    for(int k=0;k<misses;++k){
        for(int t=0;t<2;++t){Step(s,c,time,TickSeconds);if(t==0){s.suppression=std::min(1.f,s.suppression+.23f);
#ifndef MS_ORIG
            if(c.stackedSuppression)s.lastNearMissAt=time;
#endif
        }peak=std::max(peak,s.suppression);think();time+=TickSeconds;}
    }
    const float last=start+.1f*float(misses-1);bool ducked=false;
    for(;time<last+60;time+=TickSeconds){Step(s,c,time,TickSeconds);think();ducked|=o.action!=Action::Fire;if(ducked&&o.action==Action::Fire)return {time-last,peak};}
    return {-1,peak};
}
static void H2PopUp(){
    for(int misses:{3,5,10}){
        const auto off=PopUp(Config{},misses);
        std::cout<<"SUPPRESSION H2 pop-up: burst of "<<misses<<" near misses (peak "<<off.second<<"), switches off: up again "<<off.first<<" s after the last round\n";
        assert(off.first>0);
#ifndef MS_ORIG
        Config nerve;nerve.nerve=true;Config stacked;stacked.stackedSuppression=true;Config all=nerve;all.stackedSuppression=all.impactSuppression=true;
        const auto n=PopUp(nerve,misses),st=PopUp(stacked,misses),a=PopUp(all,misses);
        std::cout<<"SUPPRESSION H2 pop-up: burst of "<<misses<<": S2 nerve "<<n.first<<" s, S3 stacked "<<st.first<<" s, all three "<<a.first<<" s\n";
        // Nerve delays the pop-up once the burst held him above his duck threshold for two seconds (nerve 0.5).
        if(misses>=5)assert(n.first>off.first+5);
        assert(st.first>=off.first);
#endif
    }
}
// H3 (report only): the machine gunner (every stat 100, standing) fires sustained bursts of 18 at a standing man
// (aim at 0.9 of his height, the first sight fraction), the fire-control formula replayed shot by shot: sway and
// recoil offsets, the two cone draws, recoil decay between rounds (two ticks), ballistic flight with drag. Counted:
// rounds whose flight passes within 2.2 m of his body point at 0.7 of his height (the near-miss radius).
static void H3(){
    Soldier s;EquipWeapon(s,{WeaponId::MachineGun,{}});s.stance=Stance::Standing;
    for(float range:{50.f,100.f}){
        std::mt19937 rng(7);std::uniform_real_distribution<float> U(0,1);
        const int Bursts=400;std::array<int,18> within{};std::array<double,18> rise{};std::array<double,18> riseRandom{};int total=0;
        for(int burst=0;burst<Bursts;++burst){
            s.recoil={};const float t0=float(burst)*7.3f;
            for(int k=0;k<18;++k){
                if(k){DecayRecoil(s,TickSeconds);DecayRecoil(s,TickSeconds);}
                const float time=t0+.1f*float(k);
                const Vec3 muzzle{0,0,Posture(s.stance).muzzle};const Vec3 aim{range,0,BodyHeight(Stance::Standing)*.9f};
                const Vec3 body{range,0,BodyHeight(Stance::Standing)*.7f};
                const float speed=s.gun.muzzleVelocity,flight=FlightTime(range,speed,s.gun.dragK);
                const Vec3 off=SwayOffset(s,time)+s.recoil;
                for(int pass=0;pass<2;++pass){
                    const float a=pass?(U(rng)-.5f)*2*ShotSpread(s):0.f,b=pass?(U(rng)-.5f)*speed*VerticalSpread(s):0.f;
                    const float angle=off.x+a;const float vz=(aim.z-muzzle.z)/flight+4.905f*flight+speed*std::tan(off.y)+b;
                    Vec3 p=muzzle,v{std::cos(angle)*speed,std::sin(angle)*speed,vz};float best=1e9f,zAt=0;bool crossed=false;
                    for(int step=0;step<400&&p.z>-.5f&&p.x<range+10;++step){const Vec3 next=BallisticPosition(p,v,.005f);
                        best=std::min(best,PointSegment(p,next,body));if(!crossed&&next.x>=range){crossed=true;const float u=(range-p.x)/std::max(1e-6f,next.x-p.x);zAt=p.z+(next.z-p.z)*u;}
                        const float travelled=Distance(p,next);p=next;v=v*std::exp(-s.gun.dragK*travelled);v.z-=9.81f*.005f;}
                    if(pass){if(best<2.2f){++within[size_t(k)];++total;}riseRandom[size_t(k)]+=zAt-aim.z;}
                    else rise[size_t(k)]+=zAt-aim.z;
                }
                ApplyRecoil(s);
            }
        }
        std::cout<<"SUPPRESSION H3 "<<range<<" m: rounds within 2.2 m per burst of 18 "<<float(total)/Bursts<<"; by round (share within 2.2 m / height above the aim point without the cone, m):";
        for(int k:{0,1,2,5,8,11,14,17})std::cout<<" r"<<k+1<<" "<<std::setprecision(2)<<float(within[size_t(k)])/Bursts<<"/"<<rise[size_t(k)]/Bursts;
        std::cout<<std::setprecision(6)<<"\n";
    }
}
#ifndef MS_ORIG
static void TableTests(){
    const auto& t=SuppressionRules();
    assert(t.impactRadius==1.5f&&t.impactWeight==.15f&&t.nerveGain==.25f&&t.nerveDecay==.03f&&t.pinnedAt==.5f&&t.firstShots==3&&t.stackWindow==2&&t.shakenSuppression==1);
    Config off;Config cautious;cautious.doctrine=Doctrine::Cautious;cautious.emberDoctrine=Doctrine::Aggressive;
    assert(DuckThreshold(off,0)==.52f&&DuckThreshold(cautious,0)==.40f&&DuckThreshold(cautious,1)==.65f);
    assert(!off.impactSuppression&&!off.nerve&&!off.stackedSuppression);
    // Off: the historical decay, bit for bit, for any composure; nerve, shaken shots and the stamp never move.
    for(float composure:{80.f,100.f,137.f})for(float start:{0.f,.03f,.52f,1.f}){
        Soldier s;s.stats.value[size_t(Stat::Composure)]=composure;s.suppression=start;s.lastNearMissAt=5;
        Soldier h=s;h.suppression=std::max(0.f,h.suppression-TickSeconds*0.15f*StatScale(h.stats.Get(Stat::Composure)));
        StepSuppression(s,off,5.1f,TickSeconds);
        assert(s.suppression==h.suppression&&s.nerve==0&&s.shakenShots==0&&s.lastNearMissAt==5);
        assert(AimSuppression(s)==s.suppression&&!NervePinned(s,off));}
    // S3: no decay inside the window after a round reached him, the usual decay after it.
    {Config c;c.stackedSuppression=true;Soldier s;s.suppression=.6f;s.lastNearMissAt=10;
     StepSuppression(s,c,11.9f,TickSeconds);assert(s.suppression==.6f);
     StepSuppression(s,c,12.05f,TickSeconds);assert(s.suppression<.6f);}
    // S2: nerve climbs 0.25/s above the duck threshold (two seconds to pinned), falls 0.03/s below it; the release
    // shakes the next three rounds, whose cone and settle are the fully suppressed ones.
    {Config c;c.nerve=true;Soldier s;EquipWeapon(s,{WeaponId::Rifle,{}});s.suppression=1;float time=0;int pinnedAt=-1;
     for(int k=0;k<80;++k){StepSuppression(s,c,time,TickSeconds);time+=TickSeconds;s.suppression=1;if(pinnedAt<0&&NervePinned(s,c))pinnedAt=k;}
     assert(pinnedAt>=39&&pinnedAt<=41&&s.nerve>.99f);
     s.suppression=0;float released=-1;
     for(int k=0;k<2000&&released<0;++k){StepSuppression(s,c,time,TickSeconds);time+=TickSeconds;if(!NervePinned(s,c))released=float(k+1)*TickSeconds;}
     std::cout<<"SUPPRESSION nerve: pinned after "<<float(pinnedAt+1)*TickSeconds<<" s above the duck threshold, released "<<released<<" s after the fire stopped (nerve 1 -> 0.5 at 0.03/s)\n";
     assert(std::abs(released-(1-.5f)/.03f)<.2f&&s.shakenShots==3);
     Soldier plain=s;plain.shakenShots=0;assert(ShotSpread(s)>ShotSpread(plain)&&VerticalSpread(s)>VerticalSpread(plain)&&std::abs(AimSeconds(s)-AimSeconds(plain)*4)<1e-5f);
     Config nerveOff;assert(!NervePinned(s,nerveOff));}
    // SameConfig tells each switch apart.
    for(int k=0;k<3;++k){Config a,b;(k==0?b.impactSuppression:k==1?b.nerve:b.stackedSuppression)=true;assert(!SameConfig(a,b)&&SameConfig(b,b));}
    // Plan 030 S1b: Config::impactRadius defaults to the table's radius; SameConfig reads it only with S1 on.
    {Config a,b;assert(a.impactRadius==t.impactRadius);b.impactRadius=2.2f;assert(SameConfig(a,b));
     a.impactSuppression=b.impactSuppression=true;assert(!SameConfig(a,b));b.impactRadius=t.impactRadius;assert(SameConfig(a,b));}
    std::cout<<"SUPPRESSION table: constants, off is the historical decay bit for bit, S3 window, S2 clock and shaken rounds, SameConfig PASS\n";
}
// The playable default's own ground, 90 s of Legacy: off is the parent build's digest; each switch on reproduces
// itself and folds into the digest.
static constexpr uint64_t ParentLegacy90=1988862774746519739ull; // the parent build (3db4b7c553c58257): sim_tests -DMS_ORIG --suppression prints it
static void LegacyBattles(){
    auto run=[](const Config& base){Config c=base;c.maxSeconds=90;c.seed=107;DiagnosticOptions lean;lean.enabled=false;lean.keepFrames=false;LeanRecorder recorder;
        lean.frameSink=[&](const Record& r,const Frame& f){recorder.Record_(r,f);};const auto r=Simulate(c,lean);return std::make_pair(recorder.Digest(r),r.shots.size());};
    const auto off=run(Config{});
    std::cout<<"SUPPRESSION legacy 90 s digest off "<<off.first<<"\n";
    if(ParentLegacy90)assert(off.first==ParentLegacy90);
    for(int arm=0;arm<4;++arm){Config c;c.impactSuppression=arm==0||arm==3;c.nerve=arm==1||arm==3;c.stackedSuppression=arm==2||arm==3;
        const auto a=run(c),b=run(c);
        std::cout<<"SUPPRESSION legacy 90 s "<<(arm==0?"S1":arm==1?"S2":arm==2?"S3":"all")<<": digest "<<a.first<<", shots "<<a.second<<" (off "<<off.second<<")\n";
        assert(a.first==b.first&&a.first!=off.first);}
    // Plan 030 S1b: the radius is read only with S1 on; 1.5 given explicitly is S1 itself; 2.2 m reproduces and differs.
    {Config radiusOnly;radiusOnly.impactRadius=2.2f;assert(run(radiusOnly).first==off.first);
     Config s1;s1.impactSuppression=true;Config s1r=s1;s1r.impactRadius=1.5f;Config wide=s1;wide.impactRadius=2.2f;
     const auto base=run(s1),a=run(wide),b=run(wide);assert(run(s1r).first==base.first);
     std::cout<<"SUPPRESSION legacy 90 s S1 at 2.2 m: digest "<<a.first<<", shots "<<a.second<<"\n";
     assert(a.first==b.first&&a.first!=base.first&&a.first!=off.first);}
    std::cout<<"SUPPRESSION legacy 90 s: off is the parent's, every switch reproduces PASS\n";
}
#else
static void LegacyBattles(){
    Config c;c.maxSeconds=90;c.seed=107;DiagnosticOptions lean;lean.enabled=false;lean.keepFrames=false;LeanRecorder recorder;
    lean.frameSink=[&](const Record& r,const Frame& f){recorder.Record_(r,f);};const auto r=Simulate(c,lean);
    std::cout<<"SUPPRESSION legacy 90 s digest (parent) "<<recorder.Digest(r)<<"\n";
}
#endif
}
static void SuppressionTests(){
    std::cout.setf(std::ios::unitbuf);
#ifndef MS_ORIG
    suppression_tests::TableTests();
#endif
    suppression_tests::LegacyBattles();
    suppression_tests::H2PopUp();
    suppression_tests::H3();
    suppression_tests::H1();
    suppression_tests::H2Battle();
#ifndef MS_ORIG
    suppression_tests::S1b();
#endif
    std::cout<<"SUPPRESSION all PASS\n";
}
