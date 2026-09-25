// Plan 028 Stage 1 + 2a (Config::coverRequests, Config::coverReports, Legacy only): the call for
// covering fire and its answer, and fast credit. Mechanism assertions only, never a battle outcome.
// Squad 1 (team 0) as in group_tests.h: 8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun.
#pragma once
#include "group_tests.h"
#include "Diagnostics.h"
static void CoverRequestTests(){
    using namespace army;
    const int enemy=TeamSize,other=TeamSize+1;
    // A covering request the leader of squad 1 holds (as RaiseCoverRequest leaves it), tasking `slots`.
    auto request=[&](SquadCommand& cmd,Vec3 at,float seen,float until,std::initializer_list<int> slots){
        auto& r=cmd.coverRequest;r=CoverRequest{};r.enemy=enemy;r.serial=1;r.requester=8;r.startedAt=seen;r.until=until;r.gate="commit";
        r.contact={true,false,at,seen};r.contact.aimHeight=1.45f;r.from={0,0,0};r.to={20,0,0};
        for(int slot:slots)r.tasked[slot]=true;
    };
    // 1. The payload travels on the order: sent by the rifle group's leader, received after the
    //    transport and reaction delay, and only then does the man hold the leader's track as a report.
    {auto g=MakeGroup();g.config.coverRequests=true;
        auto& nco=g.frame.soldiers[9];nco.assignment.task=Task::Hold;nco.assignment.position=nco.position;
        auto& man=g.frame.soldiers[10];man.contacts[enemy]={};
        request(g.frame.command[1],{60,0,0},0,1e9f,{2});
        float received=-1;
        while(g.frame.time<4&&received<0){g.frame.time+=.05f;UpdateCommands(g.frame,g.map,g.config,g.runtime,g.events);
            if(man.assignment.fireEnemy==enemy)received=g.frame.time;
            else assert(!man.reports[enemy].known);}
        const auto sent=g.runtime.lastSent[10];
        assert(received>0&&sent.fireEnemy==enemy&&sent.issuer==9&&sent.fireRequester==8&&sent.fireUntil==1e9f);
        const float transport=ReportDelay(MessageDelay,g.frame.soldiers[9])+ReactionSeconds(man,ReactionKind::Order);
        assert(received-sent.issuedAt>=transport-.051f);
        assert(man.reports[enemy].known&&man.reports[enemy].observedAt==0&&Distance(man.reports[enemy].position,{60,0,0})<.01f&&man.reports[enemy].reportSource==9);
        // An untasked man carries no payload, and the tasked man is not re-sent it inside the rate limit.
        assert(g.frame.soldiers[11].assignment.fireEnemy<0&&g.runtime.lastSent[11].fireEnemy<0);
        const int serial=sent.serial;RunRelay(g,g.frame.time+3);assert(g.runtime.lastSent[10].serial==serial);
        // A contact at least four seconds newer is re-sent once the rate limit allows.
        g.frame.command[1].coverRequest.contact.observedAt=g.frame.time;RunRelay(g,g.frame.time+4.1f);
        assert(g.runtime.lastSent[10].serial!=serial&&g.runtime.lastSent[10].fireContact.observedAt>0);
        std::cout<<"Payload: sent by the corporal, held after "<<received-sent.issuedAt<<" s (transport and reaction "<<transport<<" s)\n";
    }
    // Stationary Legacy rifleman on his post, no sighting of his own, a report of the enemy.
    Frame frame=InitialFrame(Config{});Map open;
    auto rifleman=[&](){Soldier s=frame.soldiers[10];s.position={0,0,0};s.assignment=Assignment{};s.assignment.task=Task::Hold;s.assignment.position=s.position;
        s.contacts={};s.reports={};s.allies={};s.action=Action::Fire;return s;};
    auto payload=[&](Soldier& s,int who,float until){s.assignment.fireEnemy=who;s.assignment.fireUntil=until;s.assignment.fireRequester=8;
        s.assignment.fireContact=s.reports[who];};
    // 2. Requested fire at a reported, unseen enemy only while his uncertainty fits the weapon's
    //    beaten zone (Jordan's ruling 2); without a payload a stationary rifleman has no area fire.
    {Soldier s=rifleman();const Vec3 at{95,0,0};
        s.reports[enemy]={true,false,at,0};
        const float zone=Distance(s.position,at)*ShotSpread(s);
        const float fits=(zone-1)/.35f-.5f,wide=(zone-1)/.35f+.5f;   // uncertainty 1+.35*age: inside, just outside
        assert(fits>6);                                               // beyond the 6 s sight memory
        for(float t:{3.f,fits,wide})assert(SelectFireSolution(s,open,t).enemy<0); // no payload: nothing, even at 3 s
        payload(s,enemy,1e9f);
        auto a=SelectFireSolution(s,open,3);assert(a.enemy==enemy&&a.area);
        auto b=SelectFireSolution(s,open,fits);assert(b.enemy==enemy&&b.area&&TrackUncertainty(s.reports[enemy],fits)<=zone);
        assert(SelectFireSolution(s,open,wide).enemy<0&&TrackUncertainty(s.reports[enemy],wide)>zone);
        s.assignment.fireUntil=fits-.1f;assert(SelectFireSolution(s,open,fits).enemy<0);      // a lapsed payload is no payload
        std::cout<<"Beaten zone at 95 m: "<<zone<<" m; requested fire up to "<<(zone-1)/.35f<<" s after the sighting\n";
    }
    // 3. The payload makes him a support shooter for its enemy only: of two reported enemies he fires
    //    on the one named, and on neither without it.
    {Soldier s=rifleman();s.reports[enemy]={true,false,{40,5,0},9};s.reports[other]={true,false,{35,-5,0},9};
        assert(SelectFireSolution(s,open,10).enemy<0);
        payload(s,enemy,20);assert(SelectFireSolution(s,open,10).enemy==enemy);
        payload(s,other,20);assert(SelectFireSolution(s,open,10).enemy==other);
        // A typed controller's man is never read as carrying one.
        s.cognition=true;assert(!FirePayloadLive(s,10));
    }
    // 4. Friendly fire: the ordered mover stations the payload carries hold his fire through them,
    //    with no sighting of the mover himself.
    {Soldier s=rifleman();s.reports[enemy]={true,false,{40,0,0},9};payload(s,enemy,20);
        assert(FriendlyFireRisk(s,open,{40,0,1.45f},10)==0);
        auto movers=std::make_shared<std::vector<FriendlyIntent>>();movers->push_back({12,{18,-1,0},{24,0,0},9});
        s.assignment.fireFriendlies=movers;
        const float risk=FriendlyFireRisk(s,open,{40,0,1.45f},10);assert(ShouldHoldFire(s,risk));
        movers=std::make_shared<std::vector<FriendlyIntent>>();movers->push_back({12,{18,-20,0},{24,-22,0},9});
        s.assignment.fireFriendlies=movers;assert(!ShouldHoldFire(s,FriendlyFireRisk(s,open,{40,0,1.45f},10)));
        s.assignment.fireUntil=9;s.assignment.fireFriendlies=nullptr;assert(FriendlyFireRisk(s,open,{40,0,1.45f},10)==0);
    }
    // 5. Who answers: at most two stationary riflemen whose own spot bears on the threat, nearest first;
    //    never a mover, a flank leg, the rifle group's leader, the gun or a man with no line.
    {Map walls;walls.obstacles={{{-3,-12,0},{.6f,2,0},false,false,3}};PrepareGeometry(walls);
        auto f=InitialFrame(Config{});
        auto squadAt=[&](std::array<float,SquadSize> ys,bool wall){std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);
            for(auto& s:squad){const int slot=s.id%SquadSize;s.position={slot==7?-6.f:(slot==6&&wall)?-5.f:0.f,ys[slot],0};s.goal=s.position;
                s.assignment.task=Task::Hold;s.assignment.position=s.position;s.action=Action::Hold;s.contacts={};}
            return squad;};
        Soldier leader=f.soldiers[8];leader.contacts[enemy]={true,true,{50,0,0},10};
        // Five stationary bearers (10-14 at y 4, -3, 6, 9, -12): the two nearest the threat answer.
        {auto squad=squadAt({0,1,4,-3,6,9,-12,0},false);SquadCommand cmd;cmd.leader=8;cmd.support=15;
            RaiseCoverRequest(leader,squad,Map{},cmd,enemy,{0,0,0},{20,0,0},0,"commit",10);
            for(int slot=0;slot<SquadSize;++slot)assert(cmd.coverRequest.tasked[slot]==(slot==2||slot==3));}
        // 10 on a bound, 11 on a flank leg, 14 behind a wall: 12 and 13 answer.
        auto squad=squadAt({0,1,4,-3,6,9,-12,0},true);
        squad[2].assignment.task=Task::BoundMove;squad[2].assignment.position={20,3,0};squad[2].action=Action::Advance;squad[2].goal={20,3,0};
        squad[3].assignment.task=Task::Flank;squad[3].assignment.position={10,-20,0};
        SquadCommand cmd;cmd.leader=8;cmd.support=15;
        RaiseCoverRequest(leader,squad,walls,cmd,enemy,{0,0,0},{20,0,0},0,"commit",10);
        const auto& r=cmd.coverRequest;
        for(int slot=0;slot<SquadSize;++slot)assert(r.tasked[slot]==(slot==4||slot==5));
        assert(CoverRequestLive(r,17.9f)&&!CoverRequestLive(r,18.1f)&&r.requester==8&&r.contact.observedAt==10&&!r.contact.visible);
        // The movers the shooters must not fire through: everyone who goes, headed for the crossing's end.
        bool mover10=false;for(const auto& m:*r.friendlies){assert(m.soldier!=12&&m.soldier!=13&&m.soldier!=15&&m.soldier!=8);mover10|=m.soldier==10&&Distance(m.destination,{20,0,0})<.01f;}
        assert(mover10);
        // Renewed, the same men keep it while they qualify; one who starts moving hands it on (nobody
        // else stands and bears, so one answers).
        squad[4].action=Action::Advance;squad[4].goal={10,6,0};
        RaiseCoverRequest(leader,squad,walls,cmd,enemy,{0,0,0},{20,0,0},0,"commit",12);
        for(int slot=0;slot<SquadSize;++slot)assert(r.tasked[slot]==(slot==5));
        assert(r.serial==1&&r.startedAt==10&&r.until==20);
        // A different enemy is a new request.
        leader.contacts[other]={true,true,{50,5,0},12};
        RaiseCoverRequest(leader,squad,walls,cmd,other,{0,0,0},{20,0,0},0,"commit",12);assert(r.serial==2&&r.enemy==other&&r.startedAt==12);
    }
    // 6. At the commit the covering pair is made of the tasked bearers, set against the request's threat.
    {auto f=InitialFrame(Config{});Config config;config.coverRequests=true;
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);
        for(auto& s:squad){s.position={0,float(s.id%SquadSize)*2,0};s.contacts={};}
        Soldier leader=squad[0];leader.contacts[enemy]={true,true,{50,0,0},10};leader.contacts[other]={true,true,{12,1,0},10};
        SquadCommand cmd;cmd.leader=8;cmd.support=15;cmd.engaged=true;cmd.waypoint={20,0,0};cmd.mission={20,0,0};
        request(cmd,{50,0,0},10,18,{3,5});
        Map open2;PlanGroupStations(leader,squad,open2,cmd,config,10);
        const auto& st=cmd.stations;
        for(int slot=0;slot<SquadSize;++slot)assert(st.covering[slot]==(slot==3||slot==5));
        assert(Distance(st.coverSector[3],{50,0,0})<.01f&&Distance(st.coverSector[5],{50,0,0})<.01f&&st.coverUntil==10+GroupConstants.coverPairSeconds);
        // Off, the same squad picks by the old rule (the nearest to any enemy it can see): not these two.
        SquadCommand plain=cmd;plain.stations=GroupStations{};Config off;
        for(int slot=0;slot<SquadSize;++slot){plain.stations.held[slot]=true;plain.stations.station[slot]=squad[slot].position;}
        PlanGroupStations(leader,squad,open2,plain,off,10);
        assert(!(plain.stations.covering[3]&&plain.stations.covering[5]));
    }
    // 7. The gun: PlanSquad sends its order with the payload and its sector on the threat.
    {auto g=MakeGroup();g.config.coverRequests=true;auto& cmd=g.frame.command[1];
        std::vector<Soldier> squad(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        request(cmd,{60,0,0},0,8,{});
        auto orders=PlanSquad(g.frame.soldiers[8],squad,g.map,g.config,cmd,0);
        bool gun=false;for(const auto& o:orders)if(o.recipient==15){gun=true;assert(o.fire&&Distance(o.sector,{60,0,0})<.01f);}
        assert(gun);
        Config off;auto plain=PlanSquad(g.frame.soldiers[8],squad,g.map,off,cmd,0);for(const auto& o:plain)assert(!o.fire);
    }
    // 8. A sheltered man on his post peeks at the requested enemy and fires from where he stands.
    {Map wall;wall.obstacles={{{2,0,0},{.3f,2,0},false,true,1.1f}};PrepareGeometry(wall);
        Soldier s=rifleman();s.stance=Stance::Crouched;s.reports[enemy]={true,false,{40,0,0},9};
        Tactics memory;Soldier understood=WithReports(s,10);understood.stance=Stance::Crouched;
        auto plain=ChooseOrder(understood,wall,Config{},{},memory,10);
        payload(s,enemy,20);understood=WithReports(s,10);understood.stance=Stance::Crouched;Tactics fresh;
        auto order=ChooseOrder(understood,wall,Config{},{},fresh,10);
        assert(order.action==Action::Fire&&order.reason==Reason::CoverFire&&Distance(order.goal,s.position)<.01f&&order.stance==Stance::Standing);
        assert(!(plain.action==Action::Fire&&plain.reason==Reason::CoverFire));
    }
    // 9. Fast credit (2a): a covering rifleman's rounds reach the leader who asked on the 0.5 s channel,
    //    directly, within one cycle plus one hop; the 2 s relay through the corporal is slower.
    {auto latency=[&](bool fast){auto g=MakeGroup();g.config.coverReports=fast;
            auto& man=g.frame.soldiers[10];man.assignment.fireEnemy=enemy;man.assignment.fireUntil=1e9f;man.assignment.fireRequester=8;
            man.assignment.fireContact={true,false,{60,0,0},0};
            g.frame.time=1;FireDelivery d;d.shooter=10;d.enemy=enemy;d.rounds=3;d.target={60,0,0};d.firstAt=.9f;d.observedAt=1;d.times={{1,.95f,.9f,-100,-100,-100,-100,-100}};
            RememberDelivery(man,d,fast);
            while(g.frame.time<8){g.frame.time+=.05f;UpdateCommands(g.frame,g.map,g.config,g.runtime,g.events);
                for(const auto& e:g.frame.soldiers[8].deliveries)if(e.shooter==10&&e.enemy==enemy)return g.frame.time-1;}
            return 99.f;};
        const float fast=latency(true),slow=latency(false);
        auto g=MakeGroup();
        const float bound=.5f+ReportDelay(MessageDelay,g.frame.soldiers[10])+ReactionSeconds(g.frame.soldiers[8],ReactionKind::DeliveryReport)+.1f;
        assert(fast<=bound&&fast<slow);
        std::cout<<"Credit reaches the requester in "<<fast<<" s (bound "<<bound<<" s); the 2 s relay took "<<slow<<" s\n";
        // One slot per shooter and enemy: a gun switching targets keeps its count on the first.
        Soldier leader;FireDelivery a;a.shooter=15;a.enemy=enemy;a.rounds=3;a.observedAt=1;FireDelivery b=a;b.enemy=other;b.observedAt=2;
        RememberDelivery(leader,a,true);RememberDelivery(leader,b,true);
        int slots=0;for(const auto& e:leader.deliveries)slots+=e.shooter==15;assert(slots==2);
        Soldier legacy;RememberDelivery(legacy,a);RememberDelivery(legacy,b);
        slots=0;for(const auto& e:legacy.deliveries)slots+=e.shooter==15;assert(slots==1);
    }
    // 10. Off gives the unchanged battle, and the switches are folded (and written) only when on and only
    //     for Legacy: drills battles are digest-identical with them on.
    {DiagnosticOptions quiet;quiet.enabled=false;
        Config base;base.maxSeconds=60;Config off=base;off.coverRequests=false;off.coverReports=false;
        Config on=base;on.coverRequests=on.coverReports=true;assert(!SameConfig(on,off));
        const auto ra=Simulate(base,quiet),rb=Simulate(off,quiet),rc=Simulate(on,quiet);
        assert(GameplayDigest(ra)==GameplayDigest(rb)&&Fingerprint(ra)==Fingerprint(rb)&&GameplayDigest(ra)!=GameplayDigest(rc));
        Config drills;drills.drills=drills.foundations=true;drills.maxSeconds=30;Config drillsOn=drills;drillsOn.coverRequests=drillsOn.coverReports=true;
        assert(GameplayDigest(Simulate(drills,quiet))==GameplayDigest(Simulate(drillsOn,quiet)));
        // Traced and untraced battles with the switches on stay identical (the rows are evidence only).
        Config traced=on;traced.maxSeconds=90;const auto t1=Simulate(traced,quiet),t2=Simulate(traced);
        assert(GameplayDigest(t1)==GameplayDigest(t2));
        int requests=0,credits=0;for(const auto& e:t2.diagnostics->entries){requests+=e.kind=="cover_request";credits+=e.kind=="cover_credit";}
        std::cout<<"Cover requests on: "<<requests<<" request rows, "<<credits<<" credit rows in a 90 s battle; off and drills identical\n";
    }
    std::cout<<"Cover requests: payload delay, beaten zone, payload enemy only, mover hold, two bearers, covering pair, gun, peek, fast credit, off identical\n";
}
