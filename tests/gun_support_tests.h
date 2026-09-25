// Plan 031 Stage G: the gun as a support weapon (Config::gunSupport, Config::gunBipod; Legacy only, per team).
// Checks: (1) the support shooter: a report-only enemy is fired on as an ordered support shooter fires on it (the same
// solution), never an unknown enemy nor a report too old for the support rules; off, only his own fresh sightings.
// (2) The overlook count (ScoreGunThreats): himself, a mate he saw, a mover counted 1 + the mover weight; stale or distant
// mates, stale tracks, reports and blocked lines left out; counted again at most every 0.5 s.
// (3) The target score: the enemy overlooking more of his squad is preferred, the one fired on within the rotation window
// passed over; the firing stage's burst loop, emulated, alternates between two known enemies.
// (4) The bipod (FiredSpread): the factor only set, only on the team's machine guns, Legacy only.
// (5) A fixture battle (inline ARMYMAP 2 field, one squad a side, the rest penned): the gun's set rounds come in bursts of at
// most gunBurst on one target with a gunBeat pause after each full burst, every burst a traced gun_support row and a count;
// the bipod on the first set round (three battles identical up to it); deterministic; the evaluation export does not move
// the battle; switch-off identity and SameConfig.
#pragma once
#include "BattleSim.h"
#include "Diagnostics.h"
#include "ImportedMap.h"
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
namespace gun_support_tests {
using namespace army;
// Azure's gun (7) at the origin: no task, firing stance, no knowledge. support: his team fights its guns as support weapons.
inline Soldier Gun(bool support){
    Soldier g=InitialFrame(Config{}).soldiers[7];assert(g.machineGun&&g.team==0&&g.squad==0);
    g.position=g.goal={0,0,0};g.contacts={};g.reports={};g.allies={};g.allyVelocity={};g.assignment=Assignment{};
    g.action=Action::Fire;g.stance=Stance::Standing;g.aimTarget=-1;g.supportGun=support;
    return g;
}
inline Map Open(){Map m;m.halfWidth=150;m.halfHeight=80;PrepareGeometry(m);return m;}
inline Contact Seen(Vec3 p,float at,bool visible=true){Contact c;c.known=true;c.visible=visible;c.position=p;c.observedAt=at;c.aimHeight=p.z+BodyHeight(Stance::Standing);return c;}
inline void SupportShooterTests(){
    const Map m=Open();const float t=20;
    // A report only (a mate's sighting 2 s old, 50 m east): the support gun fires on the reported place.
    Soldier on=Gun(true);on.reports[40]=Seen({50,5,0},t-2,false);
    const auto a=SelectFireSolution(on,m,t);assert(a.enemy==40&&a.area);
    // ... exactly as an ordered support shooter (overwatch) fires on it.
    Soldier ordered=Gun(false);ordered.reports[40]=on.reports[40];ordered.assignment.task=Task::Overwatch;
    const auto b=SelectFireSolution(ordered,m,t);
    assert(b.enemy==40&&b.area==a.area&&a.point.x==b.point.x&&a.point.y==b.point.y&&a.point.z==b.point.z&&a.observedAt==b.observedAt);
    // Off (or not a gunner), with no support task, a report is not his to fire on.
    Soldier off=Gun(false);off.reports[40]=on.reports[40];assert(SelectFireSolution(off,m,t).enemy<0);
    Soldier rifle=on;rifle.machineGun=false;assert(SelectFireSolution(rifle,m,t).enemy<0);
    // Never an unknown enemy, nor a report older than the support rules allow (6 s).
    assert(SelectFireSolution(Gun(true),m,t).enemy<0);
    Soldier old=Gun(true);old.reports[40]=Seen({50,5,0},t-6.5f,false);assert(SelectFireSolution(old,m,t).enemy<0);
    // His own track of a man gone from sight 4 s ago: the support gun fires on the place; off, only a fresh sighting counts.
    Soldier lost=Gun(true);lost.contacts[41]=Seen({45,-5,0},t-4,false);
    const auto l=SelectFireSolution(lost,m,t);assert(l.enemy==41&&l.area);
    Soldier lostOff=lost;lostOff.supportGun=false;assert(SelectFireSolution(lostOff,m,t).enemy<0);
    // A man in sight: the same solution either way.
    Soldier seen=Gun(true);seen.contacts[42]=Seen({30,0,0},t-.1f);Soldier seenOff=seen;seenOff.supportGun=false;
    const auto s1=SelectFireSolution(seen,m,t),s2=SelectFireSolution(seenOff,m,t);
    assert(s1.enemy==42&&s2.enemy==42&&s1.point.x==s2.point.x&&s1.point.y==s2.point.y&&s1.point.z==s2.point.z);
    std::cout<<"GUN SUPPORT shooter: a report-only enemy fired on as an ordered support shooter would, never an unknown or stale one; off unchanged PASS\n";
}
inline void OverlookTests(){
    const Map m=Open();const float t=30;
    Soldier g=Gun(true);g.contacts[40]=Seen({40,0,0},t-1);
    g.allies[1]=Seen({0,10,0},t-1);                                   // a mate he saw a second ago, still
    g.allies[2]=Seen({0,-10,0},t-1);g.allyVelocity[2]={2,0,0};        // a mate he saw moving
    g.allies[3]=Seen({0,20,0},t-4);                                   // seen 4 s ago: not counted (3 s)
    g.allies[4]=Seen({-60,0,0},t);                                    // 100 m from the enemy: beyond his reach (95 m)
    g.allies[5]=Seen({5,-20,0},t-2);g.allyVelocity[5]={2,0,0};        // moving, but seen 2 s ago: a mate, not a mover (1.5 s)
    g.allies[12]=Seen({10,0,0},t);                                    // a man of another squad: not his squad's
    GunSupportMemory memory;ScoreGunThreats(g,m,t,1.f,memory);
    // himself 1 + mate 1 + mover 2 + the late mover 1
    assert(memory.overlooks[40]==5.f&&memory.scoredAt==t);
    {GunSupportMemory w;ScoreGunThreats(g,m,t,2.f,w);assert(w.overlooks[40]==6.f);}   // mover weight 2: the mover counts 3
    // Counted again at most every 0.5 s: a new track 0.4 s later is not counted yet; 0.5 s later it is.
    g.contacts[41]=Seen({40,30,0},t);ScoreGunThreats(g,m,t+.4f,1.f,memory);assert(memory.overlooks[41]==0&&memory.scoredAt==t);
    ScoreGunThreats(g,m,t+.5f,1.f,memory);assert(memory.overlooks[41]>0&&memory.scoredAt==t+.5f);
    // Only his own tracks, seen within 6 s: a report counts nothing, nor a track 6.5 s old.
    {Soldier r=Gun(true);r.reports[40]=Seen({40,0,0},t-1,false);GunSupportMemory rm;ScoreGunThreats(r,m,t,1.f,rm);assert(rm.overlooks[40]==0);}
    {Soldier st=Gun(true);st.contacts[40]=Seen({40,0,0},t-6.5f);GunSupportMemory sm;ScoreGunThreats(st,m,t,1.f,sm);assert(sm.overlooks[40]==0);}
    // A 3 m wall between the enemy and the gunner: he no longer counts himself (his mates beside him are still in the line).
    {Map walled;walled.halfWidth=150;walled.halfHeight=80;walled.obstacles.push_back({{20,0,0},{.3f,2,0},false,false,3.f});PrepareGeometry(walled);
     Soldier w=Gun(true);w.contacts[40]=Seen({40,0,0},t-1);GunSupportMemory wm;ScoreGunThreats(w,walled,t,1.f,wm);assert(wm.overlooks[40]==0);
     w.allies[1]=Seen({0,10,0},t-1);GunSupportMemory wm2;ScoreGunThreats(w,walled,t,1.f,wm2);assert(wm2.overlooks[40]==1.f);}
    std::cout<<"GUN SUPPORT overlooks: himself, mates he saw, movers 1 + weight; stale, distant, other squads, reports and walls left out; rescored every 0.5 s PASS\n";
}
inline void ScoreTests(){
    const Map m=Open();const float t=40;
    Soldier g=Gun(true);g.contacts[40]=Seen({40,0,0},t-.5f);g.contacts[41]=Seen({60,0,0},t-.5f);   // A 40 m, B 60 m east
    GunSupportMemory memory;ScoreGunThreats(g,m,t,1.f,memory);assert(memory.overlooks[40]==1.f&&memory.overlooks[41]==1.f);
    auto choose=[&](float bonus,float rotate,GunSupportControl* out=nullptr){GunSupportControl c;c.memory=&memory;c.threatBonus=bonus;c.rotate=rotate;
        const int e=SelectFireSolution(g,m,t,&c).enemy;if(out)*out=c;return e;};
    const auto& k=GunSupportConstants;
    assert(choose(k.threatBonus,k.rotate)==40);                                   // nothing but distance between them
    memory.firedAt[40]=t-1;GunSupportControl c1;assert(choose(k.threatBonus,k.rotate,&c1)==41&&c1.rotationTerm==0&&c1.candidates==2);
    memory.firedAt[40]=t-3;assert(choose(k.threatBonus,k.rotate)==40);           // 3 s ago: no longer passed over
    memory.firedAt[41]=t-2;memory.firedAt[40]=t-1;assert(choose(k.threatBonus,k.rotate)==40); // both within 3 s: distance again
    memory.firedAt.fill(-100.f);memory.overlooks[40]=1;memory.overlooks[41]=3;   // B overlooks two more of his squad (30 m of score)
    GunSupportControl c2;assert(choose(k.threatBonus,k.rotate,&c2)==41&&c2.threatTerm==-45.f);
    assert(choose(5,k.rotate)==40);                                              // at 5 m a mate, the 20 m of distance decide
    // Every other caller: no support terms, the same answer to whether he has a solution at all.
    assert(SelectFireSolution(g,m,t).enemy==40);
    // The firing stage's burst loop, emulated: the target is chosen the tick after the last round of a burst; the next burst
    // opens once the beat is over and his aim has settled on the new man; gunBurst rounds 0.1 s apart.
    auto bursts=[&](float rotate,int count){std::vector<int> targets;GunSupportMemory mem;float now=t;
        for(int n=0;n<count;++n){
            g.contacts[40].observedAt=g.contacts[41].observedAt=now;
            ScoreGunThreats(g,m,now,1.f,mem);GunSupportControl c;c.memory=&mem;c.rotate=rotate;
            const int e=SelectFireSolution(g,m,now,&c).enemy;assert(e==40||e==41);
            const float first=now+std::max(k.beat,AimSeconds(g));
            targets.push_back(e);
            for(int round=0;round<k.burst;++round)mem.firedAt[size_t(e)]=first+g.gun.cyclicSeconds*float(round);
            now=first+g.gun.cyclicSeconds*float(k.burst-1)+TickSeconds;}
        return targets;};
    // A rotation window of one burst cycle: the bursts alternate A, B, A, B.
    const auto strict=bursts(1.f,8);for(size_t n=1;n<strict.size();++n)assert(strict[n]!=strict[n-1]);
    // The 3 s window: the burst after the nearer man's goes to the other; with both fired on inside the window the nearer
    // takes the burst, and the farther is worked again as soon as his window has passed (never two windows without a burst).
    const auto rotated=bursts(k.rotate,16);assert(rotated[0]==40&&rotated[1]==41);
    {int since=0,most=0;for(int e:rotated){since=e==41?0:since+1;most=std::max(most,since);}
     const int cycle=int(std::ceil(k.rotate/(std::max(k.beat,AimSeconds(g))+g.gun.cyclicSeconds*float(k.burst-1)+TickSeconds)));assert(most<=cycle+1);
     std::ostringstream one,three;for(int e:strict)one<<(e==40?'A':'B');
     for(int e:rotated)three<<(e==40?'A':'B');
     std::cout<<"GUN SUPPORT bursts, two known enemies (A nearer): window 1 s "<<one.str()<<", window 3 s "<<three.str()<<"\n";}
    std::cout<<"GUN SUPPORT score: overlooks preferred, the recently fired-on passed over, bursts alternate between two known enemies PASS\n";
}
inline void BipodTests(){
    Config c;c.gunBipod=1;
    const Soldier g=Gun(false);const float base=ShotSpread(g);
    assert(FiredSpread(g,c,false,false)==base*.5f&&c.gunBipodFactor==.5f);   // set: on the bipod
    assert(FiredSpread(g,c,true,false)==base);                               // walking: the full cone
    Soldier ember=g;ember.team=1;assert(FiredSpread(ember,c,false,false)==base); // not his team
    const Soldier rifle=InitialFrame(Config{}).soldiers[1];assert(!rifle.machineGun);
    assert(FiredSpread(rifle,c,false,true)==ShotSpread(rifle)+.015f&&FiredSpread(rifle,c,false,false)==ShotSpread(rifle));
    assert(FiredSpread(g,Config{},false,false)==base);                       // off
    Config typed=c;typed.drills=typed.foundations=true;assert(FiredSpread(g,typed,false,false)==base); // Legacy only
    Config quarter=c;quarter.gunBipodFactor=.25f;assert(FiredSpread(g,quarter,false,false)==base*.25f);
    Config both;both.gunBipod=3;assert(FiredSpread(ember,both,false,false)==base*.5f&&FiredSpread(g,both,false,false)==base*.5f);
    std::cout<<"GUN SUPPORT bipod: the factor only set, only on the team's guns, Legacy only PASS\n";
}
// Squad 0 of each side face each other 90 m apart across a field of low walls (1 m, crouch cover); everyone else is penned
// (3.2 m walls) far off. Azure's gun is 7, Ember's 39 (one gun per platoon, Config{}).
inline std::string Field(){
    std::ostringstream m;m<<"ARMYMAP 2 city 33\nBOUNDS 150 60 0\n";int id=1;
    auto O=[&](float x,float y,float hx,float hy,float h,int low){m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 "<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<" 1\n";};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,.3f,8.6f,3.2f,0);O(cx+8.3f,0,.3f,8.6f,3.2f,0);O(cx,-8.3f,8.f,.3f,3.2f,0);O(cx,8.3f,8.f,.3f,3.2f,0);}
    for(int col=0;col<5;++col)for(int row=0;row<4;++row){const float x=-34.f+17.f*float(col),y=-27.f+18.f*float(row)+(col%2?6.f:0.f);
        const bool across=(col+row)%2==0;O(x,y,across?1.5f:.3f,across?.3f:1.5f,1.f,1);}
    for(int i=0;i<UnitCount;++i){
        const int team=i/TeamSize,squad=(i/SquadSize)%SquadsPerTeam,slot=i%SquadSize;Vec3 p;
        if(squad==0)p={(team?45.f:-45.f)+(team?1.f:-1.f)*float(slot/4)*2.5f,-9.f+6.f*float(slot%4),0};
        else{const int k=i-team*TeamSize-SquadSize;p={(team?124.f:-136.f)+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<" 0 "<<p.x<<' '<<p.y<<" 0\n";}
    m<<"END\n";return m.str();
}
inline Config FieldConfig(const std::shared_ptr<const ImportedBattlefield>& map,uint32_t seed,int support,int bipod){
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=90;c.gunSupport=support;c.gunBipod=bipod;return c;
}
struct Burst { int enemy=-1,rounds=0;float first=0,last=0; };
struct FieldRun { uint64_t digest=0;int bursts=0,bipodRounds=0,rows=0,rowsWithTwo=0,setRounds=0,mixed=0,longest=0,shortBeats=0,fullBursts=0;
    std::set<int> targets;std::vector<Burst> list;std::vector<std::string> extras; };
inline FieldRun RunField(const Config& c,bool traced,int gun=7){
    DiagnosticOptions options;options.enabled=traced;options.keepFrames=false;
    LeanRecorder recorder;options.frameSink=[&](const Record& record,const Frame& frame){recorder.Record_(record,frame);};
    const auto r=Simulate(c,options);FieldRun out;out.digest=recorder.Digest(r);out.bursts=r.gunSupportBursts;out.bipodRounds=r.gunBipodRounds;
    if(traced)for(const auto& e:r.diagnostics->entries)if(e.kind=="gun_support"){++out.rows;out.extras.push_back(e.extra);
        const auto at=e.extra.find("\"candidates\":");if(at!=std::string::npos&&std::atoi(e.extra.c_str()+at+13)>=2)++out.rowsWithTwo;}
    // The gun's set rounds, grouped into bursts: rounds one cyclic interval apart (a tick of slack) belong together.
    const Shot* prior=nullptr;
    for(const auto& shot:r.shots){if(shot.owner!=gun||shot.movingFire)continue;++out.setRounds;
        const bool same=prior&&shot.time-prior->time<=.1f+TickSeconds+1e-3f;
        if(!same)out.list.push_back({shot.aimedEnemy,0,shot.time,shot.time});
        auto& b=out.list.back();if(b.enemy!=shot.aimedEnemy)++out.mixed;++b.rounds;b.last=shot.time;out.targets.insert(shot.aimedEnemy);prior=&shot;}
    for(size_t n=0;n<out.list.size();++n){out.longest=std::max(out.longest,out.list[n].rounds);
        if(out.list[n].rounds==c.gunBurst&&n+1<out.list.size()){++out.fullBursts;out.shortBeats+=out.list[n+1].first-out.list[n].last<c.gunBeat-1e-3f;}}
    return out;
}
// The yaw of a round, from its first flight step.
inline float Yaw(const Shot& s){return std::atan2(s.flight[1].position.y-s.flight[0].position.y,s.flight[1].position.x-s.flight[0].position.x);}
inline const Shot* FirstSetRound(const Record& r,int gun){for(const auto& s:r.shots)if(s.owner==gun&&!s.movingFire&&s.flight.size()>=2)return &s;return nullptr;}
inline void BattleTests(){
    std::string error;const auto map=ImportBattlefield(Field(),error);assert(map&&error.empty());
    const bool debug=std::getenv("GUN_SUPPORT_DEBUG")!=nullptr;
    int bursts=0,rows=0,rowsWithTwo=0,setRounds=0,full=0,mixed=0;std::set<int> targets;
    for(uint32_t seed:{3u,4u,5u}){
        const auto on=RunField(FieldConfig(map,seed,1,0),true),off=RunField(FieldConfig(map,seed,0,0),false);
        std::cout<<"GUN SUPPORT fixture seed "<<seed<<": set rounds "<<on.setRounds<<" in "<<on.list.size()<<" bursts (longest "<<on.longest<<", full "<<on.fullBursts
                 <<", short beats "<<on.shortBeats<<", mixed "<<on.mixed<<"), targets "<<on.targets.size()<<", rows "<<on.rows<<" ("<<on.rowsWithTwo<<" with two or more candidates); off: set rounds "
                 <<off.setRounds<<" in "<<off.list.size()<<" bursts (longest "<<off.longest<<")\n";
        if(debug)for(const auto& x:on.extras)std::cout<<"  row"<<x<<"\n";
        // The support pattern: never more than gunBurst rounds on one target, a full burst followed by at least the beat.
        assert(on.longest<=GunSupportConstants.burst&&on.shortBeats==0);
        // Every burst begun is counted and (traced) has its row.
        assert(on.bursts>0&&on.rows==on.bursts);
        // Deterministic, traced or not, and the evaluation export does not move the battle.
        const auto again=RunField(FieldConfig(map,seed,1,0),false);assert(again.digest==on.digest&&again.bursts==on.bursts);
        {DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=false;LeanRecorder a,b;a.evaluate=true;
         quiet.frameSink=[&](const Record& record,const Frame& frame){a.Record_(record,frame);};const auto ra=Simulate(FieldConfig(map,seed,1,1),quiet);
         quiet.frameSink=[&](const Record& record,const Frame& frame){b.Record_(record,frame);};const auto rb=Simulate(FieldConfig(map,seed,1,1),quiet);
         assert(a.Digest(ra)==b.Digest(rb));}
        assert(on.digest!=off.digest);
        bursts+=on.bursts;rows+=on.rows;rowsWithTwo+=on.rowsWithTwo;setRounds+=on.setRounds;full+=on.fullBursts;mixed+=on.mixed;targets.insert(on.targets.begin(),on.targets.end());
    }
    assert(setRounds>=50&&full>=5&&rowsWithTwo>=3&&targets.size()>=2);
    // Another burst and beat: 3 rounds, 1 s.
    {Config c=FieldConfig(map,3,1,0);c.gunBurst=3;c.gunBeat=1;const auto x=RunField(c,false);
     std::cout<<"GUN SUPPORT fixture burst 3 beat 1: set rounds "<<x.setRounds<<" in "<<x.list.size()<<" bursts (longest "<<x.longest<<", full "<<x.fullBursts<<", short beats "<<x.shortBeats<<")\n";
     assert(x.setRounds>0&&x.longest<=3&&x.shortBeats==0&&x.fullBursts>0);}
    // The bipod on the first set round of Azure's gun: three battles identical up to it (off, factor 0.5, factor 0.25); its
    // random yaw is halved and quartered, so off - half = 2 (half - quarter). A factor of 1 is the battle without the bipod.
    {DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=true;
     Config half=FieldConfig(map,3,0,1),quarter=half;quarter.gunBipodFactor=.25f;
     const auto ro=Simulate(FieldConfig(map,3,0,0),quiet),rh=Simulate(half,quiet),rq=Simulate(quarter,quiet);
     const Shot* so=FirstSetRound(ro,7);const Shot* sh=FirstSetRound(rh,7);const Shot* sq=FirstSetRound(rq,7);assert(so&&sh&&sq);
     assert(so->time==sh->time&&sh->time==sq->time&&so->aimedEnemy==sh->aimedEnemy&&sh->aimedEnemy==sq->aimedEnemy);
     const float yo=Yaw(*so),yh=Yaw(*sh),yq=Yaw(*sq);
     std::cout<<"GUN SUPPORT bipod first set round at "<<so->time<<" s: yaw off "<<yo<<", half "<<yh<<", quarter "<<yq<<"\n";
     assert(std::abs(yo-yh)>1e-3f&&std::abs((yo-yh)-2*(yh-yq))<2e-4f);
     assert(rh.gunBipodRounds>0&&ro.gunBipodRounds==0);
     int counted=0;for(const auto& s:rh.shots)counted+=s.owner==7&&!s.movingFire;
     int ember=0;for(const auto& s:rh.shots)ember+=s.owner==39;
     assert(counted==rh.gunBipodRounds&&ember>0);   // every set round of Azure's gun, none of Ember's
     Config unit=half;unit.gunBipodFactor=1;const auto ru=Simulate(unit,quiet);
     assert(ru.shots.size()==ro.shots.size());for(size_t n=0;n<ro.shots.size();++n)assert(ru.shots[n].time==ro.shots[n].time&&Yaw(ru.shots[n])==Yaw(ro.shots[n]));}
    std::cout<<"GUN SUPPORT fixture: "<<setRounds<<" set rounds, "<<bursts<<" bursts ("<<full<<" full, each followed by the beat), "<<rows<<" rows, targets "<<targets.size()<<" PASS\n";
}
inline void SwitchTests(){
    Config off,on;on.gunSupport=3;
    assert(SameConfig(off,off)&&!SameConfig(off,on));
    Config burst=on;burst.gunBurst=3;assert(!SameConfig(on,burst));
    Config beat=on;beat.gunBeat=1;assert(!SameConfig(on,beat));
    Config rotate=on;rotate.gunRotate=2;assert(!SameConfig(on,rotate));
    Config bonus=on;bonus.gunThreatBonus=10;assert(!SameConfig(on,bonus));
    Config mover=on;mover.gunMoverWeight=2;assert(!SameConfig(on,mover));
    Config bipod;bipod.gunBipod=1;assert(!SameConfig(off,bipod));Config factor=bipod;factor.gunBipodFactor=.3f;assert(!SameConfig(bipod,factor));
    Config inert=off;inert.gunBurst=3;inert.gunBeat=1;inert.gunRotate=2;inert.gunThreatBonus=10;inert.gunMoverWeight=2;inert.gunBipodFactor=.3f;
    assert(SameConfig(off,inert));   // inert while off
    Config typed=on;typed.drills=typed.foundations=true;typed.gunBipod=3;
    assert(!GunSupport(typed,0)&&!GunBipod(typed,1)&&GunSupport(on,0)&&GunSupport(on,1)&&!GunBipodAny(on));
    std::string error;const auto map=ImportBattlefield(Field(),error);assert(map&&error.empty());
    // Off, the constants change nothing, digest for digest, and no soldier is ever marked.
    DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=true;
    Config a=FieldConfig(map,4,0,0),b=a;b.gunBurst=3;b.gunBeat=1;b.gunRotate=2;b.gunThreatBonus=10;b.gunMoverWeight=2;b.gunBipodFactor=.3f;
    const auto ra=Simulate(a,quiet);assert(GameplayDigest(ra)==GameplayDigest(Simulate(b,quiet)));
    for(const auto& f:ra.frames)for(const auto& s:f.soldiers)assert(!s.supportGun);
    assert(ra.gunSupportBursts==0&&ra.gunBipodRounds==0);
    // On for Azure: Azure's men are marked, Ember's never.
    {const auto rs=Simulate(FieldConfig(map,4,1,0),quiet);for(const auto& s:rs.frames.back().soldiers)assert(s.supportGun==(s.team==0));}
    std::cout<<"GUN SUPPORT switch: SameConfig, constants inert off, no soldier marked off, Legacy only PASS\n";
}
}
inline void GunSupportTests(){
    std::cout.setf(std::ios::unitbuf);
    gun_support_tests::SupportShooterTests();gun_support_tests::OverlookTests();gun_support_tests::ScoreTests();gun_support_tests::BipodTests();
    gun_support_tests::SwitchTests();gun_support_tests::BattleTests();
    std::cout<<"GUN SUPPORT all PASS\n";
}
