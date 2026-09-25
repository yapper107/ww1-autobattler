// Plan 030 K-1, the track of a man seen to fall (Config::retireFallen, Legacy only, off by default). Mechanism
// assertions on what a soldier sees and what his leader's gates read, never a battle outcome. Squad 1 (team 0):
// 8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun; the enemy is Ember's first man (TeamSize).
#pragma once
#include "group_tests.h"
#include "Diagnostics.h"
#include "ReactionSim.h"
#include <map>
static void KnowledgeTests(){
    using namespace army;
    const int enemy=TeamSize,other=TeamSize+1;
    auto tallWall=[](Map& m,float x,float y,float halfY){m.obstacles.push_back({{x,y,0},{.3f,halfY,0},false,false,3.f});};
    // 1. SenseFall: the same sight test as SenseEnemy, made on the body; only a man put out of action is down.
    {Map open;PrepareGeometry(open);
        Map screened;tallWall(screened,30,0,6);PrepareGeometry(screened);                 // a tall wall between them
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
        Soldier& rifleman=f.soldiers[10];rifleman.position={0,0,0};rifleman.stance=Stance::Standing;
        Soldier& man=f.soldiers[enemy];man.position={60,0,0};man.stance=Stance::Standing;
        assert(SenseEnemy(rifleman,man,open,10).visible);
        assert(!SenseFall(rifleman,man,open,10).known);                                     // alive: nothing to see fall
        man.health=30;assert(!SenseFall(rifleman,man,open,10).known);                        // wounded, still in the fight
        man.health=0;
        const Contact down=SenseFall(rifleman,man,open,10.2f);
        assert(down.known&&down.seenDown&&!down.visible&&down.observedAt==10.2f&&Distance(down.position,man.position)<1e-4f&&down.originalObserver==10);
        assert(!SenseFall(rifleman,man,screened,10.2f).known);                               // he fell out of sight
        f.soldiers[enemy+1].position={60,0,0};f.soldiers[enemy+1].health=0;
        assert(!SenseFall(f.soldiers[enemy],f.soldiers[enemy+1],open,10.2f).known);           // never his own side
        std::cout<<"Knowledge: a man in sight at 60 m is seen down only when out of action; wounded or out of sight, he is not\n";
    }
    // 2. The sighting reaction: his contact becomes the observation of the fall (where and when, seenDown), keeping
    //    what it knew of the man's fire; a man who fell out of sight leaves the live track he had.
    for(bool inSight:{true,false}){
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;f.time=10;
        ReactionRuntime rt;std::vector<Event> events;
        auto& s=f.soldiers[10];s.contacts[enemy]={true,true,{60,0,0},9.8f};s.contacts[enemy].lastFireAt=9.5f;s.contacts[enemy].registeredAt=9.8f;
        PendingReaction sight;sight.kind=ReactionKind::Sight;sight.enemy=enemy;
        if(inSight){sight.contact=Contact{true,false,{60,0,0},10};sight.contact.seenDown=true;}   // SenseFall's contact
        QueueReaction(s,sight,10,rt);f.time=11;ProcessReactions(f,rt,events);
        const auto& ct=s.contacts[enemy];
        assert(ct.known&&!ct.visible&&ct.lastFireAt==9.5f);
        assert(inSight?(ct.seenDown&&ct.observedAt==10&&KnowsFallen(s,enemy)):(!ct.seenDown&&ct.observedAt==9.8f&&!KnowsFallen(s,enemy)));
    }
    std::cout<<"Knowledge: the contact of a man seen to fall is marked seenDown; one who fell out of sight stays a live track\n";
    // 3. The leader's gates read his knowledge without the tracks of men seen to fall (WithoutFallen): no covering
    //    primary, no quiet-release overlooker, no route danger from him; the raw memory keeps him (10 s, as before).
    {Map open;PrepareGeometry(open);const std::vector<Vec3> path{{10,0,0},{20,0,0},{30,0,0}};
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Soldier leader=fp->soldiers[8];leader.contacts={};leader.reports={};leader.deliveries={};
        const float now=12;
        leader.contacts[enemy]={true,false,{50,0,0},10};leader.contacts[enemy].aimHeight=1.45f;leader.contacts[enemy].lastFireAt=9.9f;
        assert(CoveringPrimary(WithTracks(leader,now),open,{0,0,0},path,now)==enemy&&CrossingExposure(leader,open,{0,0,0},{30,0,0},now)>.9f);
        leader.contacts[enemy].seenDown=true;
        assert(KnowsAnyFallen(leader));
        const Soldier living=WithoutFallen(leader);
        assert(CoveringPrimary(WithTracks(living,now),open,{0,0,0},path,now)<0&&!QuietCrossing(living,open,{0,0,0},path,now).overlooking);
        assert(CrossingExposure(living,open,{0,0,0},{30,0,0},now)<1e-6f&&OnlyFallenOverlook(living,leader,open,{0,0,0},path,now));
        assert(leader.contacts[enemy].known&&WithTracks(leader,now).contacts[enemy].known);            // his memory is unchanged
        // A live man overlooking the same crossing is still its primary, and the crossing is not "only fallen".
        leader.contacts[other]={true,true,{50,4,0},11};leader.contacts[other].aimHeight=1.45f;
        const Soldier both=WithoutFallen(leader);
        assert(CoveringPrimary(WithTracks(both,now),open,{0,0,0},path,now)==other&&!OnlyFallenOverlook(both,leader,open,{0,0,0},path,now));
        std::cout<<"Knowledge: the leader's covering primary, quiet release and crossing danger no longer count a man seen down\n";
    }
    // 4. Reports: the rifleman's observation reaches his leader through the ordinary report (the flag rides on the
    //    contact); the leader marks his report track down and the squad's live request on that man is withdrawn at
    //    his next plan (a "retired" cover_request row). Off, the request stands.
    for(bool on:{false,true}){
        auto g=MakeGroup();Frame& f=g.frame;f.time=20;
        auto& cmd=f.command[1];
        for(int id=8;id<16;++id){f.soldiers[id].contacts={};f.soldiers[id].reports={};}
        auto& leader=f.soldiers[8];leader.contacts[enemy]={true,false,{60,0,0},15};leader.contacts[enemy].aimHeight=1.45f;
        auto& r=cmd.coverRequest;r=CoverRequest{};r.enemy=enemy;r.serial=3;r.requester=8;r.startedAt=18;r.until=26;r.gate="commit";r.contact=leader.contacts[enemy];
        Contact seen{true,false,{60,0,0},19.5f};seen.seenDown=true;seen.originalObserver=10;      // rifleman 10 saw him fall
        f.soldiers[10].contacts[enemy]=seen;
        ReactionRuntime rt;std::vector<Event> events;
        PendingReaction report;report.kind=ReactionKind::Report;report.enemy=enemy;report.source=10;
        report.contact=WithTracks(f.soldiers[10],f.time).contacts[enemy];report.contact.visible=false;          // what he sends (CommandSim)
        assert(report.contact.seenDown);
        QueueReaction(leader,report,f.time,rt);f.time=21;ProcessReactions(f,rt,events);
        assert(leader.reports[enemy].seenDown&&leader.reports[enemy].observedAt==19.5f&&KnowsFallen(leader,enemy));
        Config c;c.coverRequests=c.coverReports=c.coverGunAim=true;c.retireFallen=on;
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);
        cmd.advancing=false;ProgressRuntime progress;Diagnostics d;d.options.enabled=true;
        UpdateSquadPlan(leader,squad,g.map,c,{}, {},cmd,progress,&d,f.time);
        int retired=0;for(const auto& e:d.entries)retired+=e.kind=="cover_request"&&e.reason=="retired";
        assert(on?(!CoverRequestLive(r,f.time)&&retired==1):(CoverRequestLive(r,f.time)&&retired==0));
        // His own contact is untouched; the mark is on the report track he received.
        assert(leader.contacts[enemy].known&&!leader.contacts[enemy].seenDown);
    }
    std::cout<<"Knowledge: a leader receiving the report marks his track down and withdraws the request on him (switch on only)\n";
    // 5. A running bound watched only by a man since seen to fall is no longer held for covering fire; off, the same
    //    bound pauses with a covering request on him (the gate of plan 021 as before).
    for(bool on:{false,true}){
        Config config;config.coverRequests=true;config.retireFallen=on;auto f=InitialFrame(config);Map map;
        std::vector<Soldier> squad(f.soldiers.begin()+8,f.soldiers.begin()+16);for(auto& s:squad)s.position={-20,0};
        auto leader=squad[0];SquadCommand cmd;cmd.leader=8;cmd.support=15;cmd.advancing=true;
        cmd.hasWaypoint=true;cmd.waypoint={-8,12};cmd.maneuver=Maneuver::Press;cmd.planId=4;cmd.maneuverUntil=40;cmd.moveExposure=1;
        ProgressRuntime progress;Diagnostics trace;trace.options.enabled=true;
        leader.contacts[32]={true,false,{30,0},0};leader.contacts[32].seenDown=true;
        UpdateSquadPlan(leader,squad,map,config,{}, {},cmd,progress,&trace,0);
        int pauses=0,requests=0;bool fallenRelease=false;
        for(const auto& e:trace.entries){pauses+=e.kind=="movement_paused";requests+=e.kind=="cover_request"&&e.reason=="start";
            fallenRelease|=e.kind=="covering_check"&&e.reason=="bound"&&e.extra.find("\"release\":\"fallen\"")!=std::string::npos;}
        assert(on?(pauses==0&&requests==0&&fallenRelease&&cmd.movementBlock.reason==MoveBlock::None):(pauses==1&&requests==1&&!fallenRelease));
    }
    std::cout<<"Knowledge: a bound watched only by a man seen to fall is not held for fire on him (switch on only)\n";
    // 6. Battles. Off is the unchanged configuration and the unchanged 90 s Legacy battle; the switch is Legacy only
    //    (drills identical with it on). On, in a 90 s Legacy battle with covering requests: every contact marked
    //    seenDown names a man who is out of action at that tick (checked every tick, truth against knowledge), and
    //    no request starts on a man its leader already knew was seen to fall.
    {Config a,b;assert(SameConfig(a,b));b.retireFallen=true;assert(!SameConfig(a,b));
        DiagnosticOptions quiet;quiet.enabled=false;
        Config base;base.maxSeconds=90;Config off=base;off.retireFallen=false;
        const auto ra=Simulate(base,quiet),rb=Simulate(off,quiet);
        assert(GameplayDigest(ra)==GameplayDigest(rb)&&Fingerprint(ra)==Fingerprint(rb));
        Config drills;drills.drills=drills.foundations=true;drills.maxSeconds=30;Config drillsOn=drills;drillsOn.retireFallen=true;
        assert(GameplayDigest(Simulate(drills,quiet))==GameplayDigest(Simulate(drillsOn,quiet)));
        Config on=base;on.coverRequests=on.coverReports=on.coverGunAim=true;on.retireFallen=true;
        std::map<int,float> knownDown;                    // leader*UnitCount+enemy -> first tick he held it
        std::map<std::pair<int,int>,std::pair<int,float>> starts; // (squad, serial) -> (enemy, startedAt)
        int marks=0,falseDown=0,violations=0;
        DiagnosticOptions sink;sink.enabled=false;
        sink.trainingStateSink=[&](const Frame& f){
            for(const auto& s:f.soldiers)for(int e=0;e<UnitCount;++e)if(s.contacts[e].seenDown){++marks;falseDown+=f.soldiers[e].Active();}
            for(int squad=0;squad<SquadCount;++squad){const auto& cmd=f.command[squad];
                if(cmd.leader>=0)for(int e=0;e<UnitCount;++e)if(KnowsFallen(f.soldiers[cmd.leader],e))knownDown.emplace(cmd.leader*UnitCount+e,f.time);
                const auto& r=cmd.coverRequest;if(CoverRequestLive(r,f.time))starts.emplace(std::make_pair(squad,r.serial),std::make_pair(r.enemy,r.startedAt));
                if(CoverRequestLive(r,f.time)&&r.requester>=0){auto k=knownDown.find(r.requester*UnitCount+r.enemy);
                    if(k!=knownDown.end()&&r.startedAt>=k->second)++violations;}}
        };
        const auto rc=Simulate(on,sink);
        assert(marks>0&&falseDown==0&&violations==0&&!starts.empty());
        const auto t1=Simulate(on,quiet),t2=Simulate(on);assert(GameplayDigest(t1)==GameplayDigest(t2)&&GameplayDigest(t1)==GameplayDigest(rc));
        Config withRequests=base;withRequests.coverRequests=withRequests.coverReports=withRequests.coverGunAim=true;
        assert(GameplayDigest(t1)!=GameplayDigest(Simulate(withRequests,quiet)));
        int retired=0,seen=0;for(const auto& e:t2.diagnostics->entries){retired+=e.kind=="cover_request"&&e.reason=="retired";
            for(const auto& k:e.knowledge)seen+=k.contact.seenDown;}
        std::cout<<"Knowledge: off digest "<<GameplayDigest(ra)<<" (90 s Legacy) unchanged; on, "<<marks<<" seen-down contact-ticks, all true; "
                 <<starts.size()<<" requests, none on a man known down, "<<retired<<" retired; "<<seen<<" seen-down rows in the trace\n";
    }
}
