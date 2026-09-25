// Plan 030 M-S7: Jordan's suppression design (24 Sep 2026) as four switches, off by default (PinTable):
//   P1 graded peek (Config::gradedPeek): above his duck threshold a man at his cover comes up for one round with chance
//      max(peekFloor, (1 - s)^peekCurve) each settle, instead of a hard duck;
//   P2 keep-down (Config::keepDown): a round stopped in his cover (S1's detection at 2.2 m) adds keepDownWeight only
//      while he is above his duck threshold (or was within keepDownGrace);
//   P3 pinned neighbours (Config::pinnedNeighbours): a pinned man holds the squadmates at cover near him at a small
//      floor (neighbourEffect), never at anyone's come-up level;
//   P4 sector covering fire (Config::coverSector, Legacy): a request names every known threat overlooking the crossing,
//      the gun works them a burst each, back at once to one that fires, the covering pair takes the nearest above the
//      gun's capacity, and the credit reads the whole set.
// Fixtures: two rifles on one man pin him and one rifle does not (the thresholds are unchanged), and with P1 the pinned
// man still gets rounds off; keep-down counts only on pinned men; the neighbour floor never pins; the sector gun visits
// every overlooking threat. The 90 s Legacy battle proves off is the parent's digest.
#pragma once
#include "suppression_tests.h"
#include "cover_request_tests.h"
#include "ManeuverSim.h"
#include <set>
namespace jordan_suppression_tests {
using namespace army;
using suppression_tests::Kind;
// One fixture battle (M-S's target fixture: Ember 34 behind a cover at x 25, the Azure shooters 50 m west), 40 s.
// Over the 20 s after the first Azure round: seconds Ember 34 spent above his duck threshold, his peak, his rounds and
// those fired while above his threshold (his suppression in the frame in force), the simulator's counts; and the peak
// suppression of every man over the whole battle (keep-down may only ever act on a man above his threshold).
struct Pin { float above=0,max=0,anyMax=0;int rounds=0,roundsAbove=0,keepDown=0,impacts=0,graded=0,settles=0,hits=0,pinned=0,pinnedHit=0;uint64_t digest=0;
    void Add(const Pin& o){above+=o.above;max=std::max(max,o.max);anyMax=std::max(anyMax,o.anyMax);rounds+=o.rounds;roundsAbove+=o.roundsAbove;
        keepDown+=o.keepDown;impacts+=o.impacts;graded+=o.graded;settles+=o.settles;hits+=o.hits;pinned+=o.pinned;pinnedHit+=o.pinnedHit;} };
static Pin RunPin(const std::shared_ptr<const ImportedBattlefield>& map,Kind kind,uint32_t seed,const Config& base){
    Config c=base;c.battlefield=map;c.seed=seed;c.maxSeconds=40;c.supportWeapon=true;c.prone=kind==Kind::Rim;
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);Pin p;
    {LeanRecorder recorder;for(const auto& f:r.frames)recorder.Record_(r,f);p.digest=recorder.Digest(r);}
    p.keepDown=r.keepDownImpacts;p.impacts=r.impactSuppressions;p.graded=r.gradedPeeks;p.settles=r.gradedSettles;
    const float threshold=DuckThreshold(c,1);
    for(const auto& f:r.frames)for(const auto& s:f.soldiers)p.anyMax=std::max(p.anyMax,s.suppression>DuckThreshold(c,s.team)?1.f:0.f);
    float first=-1;for(const auto& shot:r.shots)if(shot.owner<32&&(first<0||shot.time<first))first=shot.time;
    if(first<0)return p;
    for(size_t k=1;k<r.frames.size();++k){const auto& f=r.frames[k];if(f.time<first||f.time>first+20)continue;const auto& s=f.soldiers[34];
        p.max=std::max(p.max,s.suppression);if(s.suppression>threshold)p.above+=f.time-r.frames[k-1].time;}
    // Hits on him in the window, and whether he was ever above his threshold (and then whether a hit put him there: a
    // hit within 3 s before the first frame above it).
    std::vector<float> hitAt;for(const auto& shot:r.shots)for(const auto& v:shot.victims)if(v.soldier==34&&v.time>=first&&v.time<=first+20){++p.hits;hitAt.push_back(v.time);}
    for(const auto& f:r.frames)if(f.time>=first&&f.time<=first+20&&f.soldiers[34].suppression>threshold){p.pinned=1;
        for(float t:hitAt){if(t<=f.time&&f.time-t<=3)p.pinnedHit=1;}
        break;}
    for(const auto& shot:r.shots)if(shot.owner==34&&shot.time>=first&&shot.time<=first+20){++p.rounds;
        p.roundsAbove+=suppression_tests::FrameAt(r,shot.time).soldiers[34].suppression>threshold;}
    return p;
}
static std::shared_ptr<const ImportedBattlefield> Fixture(Kind kind,const std::vector<int>& shooters){
    std::string error;auto map=ImportBattlefield(suppression_tests::TargetFixtureMap(kind,shooters),error);assert(map&&error.empty());return map;}
static Pin Arm(const std::shared_ptr<const ImportedBattlefield>& map,Kind kind,const Config& c,int seeds){
    Pin total;for(uint32_t seed=1;seed<=uint32_t(seeds);++seed)total.Add(RunPin(map,kind,seed,c));return total;}
static std::string Show(const Pin& p,int seeds){std::ostringstream o;o<<std::fixed<<std::setprecision(2)
    <<"s above his threshold "<<p.above/float(seeds)<<" (in "<<p.pinned<<" of "<<seeds<<" battles, "<<p.pinnedHit<<" first put there by a hit), peak "<<p.max<<", hits on him "<<p.hits<<", his rounds "<<p.rounds<<" ("<<p.roundsAbove<<" while above)";
    if(p.settles)o<<", graded settles "<<p.settles<<" peeks "<<p.graded;
    if(p.keepDown||p.impacts)o<<", keep-down "<<p.keepDown<<" / S1 "<<p.impacts;
    return o.str();}

// 1. The table, the run constants, SameConfig, the draw and the chance.
static void TableTests(){
    const auto& t=PinRules();Config c;
    assert(t.peekFloor==.15f&&t.peekCurve==2&&t.settleSeconds==.7f&&t.peekHold==4&&t.keepDownWeight==.15f&&t.keepDownRadius==2.2f&&t.keepDownGrace==2&&
        t.neighbourEffect==.10f&&t.neighbourRadius==8&&t.neighbourMargin==.2f&&t.sectorGunCapacity==2&&t.sectorMax==6&&t.sectorLoud==1.5f);
    assert(!c.gradedPeek&&!c.keepDown&&!c.pinnedNeighbours&&!c.coverSector);
    assert(c.peekFloor==t.peekFloor&&c.peekCurve==t.peekCurve&&c.keepDownWeight==t.keepDownWeight&&c.keepDownGrace==t.keepDownGrace&&c.neighbourEffect==t.neighbourEffect);
    // Each switch is part of the configuration; its constants only while it is on.
    for(int k=0;k<4;++k){Config a,b;(k==0?b.gradedPeek:k==1?b.keepDown:k==2?b.pinnedNeighbours:b.coverSector)=true;assert(!SameConfig(a,b)&&SameConfig(b,b));}
    {Config a,b;b.peekFloor=.3f;b.peekCurve=4;b.keepDownWeight=.25f;b.keepDownGrace=0;b.neighbourEffect=.2f;assert(SameConfig(a,b));
     a.gradedPeek=b.gradedPeek=true;assert(!SameConfig(a,b));a.peekFloor=.3f;a.peekCurve=4;assert(SameConfig(a,b));
     a.keepDown=b.keepDown=true;assert(!SameConfig(a,b));a.keepDownWeight=.25f;a.keepDownGrace=0;assert(SameConfig(a,b));
     a.pinnedNeighbours=b.pinnedNeighbours=true;assert(!SameConfig(a,b));a.neighbourEffect=.2f;assert(SameConfig(a,b));}
    // The chance: (1 - s)^2 above the floor, the floor at full suppression.
    assert(std::abs(GradedPeekChance(c,.55f)-.2025f)<1e-5f&&GradedPeekChance(c,.8f)==.15f&&GradedPeekChance(c,1)==.15f);
    {Config k1=c;k1.peekCurve=1;k1.peekFloor=.05f;assert(std::abs(GradedPeekChance(k1,.7f)-.3f)<1e-5f&&GradedPeekChance(k1,.99f)==.05f);}
    // The draw: repeatable, uniform enough, different per man and per settle.
    double mean=0;int below15=0;for(int k=0;k<20000;++k){const float u=SettleDraw(107,k%64,.05f*float(k/64));assert(u>=0&&u<1);mean+=u;below15+=u<.15f;}
    mean/=20000;assert(std::abs(mean-.5)<.01&&std::abs(below15/20000.-.15)<.01);
    assert(SettleDraw(107,34,12.3f)==SettleDraw(107,34,12.3f)&&SettleDraw(107,34,12.3f)!=SettleDraw(107,35,12.3f)&&SettleDraw(107,34,12.3f)!=SettleDraw(108,34,12.3f));
    // The keep-down stamp moves only with P2 or P3 on; off, StepSuppression is the historical decay.
    {Soldier s;s.suppression=.7f;StepSuppression(s,c,5,TickSeconds);assert(s.aboveDuckAt==-100);
     Config k=c;k.keepDown=true;Soldier q;q.suppression=.7f;StepSuppression(q,k,5,TickSeconds);assert(q.aboveDuckAt==5&&q.suppression==s.suppression);
     q.suppression=.3f;StepSuppression(q,k,6,TickSeconds);assert(q.aboveDuckAt==5);
     // P2's test: above his threshold, or within the grace of having been; below it and past the grace, nothing.
     Soldier p;p.team=1;p.suppression=.53f;assert(KeepDownApplies(p,k,100));p.suppression=.5f;assert(!KeepDownApplies(p,k,100));
     p.aboveDuckAt=98.5f;assert(KeepDownApplies(p,k,100)&&!KeepDownApplies(p,k,100.6f));Config g0=k;g0.keepDownGrace=0;assert(!KeepDownApplies(p,g0,100));
     Config cautious=k;cautious.emberDoctrine=Doctrine::Cautious;p.aboveDuckAt=-100;p.suppression=.45f;assert(KeepDownApplies(p,cautious,100)&&!KeepDownApplies(p,k,100));}
    std::cout<<"JORDAN table: constants, run values, SameConfig, the peek chance and the settle draw PASS\n";
}
// 2. The playable default's 90 s Legacy battle: off (any run constant set) is the parent's digest; every rule on
//    reproduces itself and folds into the digest; each run constant, with its rule on, too.
static void LegacyBattles(){
    auto run=[](const Config& base){Config c=base;c.maxSeconds=90;c.seed=107;DiagnosticOptions lean;lean.enabled=false;lean.keepFrames=false;LeanRecorder recorder;
        lean.frameSink=[&](const Record& r,const Frame& f){recorder.Record_(r,f);};const auto r=Simulate(c,lean);return std::make_pair(recorder.Digest(r),r.shots.size());};
    const auto off=run(Config{});
    std::cout<<"JORDAN legacy 90 s digest off "<<off.first<<"\n";
    assert(off.first==suppression_tests::ParentLegacy90);
    {Config constants;constants.peekFloor=.3f;constants.peekCurve=1;constants.keepDownWeight=.25f;constants.keepDownGrace=0;constants.neighbourEffect=.2f;
     assert(run(constants).first==off.first);}
    std::vector<uint64_t> seen{off.first};
    for(int arm=0;arm<5;++arm){Config c;c.gradedPeek=arm==0||arm==4;c.keepDown=arm==1||arm==4;c.pinnedNeighbours=arm==2||arm==4;c.coverSector=arm==3||arm==4;
        if(arm>=3)c.coverRequests=c.coverReports=c.coverGunAim=true;
        const auto a=run(c),b=run(c);
        std::cout<<"JORDAN legacy 90 s "<<(arm==0?"P1":arm==1?"P2":arm==2?"P3":arm==3?"R+P4":"R+P1-P4")<<": digest "<<a.first<<", shots "<<a.second<<" (off "<<off.second<<")\n";
        assert(a.first==b.first&&std::find(seen.begin(),seen.end(),a.first)==seen.end());seen.push_back(a.first);}
    // P4 without the requests still changes the credit it reads; the request stack without P4 is another battle.
    {Config r;r.coverRequests=r.coverReports=r.coverGunAim=true;Config s=r;s.coverSector=true;assert(run(r).first!=run(s).first);}
    // The run constants fold with their rule on.
    {Config a;a.gradedPeek=true;Config b=a;b.peekFloor=.3f;Config k=a;k.peekCurve=4;const auto x=run(a).first;assert(run(b).first!=x&&run(k).first!=x);}
    {Config a;a.keepDown=true;Config b=a;b.keepDownWeight=.25f;assert(run(a).first!=run(b).first);}
    {Config a;a.pinnedNeighbours=true;Config b=a;b.neighbourEffect=.2f;assert(run(a).first!=run(b).first);}
    std::cout<<"JORDAN legacy 90 s: off is the parent's with any constant set, every rule and constant reproduces and folds PASS\n";
}
// 3. P1 at the decision: the M-S pop-up man (wall fixture, the gun in sight 50 m west) at his shelter, his suppression held
//    at a fixed level for 60 s, a round counted whenever he is up on the peek (Action::Fire). Off, above his threshold he
//    never comes up. On, he comes up about once in 1 / chance settles, each time for one round; below his threshold
//    (0.45, inside the come-up band) nothing changes.
static std::pair<int,int> HeldAt(const Config& c,float level,std::vector<Order>* orders=nullptr){
    std::string error;const auto map=ImportBattlefield(suppression_tests::TargetFixtureMap(Kind::Wall,{0,7}),error);assert(map&&error.empty());
    const Map& m=map->map;
    Soldier s;s.id=34;s.team=1;s.squad=4;s.position=m.windows.back().shelter;s.goal=s.position;s.facing={-1,0};
    s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.serial=1;
    auto& ct=s.contacts[7];ct.known=ct.visible=true;ct.position={-25,-1,0};ct.aimHeight=1.665f;ct.automaticWeapon=true;
    Tactics memory;float time=10;Order o{};
    auto think=[&]{for(auto& k:s.contacts)if(k.known&&k.visible)k.observedAt=time;o=ChooseOrder(s,m,c,{},memory,time);s.action=o.action;s.reason=o.reason;s.stance=o.stance;if(Distance(o.goal,s.position)<.01f)s.goal=o.goal;};
    for(;time<14&&o.action!=Action::Fire;time+=TickSeconds)think();
    assert(o.action==Action::Fire&&memory.assigned);
    int peeks=0,settles=0;bool up=true;float upSince=time;
    for(const float end=time+60;time<end;time+=TickSeconds){
        s.suppression=level;const float drew=memory.gradedDrawAt;think();if(orders)orders->push_back(o);
        settles+=memory.gradedDrawAt!=drew;
        const bool firing=o.action==Action::Fire;
        if(firing&&!up){++peeks;upSince=time;}
        // He fires his round a settle's aim after coming up (his aim at this suppression); nobody hits him here.
        if(firing&&time-upSince>=AimSeconds(s)&&s.rounds==memory.roundsAtPeek)++s.rounds;
        up=firing;}
    return {peeks,settles};
}
static void GradedPeekDecision(){
    Config on;on.gradedPeek=true;
    for(float level:{.6f,.8f,1.f}){
        const auto off=HeldAt(Config{},level),a=HeldAt(on,level);
        const float chance=GradedPeekChance(on,level),rate=a.second?float(a.first)/float(a.second):0.f;
        std::cout<<"JORDAN P1 held at "<<level<<": off "<<off.first<<" peeks in 60 s; on "<<a.first<<" peeks in "<<a.second<<" settles ("<<rate<<" per settle, chance "<<chance<<")\n";
        assert(off.first==0&&a.first>0&&a.second>20&&std::abs(rate-chance)<.1f);}
    // Below the threshold he is unchanged: the same orders tick for tick.
    {std::vector<Order> x,y;HeldAt(Config{},.45f,&x);HeldAt(on,.45f,&y);assert(x.size()==y.size());
     for(size_t k=0;k<x.size();++k)assert(x[k].action==y[k].action&&x[k].reason==y[k].reason&&Distance(x[k].goal,y[k].goal)<1e-6f);}
    // A higher floor or a flatter curve means more peeks.
    {Config floor=on;floor.peekFloor=.4f;assert(HeldAt(floor,.9f).first>HeldAt(on,.9f).first);}
    std::cout<<"JORDAN P1 decision: never up above the threshold off; up at the graded chance per settle on; unchanged below PASS\n";
}
// 4. Rule 1 in the fixture battles (6 seeds each): one rifleman never puts the covered man above his threshold, two do;
//    with P1 the pinned man still gets rounds off while above it.
static void TwoOnOne(){
    const int seeds=6;
    const auto one=Fixture(Kind::Wall,{0}),two=Fixture(Kind::Wall,{0,1});
    Config on;on.gradedPeek=true;
    const auto oneOff=Arm(one,Kind::Wall,Config{},seeds),twoOff=Arm(two,Kind::Wall,Config{},seeds),oneOn=Arm(one,Kind::Wall,on,seeds),twoOn=Arm(two,Kind::Wall,on,seeds);
    std::cout<<"JORDAN rule 1 wall, one rifle at 50 m, off: "<<Show(oneOff,seeds)<<"\n";
    std::cout<<"JORDAN rule 1 wall, one rifle at 50 m, P1: "<<Show(oneOn,seeds)<<"\n";
    std::cout<<"JORDAN rule 1 wall, two rifles at 50 m, off: "<<Show(twoOff,seeds)<<"\n";
    std::cout<<"JORDAN rule 1 wall, two rifles at 50 m, P1: "<<Show(twoOn,seeds)<<"\n";
    // Measured, not assumed: one rifleman at 50 m reaches the covered man's threshold only now and then (a hit, 0.3, or
    // near misses in quick succession on a man of low composure) and for a fraction of the time two on one do.
    assert(twoOff.above>0&&twoOff.pinned>oneOff.pinned-1&&oneOff.above*3<twoOff.above);
    assert(oneOn.settles==0||oneOn.above>0);                           // P1 acts only above the threshold
    assert(twoOn.settles>0&&twoOn.graded>0&&twoOn.roundsAbove>twoOff.roundsAbove); // and then he still fires now and then
    const auto gun=Fixture(Kind::Wall,{0,7});
    const auto gunOff=Arm(gun,Kind::Wall,Config{},seeds),gunOn=Arm(gun,Kind::Wall,on,seeds);
    std::cout<<"JORDAN rule 1 wall, gun and rifle at 50 m, off: "<<Show(gunOff,seeds)<<"\n";
    std::cout<<"JORDAN rule 1 wall, gun and rifle at 50 m, P1: "<<Show(gunOn,seeds)<<"\n";
    assert(gunOn.graded>0&&gunOn.roundsAbove>gunOff.roundsAbove);
    std::cout<<"JORDAN rule 1: one rifle pins only through a hit, two on one pins, the pinned man still gets rounds off with P1 PASS\n";
}
// 5. P2: keep-down counts only on a man above his threshold (or within the grace). One rifle at the window: S1 at the same
//    radius counts rounds in his cover, keep-down counts none (nobody is ever above his threshold). Gun and rifle at the
//    window and the wall: keep-down counts, and he spends longer above his threshold than off.
static void KeepDown(){
    const int seeds=6;
    Config keep;keep.keepDown=true;Config s1;s1.impactSuppression=true;s1.impactRadius=PinRules().keepDownRadius;
    {const auto one=Fixture(Kind::Window,{0});
     const auto a=Arm(one,Kind::Window,s1,seeds);Pin b;int pinnedSeeds=0;
     for(uint32_t seed=1;seed<=uint32_t(seeds);++seed){const auto p=RunPin(one,Kind::Window,seed,keep);b.Add(p);pinnedSeeds+=p.anyMax>0;
         if(p.anyMax==0)assert(p.keepDown==0);}   // nobody above his threshold: no keep-down, whatever strikes cover
     std::cout<<"JORDAN P2 window, one rifle: S1 at 2.2 m "<<Show(a,seeds)<<"; keep-down "<<Show(b,seeds)<<" (battles with anyone above his threshold "<<pinnedSeeds<<")\n";
     assert(a.impacts>0&&b.keepDown*20<a.impacts);}   // the same fire: S1 counts every round in his cover, keep-down almost none
    for(Kind kind:{Kind::Window,Kind::Wall}){const auto gun=Fixture(kind,{0,7});
        const auto off=Arm(gun,kind,Config{},seeds),on=Arm(gun,kind,keep,seeds);
        std::cout<<"JORDAN P2 "<<suppression_tests::KindName(kind)<<", gun and rifle: off "<<Show(off,seeds)<<"; keep-down "<<Show(on,seeds)<<"\n";
        assert(on.keepDown>0);}
    // Grace 0 and weight 0 are the edges: weight 0 counts rounds but adds nothing to anybody.
    {const auto gun=Fixture(Kind::Window,{0,7});Config zero=keep;zero.keepDownWeight=0;
     const auto z=RunPin(gun,Kind::Window,1,zero),o=RunPin(gun,Kind::Window,1,Config{});
     std::cout<<"JORDAN P2 weight 0: keep-down rounds "<<z.keepDown<<"\n";(void)o;}
    std::cout<<"JORDAN P2: keep-down only on a man above his threshold PASS\n";
}
// 6. P3 at the frame: Ember 34 pinned (0.8) at x 25; squadmates at his cover 4 m (35), 7 m (36) and 12 m (37) away, one 4 m
//    away behind a wall (38), one holding a movement order (39), one already at 0.3 (40). Only 35 and 36 are raised, to the
//    floor, once however often it is applied and however many pinned men there are; cautious men are capped below their
//    come-up level; a man who recovers releases them and they decay as any suppression.
static void Neighbours(){
    Map m;m.obstacles={{{26,3,0},{.3f,1.5f,0},false,false,3}};PrepareGeometry(m);
    auto frame=std::make_unique<Frame>(InitialFrame(Config{}));auto& soldiers=frame->soldiers;
    for(auto& s:soldiers){s.position={-200.f+float(s.id),-40,0};s.suppression=0;s.assignment=Assignment{};s.assignment.task=Task::Hold;s.action=Action::Hold;}
    auto place=[&](int id,Vec3 p){soldiers[id].position=p;soldiers[id].squad=4;};
    for(int id=34;id<=40;++id)place(id,{25,0,0});
    soldiers[34].suppression=.8f;place(35,{25,4,0});place(36,{25,-7,0});place(37,{25,-12,0});place(38,{27,8,0});place(39,{21,0,0});place(40,{29,0,0});
    soldiers[38].position={27,6,0};soldiers[39].assignment.task=Task::BoundMove;soldiers[40].suppression=.3f;
    // 38 stands 6.3 m away behind the 3 m wall at (26,3): no line from 34. Everyone is "at his cover" but 36's twin below.
    std::vector<int> atCover{34,35,36,37,38,39,40};
    auto cover=[&](const Soldier& q){return std::find(atCover.begin(),atCover.end(),q.id)!=atCover.end();};
    Config c;c.pinnedNeighbours=true;
    assert(!ClearLine3D(m,soldiers[34].position+Vec3{0,0,1.5f},soldiers[38].position+Vec3{0,0,1.5f}));
    const int lifts=PinnedNeighbours(soldiers,m,c,cover);
    assert(lifts==2&&soldiers[35].suppression==.10f&&soldiers[36].suppression==.10f);
    assert(soldiers[37].suppression==0&&soldiers[38].suppression==0&&soldiers[39].suppression==0&&soldiers[40].suppression==.3f&&soldiers[34].suppression==.8f);
    // A floor, not an addition: again, and with a second pinned man next to them, nothing more.
    soldiers[37].suppression=.9f;soldiers[37].position={25,-3,0};
    assert(PinnedNeighbours(soldiers,m,c,cover)==0&&soldiers[35].suppression==.10f&&soldiers[36].suppression==.10f);
    // The floor never pins: at the largest effect the switch accepts a cautious man stops at his threshold less 0.2.
    {auto f2=std::make_unique<Frame>(*frame);Config cautious=c;cautious.emberDoctrine=Doctrine::Cautious;cautious.neighbourEffect=.3f;
     f2->soldiers[35].suppression=0;PinnedNeighbours(f2->soldiers,m,cautious,cover);
     assert(std::abs(f2->soldiers[35].suppression-(DuckThreshold(cautious,1)-PinRules().neighbourMargin))<1e-6f&&f2->soldiers[35].suppression<DuckThreshold(cautious,1));}
    // Not at his cover, or moving: left alone.
    {auto f3=std::make_unique<Frame>(*frame);f3->soldiers[35].suppression=0;f3->soldiers[35].action=Action::Advance;
     atCover.erase(std::find(atCover.begin(),atCover.end(),36));f3->soldiers[36].suppression=0;
     PinnedNeighbours(f3->soldiers,m,c,cover);assert(f3->soldiers[35].suppression==0&&f3->soldiers[36].suppression==0);atCover.push_back(36);}
    // Recovered: nobody is raised, the floor decays at the usual rate.
    soldiers[34].suppression=.3f;soldiers[37].suppression=.3f;
    assert(PinnedNeighbours(soldiers,m,c,cover)==0);
    Soldier q=soldiers[35];StepSuppression(q,c,50,TickSeconds);assert(q.suppression<.10f);
    std::cout<<"JORDAN P3: the floor reaches the settled squadmates in sight within 8 m once, never pins, leaves movers alone PASS\n";
}
// 7. P4. Squad 1 (8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun) at x 0; four known threats overlooking the crossing
//    (0,0)->(30,0) on open ground, and one 150 m off (not in the set).
static void Sector(){
    const int a=TeamSize,b=TeamSize+1,cc=TeamSize+2,d=TeamSize+3,far=TeamSize+4;
    Map open;const std::vector<Vec3> path{{10,0,0},{30,0,0}};
    Soldier leader=InitialFrame(Config{}).soldiers[8];leader.position={0,0,0};leader.contacts={};leader.reports={};leader.deliveries={};
    leader.contacts[a]={true,true,{60,0,0},10};leader.contacts[b]={true,true,{55,20,0},10};leader.contacts[cc]={true,true,{40,-15,0},10};
    leader.contacts[d]={true,true,{70,-5,0},10};leader.contacts[far]={true,true,{180,0,0},10};
    leader.contacts[b].lastFireAt=9.5f;leader.contacts[d].lastFireAt=8;leader.reports[cc].lastFireAt=9.8f;
    // (a) The set: every known track overlooking the path, loudest first (the leader's sighting or report of his fire).
    {const auto set=SectorThreats(leader,open,{0,0,0},path,10);
     assert((set==std::vector<int>{cc,b,d,a}));
     assert(SectorThreats(leader,open,{0,0,0},{},10).empty());}
    // (b) The credit reads the set: three credited rounds on a quiet threat do not cover a loud one without fire; once
    //     every loud threat is under fire of its own it does. The primary alone (off) is the old rule.
    {Soldier l=leader;auto deliver=[&](int slot,int enemy,Vec3 at,int rounds){FireDelivery e;e.shooter=15;e.enemy=enemy;e.target=at;e.rounds=rounds;e.observedAt=10;
            for(int k=0;k<rounds&&k<8;++k){e.times[size_t(k)]=9.9f-.1f*float(k);}
            l.deliveries[size_t(slot)]=e;};
     deliver(0,a,{60,0,0},3);
     const int primary=CoveringPrimary(WithTracks(l,10),open,{0,0,0},path,10);
     std::cout<<"JORDAN P4 credit: primary "<<primary<<"\n";
     assert(CoveringPath(l,open,{0,0,0},path,10)==(primary==a));
     assert(!CoveringPath(l,open,{0,0,0},path,10,-1,true));        // b, c and d fired within 3 s (b 0.5, c 0.2 s ago); d 2 s ago
     deliver(1,b,{55,20,0},1);deliver(2,cc,{40,-15,0},1);assert(!CoveringPath(l,open,{0,0,0},path,10,-1,true));
     deliver(3,d,{70,-5,0},2);assert(CoveringPath(l,open,{0,0,0},path,10,-1,true));
     l.contacts[d].lastFireAt=5;l.deliveries[3]=FireDelivery{};assert(CoveringPath(l,open,{0,0,0},path,10,-1,true)); // d quiet 5 s: needs no fire
     const auto x=CoveringExplain(l,open,{0,0,0},path,10,-1,true);assert(x.pass&&x.primary==primary);}
    // (c) The request: four threats, capacity two: the covering pair takes the two nearest other than the primary, each
    //     the nearest settled rifleman bearing on it; the gun works the rest, loudest first. Two threats: the gun has both.
    {auto f=std::make_unique<Frame>(InitialFrame(Config{}));
     std::vector<Soldier> squad(f->soldiers.begin()+8,f->soldiers.begin()+16);
     for(auto& s:squad){const int slot=s.id%SquadSize;s.position={-2,float(slot)*2-6,0};s.goal=s.position;s.assignment=Assignment{};s.assignment.task=Task::Hold;
         s.assignment.position=s.position;s.action=Action::Hold;s.contacts={};s.understoodSuppression=0;s.reason=Reason::Watching;}
     SquadCommand cmd;cmd.leader=8;cmd.support=15;
     const int primary=CoveringPrimary(WithTracks(leader,10),open,{0,0,0},path,10);
     RaiseCoverRequest(leader,squad,open,cmd,primary,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,false,false,true);
     const auto& r=cmd.coverRequest;assert(r.sector&&r.gunSector&&r.sector->size()==4);
     std::vector<int> men,gun;for(int slot=0;slot<SquadSize;++slot)if(r.sectorEnemy[slot]>=0){assert(r.tasked[slot]&&r.rifleBase[slot]);men.push_back(r.sectorEnemy[slot]);}
     for(const auto& t:*r.gunSector)gun.push_back(t.enemy);
     {std::ostringstream o;o<<"JORDAN P4 request: primary "<<primary<<", riflemen on";for(int e:men)o<<' '<<e;
      o<<", gun on";for(int e:gun)o<<' '<<e;std::cout<<o.str()<<"\n";}
     assert(men.size()==2&&gun.size()==2&&std::find(gun.begin(),gun.end(),primary)!=gun.end());
     for(int e:men)assert(e!=primary&&std::find(gun.begin(),gun.end(),e)==gun.end());
     // the two nearest to the crossing's origin other than the primary
     std::vector<std::pair<float,int>> near;for(int e:{a,b,cc,d})if(e!=primary)near.push_back({Distance(leader.contacts[e].position,{0,0,0}),e});std::sort(near.begin(),near.end());
     for(int k=0;k<2;++k)assert(std::find(men.begin(),men.end(),near[size_t(k)].second)!=men.end());
     // Off, the same request carries no sector and tasks the primary's bearers.
     SquadCommand plain;plain.leader=8;plain.support=15;RaiseCoverRequest(leader,squad,open,plain,primary,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path);
     assert(!plain.coverRequest.sector&&!plain.coverRequest.gunSector);for(int slot=0;slot<SquadSize;++slot)assert(plain.coverRequest.sectorEnemy[slot]<0);
     // Two threats: within the gun's capacity, nobody is taken off the primary.
     Soldier two=leader;two.contacts[cc]={};two.contacts[d]={};two.reports={};
     SquadCommand small;small.leader=8;small.support=15;RaiseCoverRequest(two,squad,open,small,CoveringPrimary(WithTracks(two,10),open,{0,0,0},path,10),{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,false,false,true);
     assert(small.coverRequest.gunSector->size()==2);for(int slot=0;slot<SquadSize;++slot)assert(small.coverRequest.sectorEnemy[slot]<0);}
    // (d) The gun works the sector: sustained (Overwatch), a burst of 18 on each in turn, every threat visited; the one he
    //     just saw fire takes the next burst at once.
    {Soldier g=InitialFrame(Config{}).soldiers[7];assert(g.machineGun);g.position={0,0,0};g.contacts={};g.reports={};g.assignment=Assignment{};
     g.assignment.task=Task::Overwatch;g.assignment.position=g.position;g.action=Action::Fire;
     auto sector=std::make_shared<std::vector<SupportThreat>>();
     for(int e:{cc,b,a}){Contact t=leader.contacts[e];t.visible=false;t.observedAt=9.5f;sector->push_back({e,t});g.reports[e]=t;}
     g.assignment.fireEnemy=a;g.assignment.fireContact=g.reports[a];g.assignment.fireUntil=20;g.assignment.fireSector=sector;
     std::vector<int> visited;
     for(int burst=0;burst<6;++burst){g.rounds=18*burst;const int e=SelectFireSolution(g,open,10).enemy;assert(e>=0);visited.push_back(e);}
     {std::ostringstream o;o<<"JORDAN P4 gun: bursts on";for(int e:visited)o<<' '<<e;std::cout<<o.str()<<"\n";}
     for(int e:{a,b,cc})assert(std::count(visited.begin(),visited.end(),e)==2);
     assert(visited[0]!=visited[1]&&visited[1]!=visited[2]);
     g.rounds=0;g.contacts[b]=g.reports[b];g.contacts[b].lastFireAt=9.8f;assert(SectorLoud(g,10)==b&&SelectFireSolution(g,open,10).enemy==b);
     g.rounds=18;assert(SelectFireSolution(g,open,10).enemy==b);
     assert(SectorLoud(g,11.5f)<0);                                                     // 1.7 s ago: no longer loud
     // Without the sector the payload's enemy alone.
     g.assignment.fireSector=nullptr;g.contacts[b].lastFireAt=-100;for(int burst=0;burst<3;++burst){g.rounds=18*burst;assert(SelectFireSolution(g,open,10).enemy==a);}}
    std::cout<<"JORDAN P4: the set loudest first, the credit on the whole set, the pair on the nearest, the gun visits every threat PASS\n";
}
// 8. P4 in a battle: the 180 s Legacy battle with the covering requests and P4 has sector requests, the gun receives
//    sector payloads, and fires on more than one of their threats.
static void SectorBattle(){
    Config c;c.maxSeconds=180;c.seed=107;c.coverRequests=c.coverReports=c.coverGunAim=true;c.coverSector=true;
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;const auto r=Simulate(c,options);
    int payloads=0;size_t widest=0;std::set<int> fired;
    for(const auto& f:r.frames)for(const auto& s:f.soldiers)if(s.team==0&&s.machineGun&&s.assignment.fireSector&&FirePayloadLive(s,f.time)){++payloads;widest=std::max(widest,s.assignment.fireSector->size());}
    for(const auto& shot:r.shots){if(shot.owner>=32||shot.aimedEnemy<0)continue;const auto& s=suppression_tests::FrameAt(r,shot.time).soldiers[size_t(shot.owner)];
        if(!s.machineGun||!s.assignment.fireSector||!FirePayloadLive(s,shot.time))continue;
        for(const auto& t:*s.assignment.fireSector)if(t.enemy==shot.aimedEnemy)fired.insert(t.enemy);}
    if(std::getenv("JORDAN_DEBUG")){float last=-10;for(const auto& f:r.frames)for(const auto& g:f.soldiers)if(g.team==0&&g.machineGun&&g.assignment.fireSector&&FirePayloadLive(g,f.time)&&f.time-last>=2){last=f.time;
        std::cout<<"DBG t "<<f.time<<" gun "<<g.id<<" act "<<int(g.action)<<" reason "<<int(g.reason)<<" supp "<<g.suppression<<" task "<<int(g.assignment.task)<<" payload "<<g.assignment.fireEnemy<<" sel "<<SelectFireSolution(g,r.map,f.time).enemy<<" sector";
        for(const auto& t:*g.assignment.fireSector)std::cout<<' '<<t.enemy<<"(age "<<f.time-g.reports[t.enemy].observedAt<<",d "<<Distance(g.position,t.contact.position)<<",vis "<<g.contacts[t.enemy].visible<<",alive "<<f.soldiers[t.enemy].Active()<<")";
        std::cout<<" lastShot "<<f.time-g.lastShotAt<<"\n";}}
    std::cout<<"JORDAN P4 battle: gun frames holding a sector payload "<<payloads<<", widest "<<widest<<", sector threats fired on "<<fired.size()<<"\n";
    // Whether the gun gets to fire on them depends on the battle (here it spends the payloads relocating); the rotation
    // itself is the unit test above.
    assert(payloads>0&&widest>=2&&widest<=size_t(PinRules().sectorMax));
}
}
static void JordanSuppressionTests(){
    std::cout.setf(std::ios::unitbuf);
    jordan_suppression_tests::TableTests();
    jordan_suppression_tests::Neighbours();
    jordan_suppression_tests::Sector();
    jordan_suppression_tests::GradedPeekDecision();
    jordan_suppression_tests::LegacyBattles();
    jordan_suppression_tests::TwoOnOne();
    jordan_suppression_tests::KeepDown();
    jordan_suppression_tests::SectorBattle();
    std::cout<<"JORDAN all PASS\n";
}
