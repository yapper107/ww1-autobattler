// Plan 023 stage A: the rifle group's stations and the identity of a group order. Every check
// here is a mechanism assertion on what the relay decides, never on a battle outcome. The squad
// is squad 1 (team 0): 8 sergeant, 9 corporal, 10-14 riflemen, 15 the gun; it carries no platoon
// staff. Squad planning is held off, so what runs is the relay alone against one standing order.
#pragma once
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "ManeuverSim.h"
#include "PlatoonSim.h"
#include "PlanSim.h"
struct GroupFixture {
    army::Map map;
    army::Config config;
    army::Frame frame;
    army::CommandRuntime runtime;
    std::vector<army::Event> events;
};
// The shelter of the cover position nearest a point: the tests place men on real cover, so that
// what they assert is the relay's rule and not the catalogue's geometry.
static army::Vec3 NearestCoverShelter(const army::Map& map,army::Vec3 near) {
    using namespace army;
    Vec3 best=near;float distance=6;
    for(const auto& c:CoverPositions(map))if(Distance(c.shelter,near)<distance){distance=Distance(c.shelter,near);best=c.shelter;}
    return best;
}
// Low walls at x=18 and x=-2, five metres apart, and a pair at x=44 for the forward element:
// cover against a threat in the east at the leader's objective, beside the group, and ahead of it.
static GroupFixture MakeGroup() {
    using namespace army;
    GroupFixture g;
    for(float y=-10;y<=10;y+=5){g.map.obstacles.push_back({{18,y,0},{.6f,1.6f,0},false,true,1.1f});g.map.obstacles.push_back({{-2,y,0},{.6f,1.6f,0},false,true,1.1f});}
    for(float y:{6.f,-6.f})g.map.obstacles.push_back({{44,y,0},{.6f,1.6f,0},false,true,1.1f});
    PrepareGeometry(g.map);
    g.frame=InitialFrame(g.config);
    auto& cmd=g.frame.command[1];cmd.leader=8;cmd.support=15;cmd.advancing=true;cmd.mission={20,0,0};
    for(int id=8;id<16;++id) {
        auto& s=g.frame.soldiers[id];
        s.position={id==15?-6.f:0.f,float(id%4-2)*1.5f,0};
        s.contacts[TeamSize]={true,true,{60,0,0},0};s.contacts[TeamSize].aimHeight=1.45f;
        s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.sector={60,0,0};s.assignment.serial=1;
    }
    auto& nco=g.frame.soldiers[9];nco.position={0,0,0};nco.assignment.task=Task::Advance;nco.assignment.position={20,0,0};
    for(int squad=0;squad<SquadCount;++squad)g.runtime.nextPlan[squad]=g.runtime.lastPlanAt[squad]=1e9f;
    return g;
}
static void RunRelay(GroupFixture& g,float to) {
    while(g.frame.time+0.049f<to){g.frame.time+=0.05f;UpdateCommands(g.frame,g.map,g.config,g.runtime,g.events);}
}
static void GroupStationTests() {
    using namespace army;
    // a. A station belongs to the objective, not to the cycle: while the objective stands, every
    //    man keeps the same place and no second order is issued for it.
    {
        auto g=MakeGroup();
        RunRelay(g,6);
        const auto first=g.frame.command[1].stations;
        std::array<int,SquadSize> serial{};std::array<Vec3,SquadSize> sent{};
        int covered=0;
        for(int id=10;id<15;++id) {
            const int slot=id%SquadSize;
            assert(g.runtime.lastSent[id].issuer==9);
            serial[slot]=g.runtime.lastSent[id].serial;sent[slot]=g.runtime.lastSent[id].position;
            covered+=first.held[slot];
        }
        assert(covered>=4); // the ground offers four covered stations; the fifth man still has a fixed place
        const int objective=first.serial;
        RunRelay(g,26); // twenty more seconds, ten relay cycles
        const auto& st=g.frame.command[1].stations;
        assert(st.serial==objective);
        for(int id=10;id<15;++id) {
            const int slot=id%SquadSize;
            assert(st.held[slot]==first.held[slot]&&st.issued[slot]==st.serial);
            if(st.held[slot])assert(Distance(st.station[slot],first.station[slot])<.001f);
            assert(g.runtime.lastSent[id].serial==serial[slot]);          // no new order id under one objective
            assert(Distance(g.runtime.lastSent[id].position,sent[slot])<.001f);
            assert(Distance(g.frame.soldiers[id].assignment.position,sent[slot])<.001f); // and he holds it
        }
        for(int a=10;a<15;++a)for(int b=a+1;b<15;++b)assert(Distance(sent[a%SquadSize],sent[b%SquadSize])>1.f); // spread, not a heap
        std::cout<<"GROUP: five stations at one objective survive ten relay cycles, one order each ("<<covered<<" from the cover catalogue)\n";
    }
    // b. A man BEHIND the group on its axis is sent to HIS STATION at the objective: a fixed
    //    point that does not follow the leader as he walks on, and it is issued once.
    {
        auto g=MakeGroup();
        auto& late=g.frame.soldiers[12];late.position={-30,0,0};
        late.assignment.task=Task::Hold;late.assignment.position=late.position; // idling where he stands
        RunRelay(g,4);
        const int slot=12%SquadSize;
        const auto& st=g.frame.command[1].stations;
        assert(st.held[slot]&&Distance(st.station[slot],g.frame.soldiers[9].assignment.position)<GroupConstants.haltRadius);
        const Vec3 station=st.station[slot];const int serial=g.runtime.lastSent[12].serial;
        assert(g.runtime.lastSent[12].issuer==9&&AttackMovementTask(g.runtime.lastSent[12].task));
        assert(Distance(g.runtime.lastSent[12].position,station)<1.5f);
        for(int step=0;step<3;++step) {   // the leader walks on; the call-up does not follow him
            for(int id:{9,10,11,13,14})g.frame.soldiers[id].position.x+=4;
            late.position.x+=5;
            RunRelay(g,g.frame.time+4);
            assert(g.runtime.lastSent[12].serial==serial);
            assert(Distance(st.station[slot],station)<.001f);
        }
        std::cout<<"GROUP: a man 30 m behind is sent once to his own fixed station at the objective\n";
    }
    // b1. Holding in contact, a man behind and idle is called up to a place WITH THE GROUP: his
    //     own patch is his station there, so the call-up has to give him a new one.
    {
        auto g=MakeGroup();
        auto& nco=g.frame.soldiers[9];nco.assignment.task=Task::Hold;nco.assignment.position={20,0,0};
        g.frame.command[1].engaged=true;
        auto& late=g.frame.soldiers[12];late.position={-30,0,0};
        late.assignment.task=Task::Hold;late.assignment.position=late.position;
        RunRelay(g,4+GroupConstants.callUpSeconds+2);
        const int slot=12%SquadSize;
        const auto& st=g.frame.command[1].stations;
        assert(st.kind==StationKind::Hold);
        assert(g.runtime.lastSent[12].task==Task::Rally&&g.runtime.lastSent[12].issuer==9);
        assert(Distance(g.runtime.lastSent[12].position,nco.assignment.position)<GroupConstants.haltRadius);
        const int serial=g.runtime.lastSent[12].serial;const Vec3 station=st.station[slot];
        RunRelay(g,g.frame.time+6);   // and it is not issued again while he closes on it
        assert(g.runtime.lastSent[12].serial==serial&&Distance(st.station[slot],station)<.001f);
        std::cout<<"GROUP: a man idling 30 m behind a group in contact is called up once, to the group\n";
    }
    // b2. A man AHEAD of the group in a protected place that bears on the enemy keeps it: it
    //     becomes his station, he is never recalled, and he counts as the group's forward element.
    {
        auto g=MakeGroup();
        auto& forwardMan=g.frame.soldiers[13];
        forwardMan.position=NearestCoverShelter(g.map,{44,6,0});
        forwardMan.assignment.task=Task::Hold;forwardMan.assignment.position=forwardMan.position;
        assert(StationCovered(g.frame.soldiers[9],g.map,forwardMan.position,0)&&StationBears(g.frame.soldiers[9],g.map,forwardMan.position,0));
        RunRelay(g,6);
        const int slot=13%SquadSize;
        assert(g.frame.command[1].stations.forward[slot]);
        assert(Distance(g.frame.command[1].stations.station[slot],forwardMan.position)<.001f);
        assert(g.runtime.lastSent[13].task!=Task::Rally&&Distance(g.runtime.lastSent[13].position,forwardMan.position)<1.5f);
        std::cout<<"GROUP: a man 25 m ahead in cover with a line keeps his ground as his station\n";
    }
    // b3. A man ahead with NO line is given the nearest place that bears, searched around HIM.
    {
        auto g=MakeGroup();
        g.map.obstacles.push_back({{50,-12,0},{1,6,0},false,false,3.5f});      // screens him from the enemy
        g.map.obstacles.push_back({{46,-4,0},{.6f,1.6f,0},false,true,1.1f});   // the place that bears, 8 m away
        PrepareGeometry(g.map);
        auto& blind=g.frame.soldiers[13];blind.position={45,-12,0};
        blind.assignment.task=Task::Hold;blind.assignment.position=blind.position;
        assert(!StationBears(g.frame.soldiers[9],g.map,blind.position,0));
        RunRelay(g,6);
        const int slot=13%SquadSize;
        const Vec3 station=g.frame.command[1].stations.station[slot];
        assert(g.frame.command[1].stations.held[slot]);
        assert(Distance(station,blind.position)<=GroupConstants.holdRadius);      // around him
        assert(station.x>blind.position.x-GroupConstants.holdRadius);             // not back toward the group
        assert(StationBears(g.frame.soldiers[9],g.map,station,0));
        std::cout<<"GROUP: a man ahead with no line is sent "<<Distance(station,blind.position)<<" m to a place that bears, not back\n";
    }
    // b4. Two men on forward bearing ground are an advantage: the group's next objective, the
    //     LEADER's own destination included, is laid out from them (user ruling 1).
    {
        auto g=MakeGroup();
        g.frame.command[1].engaged=true;
        g.frame.soldiers[13].position=NearestCoverShelter(g.map,{44,6,0});
        g.frame.soldiers[14].position=NearestCoverShelter(g.map,{44,-6,0});
        for(int id:{13,14}){g.frame.soldiers[id].assignment.task=Task::Hold;g.frame.soldiers[id].assignment.position=g.frame.soldiers[id].position;}
        RunRelay(g,6);
        const auto& st=g.frame.command[1].stations;
        assert(st.forwardCount>=2);
        if(st.comeUp) {
            assert(st.forwardCentre.x>30);
            std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
            auto orders=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,g.frame.command[1],g.frame.time);
            bool leaderComesUp=false;
            for(const auto& o:orders)if(o.recipient==9)leaderComesUp=Distance(o.position,st.forwardCentre)<6;
            assert(leaderComesUp);
            std::cout<<"GROUP: with two men forward the leader's own destination moves up to them ("<<st.forwardCentre.x<<" m)\n";
        } else {
            // The open ground between is watched: then they are the foothold, not a destination.
            assert(st.foothold&&Distance(st.footholdSector,{60,0,0})<1.f);
            for(int id:{13,14})assert(Distance(g.runtime.lastSent[id].sector,{60,0,0})<1.f&&g.runtime.lastSent[id].task!=Task::Rally);
            std::cout<<"GROUP: the way up is watched, so the forward men hold it and fire on the enemy that watches it\n";
        }
    }
    // b4b. The contract 3.4 asks of PlanSquad, pinned on the decision itself: when the group has
    //      an advantage to come up to, the LEADER's own destination is that advantage and not the
    //      place he is standing (generation 19 moved only his men and he pushed on alone).
    {
        auto g=MakeGroup();
        auto& cmd=g.frame.command[1];cmd.engaged=true;
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto stay=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        cmd.stations.comeUp=true;cmd.stations.forwardCentre={44,0,0};cmd.stations.forwardCount=2;
        auto comeUp=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        Vec3 before{},after{};
        for(const auto& o:stay)if(o.recipient==9)before=o.position;
        for(const auto& o:comeUp)if(o.recipient==9)after=o.position;
        assert(Distance(before,g.frame.soldiers[9].position)<3&&Distance(after,{44,0,0})<6);
        std::cout<<"GROUP: with an advantage held in front the leader's own destination moves from "<<before.x<<" m to "<<after.x<<" m\n";
    }
    // b5. On an unsafe way up the forward men are the foothold: they are given the overlooking
    //     enemy to fire on, they are not recalled across it, and the group is not sent over.
    {
        auto g=MakeGroup();
        g.frame.command[1].engaged=true;
        g.frame.soldiers[13].position=NearestCoverShelter(g.map,{44,6,0});
        g.frame.soldiers[14].position=NearestCoverShelter(g.map,{44,-6,0});
        for(int id:{13,14}){g.frame.soldiers[id].assignment.task=Task::Hold;g.frame.soldiers[id].assignment.position=g.frame.soldiers[id].position;}
        // Nothing screens the ground between the group and them, and the enemy is in the east.
        assert(CrossingExposure(g.frame.soldiers[9],g.map,{0,0,0},{44,0,0},0)>=GroupConstants.unsafeExposure);
        RunRelay(g,6);
        const auto& st=g.frame.command[1].stations;
        assert(!st.comeUp&&st.foothold);
        assert(Distance(st.footholdSector,{60,0,0})<1.f);
        for(int id:{13,14}) {
            assert(g.runtime.lastSent[id].task!=Task::Rally);                       // never recalled across it
            assert(Distance(g.runtime.lastSent[id].sector,st.footholdSector)<1.f);  // told what to fire on
        }
        std::cout<<"GROUP: on a watched crossing the forward men keep their ground and are given the enemy that watches it\n";
    }
    // b6. Plan 023 B2, the stand-off: with an enemy known beyond two forward men who are
    //     themselves outside the band, the group comes up BESIDE them and every place the relay
    //     hands out is at least standOff from him and no nearer than they already are.
    {
        auto g=MakeGroup();
        for(float y:{6.f,-6.f})g.map.obstacles.push_back({{28,y,0},{.6f,1.6f,0},false,true,1.1f}); // cover for the pair
        PrepareGeometry(g.map);
        auto& cmd=g.frame.command[1];cmd.engaged=true;cmd.mission={0,0,0};
        g.frame.soldiers[9].assignment.position={0,0,0};   // the leader's own ordered place is behind
        g.frame.soldiers[13].position=NearestCoverShelter(g.map,{28,6,0});
        g.frame.soldiers[14].position=NearestCoverShelter(g.map,{28,-6,0});
        for(int id:{13,14}){g.frame.soldiers[id].assignment.task=Task::Hold;g.frame.soldiers[id].assignment.position=g.frame.soldiers[id].position;}
        RunRelay(g,6);
        const auto& st=cmd.stations;
        const float theirs=std::min(Distance(g.frame.soldiers[13].position,{60,0,0}),Distance(g.frame.soldiers[14].position,{60,0,0}));
        assert(theirs>GroupConstants.standOff);
        assert(st.forwardCount>=2);                                  // they really are an advantage
        assert(st.standOffFloor>=theirs-.01f);                       // and they set the floor for the rest
        assert(Distance(st.forwardCentre,{60,0,0})>=GroupConstants.standOff-.01f);
        assert(Distance(st.forwardCentre,{60,0,0})>=theirs-.01f);    // and the group does not pass them
        for(int id=10;id<15;++id){const int slot=id%SquadSize;
            if(!st.held[slot]||st.forward[slot])continue;            // a man's own ground is his affair
            assert(Distance(st.station[slot],{60,0,0})>=GroupConstants.standOff*.5f);
            assert(Distance(g.runtime.lastSent[id].position,{60,0,0})>=GroupConstants.standOff*.5f);}
        std::cout<<"GROUP: the group comes up to "<<Distance(st.forwardCentre,{60,0,0})<<" m from the enemy, no nearer than its forward men at "<<theirs<<" m\n";
    }
    // b7. Forward men INSIDE the band keep their ground (ruling 1) but are not an advantage to be
    //     pulled onto: the group's objective stays behind them and they are the foothold.
    {
        auto g=MakeGroup();
        auto& cmd=g.frame.command[1];cmd.engaged=true;
        g.frame.soldiers[13].position=NearestCoverShelter(g.map,{44,6,0});
        g.frame.soldiers[14].position=NearestCoverShelter(g.map,{44,-6,0});
        for(int id:{13,14}){g.frame.soldiers[id].assignment.task=Task::Hold;g.frame.soldiers[id].assignment.position=g.frame.soldiers[id].position;}
        assert(Distance(g.frame.soldiers[13].position,{60,0,0})<GroupConstants.standOff);
        RunRelay(g,6);
        const auto& st=cmd.stations;
        for(int id:{13,14}){const int slot=id%SquadSize;
            assert(st.forward[slot]&&Distance(st.station[slot],g.frame.soldiers[id].position)<.001f); // they keep it
            assert(g.runtime.lastSent[id].task!=Task::Rally);}                                        // and are not recalled
        assert(!st.comeUp&&st.foothold);                                                              // not an advantage: a foothold
        assert(Distance(st.forwardCentre,{60,0,0})>=GroupConstants.standOff-.01f);                    // the objective is the line behind them
        std::cout<<"GROUP: men inside the band keep their ground and the group's objective stays "<<Distance(st.forwardCentre,{60,0,0})<<" m out\n";
    }
    // b8. With no enemy known the stand-off changes nothing at all.
    {
        auto g=MakeGroup();
        for(auto& s:g.frame.soldiers)s.contacts[TeamSize]={};
        const auto& man=g.frame.soldiers[12];
        std::vector<Vec3> taken;Vec3 with{},without{};
        const bool a=GroupStation(g.frame.soldiers[9],man,StationKind::Halt,{20,0,0},{60,0,0},taken,g.map,1,with,GroupConstants.standOff);
        const bool b=GroupStation(g.frame.soldiers[9],man,StationKind::Halt,{20,0,0},{60,0,0},taken,g.map,1,without,0);
        assert(a==b&&Distance(with,without)<.001f);
        std::cout<<"GROUP: with no enemy known the stand-off picks the same station\n";
    }
    // c. The relay never goes dark: it runs from the corporal's successor, and when nobody in the
    //    rifle group can lead it any more the squad's own officer places the men himself. (With
    //    planning held off, every order these men receive here comes from the relay.)
    {
        auto g=MakeGroup();
        RunRelay(g,4);
        g.frame.soldiers[9].health=0;g.frame.soldiers[10].health=0; // the corporal and his first successor
        for(int id=11;id<15;++id)g.runtime.lastSent[id]=Assignment{};
        RunRelay(g,g.frame.time+6);
        for(int id=12;id<15;++id)assert(g.runtime.lastSent[id].issuer==11&&g.runtime.lastSent[id].task!=Task::None);
        // Now the whole rifle group is known wounded: nobody in it can lead, and the relay used to
        // stop here, leaving these men to a fallback with no call-up rule of its own.
        for(int id=11;id<15;++id){g.frame.soldiers[id].health=g.frame.soldiers[id].understoodHealth=40;g.frame.soldiers[8].knownWounded[id]=true;}
        for(int id=11;id<15;++id)g.runtime.lastSent[id]=Assignment{};
        RunRelay(g,g.frame.time+6);
        for(int id=12;id<15;++id)assert(g.runtime.lastSent[id].issuer==8&&g.runtime.lastSent[id].task==Task::RearGuard);
        std::cout<<"GROUP: the relay places the group through the corporal's successor, and through the officer when nobody else is left\n";
    }
}
// Plan 023 stage C: the leader is a member of his own group (3.6) and the covering pair (3.7).
static void GroupPaceTests() {
    using namespace army;
    // d. One derivation (3.6): the objective the group's stations belong to is fixed the moment
    //    the leader is given his own order, inside PlanSquad itself, not a relay cycle later.
    {
        auto g=MakeGroup();
        auto& cmd=g.frame.command[1];
        const int before=cmd.stations.serial;
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto orders=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        Vec3 leaderGoal{};bool found=false;
        for(const auto& o:orders)if(o.recipient==9){leaderGoal=o.position;found=true;}
        assert(found);
        assert(cmd.stations.serial!=before);
        assert(Distance(cmd.stations.objective,leaderGoal)<.01f);
        std::cout<<"GROUP: the leader's men's station objective is fixed the same cycle his own order is (one derivation)\n";
    }
    // e. The leader's pace (3.6, the middle option): with his men well beyond leadMaxLead behind
    //    him, his own order carries the slow pace; once they close within leadCloseDistance the
    //    same order carries the full pace.
    {
        auto g=MakeGroup();
        auto& cmd=g.frame.command[1];
        cmd.movementBlock.reason=MoveBlock::Fire; // forces destination=nco->position, a clean lever
        g.frame.soldiers[9].position={40,0,0};
        for(int id=10;id<15;++id)g.frame.soldiers[id].position={0,float(id-12)*1.5f,0};
        std::vector<Soldier> far(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto slow=PlanSquad(g.frame.soldiers[8],far,g.map,g.config,cmd,1);
        float slowPace=-1;for(const auto& o:slow)if(o.recipient==9)slowPace=o.pace;
        assert(std::abs(slowPace-GroupConstants.leadSlowPace)<1e-4f);
        g.frame.soldiers[9].position={10,0,0}; // now within leadCloseDistance of the group
        std::vector<Soldier> close(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto full=PlanSquad(g.frame.soldiers[8],close,g.map,g.config,cmd,1);
        float fullPace=-1;for(const auto& o:full)if(o.recipient==9)fullPace=o.pace;
        assert(std::abs(fullPace-1.f)<1e-4f);
        std::cout<<"GROUP: the leader's own order carries pace "<<slowPace<<" beyond leadMaxLead and "<<fullPace<<" once his men close\n";
    }
    // f. The covering pair (3.7): leaving a position in contact keeps exactly the two bearing men,
    //    on the ground they already hold; a man with no line is never chosen; they are given
    //    stations on the next objective at once and released within coverPairSeconds.
    {
        auto g=MakeGroup();
        auto& cmd=g.frame.command[1];
        cmd.engaged=true;cmd.stations.serial=3;
        g.frame.soldiers[12].position=NearestCoverShelter(g.map,{18,6,0});
        g.frame.soldiers[13].position=NearestCoverShelter(g.map,{18,-6,0});
        g.frame.soldiers[14].position={-40,0,0}; // far off: no line on the enemy at all
        for(int id:{12,13,14}) {
            const int slot=id%SquadSize;
            cmd.stations.station[slot]=g.frame.soldiers[id].position;cmd.stations.held[slot]=true;cmd.stations.issued[slot]=cmd.stations.serial;
        }
        assert(StationBears(g.frame.soldiers[9],g.map,g.frame.soldiers[12].position,0));
        assert(StationBears(g.frame.soldiers[9],g.map,g.frame.soldiers[13].position,0));
        assert(!StationBears(g.frame.soldiers[9],g.map,g.frame.soldiers[14].position,0));
        cmd.hasWaypoint=true;cmd.waypoint={80,0,0};cmd.mission={80,0,0};
        std::vector<Soldier> squad(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        PlanGroupStations(g.frame.soldiers[8],squad,g.map,cmd,g.config,g.frame.time);
        int coveringCount=0;for(int id=10;id<15;++id)coveringCount+=cmd.stations.covering[id%SquadSize];
        assert(coveringCount==2);
        assert(cmd.stations.covering[12%SquadSize]&&cmd.stations.covering[13%SquadSize]);
        assert(!cmd.stations.covering[14%SquadSize]); // a man with no line never stays
        assert(Distance(cmd.stations.station[12%SquadSize],g.frame.soldiers[12].position)<.01f); // the ground he already holds
        assert(cmd.stations.coverUntil>0&&cmd.stations.coverUntil<=GroupConstants.coverPairSeconds+.01f);
        RunRelay(g,4); // well before coverUntil: still covering, and left alone by the call-up
        assert(cmd.stations.covering[12%SquadSize]&&cmd.stations.behindSince[12%SquadSize]<=0);
        RunRelay(g,GroupConstants.coverPairSeconds+2); // now released
        assert(!cmd.stations.covering[12%SquadSize]&&!cmd.stations.covering[13%SquadSize]);
        assert(cmd.stations.issued[12%SquadSize]==cmd.stations.serial&&cmd.stations.issued[13%SquadSize]==cmd.stations.serial);
        std::cout<<"GROUP: leaving a position in contact keeps exactly the two bearing men, releases them within "<<GroupConstants.coverPairSeconds<<" s with a station already waiting\n";
    }
    // g. The shared movement multiplier (plan 023 C, user ruling): an order at pace 0.5 exactly
    //    halves the per-tick speed; the switch off, or pace 1, leaves the pre-023 speed untouched.
    {
        Soldier s;s.health=100;s.suppression=0;s.stance=Stance::Standing;s.movingFire=false;s.sprinting=false;
        Config on,off;off.orderPace=false;
        s.assignment.pace=1.f;const float base=MovementSpeed(s,on);
        s.assignment.pace=.5f;
        assert(std::abs(MovementSpeed(s,on)-base*.5f)<1e-5f);
        assert(std::abs(MovementSpeed(s,off)-base)<1e-5f); // the switch off: the field is never read
        s.assignment.pace=1.f;
        assert(MovementSpeed(s,on)==MovementSpeed(s,off)); // and at pace 1 the two are identical anyway
        std::cout<<"GROUP: an order at pace 0.5 exactly halves the movement speed ("<<base<<" to "<<base*.5f<<" m/s); the switch off leaves it untouched\n";
    }
}
// Plan 023 stage D (3.9): the support gun's own firing position and the platoon staff's stations.
static void AddLowWall(army::Map& map,float x,float y) {
    map.obstacles.push_back({{x,y,0},{.6f,1.6f,0},false,true,1.1f});
}
// MakeGroup's ground, plus low cover well off the rifles' line onto the enemy at (60,0): a place
// at (20,-35) makes 41 degrees with that line, one at (20,-45) makes 48.
static GroupFixture MakeSupport() {
    auto g=MakeGroup();
    for(float y:{-35.f,-45.f})AddLowWall(g.map,20,y);
    army::PrepareGeometry(g.map);
    return g;
}
// Three squads in their own lanes, the platoon staff (5 and 6) with squad 0 and the platoon's
// mover set to squad 1. Squad planning and platoon planning are both held off, so what runs is the
// relay and the staff placement alone.
static GroupFixture MakeStaff() {
    using namespace army;
    GroupFixture g;
    for(float lane:{-40.f,0.f,40.f})for(float dy=-12;dy<=12;dy+=4){AddLowWall(g.map,18,lane+dy);AddLowWall(g.map,12,lane+dy);AddLowWall(g.map,-2,lane+dy);}
    PrepareGeometry(g.map);
    g.frame=InitialFrame(g.config);
    const float lanes[3]={-40,0,40};
    for(int squad=0;squad<3;++squad) {
        auto& cmd=g.frame.command[squad];cmd.leader=squad*SquadSize;cmd.support=squad*SquadSize+7;
        cmd.advancing=true;cmd.mission={20,lanes[squad],0};
        for(int id=squad*SquadSize;id<(squad+1)*SquadSize;++id) {
            auto& s=g.frame.soldiers[id];
            s.position={0,lanes[squad]+float(id%4-2)*2.f,0};
            s.contacts[TeamSize]={true,true,{60,0,0},0};s.contacts[TeamSize].aimHeight=1.45f;
            s.assignment.task=Task::Hold;s.assignment.position=s.position;s.assignment.sector={60,0,0};s.assignment.serial=1;
        }
        auto& nco=g.frame.soldiers[squad*SquadSize+1];
        nco.assignment.task=Task::Advance;nco.assignment.position={20,lanes[squad],0};
    }
    g.frame.platoon[0].flankSquad=1;g.frame.platoon[0].nextPlanAt=1e9f;g.runtime.platoon.lastPlan[0]=1e9f;
    for(int squad=0;squad<SquadCount;++squad)g.runtime.nextPlan[squad]=g.runtime.lastPlanAt[squad]=1e9f;
    return g;
}
static float StationAngle(army::Vec3 place,army::Vec3 centre,army::Vec3 enemy) {
    using namespace army;
    Vec3 a=place-enemy,b=centre-enemy;
    return (a.x*b.x+a.y*b.y)/std::max(.01f,Length(a)*Length(b));   // the cosine, so smaller is wider
}
static void GroupSupportTests() {
    using namespace army;
    // h. The gun is given a firing position that bears on the enemy and makes at least supportAngle
    //    with the rifle group's own line onto him, and he keeps it across planning cycles.
    {
        auto g=MakeSupport();
        auto& cmd=g.frame.command[1];
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto orders=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        Vec3 place{};Task task=Task::None;
        for(const auto& o:orders)if(o.recipient==15){place=o.position;task=o.task;}
        const int slot=15%SquadSize;
        assert(task==Task::Overwatch);
        assert(cmd.stations.held[slot]&&cmd.stations.supportStationFor==15&&Distance(cmd.stations.station[slot],place)<.01f);
        assert(StationBears(g.frame.soldiers[8],g.map,place,1));
        Vec3 centre{};int count=0;
        for(int id=9;id<15;++id){centre=centre+g.frame.soldiers[id].position;++count;}
        centre=centre*(1.f/count);
        const float cosine=StationAngle(place,centre,{60,0,0});
        assert(cosine<=GroupConstants.supportAngleCos);
        auto again=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,3);
        Vec3 second{};for(const auto& o:again)if(o.recipient==15)second=o.position;
        assert(Distance(second,place)<.001f&&Distance(cmd.stations.station[slot],place)<.001f);
        std::cout<<"GROUP: the gun's station bears and stands "<<std::acos(cosine)*57.2958f<<" degrees off the rifle line, and is kept the next cycle\n";
    }
    // i. With no such place he is given the plain rejoin place beside his group and no station.
    {
        auto g=MakeGroup();
        for(int id=8;id<16;++id) {
            auto& s=g.frame.soldiers[id];s.position={-100,float(id%4-2)*1.5f,0};
            s.contacts[TeamSize]={};s.assignment.position=s.position;
        }
        auto& cmd=g.frame.command[1];
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        auto orders=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        Task task=Task::None;Vec3 place{};
        for(const auto& o:orders)if(o.recipient==15){task=o.task;place=o.position;}
        assert(!cmd.stations.held[15%SquadSize]);
        assert(task==Task::Rally&&Distance(place,g.frame.soldiers[12].position)<20);
        std::cout<<"GROUP: with no firing position to be had the gun gets the rejoin place and no station\n";
    }
}
static void GroupStaffTests() {
    using namespace army;
    // j. The officer's station is in the rifle group of the platoon's leading squad, at its
    //    stand-off and never nearer the enemy than that group's own lead station; the platoon
    //    sergeant's is behind its rear station. Neither is re-ordered while his station stands.
    {
        auto g=MakeStaff();
        RunRelay(g,16);   // the first orders are given at once; the transport window is eight seconds
        const auto& record=g.frame.command[0].stations;
        const auto& group=g.frame.command[1].stations;
        assert(record.staffLead[0]==1&&record.staffLead[1]==1);
        assert(record.held[5]&&record.held[6]);
        const Vec3 enemy{60,0,0};
        assert(Distance(record.station[5],group.objective)<=GroupConstants.haltRadius);
        float lead=Distance(enemy,group.objective),rear=0;
        for(int slot=2;slot<SquadSize-1;++slot)if(group.held[slot]) {
            lead=std::min(lead,Distance(enemy,group.station[slot]));
            rear=std::max(rear,Distance(enemy,group.station[slot]));
        }
        assert(Distance(enemy,record.station[5])>=lead-.01f);                 // never in front of the group
        assert(Distance(enemy,record.station[5])>=GroupConstants.standOff*.5f);
        assert(Distance(enemy,record.station[6])>=rear+GroupConstants.staffBehind-GroupConstants.haltRadius);
        for(int id:{5,6})assert(g.runtime.lastSent[id].issuer==id&&Distance(g.runtime.lastSent[id].position,record.station[id])<1.5f);
        const std::array<int,2> serial{{g.runtime.lastSent[5].serial,g.runtime.lastSent[6].serial}};
        const std::array<Vec3,2> stood{{record.station[5],record.station[6]}};
        RunRelay(g,g.frame.time+10);   // ten more seconds, five staff cycles: the stations stand
        for(int i=0;i<2;++i) {
            assert(Distance(record.station[5+i],stood[i])<.001f);
            assert(g.runtime.lastSent[5+i].serial==serial[i]);
        }
        std::cout<<"GROUP: the officer stations "<<Distance(record.station[5],g.frame.command[1].stations.objective)
            <<" m from the leading group's objective and the platoon sergeant "<<Distance(enemy,record.station[6])-rear<<" m behind its rear station, neither re-ordered\n";
    }
    // k. When the platoon's mover changes the officer goes to the new leading squad, and the
    //    platoon sergeant keeps the rear of that one.
    {
        auto g=MakeStaff();
        RunRelay(g,16);
        const auto& record=g.frame.command[0].stations;
        const Vec3 first=record.station[5];
        g.frame.platoon[0].flankSquad=2;
        RunRelay(g,g.frame.time+12);
        assert(record.staffLead[0]==2&&record.staffLead[1]==2);
        assert(Distance(record.station[5],g.frame.command[2].stations.objective)<=GroupConstants.haltRadius);
        assert(Distance(record.station[5],first)>GroupConstants.haltRadius);
        assert(g.runtime.lastSent[5].issuer==5&&Distance(g.runtime.lastSent[5].position,record.station[5])<1.5f);
        std::cout<<"GROUP: the officer moves to the new leading squad ("<<Distance(record.station[5],first)<<" m) and is given one order for it\n";
    }
}
// Plan 023 stage E (section 11): the shattered squad, its attachment and the user's merge ruling.
// The commander is the platoon officer (id 5) with three received squad reports; nothing else of
// his enters these checks, so what they assert is his decision and the squad's answer to it.
static army::Soldier MakeCommander(std::array<int,3> able,std::array<bool,3> gun,
    std::array<int,3> leaderSlot,std::array<army::Vec3,3> where) {
    using namespace army;
    Soldier commander;commander.id=5;commander.team=0;commander.squad=0;commander.role=Role::Lieutenant;
    for(int i=0;i<3;++i) {
        auto& r=commander.platoonReports[i];
        r.squad=i;r.leader=i*SquadSize+leaderSlot[i];r.active=able[i]+(gun[i]?1:0);r.mobile=r.active;
        r.ableRiflemen=able[i];r.gunUp=gun[i];r.machineGuns=gun[i]?1:0;r.position=where[i];r.observedAt=0;
        r.contact={true,false,{60,0,0},0};r.enemy=TeamSize;
    }
    return commander;
}
static const army::PlatoonDirective* DirectiveFor(const std::vector<army::PlannedPlatoonOrder>& orders,int squad) {
    const army::PlatoonDirective* found=nullptr;
    for(const auto& o:orders)if(o.recipient/army::SquadSize==squad)found=&o.directive;
    return found;
}
static void GroupShatteredTests() {
    using namespace army;
    const std::array<Vec3,3> lanes{{Vec3{0,0,0},Vec3{0,40,0},Vec3{0,-40,0}}};
    // l. A withdrawal ends at a FIXED fall-back: covered ground behind the squad's last objective
    //    that no enemy it knows can look into, and the squad keeps the enemy it withdrew from as
    //    the sector it watches once its own tracks have aged out behind that cover.
    {
        auto g=MakeGroup();
        // A wall the enemy cannot see over at x=-18, with low cover behind it: real dead ground.
        for(float y=-9;y<=9;y+=3){g.map.obstacles.push_back({{-18,y,0},{.6f,1.6f,0},false,false,3.f});
            g.map.obstacles.push_back({{-22,y,0},{.6f,1.6f,0},false,true,1.1f});}
        PrepareGeometry(g.map);
        Vec3 place{};
        const bool found=FallbackPosition(g.frame.soldiers[8],g.map,{20,0,0},{60,0,0},g.frame.soldiers[8].position,1,place);
        assert(found);
        assert(Distance(place,Vec3{60,0,0})>=Distance(Vec3{20,0,0},Vec3{60,0,0})+GroupConstants.behindMargin);
        assert(OutOfSight(g.frame.soldiers[8],g.map,place,true,1));
        auto& cmd=g.frame.command[1];
        cmd.fallback=place;cmd.fallbackSector={60,0,0};cmd.fallbackAt=1;cmd.searching=false;cmd.ableRiflemen=1;
        for(auto& s:g.frame.soldiers)s.contacts[TeamSize]={};   // his own tracks have aged out behind the cover
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        UpdateSearchMission(g.frame.soldiers[8],friends,g.map,g.config,cmd,20);
        assert(Distance(cmd.mission,place)<2.f);                                  // a place, not an open walk
        auto orders=PlanSquad(g.frame.soldiers[8],friends,g.map,g.config,cmd,20);
        bool held=false;
        for(const auto& o:orders)if(o.recipient==9){held=o.task==Task::Hold;assert(Distance(o.sector,{60,0,0})<.01f);}
        assert(held);
        UpdateSearchMission(g.frame.soldiers[8],friends,g.map,g.config,cmd,26);    // and it does not drift
        assert(Distance(cmd.mission,place)<2.f);
        std::cout<<"GROUP: a withdrawal ends "<<Distance(place,Vec3{60,0,0})<<" m from the enemy at one fixed unseen place, held with his sector kept\n";
    }
    // m. Two able riflemen and a gun: attached as a BASE OF FIRE to the nearest squad that can
    //    still manoeuvre, on the ground that host is fighting from.
    {
        auto g=MakeGroup();
        auto commander=MakeCommander({{5,2,4}},{{true,true,true}},{{0,0,0}},lanes);
        auto orders=PlanPlatoon(commander,g.map,g.config,1,true);
        const auto* mine=DirectiveFor(orders,1);
        assert(mine&&mine->attachTo==0&&mine->attachBaseOfFire&&!mine->attachMerge);
        assert(mine->task==PlatoonTask::Support&&Distance(mine->position,lanes[0])<.01f);
        auto& cmd=g.frame.command[1];
        cmd.attachedTo=mine->attachTo;cmd.attachBaseOfFire=true;cmd.attachPosition=mine->position;cmd.attachSector=mine->sector;
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        UpdateSearchMission(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        assert(Distance(cmd.mission,lanes[0])<=GroupConstants.haltRadius);         // covering the host's objective
        assert(Distance(cmd.mission,mine->sector)>=GroupConstants.standOff);       // and outside the stand-off
        std::cout<<"GROUP: a squad of two riflemen and its gun is attached as a base of fire on its host's ground ("<<Distance(cmd.mission,lanes[0])<<" m from it)\n";
    }
    // n. Two able men and no gun: attached as SUPPORT, one objective behind the host's rifle
    //    group, and its place moves when the host does.
    {
        auto g=MakeGroup();
        auto commander=MakeCommander({{5,2,4}},{{true,false,true}},{{0,0,0}},lanes);
        auto orders=PlanPlatoon(commander,g.map,g.config,1,true);
        const auto* mine=DirectiveFor(orders,1);
        assert(mine&&mine->attachTo==0&&!mine->attachBaseOfFire&&mine->task==PlatoonTask::Consolidate);
        auto& cmd=g.frame.command[1];
        cmd.attachedTo=0;cmd.attachBaseOfFire=false;cmd.attachPosition=mine->position;cmd.attachSector=mine->sector;
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        UpdateSearchMission(g.frame.soldiers[8],friends,g.map,g.config,cmd,1);
        const Vec3 behind=cmd.mission;
        assert(Distance(behind,mine->sector)>Distance(lanes[0],mine->sector)+GroupConstants.staffBehind*.5f);
        cmd.attachPosition={-20,0,0};    // the host has moved: the commander's next directive says so
        UpdateSearchMission(g.frame.soldiers[8],friends,g.map,g.config,cmd,3);
        assert(Distance(cmd.mission,behind)>10);
        std::cout<<"GROUP: a squad of two men and no gun follows its host "<<Distance(behind,lanes[0])<<" m behind it, and moves "<<Distance(cmd.mission,behind)<<" m when the host does\n";
    }
    // o. The user's merge ruling: two shattered squads become one under the senior able leader
    //    (here a sergeant against a rifleman in command), and the host's rifle group leader places
    //    the joining men himself, from the one allocator, never on top of his own.
    {
        auto g=MakeGroup();
        auto commander=MakeCommander({{1,1,5}},{{false,false,true}},{{3,0,0}},lanes);
        auto orders=PlanPlatoon(commander,g.map,g.config,1,true);
        const auto* joining=DirectiveFor(orders,0);
        assert(joining&&joining->attachMerge&&joining->attachTo==1&&joining->task==PlatoonTask::Merge);
        auto s=MakeStaff();
        s.frame.command[2].mergedInto=1;
        RunRelay(s,8);
        const auto& host=s.frame.command[1].stations;
        const auto& joined=s.frame.command[2].stations;
        for(int id=18;id<23;++id) {
            assert(s.runtime.lastSent[id].issuer==9);                                  // the host's rifle group leader
            assert(Distance(s.runtime.lastSent[id].position,s.frame.command[1].stations.objective)<=GroupConstants.haltRadius+2);
        }
        for(int a=2;a<SquadSize;++a)for(int b=2;b<SquadSize;++b)
            if(joined.held[a]&&host.held[b])assert(Distance(joined.station[a],host.station[b])>1.f);
        std::cout<<"GROUP: two remnants merge under the senior able leader; the host's corporal places the joining men from the one allocator\n";
    }
    // p. Reconstituted (or never shattered), a squad is attached to nobody and plans for itself.
    {
        auto g=MakeGroup();
        auto commander=MakeCommander({{5,4,3}},{{true,true,true}},{{0,0,0}},lanes);
        auto orders=PlanPlatoon(commander,g.map,g.config,1,true);
        for(const auto& o:orders)assert(o.directive.attachTo<0&&!o.directive.attachMerge);
        auto& cmd=g.frame.command[1];
        cmd.attachedTo=0;cmd.attachBaseOfFire=true;cmd.ableRiflemen=5;
        auto& leader=g.frame.soldiers[8];
        leader.platoonOrder=*DirectiveFor(orders,1);leader.platoonOrder.serial=9;leader.platoonOrder.expiresAt=200;
        std::vector<Soldier> friends(g.frame.soldiers.begin()+8,g.frame.soldiers.begin()+16);
        ProgressRuntime progress;
        UpdateSquadPlan(leader,friends,g.map,g.config,{},{},cmd,progress,nullptr,2);
        assert(cmd.attachedTo<0&&cmd.mergedInto<0);
        std::cout<<"GROUP: a squad back to "<<cmd.ableRiflemen<<" able riflemen is released and plans for itself again\n";
    }
}
static void GroupTests() {
    std::cout.setf(std::ios::unitbuf);
    GroupStationTests();
    std::cout<<"GROUP: stations, the call-up and the relay's succession PASS\n";
    GroupPaceTests();
    std::cout<<"GROUP: stage C, the leader's pace and the covering pair PASS\n";
    GroupSupportTests();
    GroupStaffTests();
    std::cout<<"GROUP: stage D, the gun's firing position and the platoon staff's stations PASS\n";
    GroupShatteredTests();
    std::cout<<"GROUP: stage E, the shattered squad, its attachment and the merge PASS\n";
}
