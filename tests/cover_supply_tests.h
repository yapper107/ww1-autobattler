// Plan 028 Stage 4, "finish the supply side" (Config::coverGunAim, Config::coverShift,
// Config::coverPlatoon; Legacy only): the gun aimed at the crossing's threat, short covered shifts for
// covering riflemen and the platoon's support squad aimed at the mover's threat. Mechanism assertions
// only, never a battle outcome. Squad 1 (team 0): 8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun.
#pragma once
#include "group_tests.h"
#include "Diagnostics.h"
static void CoverSupplyTests(){
    using namespace army;
    const int enemy=TeamSize,west=TeamSize+1;
    auto lowWall=[](Map& m,float x,float y){m.obstacles.push_back({{x,y,0},{.6f,1.6f,0},false,true,1.1f});};
    auto tallWall=[](Map& m,float x,float y,float halfY){m.obstacles.push_back({{x,y,0},{.3f,halfY,0},false,false,3.f});};
    // A squad 1 standing still at `positions` (slots 0..7), every man knowing the enemies given.
    auto squadAt=[&](Frame& f,std::array<Vec3,SquadSize> positions,std::initializer_list<std::pair<int,Vec3>> enemies,float seen){
        for(int id=8;id<16;++id){auto& s=f.soldiers[id];s.position=positions[id%SquadSize];s.goal=s.position;s.contacts={};s.reports={};
            s.assignment=Assignment{};s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.serial=1;s.action=Action::Hold;
            s.understoodSuppression=0;s.reason=Reason::AwaitOrders;
            for(const auto& [who,at]:enemies){s.contacts[who]={true,true,at,seen};s.contacts[who].aimHeight=1.45f;}}
        auto& cmd=f.command[1];cmd=SquadCommand{};cmd.leader=8;cmd.support=15;cmd.advancing=true;cmd.engaged=true;cmd.mission={20,0,0};
        return std::vector<Soldier>(f.soldiers.begin()+8,f.soldiers.begin()+16);
    };
    auto request=[&](SquadCommand& cmd,const Soldier& leader,int who,float until,std::vector<Vec3> crossing){
        auto& r=cmd.coverRequest;r=CoverRequest{};r.enemy=who;r.serial=1;r.requester=8;r.startedAt=0;r.until=until;r.gate="commit";
        r.contact=leader.contacts[who];r.contact.visible=false;r.from=crossing.front();r.to=crossing.back();
        r.crossing=std::make_shared<const std::vector<Vec3>>(crossing);
    };
    auto gunOrder=[](const std::vector<PlannedOrder>& orders){for(const auto& o:orders)if(o.recipient==15)return o;return PlannedOrder{-1,Task::None,{},{},{}};};
    // 1. The gun (coverGunAim). The named enemy is east at (50,0); a tall wall at x=-3 hides it from the
    //    gun's low-walled station at (-6,0), which bears west on a second enemy (so it would be kept); a
    //    short tall wall at x=-13.5 screens the ground north-west of him from that one.
    //    A low-walled place at (-10,5), 6.4 m off, bears on the named enemy and is reached behind the tall
    //    wall: the gun is re-stationed there at once, sector and payload on the threat. Credited with fire
    //    on it by the leader's own reports, he is not moved. A place 30 m off, or one reached over open
    //    ground, is refused: he keeps his station.
    auto gunGround=[&](int variant){Map m;tallWall(m,-3,0,3);lowWall(m,-7.2f,-1);tallWall(m,-13.5f,4.75f,3.25f);
        if(variant==0){lowWall(m,-8.8f,5);lowWall(m,-11.2f,5);}                 // the covered place, 6.4 m off
        if(variant==1){lowWall(m,-4.8f,30);lowWall(m,-7.2f,30);}                 // the same kind of place 30 m off
        if(variant==2){lowWall(m,-8.8f,15);lowWall(m,-11.2f,15);}                 // 15.5 m off, most of the way in the open
        PrepareGeometry(m);return m;};
    auto gunCase=[&](const Map& m,bool aim,bool credited,Vec3& to,float& revealed){
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
        auto squad=squadAt(f,{{{-5,0,0},{0,0,0},{0,-2,0},{0,2,0},{0,-4,0},{0,4,0},{0,-6,0},{-6,0,0}}},{{enemy,{50,0,0}},{west,{-60,0,0}}},9.5f);
        auto& cmd=f.command[1];const int slot=15%SquadSize;
        cmd.stations.held[slot]=true;cmd.stations.station[slot]={-6,0,0};cmd.stations.supportStationFor=15;
        f.soldiers[15].assignment.task=Task::Overwatch;squad[7]=f.soldiers[15];
        request(cmd,f.soldiers[8],enemy,20,{{0,0,0},{25,0,0}});
        if(credited){FireDelivery d;d.shooter=15;d.enemy=enemy;d.rounds=3;d.target={50,0,0};d.observedAt=9;d.times={{9,8.9f,8.8f,-100,-100,-100,-100,-100}};
            RememberDelivery(f.soldiers[8],d,true);}
        Config c;c.coverRequests=true;c.coverGunAim=aim;
        Soldier walker=WithTracks(f.soldiers[8],10);walker.position=f.soldiers[15].position;walker.machineGun=true;walker.understoodHealth=100;
        const auto o=gunOrder(PlanSquad(f.soldiers[8],squad,m,c,cmd,10));
        assert(o.recipient==15&&o.fire&&Distance(o.sector,{50,0,0})<.01f);
        to=o.position;revealed=-1;
        if(Distance(to,{-6,0,0})>.5f)CoveredWay(walker,m,{-6,0,0},to,100,100,10,&revealed);
        return Distance(to,{-6,0,0})>.5f;
    };
    {Vec3 to{};float revealed=0;const Map m=gunGround(0);
        assert(!gunCase(m,false,false,to,revealed));                          // off: the Stage 1 gun keeps his station (8 s rule)
        assert(gunCase(m,true,false,to,revealed));                            // on: re-stationed at once
        const float travel=Distance(to,{-6,0,0});
        assert(travel<=CoverSupplyConstants.gunAimRange&&BearsOnTrack(m,to,Contact{true,false,{50,0,0},9.5f})&&revealed>=0&&revealed<=Caution().revealedSeconds);
        std::cout<<"Gun aim: re-stationed "<<travel<<" m to bear on the named enemy, revealed "<<revealed<<" s on the way\n";
        Vec3 kept{};assert(!gunCase(m,true,true,kept,revealed));              // credited: never moved
        const Map far=gunGround(1);assert(!gunCase(far,true,false,kept,revealed));
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
        const Map open=gunGround(2);assert(!gunCase(open,true,false,kept,revealed));
        // The refusals are the rules' own: without the reach and covered-way limits the allocator finds
        // the far place and the open one.
        Soldier leader=f.soldiers[8];leader.contacts={};leader.contacts[enemy]={true,true,{50,0,0},9.5f};leader.contacts[enemy].aimHeight=1.45f;
        leader.contacts[west]={true,true,{-60,0,0},9.5f};leader.contacts[west].aimHeight=1.45f;
        Soldier gun=f.soldiers[15];gun.position={-6,0,0};
        Vec3 a{},b{};
        assert(GroupStation(leader,gun,StationKind::Support,{0,0,0},{50,0,0},{},far,10,a,GroupConstants.standOff,0,enemy)&&Distance(a,{-6,0,0})>25);
        assert(GroupStation(leader,gun,StationKind::Support,{0,0,0},{50,0,0},{},open,10,b,GroupConstants.standOff,0,enemy));
        Soldier walker=WithTracks(leader,10);walker.position=gun.position;walker.machineGun=true;walker.understoodHealth=100;
        float exposed=0;assert(!CoveredWay(walker,open,gun.position,b,100,Caution().revealedSeconds,10,&exposed));
        std::cout<<"Gun aim: a place "<<Distance(a,gun.position)<<" m off and one revealed "<<exposed<<" s on the way are refused; credited, he stays\n";
    }
    // 2. Covered rifle shifts (coverShift). The named enemy is east at (50,0); tall wall segments at x=1.2
    //    hide it from every rifleman. Low walls in their gaps give places at (0,12), (0,-24) and (0,-40)
    //    that bear on it; riflemen 10, 11 and 12 each stand about 6 m from one of them. Two are shifted (the nearest moves, roster slot on a
    //    tie), into cover with a line, 8 m or less; never a pinned man; never onto the crossing.
    auto shiftGround=[&](){Map m;tallWall(m,1.2f,-1,9);tallWall(m,1.2f,-18,2);tallWall(m,1.2f,-34,2);
        lowWall(m,1.2f,12);lowWall(m,1.2f,-24);lowWall(m,1.2f,-40);PrepareGeometry(m);return m;};
    auto shiftSquad=[&](Frame& f){return squadAt(f,{{{-5,0,0},{0,0,0},{0,6,0},{0,-18,0},{0,-34,0},{0,-5,0},{0,-8,0},{-6,-2,0}}},{{enemy,{50,0,0}}},9.5f);};
    {const Map m=shiftGround();
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;auto squad=shiftSquad(f);auto& cmd=f.command[1];const std::vector<Vec3> path{{30,0,0}};
        RaiseCoverRequest(f.soldiers[8],squad,m,cmd,enemy,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,true);
        const auto& r=cmd.coverRequest;int shifted=0,tasked=0;
        for(int slot=0;slot<SquadSize;++slot){tasked+=r.tasked[slot];if(!r.shift[slot])continue;++shifted;
            const Vec3 from=squad[slot].position,to=r.shiftTo[slot];
            assert(r.tasked[slot]&&Distance(from,to)<=CoverSupplyConstants.shiftRange&&Distance(from,to)>=CoverSupplyConstants.shiftMin);
            bool cover=false;for(const auto& c:CoverPositions(m))if(Distance(c.shelter,to)<.1f){cover=true;
                assert(ProtectedAt(m,c.shelter,{50,0,0},c.crouch?Stance::Crouched:Stance::Standing)&&ClearLine3D(m,c.peek+Vec3{0,0,1.5f},{50,0,1.45f}));}
            assert(cover&&OffCrossing(*r.crossing,from,to));}
        assert(shifted==2&&tasked==2&&r.shift[2]&&r.shift[3]&&!r.shift[4]);
        // Without the switch nobody is shifted and nobody bears: nobody answers.
        SquadCommand plain=cmd;plain.coverRequest=CoverRequest{};
        RaiseCoverRequest(f.soldiers[8],squad,m,plain,enemy,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,false);
        for(int slot=0;slot<SquadSize;++slot)assert(!plain.coverRequest.shift[slot]&&!plain.coverRequest.tasked[slot]);
        // A pinned man is never shifted: the next one is.
        {auto g=std::make_unique<Frame>(InitialFrame(Config{}));auto pinned=shiftSquad(*g);pinned[2].understoodSuppression=.5f;
        RaiseCoverRequest(g->soldiers[8],pinned,m,g->command[1],enemy,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,true);
        assert(!g->command[1].coverRequest.shift[2]&&g->command[1].coverRequest.shift[3]&&g->command[1].coverRequest.shift[4]);}
        // Never onto the crossing: with the crossing running along y=-24, the place there is refused.
        {auto h=std::make_unique<Frame>(InitialFrame(Config{}));auto across=shiftSquad(*h);const std::vector<Vec3> lane{{40,-24,0}};
        RaiseCoverRequest(h->soldiers[8],across,m,h->command[1],enemy,{-10,-24,0},{40,-24,0},0,"commit",10,nullptr,&lane,true);
        assert(!h->command[1].coverRequest.shift[3]);}
        // ... and not during a running bound (the commit wait only).
        {auto k=std::make_unique<Frame>(InitialFrame(Config{}));auto bound=shiftSquad(*k);
        RaiseCoverRequest(k->soldiers[8],bound,m,k->command[1],enemy,{0,0,0},{30,0,0},1,"bound",10,nullptr,&path,true);
        for(int slot=0;slot<SquadSize;++slot)assert(!k->command[1].coverRequest.shift[slot]);}
        std::cout<<"Shift: two men shifted "<<Distance(squad[2].position,r.shiftTo[2])<<" m and "<<Distance(squad[3].position,r.shiftTo[3])
                 <<" m into cover with a line; none pinned, none onto the crossing\n";
        // The relay sends him there once with the payload and the shift mark, holds it as his station,
        // and a man given it gives up his cover for it and takes the new cover's firing edge.
        auto gfp=std::make_unique<GroupFixture>();GroupFixture& gf=*gfp;gf.map=m;gf.frame=f;gf.config.coverRequests=gf.config.coverShift=true;
        for(int squad2=0;squad2<SquadCount;++squad2)gf.runtime.nextPlan[squad2]=gf.runtime.lastPlanAt[squad2]=1e9f;
        gf.frame.time=10;gf.frame.soldiers[9].assignment.task=Task::Hold;gf.frame.command[1].coverRequest.until=40;
        RunRelay(gf,13);
        const auto sent=gf.runtime.lastSent[10];
        assert(sent.issuer==9&&sent.task==Task::Hold&&Distance(sent.position,r.shiftTo[2])<.01f&&sent.fireShift&&sent.fireEnemy==enemy);
        const int serial=sent.serial;RunRelay(gf,17);assert(gf.runtime.lastSent[10].serial==serial);   // held, not re-sent
        assert(gf.frame.command[1].stations.shiftSerial[2]==gf.frame.command[1].stations.serial);
        // The request lapses: the place stays his station for this objective; he is not walked back.
        gf.frame.command[1].coverRequest.until=17.5f;RunRelay(gf,24);
        assert(Distance(gf.runtime.lastSent[10].position,r.shiftTo[2])<.01f);
        Soldier man=f.soldiers[10];man.assignment=sent;man.assignment.fireUntil=40;man.reports[enemy]=man.contacts[enemy];
        Tactics memory;Soldier understood=WithReports(man,11);
        auto order=ChooseOrder(understood,m,Config{},{},memory,11);
        assert(memory.assigned&&Distance(memory.shelter,r.shiftTo[2])<.01f&&order.action==Action::Cover&&Distance(order.goal,r.shiftTo[2])<.01f);
        man.assignment.fireShift=false;Tactics plainMemory;understood=WithReports(man,11);ChooseOrder(understood,m,Config{},{},plainMemory,11);
        assert(!(plainMemory.assigned&&Distance(plainMemory.shelter,r.shiftTo[2])<.01f));
        std::cout<<"Shift: sent once as a Hold on the new cover with the payload, kept after the request lapses; the man takes that cover\n";
    }
    // 3. The platoon (coverPlatoon). Squads 0-2 of team 0 report to their commander. Squad 2 (no gun)
    //    is the mover. The enemy engaging squad 0 is at (60,0); a second, (30,30), overlooks the mover's
    //    way. Squad 0 is nearest the engaged enemy and was the old rule's base of fire, but a tall wall
    //    hides (30,30) from it; squad 1's men see it. Aimed, squad 1 is the support, and its directive
    //    names (30,30) with the commander's own track of it and the mover's leader.
    {Map m;tallWall(m,8,8,4);lowWall(m,0,60);lowWall(m,0,-60);lowWall(m,20,55);lowWall(m,20,-55);PrepareGeometry(m);
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;Soldier commander=f.soldiers[5];commander.contacts={};commander.reports={};
        const int effort=TeamSize,over=TeamSize+2;
        commander.contacts[effort]={true,false,{60,0,0},9};commander.contacts[effort].aimHeight=1.45f;
        commander.contacts[over]={true,false,{30,30,0},9.5f};commander.contacts[over].aimHeight=1.45f;commander.contacts[over].automaticWeapon=true;
        const Vec3 centres[3]={{0,0,0},{0,40,0},{-10,-20,0}};
        for(int n=0;n<3;++n){auto& r=commander.platoonReports[n];r=SquadSituation{};r.squad=n;r.leader=n*SquadSize;r.active=7;r.mobile=6;r.ableRiflemen=6;r.gunUp=n<2;
            r.machineGuns=n<2?1:0;r.position=centres[n];r.observedAt=9;r.contact=commander.contacts[effort];r.enemy=effort;r.engaged=n==0;
            for(int k=0;k<7;++k)r.memberPositions.push_back(centres[n]+Vec3{0,float(k-3),0});}
        Config off;auto plain=PlanPlatoon(commander,m,off,10,true);
        Config on;on.coverPlatoon=true;auto aimed=PlanPlatoon(commander,m,on,10,true);
        assert(!plain.empty()&&!aimed.empty());
        assert(plain.front().directive.task==PlatoonTask::Support&&plain.front().recipient==0&&plain.front().directive.enemy==effort&&plain.front().directive.coverMover<0);
        const auto& d=aimed.front().directive;
        assert(d.task==PlatoonTask::Support&&aimed.front().recipient==SquadSize&&d.coverLine&&d.coverPrevious==0);
        int moverLeader=-1;for(const auto& o:aimed)if(o.directive.task==PlatoonTask::FlankNorth||o.directive.task==PlatoonTask::FlankSouth)moverLeader=o.recipient;
        assert(moverLeader==2*SquadSize&&d.coverMover==moverLeader);
        assert(d.enemy==over&&Distance(d.contact.position,{30,30,0})<.01f&&d.contact.observedAt==9.5f&&Distance(d.sector,{30,30,0})<.01f);
        std::cout<<"Platoon: support squad "<<aimed.front().recipient/SquadSize<<" (old rule: "<<plain.front().recipient/SquadSize<<") with a line onto the enemy overlooking the mover's way\n";
        // The target reaches the support squad's gun: squad 1's leader holds the directive, and its gun's
        // order carries the payload on (30,30) for the mover's leader (the direct reply).
        auto gp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& g=*gp;
        for(int id=8;id<16;++id){auto& s=g.soldiers[id];s.position={0,40+float(id%4)-2,0};s.contacts={};s.contacts[effort]={true,true,{60,0,0},9.8f};s.contacts[effort].aimHeight=1.45f;
            s.assignment.task=Task::Hold;s.assignment.position=s.position;}
        auto& leader=g.soldiers[8];auto directive=d;directive.serial=7;directive.issuedAt=10;directive.expiresAt=70;leader.platoonOrder=directive;
        leader.reports[over]=directive.contact;
        auto& cmd=g.command[1];cmd=SquadCommand{};cmd.leader=8;cmd.support=15;cmd.platoonTask=PlatoonTask::Support;cmd.platoonOrderSerial=7;cmd.platoonUntil=70;cmd.mission={20,40,0};
        std::vector<Soldier> squad(g.soldiers.begin()+8,g.soldiers.begin()+16);
        Config gunOn;gunOn.coverPlatoon=true;
        const auto o=gunOrder(PlanSquad(leader,squad,Map{},gunOn,cmd,11));
        assert(o.recipient==15&&o.fire&&Distance(o.sector,{30,30,0})<.01f);
        const auto* payload=GunCoverRequest(gunOn,cmd,11);
        assert(payload==&cmd.platoonCover&&payload->enemy==over&&payload->requester==moverLeader&&std::string(payload->gate)=="platoon");
        Config plainGun;SquadCommand plainCmd=cmd;plainCmd.platoonCover=CoverRequest{};
        const auto p=gunOrder(PlanSquad(leader,squad,Map{},plainGun,plainCmd,11));assert(!p.fire&&GunCoverRequest(plainGun,plainCmd,11)==nullptr);
        std::cout<<"Platoon: the support squad's gun takes the directive's target as its payload, requested by the mover's leader\n";
    }
    // 4. Off gives the unchanged battle; each switch is folded (and written) only when on and only for
    //    Legacy, so drills battles are digest-identical with them on; traced and untraced agree.
    {DiagnosticOptions quiet;quiet.enabled=false;
        Config base;base.maxSeconds=60;Config off=base;off.coverGunAim=off.coverShift=off.coverPlatoon=false;
        const auto ra=Simulate(base,quiet),rb=Simulate(off,quiet);
        assert(GameplayDigest(ra)==GameplayDigest(rb)&&Fingerprint(ra)==Fingerprint(rb));
        for(int which=0;which<3;++which){Config on=base;on.coverRequests=on.coverReports=true;Config plain=on;
            (which==0?on.coverGunAim:which==1?on.coverShift:on.coverPlatoon)=true;assert(!SameConfig(on,plain));
            assert(GameplayDigest(Simulate(on,quiet))!=GameplayDigest(Simulate(plain,quiet)));}
        Config drills;drills.drills=drills.foundations=true;drills.maxSeconds=30;Config drillsOn=drills;
        drillsOn.coverRequests=drillsOn.coverReports=drillsOn.coverGunAim=drillsOn.coverShift=drillsOn.coverPlatoon=true;
        assert(GameplayDigest(Simulate(drills,quiet))==GameplayDigest(Simulate(drillsOn,quiet)));
        Config traced=base;traced.maxSeconds=120;traced.coverRequests=traced.coverReports=traced.coverGunAim=traced.coverShift=traced.coverPlatoon=true;
        const auto t1=Simulate(traced,quiet),t2=Simulate(traced);
        assert(GameplayDigest(t1)==GameplayDigest(t2));
        int aims=0,shifts=0,platoon=0;for(const auto& e:t2.diagnostics->entries){aims+=e.kind=="cover_gun_aim";shifts+=e.kind=="cover_shift";platoon+=e.kind=="cover_platoon"||e.kind=="cover_platoon_payload";}
        std::cout<<"Supply on: "<<aims<<" gun-aim rows, "<<shifts<<" shift rows, "<<platoon<<" platoon rows in a 120 s battle; off and drills identical\n";
    }
    std::cout<<"Cover supply: gun aim (reach, covered way, credited), two covered shifts (pinned, crossing), aimed platoon support and payload, off identical\n";
}
