// Plan 028 Stage 0: the covering-fire measurement rows. CoveringPrimary/CoveringExplain agree with
// CoveringPath, the rows name the right primary and the failing reason, the truth fields are filled
// from the frame, and none of it changes the battle.
#include "Diagnostics.h"
#include "PlanSim.h"
static bool HasField(const TraceEntry& e,const std::string& field){return e.extra.find(field)!=std::string::npos;}
static void CoveringTraceTests(){
    // Explain agrees with CoveringPath, case by case, on the rifle-suppression fixture.
    {Map map;Soldier s;s.id=8;s.position={0,0};
        s.contacts[39]={true,false,{30,0},0};
        FireDelivery d;d.shooter=15;d.enemy=39;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=4;RememberDelivery(s,d);
        const std::vector<Vec3> path=FindPath(map,{0,0},{15,0});
        auto x=CoveringExplain(s,map,{0,0},path,4);
        assert(x.pass&&CoveringPath(s,map,{0,0},path,4)&&x.fresh&&x.primary==39&&x.rounds==3&&x.overlooking==1&&!x.mgOverlooks&&x.lateRounds==0);
        assert(CoveringPrimary(WithTracks(s,4),map,{0,0},path,4)==39);
        // Old rounds: no fresh fire, and the rounds on the primary show as late.
        x=CoveringExplain(s,map,{0,0},path,11);
        assert(!x.pass&&!CoveringPath(s,map,{0,0},path,11)&&!x.fresh&&x.primary==39&&x.rounds==0&&x.lateRounds==3);
        // Fire on another enemy: fresh, primary known, nothing credited, three rounds elsewhere.
        s.deliveries={};d.enemy=40;d.target={30,25};RememberDelivery(s,d);
        x=CoveringExplain(s,map,{0,0},path,4);
        assert(!x.pass&&!CoveringPath(s,map,{0,0},path,4)&&x.fresh&&x.primary==39&&x.rounds==0&&x.otherRounds==3);
        // A dominant machine gun overlooking the route becomes the primary; the rifle's rounds do not count.
        s.deliveries={};d.enemy=39;d.target={30,0};RememberDelivery(s,d);
        s.contacts[40]={true,false,{20,20},0};s.contacts[40].automaticWeapon=true;
        x=CoveringExplain(s,map,{0,0},path,4);
        assert(!x.pass&&!CoveringPath(s,map,{0,0},path,4)&&x.primary==40&&x.primaryMG&&x.mgOverlooks&&x.overlooking==2&&x.rounds==0&&x.otherRounds==3);
        assert(CoveringExplain(s,map,{0,0},{},4).pathEmpty);
    }
    // The commit wait and the active bound write covering_check rows with the gate's own verdict;
    // the same fixture without diagnostics reaches the same command state.
    {Config config;auto f=InitialFrame(config);Map map;map.obstacles={{{-18,18},{.6f,3},false,true}};
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);for(auto& s:squad)s.position={-20,0};
        auto leader=squad[0];SquadCommand cmd;cmd.advancing=true;cmd.leader=8;cmd.support=15;auto plain=cmd;
        Diagnostics trace;
        auto refresh=[&](float time,bool fire){leader.contacts[32]={true,true,{30,0},time};leader.deliveries={};if(fire){FireDelivery d;d.shooter=15;d.enemy=32;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=time;RememberDelivery(leader,d);}};
        for(float t:{0.f,2.f,4.f,6.f,8.f,10.f,12.f,14.f,16.f,18.f}){const bool fire=t!=6&&t!=18;
            refresh(t,fire);UpdateManeuver(leader,squad,map,config,{},cmd,t,&trace);UpdateManeuver(leader,squad,map,config,{},plain,t);
            assert(cmd.hasWaypoint==plain.hasWaypoint&&cmd.opportunitySince==plain.opportunitySince&&cmd.movementBlock.reason==plain.movementBlock.reason&&cmd.planReason==plain.planReason);}
        int commits=0,bounds=0,resets=0;
        for(const auto& e:trace.entries){
            if(e.kind=="covering_check"){assert(e.squad==1&&e.soldier==8);
                if(e.reason=="commit"){++commits;
                    if(e.time==0)assert(HasField(e,"\"pass\":1")&&HasField(e,"\"covering\":1,\"explain_pass\":1")&&HasField(e,"\"primary\":32,"));}
                if(e.reason=="bound"){++bounds;
                    if(e.time==18)assert(HasField(e,"\"pass\":0,\"covering\":0,\"explain_pass\":0")&&HasField(e,"\"fresh\":0")&&HasField(e,"\"primary\":32,")&&HasField(e,"\"paused\":1"));}
                // The gate's own value and the explanation always agree.
                assert(HasField(e,"\"covering\":0,\"explain_pass\":0")||HasField(e,"\"covering\":1,\"explain_pass\":1"));}
            if(e.kind=="covering_clock_reset"){++resets;assert(HasField(e,"\"source\":"));}
        }
        assert(commits>=4&&bounds>=1&&resets>=1);
        // The unfired tick at t=6 ended the first preparation: a reset row names it.
        bool reset6=false;for(const auto& e:trace.entries)reset6|=e.kind=="covering_clock_reset"&&e.time==6;assert(reset6);
        // The truth pass fills obs_* for the pending rows of that squad and clears them.
        f.soldiers[32].position={30,0};f.time=18;EquipWeapon(f.soldiers[15],{WeaponId::MachineGun,{}});
        f.soldiers[9].position={-10,0};f.soldiers[9].contacts[32]={true,true,{30,0},17};
        FireDelivery own;own.shooter=9;own.enemy=32;own.target={30,0};own.observedAt=17;own.times={{17,16.5f,16,-100,-100,-100,-100,-100}};own.rounds=3;RememberDelivery(f.soldiers[9],own);
        const size_t last=trace.coveringPending.back().entry;
        TraceCoveringTruth(&trace,f,map,1,15);
        assert(trace.coveringPending.empty());
        const auto& e=trace.entries[last];
        assert(HasField(e,"\"obs_primary\":32,\"obs_alive\":1")&&HasField(e,"\"obs_rounds\":3,\"obs_rounds_enemy\":3,\"obs_shooters\":1")&&HasField(e,"\"obs_gun\":15"));
        assert(HasField(e,"\"obs_saw\":")&&HasField(e,"\"obs_bearer_list\":[["));
        // JSON stays one well-formed object: the extra members close inside it.
        const auto json=TraceJson(e);assert(json.back()=='}'&&json.find("\"obs_rounds\":3")!=std::string::npos);
    }
    // A pause from the active-bound gate is recorded with its source and the waypoint it had.
    {Config config;auto f=InitialFrame(config);Map map;
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);for(auto& s:squad)s.position={-20,0};
        auto leader=squad[0];SquadCommand cmd;cmd.leader=8;cmd.support=15;cmd.advancing=true;
        cmd.hasWaypoint=true;cmd.waypoint={-8,12};cmd.maneuver=Maneuver::Press;cmd.planId=4;cmd.maneuverUntil=40;cmd.moveExposure=1;
        ProgressRuntime progress;Diagnostics trace;
        leader.contacts[32]={true,true,{30,0},0};RememberFireArea(leader,{{-20,0},1,0});
        UpdateSquadPlan(leader,squad,map,config,{}, {},cmd,progress,&trace,0);
        int pauses=0;for(const auto& e:trace.entries)if(e.kind=="movement_paused"){++pauses;
            assert(HasField(e,"\"pause_source\":\"maneuver_bound_")&&HasField(e,"\"had_waypoint\":1")&&TraceJson(e).back()=='}');}
        assert(pauses==1);
        bool check=false;for(const auto& e:trace.entries)check|=e.kind=="covering_check"&&e.reason=="bound";assert(check);
    }
    // Traced and untraced battles stay identical (the lab test covers the default; this is legacy with rows written).
    {Config c;c.maxSeconds=90;DiagnosticOptions off;off.enabled=false;
        auto a=Simulate(c,off),b=Simulate(c);
        assert(GameplayDigest(a)==GameplayDigest(b)&&Fingerprint(a)==Fingerprint(b));
        int rows=0;for(const auto& e:b.diagnostics->entries)rows+=e.kind=="covering_check"||e.kind=="covering_clock_reset";
        std::cout<<"Covering trace: "<<rows<<" covering rows in a 90 s battle\n";
    }
    std::cout<<"Covering measurement: explain agrees with the gate, rows carry primary/reason/truth, pause source, trace on/off identical\n";
}
// Plan 028 Stage 3c (Config::coverGraduated): the covering gate waits only on a primary seen within
// 20 s; a stale threat crosses after the short wait, a fresh one nobody covers is graded after T:
// high danger gives the crossing up for another way, low danger crosses. Off changes nothing.
static void GraduatedCoverTests(){
    // The grade itself, from the leader's knowledge only.
    {Map map;Soldier s;s.id=8;s.position={0,0};
        const std::vector<Vec3> path=FindPath(map,{0,0},{15,0});
        s.contacts[39]={true,false,{30,0},0};
        auto g=GradeCrossing(s,map,{0,0},path,.3f,5,true);
        assert(g.freshPrimary&&g.graded&&!g.high&&g.overlookingFresh==1&&!g.mgFresh);           // one rifleman: low
        assert(GradeCrossing(s,map,{0,0},path,.6f,5,true).high);                              // exposure >= .6: high
        assert(!GradeCrossing(s,map,{0,0},path,.3f,5,false).graded);                          // danger only when asked
        g=GradeCrossing(s,map,{0,0},path,.9f,25,true);assert(!g.freshPrimary&&!g.graded&&!g.high); // seen 25 s ago: stale
        assert(CoveringPrimary(WithTracks(s,25),map,{0,0},path,25)==39&&CoveringPrimary(WithTracks(s,25),map,{0,0},path,25,20)<0);
        s.contacts[40]={true,false,{25,10},15};s.contacts[40].automaticWeapon=true;              // an MG seen 10 s ago
        g=GradeCrossing(s,map,{0,0},path,.3f,25,true);assert(g.freshPrimary&&g.mgFresh&&g.high);
        g=GradeCrossing(s,map,{0,0},path,.3f,25.5f,true);assert(g.freshPrimary&&!g.mgFresh&&!g.high); // 10.5 s: no longer counted
        s.contacts[40].automaticWeapon=false;for(int id:{41,42,43,44})s.contacts[id]={true,false,{25,float(id-38)*3},20};
        g=GradeCrossing(s,map,{0,0},path,.3f,25,true);assert(g.overlookingFresh==5&&g.high);       // five fresh tracks: high
        // CoveringPath with the default age is the unchanged gate; with 20 s it ignores the stale primary.
        FireDelivery d;d.shooter=15;d.enemy=39;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=24;RememberDelivery(s,d);
        for(int id:{40,41,42,43,44})s.contacts[id]={};
        assert(CoveringPath(s,map,{0,0},path,25)&&!CoveringPath(s,map,{0,0},path,25,20)&&!CoveringExplain(s,map,{0,0},path,25,20).pass);
    }
    // The commit-wait fixture of the Stage 0 test: a squad behind a wall with one enemy beyond it.
    Config off;off.coverGraduated=false;Config on=off;on.coverGraduated=true;assert(!SameConfig(on,off));
    // Two low walls north-east of the squad give it a partly screened flank (first bound exposure
    // about .3 against a rifleman, .44 against a machine gun); everything else is open ground.
    auto frame=InitialFrame(off);Map map;map.obstacles={{{-18,18},{.6f,3},false,true},{{-10,-10},{.6f,3},false,true},{{-2,-10},{4,.6f},false,false,2.5f}};
    std::vector<Soldier> base(frame.soldiers.begin()+8,frame.soldiers.begin()+16);for(auto& s:base)s.position={-20,0};
    SquadCommand start;start.advancing=true;start.leader=8;start.support=15;
    struct Run{SquadCommand cmd;Soldier leader;float committedAt=-1;};
    // One tick of both arms; the enemy is seen at seenAt(t), machine gun or not, fire credited or not.
    auto tick=[&](Run& r,const Config& config,float t,float seen,bool mg,bool fire,Diagnostics* trace){
        r.leader.contacts[32]={true,seen>=t-.01f,{30,0},seen};r.leader.contacts[32].automaticWeapon=mg;r.leader.deliveries={};
        if(fire){FireDelivery d;d.shooter=15;d.enemy=32;d.rounds=3;d.target={30,0};d.firstAt=d.observedAt=t;RememberDelivery(r.leader,d);}
        const bool before=r.cmd.hasWaypoint;UpdateManeuver(r.leader,base,map,config,{},r.cmd,t,trace);
        if(!before&&r.cmd.hasWaypoint&&r.committedAt<0)r.committedAt=t;};
    auto outcome=[](const Diagnostics& d,const char* value){int n=0;for(const auto& e:d.entries)n+=e.kind=="covering_check"&&HasField(e,std::string("\"graduated_outcome\":\"")+value+"\"");return n;};
    // A stale-only primary (last seen 25 s before) and no fire: the old gate waits for good; the
    // graduated gate does not hold the crossing and commits once the 8 s preparation has run.
    {Run a{start,base[0]},b{start,base[0]};Diagnostics trace;float firstWait=-1;
        for(float t=30;t<=50;t+=1){tick(a,on,t,t-25,false,false,&trace);tick(b,off,t,t-25,false,false,nullptr);
            if(firstWait<0&&a.cmd.opportunitySince>=0)firstWait=a.cmd.opportunitySince;
            assert(!b.cmd.hasWaypoint&&b.cmd.planReason=="exposed crossing waits for fire on the primary overlooking track");}
        assert(a.committedAt>=0&&a.committedAt-firstWait<=CoverGradeConstants.shortWait+1&&outcome(trace,"stale_cross")>=1);
        std::cout<<"Stale primary: committed "<<a.committedAt-firstWait<<" s after the wait began; the old gate still waits at 50 s\n";
        // On the running bound a stale primary no longer pauses it; the old gate pauses the same bound.
        Run c=a,d=a;const float t=a.committedAt+1;
        tick(c,on,t,t-25,false,false,nullptr);tick(d,off,t,t-25,false,false,nullptr);
        assert(c.cmd.movementBlock.reason==MoveBlock::None&&c.cmd.hasWaypoint&&d.cmd.movementBlock.reason==MoveBlock::Support);
    }
    // A fresh machine gun overlooking the crossing and nobody covering it: after T the crossing is
    // marked failed without a waypoint, and the next plan is not within 15 m of it.
    {Run a{start,base[0]};Diagnostics trace;float waitStart=-1;int failedBefore=0;Vec3 failed{};float goneAt=-1;
        for(float t=30;t<=60&&goneAt<0;t+=1){failedBefore=a.cmd.failedMoveCount;tick(a,on,t,t,true,false,&trace);
            if(waitStart<0&&a.cmd.opportunitySince>=0)waitStart=a.cmd.opportunitySince;
            if(a.cmd.failedMoveCount>failedBefore){goneAt=t;failed=a.cmd.failedMoves[failedBefore%4];}}
        assert(goneAt>=0&&goneAt-waitStart>=CoverGradeConstants.shortWait&&goneAt-waitStart<=CoverGradeConstants.shortWait+1);
        assert(!a.cmd.hasWaypoint&&a.cmd.movementBlock.reason==MoveBlock::None&&a.cmd.opportunitySince<0&&a.committedAt<0);
        assert(outcome(trace,"high_go_round")==1&&a.cmd.planReason=="high-danger crossing nobody covers: look for a way round");
        bool reset=false;for(const auto& e:trace.entries)reset|=e.kind=="covering_clock_reset"&&HasField(e,"\"source\":\"go_round\"");assert(reset);
        tick(a,on,goneAt+1,goneAt+1,true,false,&trace);
        // The next plan prepares another crossing: a candidate at least 15 m from the failed one.
        assert(a.cmd.failedMoveCount==failedBefore+1&&a.cmd.opportunitySince>=0&&Distance(a.cmd.preparedTarget,failed)>=15);
        std::cout<<"Fresh MG, no cover: crossing given up "<<goneAt-waitStart<<" s into the wait; next plan "<<
            (a.cmd.opportunitySince>=0?Distance(a.cmd.preparedTarget,failed):-1.f)<<" m from the failed one ("<<a.cmd.planReason<<")\n";
    }
    // One fresh rifleman, a crossing below the exposure bar, nobody covering: it goes after T.
    {Run a{start,base[0]},b{start,base[0]};Diagnostics trace;float waitStart=-1;
        for(float t=30;t<=50;t+=1){tick(a,on,t,t,false,false,&trace);tick(b,off,t,t,false,false,nullptr);
            if(waitStart<0&&a.cmd.opportunitySince>=0)waitStart=a.cmd.opportunitySince;
            assert(!b.cmd.hasWaypoint);}
        assert(a.committedAt>=0&&a.committedAt-waitStart>=CoverGradeConstants.shortWait&&a.committedAt-waitStart<=CoverGradeConstants.shortWait+1);
        assert(outcome(trace,"low_cross")>=1&&a.cmd.failedMoveCount==0&&a.cmd.moveExposure>=.2f&&a.cmd.moveExposure<CoverGradeConstants.highExposure);
        std::cout<<"One fresh rifleman, exposure "<<a.cmd.moveExposure<<": crossed "<<a.committedAt-waitStart<<" s into the wait\n";
    }
    // A fresh primary with credited cover: the normal release, the same as the old gate, tick by tick.
    {Run a{start,base[0]},b{start,base[0]};Diagnostics trace;
        for(float t=30;t<=45;t+=1){tick(a,on,t,t,false,true,&trace);tick(b,off,t,t,false,true,nullptr);
            assert(a.cmd.hasWaypoint==b.cmd.hasWaypoint&&a.cmd.opportunitySince==b.cmd.opportunitySince&&a.cmd.planReason==b.cmd.planReason&&a.cmd.failedMoveCount==b.cmd.failedMoveCount);}
        assert(a.committedAt>=0&&a.committedAt==b.committedAt);
        for(const auto& e:trace.entries)if(e.kind=="covering_check"&&e.reason=="commit")assert(HasField(e,"\"covering\":1")&&HasField(e,"\"graduated_danger\":\"\""));
    }
    // The internal coordination bound (no waypoint, an exposed crossing, one fresh rifleman, no fire):
    // low danger is released T after the bound was set up; high danger keeps today's 12 s pause.
    {Map walls;walls.obstacles={{{-27,0},{0.6f,10},false,true}};auto f=InitialFrame(Config{});
        std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
        for(auto& s:squad){s.position={-30,float(s.id%3)*2};s.assignment.task=Task::Advance;}
        Soldier leader=squad[0];
        for(float exposure:{.3f,.7f}){SquadCommand a;a.leader=0;a.support=7;a.advancing=true;a.moveExposure=exposure;auto b=a;
            float releasedA=-1,releasedB=-1;
            for(float t=0;t<=13;t+=1){leader.contacts[TeamSize]={true,true,{15,0},t};
                UpdateCoordination(leader,squad,walls,{},a,t,nullptr,true);UpdateCoordination(leader,squad,walls,{},b,t,nullptr,false);
                if(releasedA<0&&a.teamPlan.released)releasedA=t;
                if(releasedB<0&&b.teamPlan.released)releasedB=t;}
            assert(releasedB<0&&b.movementBlock.reason==MoveBlock::Support);
            if(exposure<CoverGradeConstants.highExposure)assert(releasedA==CoverGradeConstants.shortWait&&a.movementBlock.reason==MoveBlock::None);
            else assert(releasedA<0&&a.movementBlock.reason==MoveBlock::Support);}
    }
    // Off gives the unchanged battle: an explicit false is the default, and the switch is folded
    // into the digest (and the manifest) only when on.
    {Config base;base.maxSeconds=60;Config b=base;b.coverGraduated=false;Config c=base;c.coverGraduated=true;
        DiagnosticOptions quiet;quiet.enabled=false;
        const auto ra=Simulate(base,quiet),rb=Simulate(b,quiet),rc=Simulate(c,quiet);
        const auto& same=base.coverGraduated?rc:rb;
        assert(GameplayDigest(ra)==GameplayDigest(same)&&Fingerprint(ra)==Fingerprint(same)&&GameplayDigest(rb)!=GameplayDigest(rc));
    }
    std::cout<<"Graduated covering gate: stale crosses after T, fresh MG goes round, low danger crosses, covered unchanged, internal bound graded, off identical\n";
}
