// Plan 030 M-S6, covering fire off entirely (Config::noCoveringFire, Legacy only, off by default). Mechanism
// assertions on the three covering gates and the request, never a battle outcome. Squad 1 (team 0): 8 sergeant,
// 9 corporal, 10-14 riflemen, 15 the gun; the enemy is Ember's first man (32 = TeamSize).
#pragma once
// Included after covering_tests.h (HasField, PlanSim.h) and knowledge_tests.h in sim_tests.cpp.
static void NoCoveringTests(){
    using namespace army;
    Config off;off.coverRequests=true;Config on=off;on.noCoveringFire=true;
    assert(!SameConfig(off,on)&&NoCoveringFire(on)&&!NoCoveringFire(off));
    {Config typed=on;typed.drills=typed.foundations=true;assert(!NoCoveringFire(typed));typed=on;typed.cognition=typed.foundations=true;assert(!NoCoveringFire(typed));}
    auto count=[](const Diagnostics& d,const char* kind,const char* reason){int n=0;for(const auto& e:d.entries)n+=e.kind==kind&&(!reason||e.reason==reason);return n;};
    auto field=[](const Diagnostics& d,const char* kind,const char* reason,const std::string& text){int n=0;
        for(const auto& e:d.entries)n+=e.kind==kind&&e.reason==reason&&HasField(e,text);
        return n;};
    // 1. The commit wait (GraduatedCoverTests' fixture: two low walls, first bound exposure about .3, one enemy seen
    //    every tick at 30 m, nobody firing on him). Off, the squad waits on him for good and calls for fire; on, it
    //    commits once the fixed 8 s exposed preparation has run, with no request and no support_wait.
    {auto frame=InitialFrame(off);Map map;map.obstacles={{{-18,18},{.6f,3},false,true},{{-10,-10},{.6f,3},false,true},{{-2,-10},{4,.6f},false,false,2.5f}};
        std::vector<Soldier> base(frame.soldiers.begin()+8,frame.soldiers.begin()+16);for(auto& s:base)s.position={-20,0};
        SquadCommand start;start.advancing=true;start.leader=8;start.support=15;
        struct Run{SquadCommand cmd;Soldier leader;float committedAt=-1;};
        auto tick=[&](Run& r,const Config& config,float t,bool fire,Diagnostics* trace){
            r.leader.contacts[32]={true,true,{30,0},t};r.leader.deliveries={};
            if(fire){FireDelivery d;d.shooter=15;d.enemy=32;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=t;RememberDelivery(r.leader,d);}
            const bool before=r.cmd.hasWaypoint;UpdateManeuver(r.leader,base,map,config,{},r.cmd,t,trace);
            if(!before&&r.cmd.hasWaypoint&&r.committedAt<0)r.committedAt=t;};
        {Run a{start,base[0]},b{start,base[0]};Diagnostics ta,tb;ta.options.enabled=tb.options.enabled=true;float waitStart=-1;
            for(float t=30;t<=50;t+=1){tick(a,on,t,false,&ta);tick(b,off,t,false,&tb);
                if(waitStart<0&&a.cmd.opportunitySince>=0)waitStart=a.cmd.opportunitySince;
                assert(!b.cmd.hasWaypoint&&b.cmd.planReason=="exposed crossing waits for fire on the primary overlooking track");}
            assert(a.committedAt>=0&&a.committedAt-waitStart>=8&&a.committedAt-waitStart<=9&&a.cmd.moveExposure>=.2f);
            assert(count(ta,"cover_request",nullptr)==0&&count(tb,"cover_request","start")>=1);
            assert(field(ta,"covering_check","commit","\"release\":\"off\"")>=1&&field(ta,"covering_check","commit","\"result\":\"support_wait\"")==0);
            assert(field(ta,"covering_check","commit","\"covering\":0")>=1&&field(tb,"covering_check","commit","\"result\":\"support_wait\"")>=1);
            assert(field(tb,"covering_check","commit","\"release\"")==0);                     // off writes no release field
            std::cout<<"No covering fire: an exposed crossing nobody covers commits "<<a.committedAt-waitStart<<" s into the preparation (off: waits at 50 s)\n";
        }
        // Credited fire on him: the same release as off, tick by tick (the gate still reads CoveringPath).
        {Run a{start,base[0]},b{start,base[0]};
            for(float t=30;t<=45;t+=1){tick(a,on,t,true,nullptr);tick(b,off,t,true,nullptr);
                assert(a.cmd.hasWaypoint==b.cmd.hasWaypoint&&a.cmd.opportunitySince==b.cmd.opportunitySince&&a.cmd.planReason==b.cmd.planReason);}
            assert(a.committedAt>=0&&a.committedAt==b.committedAt);}
    }
    // 2. The running bound (K-1's fixture with a live man): off, it pauses for covering fire with a request on him;
    //    on, it runs on with no request (release "off"). Reported fire on the men still stops it.
    for(int arm=0;arm<3;++arm){const Config& config=arm?on:off;
        auto f=InitialFrame(config);Map map;
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);for(auto& s:squad)s.position={-20,0};
        auto leader=squad[0];SquadCommand cmd;cmd.leader=8;cmd.support=15;cmd.advancing=true;
        cmd.hasWaypoint=true;cmd.waypoint={-8,12};cmd.maneuver=Maneuver::Press;cmd.planId=4;cmd.maneuverUntil=40;cmd.moveExposure=1;
        ProgressRuntime progress;Diagnostics trace;trace.options.enabled=true;
        leader.contacts[32]={true,false,{30,0},0};
        if(arm==2)RememberFireArea(leader,{{-20,0},1,0});
        UpdateSquadPlan(leader,squad,map,config,{}, {},cmd,progress,&trace,0);
        const int pauses=count(trace,"movement_paused",nullptr),requests=count(trace,"cover_request","start");
        if(arm==0)assert(pauses==1&&requests==1&&cmd.movementBlock.reason==MoveBlock::Support);
        if(arm==1)assert(pauses==0&&requests==0&&cmd.movementBlock.reason==MoveBlock::None&&cmd.hasWaypoint&&field(trace,"covering_check","bound","\"release\":\"off\"")==1);
        if(arm==2)assert(pauses==1&&requests==0&&cmd.movementBlock.reason==MoveBlock::Fire);
    }
    std::cout<<"No covering fire: a running bound is not paused for covering fire and asks for none; fire on the men still stops it\n";
    // 3. The internal coordination bound (GraduatedCoverTests' fixture: no waypoint, an exposed crossing, one fresh
    //    rifleman, no fire). Off, it pauses for support at 12 s; on, it is released 8 s after it was set up.
    {Map walls;walls.obstacles={{{-27,0},{0.6f,10},false,true}};auto f=InitialFrame(Config{});
        std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
        for(auto& s:squad){s.position={-30,float(s.id%3)*2};s.assignment.task=Task::Advance;}
        Soldier leader=squad[0];
        for(float exposure:{.3f,.7f}){SquadCommand a;a.leader=0;a.support=7;a.advancing=true;a.moveExposure=exposure;auto b=a;
            float releasedA=-1,releasedB=-1;Diagnostics trace;trace.options.enabled=true;
            for(float t=0;t<=13;t+=1){leader.contacts[TeamSize]={true,true,{15,0},t};
                UpdateCoordination(leader,squad,walls,{},a,t,&trace,false,false,false,false,false,nullptr,true);
                UpdateCoordination(leader,squad,walls,{},b,t,nullptr,false,false,false,false,false,nullptr,false);
                if(releasedA<0&&a.teamPlan.released)releasedA=t;
                if(releasedB<0&&b.teamPlan.released)releasedB=t;}
            assert(releasedB<0&&b.movementBlock.reason==MoveBlock::Support);
            assert(releasedA==8&&a.movementBlock.reason==MoveBlock::None&&field(trace,"covering_check","internal","\"release\":\"off\"")>=1);}
        std::cout<<"No covering fire: an exposed internal bound is released 8 s after it is set up (off: paused at 12 s)\n";
    }
    // 4. Battles. An explicit false is the default battle; Legacy only (drills and cognition identical with it on).
    //    On, a 90 s Legacy battle with the covering requests switched on writes no request, no support_wait and no
    //    covering pause, and its traced and untraced digests agree.
    {DiagnosticOptions quiet;quiet.enabled=false;
        Config base;base.maxSeconds=90;Config explicitOff=base;explicitOff.noCoveringFire=false;
        const auto ra=Simulate(base,quiet),rb=Simulate(explicitOff,quiet);
        assert(GameplayDigest(ra)==GameplayDigest(rb)&&Fingerprint(ra)==Fingerprint(rb));
        Config drills;drills.drills=drills.foundations=true;drills.maxSeconds=30;Config drillsOn=drills;drillsOn.noCoveringFire=true;
        assert(GameplayDigest(Simulate(drills,quiet))==GameplayDigest(Simulate(drillsOn,quiet)));
        Config cognition;cognition.cognition=cognition.foundations=true;cognition.maxSeconds=30;Config cognitionOn=cognition;cognitionOn.noCoveringFire=true;
        assert(GameplayDigest(Simulate(cognition,quiet))==GameplayDigest(Simulate(cognitionOn,quiet)));
        Config requests=base;requests.coverRequests=requests.coverReports=requests.coverGunAim=true;Config none=requests;none.noCoveringFire=true;
        const auto rr=Simulate(requests),rn=Simulate(none),rq=Simulate(none,quiet);
        assert(GameplayDigest(rn)==GameplayDigest(rq)&&GameplayDigest(rn)!=GameplayDigest(rr));
        auto tally=[](const Record& r,int& req,int& waits,int& pauses,int& off,int& commits){req=waits=pauses=off=commits=0;
            for(const auto& e:r.diagnostics->entries){req+=e.kind=="cover_request";
                if(e.kind=="covering_check"){waits+=HasField(e,"\"result\":\"support_wait\"");off+=HasField(e,"\"release\":\"off\"");
                    commits+=e.reason=="commit"&&HasField(e,"\"result\":\"committed\"");}
                pauses+=e.kind=="movement_paused"&&(HasField(e,"maneuver_bound_support")||HasField(e,"coordination_internal_support"));}};
        int req,waits,pauses,offRows,commits;tally(rr,req,waits,pauses,offRows,commits);
        assert(req>0&&waits>0&&offRows==0);
        std::cout<<"No covering fire: off (requests on), "<<req<<" request rows, "<<waits<<" support waits, "<<pauses<<" covering pauses, "<<commits<<" commits\n";
        tally(rn,req,waits,pauses,offRows,commits);
        assert(req==0&&waits==0&&pauses==0&&offRows>0);
        std::cout<<"No covering fire: on, 0 requests, 0 support waits, 0 covering pauses, "<<offRows<<" gate rows released \"off\", "<<commits<<" commits; off digest "
                 <<GameplayDigest(ra)<<" (90 s Legacy) unchanged\n";
    }
}
