// Plan 030 M-S5, covering fire that is actually useful (Legacy only, every switch off by default):
// the quiet release (Config::coverQuietRelease, S5), the gun's station radius and upper-floor window
// stations (Config::coverStationRadius, Config::coverUpperStations) and the rifle base of fire
// (Config::coverRifleBase). Mechanism assertions only, never a battle outcome. Squad 1 (team 0):
// 8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun.
#pragma once
#include "group_tests.h"
#include "imported_v2_tests.h"
#include "Diagnostics.h"
#include "ReactionSim.h"
static void CoverUsefulTests(){
    using namespace army;
    const int enemy=TeamSize,other=TeamSize+1;
    auto lowWall=[](Map& m,float x,float y){m.obstacles.push_back({{x,y,0},{.6f,1.6f,0},false,true,1.1f});};
    auto tallWall=[](Map& m,float x,float y,float halfY){m.obstacles.push_back({{x,y,0},{.3f,halfY,0},false,false,3.f});};
    auto known=[](Soldier& s,int who,Vec3 at,float seen,float fired){s.contacts[who]={true,true,at,seen};s.contacts[who].aimHeight=1.45f;s.contacts[who].lastFireAt=fired;};
    // 1. QuietCrossing: the leader's own knowledge of who overlooks the crossing and when he last saw them fire.
    {Map open;PrepareGeometry(open);
        Map screened;tallWall(screened,48,-30,10);PrepareGeometry(screened); // hides (50,-30) from the crossing
        const std::vector<Vec3> path{{10,0,0},{20,0,0},{30,0,0}};
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Soldier leader=fp->soldiers[8];leader.contacts={};leader.reports={};leader.deliveries={};
        const float now=20;
        assert(!QuietCrossing(leader,open,{0,0,0},path,now).pass&&QuietCrossing(leader,open,{0,0,0},path,now).overlooking==0); // nobody known: nothing to release on
        known(leader,enemy,{50,0,0},now-1,now-1);
        auto v=QuietCrossing(leader,open,{0,0,0},path,now);assert(v.overlooking==1&&v.loud==1&&!v.pass);          // seen firing 1 s ago
        leader.contacts[enemy].lastFireAt=now-CoverQuietConstants.quietSeconds;assert(QuietCrossing(leader,open,{0,0,0},path,now).pass); // quiet 3 s
        leader.contacts[enemy].lastFireAt=-100;assert(QuietCrossing(leader,open,{0,0,0},path,now).pass);             // never seen firing (a track of a man down)
        // A report the leader holds counts as his own sighting does.
        leader.reports[enemy]=leader.contacts[enemy];leader.reports[enemy].lastFireAt=now-.5f;assert(!QuietCrossing(leader,open,{0,0,0},path,now).pass);
        leader.reports[enemy]=Contact{};
        // Under credited fire: quiet since our rounds began landing on him (and at least creditedQuiet) releases it;
        // rounds that landed before his last shot do not.
        leader.contacts[enemy].lastFireAt=now-1.5f;
        FireDelivery d;d.shooter=15;d.enemy=enemy;d.rounds=2;d.target={50,0,0};d.observedAt=now-.8f;d.times={{now-1.2f,now-.8f,-100,-100,-100,-100,-100,-100}};
        RememberDelivery(leader,d,true);assert(QuietCrossing(leader,open,{0,0,0},path,now).pass);
        leader.contacts[enemy].lastFireAt=now-1.0f;assert(!QuietCrossing(leader,open,{0,0,0},path,now).pass);         // he answered after our first round
        leader.contacts[enemy].lastFireAt=now-.5f;leader.deliveries={};RememberDelivery(leader,d,true);
        assert(!QuietCrossing(leader,open,{0,0,0},path,now).pass);                                                     // not quiet long enough
        leader.deliveries={};leader.contacts[enemy].lastFireAt=now-5;
        // A second, loud threat: overlooking, it holds the crossing; screened from it, it does not count.
        known(leader,other,{50,-30,0},now-1,now-.5f);
        v=QuietCrossing(leader,open,{0,0,0},path,now);assert(v.overlooking==2&&v.loud==1&&!v.pass);
        v=QuietCrossing(leader,screened,{0,0,0},path,now);assert(v.overlooking==1&&v.loud==0&&v.pass);
        // A stale track is ignored only when the gate's primary age limit is given (plan 028 3c).
        leader.contacts[other].observedAt=now-30;assert(!QuietCrossing(leader,open,{0,0,0},path,now).pass&&QuietCrossing(leader,open,{0,0,0},path,now,20).pass);
        std::cout<<"Quiet release: a crossing is released when every known threat overlooking it has been quiet "<<CoverQuietConstants.quietSeconds
                 <<" s, or quiet under our credited fire; a report counts, a screened threat does not\n";
    }
    // 2. The contact remembers when its enemy was last seen firing (switch on); off, a later sighting of him
    //    not firing replaces it, as before.
    for(bool on:{false,true}){
        auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;f.time=10;
        ReactionRuntime rt;rt.quietRelease=on;std::vector<Event> events;
        auto& s=f.soldiers[8];s.contacts[enemy]={true,true,{50,0,0},9};s.contacts[enemy].lastFireAt=8.9f;s.contacts[enemy].registeredAt=9;
        PendingReaction sight;sight.kind=ReactionKind::Sight;sight.enemy=enemy;sight.contact={true,true,{51,0,0},10};sight.contact.lastFireAt=-100;
        QueueReaction(s,sight,10,rt);f.time=12;ProcessReactions(f,rt,events);
        assert(s.contacts[enemy].observedAt==10&&s.contacts[enemy].position.x==51);
        assert(on?s.contacts[enemy].lastFireAt==8.9f:s.contacts[enemy].lastFireAt==-100);
        s.reports[enemy]={true,false,{50,0,0},9};s.reports[enemy].lastFireAt=9.5f;
        PendingReaction report;report.kind=ReactionKind::Report;report.enemy=enemy;report.source=9;report.contact={true,false,{52,0,0},11};report.contact.lastFireAt=-100;
        QueueReaction(s,report,12,rt);f.time=14;ProcessReactions(f,rt,events);
        assert(s.reports[enemy].observedAt==11&&(on?s.reports[enemy].lastFireAt==9.5f:s.reports[enemy].lastFireAt==-100));
    }
    std::cout<<"Quiet release: a contact keeps when its enemy was last seen firing across sightings and reports (on only)\n";
    // A squad 1 standing still at `positions`, every man knowing the enemies given.
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
    // 3. The station radius (coverStationRadius). Plan 028 Stage 4's ground: the named enemy east at (50,0) hidden
    //    from the gun's station at (-6,0) by a tall wall; the only covered place bearing on it is 30 m off, beyond
    //    the 25 m search. At 40 m the same search finds it; at 25 (the default) it is refused as before.
    //    Two tall walls (x -3 and x -9, y 3 to 27) make the way north a covered corridor.
    {Map m;tallWall(m,-3,0,3);lowWall(m,-7.2f,-1);tallWall(m,-13.5f,4.75f,3.25f);lowWall(m,-4.8f,30);lowWall(m,-7.2f,30);
        tallWall(m,-3,15,12);tallWall(m,-9.6f,17,10);PrepareGeometry(m);
        auto moved=[&](float radius,Vec3& to){
            auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
            auto squad=squadAt(f,{{{-5,0,0},{0,0,0},{0,-2,0},{0,2,0},{0,-4,0},{0,4,0},{0,-6,0},{-6,0,0}}},{{enemy,{50,0,0}},{other,{-60,0,0}}},9.5f);
            auto& cmd=f.command[1];const int slot=15%SquadSize;
            cmd.stations.held[slot]=true;cmd.stations.station[slot]={-6,0,0};cmd.stations.supportStationFor=15;
            f.soldiers[15].assignment.task=Task::Overwatch;squad[7]=f.soldiers[15];
            request(cmd,f.soldiers[8],enemy,20,{{0,0,0},{25,0,0}});
            Config c;c.coverRequests=c.coverGunAim=true;c.coverStationRadius=radius;
            const auto o=gunOrder(PlanSquad(f.soldiers[8],squad,m,c,cmd,10));
            assert(o.recipient==15&&o.fire);to=o.position;return Distance(to,{-6,0,0})>.5f;};
        Vec3 to{};assert(!moved(25,to));assert(moved(40,to));
        const float travel=Distance(to,{-6,0,0});assert(travel>25&&travel<=40&&BearsOnTrack(m,to,Contact{true,false,{50,0,0},9.5f}));
        std::cout<<"Station radius: the gun's covered place "<<travel<<" m off is refused at 25 m and taken at 40 m\n";
    }
    // 4. Upper-floor window stations (coverUpperStations), plan 029 F-B's house with two upper windows in its east
    //    wall. The gun stands on the ground floor with no line east onto the named enemy; no ground cover bears on
    //    it. With the switch the re-aim itself sends him up to an east window (a restation row marked upper), never
    //    a window-team place; off, or on an ARMYMAP 1 map (importedBuildings false), the re-aim finds no station
    //    (a no_station row) and he is left to the general search. (That search's last resort, the old crouch-cover
    //    scan, can take a window too: it did so here before this switch.)
    {std::string e;auto house=ImportBattlefield(imported_v2::WindowHouseFixture().Text(),e);assert(house);const Map& hm=house->map;assert(hm.importedBuildings);
        auto aim=[&](bool upper,bool windowTeam,const Map& m,Vec3& to){
            auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
            auto squad=squadAt(f,{{{18,-13,0},{17,-14,0},{17,-15,0},{17,-16,0},{16,-13,0},{16,-14,0},{16,-15,0},{22,-15,0}}},{{enemy,{45,-14,0}}},9.5f);
            auto& cmd=f.command[1];const int slot=15%SquadSize;
            cmd.stations.held[slot]=true;cmd.stations.station[slot]={22,-15,0};cmd.stations.supportStationFor=15;cmd.building=0;
            if(windowTeam){cmd.teamPlan.windowTeam={{10,11}};cmd.teamPlan.windows={{Vec3{24.15f,-15.5f,3.2f},Vec3{24.15f,-12.5f,3.2f}}};}
            f.soldiers[15].assignment.task=Task::Overwatch;squad[7]=f.soldiers[15];
            request(cmd,f.soldiers[8],enemy,20,{{18,-13,0},{40,-14,0}});
            Config c;c.coverRequests=c.coverGunAim=true;c.coverStationRadius=40;c.coverUpperStations=upper;
            Diagnostics d;d.options.enabled=true;
            const auto o=gunOrder(PlanSquad(f.soldiers[8],squad,m,c,cmd,10,&d));assert(o.recipient==15);to=o.position;
            for(const auto& row:d.entries)if(row.kind=="cover_gun_aim")return row.reason+(row.extra.find("\"upper\":1")!=std::string::npos?"+upper":"");
            return std::string();};
        Vec3 to{};
        assert(aim(false,false,hm,to)=="no_station");
        assert(aim(true,false,hm,to)=="restation+upper"&&std::abs(to.x-24.15f)<1e-3f&&to.z>1&&BearsOnTrack(hm,to,Contact{true,false,{45,-14,0},9.5f}));
        const Vec3 window=to;
        assert(aim(true,true,hm,to)=="no_station");                                   // both east windows are the window team's
        Map flat=hm;flat.importedBuildings=false;assert(aim(true,false,flat,to)=="no_station");
        std::cout<<"Upper stations: the re-aimed gun is sent to the upper east window at ("<<window.x<<','<<window.y<<','<<window.z<<"), never a window-team place\n";
    }
    // 5. The rifle base of fire (coverRifleBase). Rifleman 10 sits behind a low wall whose line bears on the named
    //    enemy, 6 m from his ordered place: Stage 1 never tasks him (not on his place). With the switch, and no gun
    //    station bearing, he is tasked as the base of fire; with the gun's station bearing, he is not; nor is a
    //    pinned man, nor a man walking.
    {Map m;lowWall(m,1.2f,6);tallWall(m,1.2f,-4,5);PrepareGeometry(m);
        auto run=[&](bool base,bool gunBears,int variant){
            auto fp=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*fp;
            auto squad=squadAt(f,{{{-5,0,0},{0,-8,0},{0,6,0},{-4,-4,0},{-4,-2,0},{-4,-6,0},{-4,-8,0},{-6,-12,0}}},{{enemy,{50,0,0}}},9.5f);
            // Riflemen 11-14 stand behind the tall wall with no line; rifleman 10 at (0,6) behind the low wall.
            auto& r10=f.soldiers[10];r10.assignment.position={-6,6,0};                      // off his ordered place
            if(variant==1)r10.understoodSuppression=.5f;
            if(variant==2){r10.action=Action::Advance;r10.goal={-6,6,0};}
            squad[2]=r10;
            auto& cmd=f.command[1];const int slot=15%SquadSize;
            cmd.stations.held[slot]=true;cmd.stations.supportStationFor=15;cmd.stations.station[slot]=gunBears?Vec3{-6,20,0}:Vec3{-6,-4,0};
            const std::vector<Vec3> path{{10,0,0},{30,0,0}};
            RaiseCoverRequest(f.soldiers[8],squad,m,cmd,enemy,{0,0,0},{30,0,0},0,"commit",10,nullptr,&path,false,base);
            return std::make_pair(cmd.coverRequest.tasked[2],cmd.coverRequest.rifleBase[2]);};
        assert(!run(false,false,0).first);
        const auto on=run(true,false,0);assert(on.first&&on.second);
        assert(!run(true,true,0).first);
        assert(!run(true,false,1).first&&!run(true,false,2).first);
        std::cout<<"Rifle base: a rifleman in cover off his ordered place, bearing on the threat, is tasked only when no gun station bears\n";
    }
    // 6. Off is the unchanged configuration; each switch is part of its identity.
    {Config a,b;assert(SameConfig(a,b));b.coverQuietRelease=true;assert(!SameConfig(a,b));b=a;b.coverStationRadius=40;assert(!SameConfig(a,b));
        b=a;b.coverUpperStations=true;assert(!SameConfig(a,b));b=a;b.coverRifleBase=true;assert(!SameConfig(a,b));
        assert(a.coverStationRadius==CoverSupplyConstants.gunAimRange);}
}
