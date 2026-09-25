// Plan 031 Stage D: the squad fire-and-movement drill (Config::fireAndMovement, Legacy only, per team).
// Checks: the leg cut of a route (FmLegStage); the soldier's gate (ChooseOrder with a drill order: he waits for his gun,
// goes when he hears it, finishes a rush he began, gets down at the leg end, emergency moves free); a fixture battle on
// an inline ARMYMAP 2 field of low walls with a static defence, the drill on for Azure: every departure of a marked
// rifleman is made while he hears his gun, set at its station, firing on its sector; the men get down at leg ends; the
// trace rows are written; the drill is deterministic; and switch-off identity.
#pragma once
#include "BattleSim.h"
#include "Diagnostics.h"
#include "ImportedMap.h"
#include "FireMovementSim.h"
#include "TacticalRouteSim.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <map>
#include <sstream>
namespace fire_movement_tests {
using namespace army;
// A field of short low walls (1 m, crouch cover on both faces) between the two start lines; Azure west, Ember east.
inline std::string FieldMap(){
    std::ostringstream m;m<<"ARMYMAP 2 city 31\nBOUNDS 120 50 0\n";int id=1;
    for(int col=0;col<11;++col)for(int row=0;row<7;++row){
        const float x=-80.f+16.f*float(col)+(row%2?5.f:0.f),y=-39.f+13.f*float(row)+(col%2?4.f:0.f);
        const bool across=(col+row)%3==0;
        m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 "<<(across?1.5f:.3f)<<' '<<(across?.3f:1.5f)<<" 1.0 0 1 1\n";}
    for(int i=0;i<UnitCount;++i){const int team=i/TeamSize,squad=(i/SquadSize)%SquadsPerTeam,slot=i%SquadSize;
        const float x=(team?106.f:-106.f)+(team?1.f:-1.f)*float(slot/4)*2.f,y=-36.f+24.f*float(squad)+(float(slot%4)-1.5f)*2.5f;
        m<<"U "<<i<<' '<<x<<' '<<y<<" 0 "<<x<<' '<<y<<" 0\n";}
    m<<"END\n";return m.str();
}
inline Config FixtureConfig(const std::shared_ptr<const ImportedBattlefield>& map,uint32_t seed,int teams){
    Config c;c.battlefield=map;c.squadMachineGuns=true;c.seed=seed;c.maxSeconds=180;
    c.staticDefence.layout=DefenceLayout::Spread;c.staticDefence.defenders=6;c.staticDefence.seed=11;c.fireAndMovement=teams;
    return c;
}
inline void LegStageTests(){
    TacticalRoute route;route.speed=1;
    for(float travel:{12.f,13.f,12.f,14.f,5.f}){RouteStage stage;stage.seconds=travel;route.stages.push_back(stage);}
    assert(FmLegStage(route,0,15)==0);   // one stage: a second would make the leg 25 m
    assert(FmLegStage(route,1,15)==1);
    assert(FmLegStage(route,0,30)==1);   // 12 + 13 fit in 30; 37 would not
    assert(FmLegStage(route,0,5)==0);    // at least one stage however short the leg
    assert(FmLegStage(route,4,15)==4&&FmLegStage(route,9,15)==4);
    std::cout<<"FIRE MOVEMENT legs: a leg is the stages that fit in the leg length, at least one PASS\n";
}
// A rifleman on open ground at the origin, his drill order a flank to (20,0) on leg 3, his gun man 7; no enemy in sight.
inline Soldier Rifleman(){
    Soldier s;s.id=1;s.team=0;s.squad=0;s.position={0,0,0};s.goal=s.position;s.action=Action::Hold;s.reason=Reason::AtWaypoint;
    s.assignment.task=Task::Flank;s.assignment.position={20,0,0};s.assignment.serial=5;s.assignment.sector={60,0,0};
    s.assignment.fm.gun=7;s.assignment.fm.leg=3;
    return s;
}
inline void GateTests(){
    Map m;m.halfWidth=60;m.halfHeight=30;PrepareGeometry(m);
    Config on;on.fireAndMovement=1;
    const float time=40;
    // Closed: he has not heard his gun. He does not go; with no cover at hand he waits crouched where he is.
    {auto s=Rifleman();Tactics memory;const Order o=ChooseOrder(s,m,on,{},memory,time);
        assert(o.action!=Action::Advance&&o.stance==Stance::Crouched&&Distance(o.goal,s.position)<.1f&&memory.fmHeldAt==time);}
    // Open: he heard it a second ago. He goes, and the rush is his (fmRushLeg).
    Tactics rush;
    {auto s=Rifleman();s.fmHeardAt=time-1;const Order o=ChooseOrder(s,m,on,{},rush,time);
        assert(o.action==Action::Advance&&Distance(o.goal,s.assignment.position)<.1f&&rush.fmRushLeg==3);}
    // The fire stops during his rush: he finishes it.
    {auto s=Rifleman();s.position={6,0,0};s.action=Action::Advance;s.goal=s.assignment.position;s.fmHeardAt=time-10;
        Tactics memory=rush;const Order o=ChooseOrder(s,m,on,{},memory,time);assert(o.action==Action::Advance);}
    // A new leg: the rush of the last one does not carry him into it.
    {auto s=Rifleman();s.position={6,0,0};s.action=Action::Advance;s.goal=s.assignment.position;s.fmHeardAt=time-10;s.assignment.fm.leg=4;
        Tactics memory=rush;const Order o=ChooseOrder(s,m,on,{},memory,time);assert(o.action!=Action::Advance);}
    // The backstop: waited 1.5 x the deadline, he goes whatever he hears.
    {auto s=Rifleman();s.fmWaitSince=time-on.fmDeadline*FireMovementConstants.backstop-.1f;Tactics memory;
        assert(ChooseOrder(s,m,on,{},memory,time).action==Action::Advance);}
    // A pull-back is never gated; nor is anything with the switch off for his team.
    {auto s=Rifleman();s.assignment.task=Task::PullBack;s.assignment.position={-20,0,0};Tactics memory;
        assert(ChooseOrder(s,m,on,{},memory,time).action==Action::Retreat);}
    {auto s=Rifleman();Config ember;ember.fireAndMovement=2;Tactics memory;assert(ChooseOrder(s,m,ember,{},memory,time).action==Action::Advance);}
    // Arrived at the leg end on open ground he holds crouched, not standing.
    {auto s=Rifleman();s.position=s.assignment.position;s.goal=s.position;s.fmHeardAt=time-1;Tactics memory;const Order o=ChooseOrder(s,m,on,{},memory,time);
        assert(o.action==Action::Hold&&o.stance==Stance::Crouched);}
    // Catalogue cover within reach (a 1 m wall 4 m east; the enemy he knows is further east): waiting, he goes down behind it.
    {Map walled;walled.halfWidth=60;walled.halfHeight=30;walled.obstacles.push_back({{4.2f,0,0},{.3f,1.5f,0},false,true,1.f});PrepareGeometry(walled);
        auto s=Rifleman();s.position={0,.5f,0};s.contacts[40].known=true;s.contacts[40].position={60,0,0};s.contacts[40].observedAt=time-2;
        Tactics memory;Order o=ChooseOrder(s,walled,on,{},memory,time);
        const Vec3 shelter=memory.shelter;
        assert(memory.assigned&&memory.fmWait&&shelter.x<3.9f&&Distance(shelter,s.position)<FireMovementConstants.waitReach&&o.action==Action::Cover&&Distance(o.goal,shelter)<.1f);
        s.position=shelter;o=ChooseOrder(s,walled,on,{},memory,time+1);
        assert(o.action!=Action::Advance&&Distance(o.goal,shelter)<.1f&&o.stance!=Stance::Standing);}
    std::cout<<"FIRE MOVEMENT gate: waits unheard, goes heard, finishes his rush, a new leg waits, backstop, pull-back free, off free, down at the end, into cover PASS\n";
}
struct FixtureCheck { uint64_t digest=0; int departures=0,heard=0,backstop=0,holds=0,down=0,rounds=0,setRounds=0; std::map<std::string,int> rows; };
inline FixtureCheck RunFixture(const Config& c,bool traced){
    DiagnosticOptions options;options.enabled=traced;options.keepFrames=true;
    const auto r=Simulate(c,options);FixtureCheck out;out.digest=GameplayDigest(r);
    if(traced)for(const auto& e:r.diagnostics->entries)if(e.kind=="fire_movement")++out.rows[e.reason+(e.reason=="gate_open"&&e.extra.find("\"why\":\"heard\"")==std::string::npos?":bad":"")];
    for(size_t k=1;k<r.frames.size();++k){const auto& f=r.frames[k];const auto& before=r.frames[k-1];
        for(const auto& s:f.soldiers){if(!s.Active())continue;const auto& was=before.soldiers[size_t(s.id)];
            // The gun: every round his squad heard was fired set at his station, his payload live.
            if(s.machineGun&&s.fmFireAt>was.fmFireAt){++out.rounds;
                out.setRounds+=s.assignment.fm.gun==s.id&&Distance(s.position,s.assignment.position)<=FireMovementConstants.setRadius&&FirePayloadLive(s,f.time);}
            if(s.machineGun||s.assignment.fm.gun<0||s.assignment.fm.gun==s.id)continue;
            // A marked man leaving for where he was sent: he has heard his gun within the window (a frame is 0.2 s).
            if(s.action==Action::Advance&&was.action!=Action::Advance&&Distance(s.position,s.assignment.position)>FireMovementConstants.departMin){
                ++out.departures;out.heard+=f.time-s.fmHeardAt<=c.fmFireWindow+FrameSeconds+.01f;
                out.backstop+=was.fmWaitSince>=0&&f.time-was.fmWaitSince>=c.fmDeadline*FireMovementConstants.backstop-FrameSeconds;}
            // At the leg's end, holding: down.
            if(AttackMovementTask(s.assignment.task)&&s.action==Action::Hold&&Distance(s.position,s.assignment.position)<1.5f){++out.holds;out.down+=s.stance!=Stance::Standing;}
        }}
    return out;
}
// Soldier state frame by frame (what the drill could move), for an identity where the digest's switch fold differs.
inline uint64_t FramesHash(const Config& c){
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;const auto r=Simulate(c,options);
    uint64_t h=1469598103934665603ull;auto mix=[&](uint64_t v){h=(h^v)*1099511628211ull;};
    for(const auto& f:r.frames)for(const auto& s:f.soldiers){mix(uint64_t(std::lround(double(s.position.x)*1000)));mix(uint64_t(std::lround(double(s.position.y)*1000)));
        mix(uint64_t(s.action));mix(uint64_t(s.stance));mix(uint64_t(s.rounds));mix(uint64_t(s.assignment.task));}
    return h;
}
inline void BattleTests(){
    std::string error;const auto map=ImportBattlefield(FieldMap(),error);assert(map&&error.empty());
    int departures=0,heard=0,backstop=0,holds=0,down=0,rounds=0,setRounds=0;
    for(uint32_t seed:{3u,4u,5u}){
        const auto x=RunFixture(FixtureConfig(map,seed,1),seed==3);
        std::cout<<"FIRE MOVEMENT fixture seed "<<seed<<": marked departures "<<x.departures<<" (heard "<<x.heard<<", backstop "<<x.backstop<<"), leg-end holds "<<x.holds
                 <<" (down "<<x.down<<"), heard rounds "<<x.rounds<<" (set "<<x.setRounds<<")";
        for(const auto& kv:x.rows)std::cout<<' '<<kv.first<<'='<<kv.second;
        std::cout<<'\n';
        departures+=x.departures;heard+=x.heard;backstop+=x.backstop;holds+=x.holds;down+=x.down;rounds+=x.rounds;setRounds+=x.setRounds;
        if(seed==3){
            // The evidence rows of a traced run: legs planned, the gun's station, the gate opened only by his fire.
            assert(x.rows.count("leg_planned")&&x.rows.count("gun_station")&&x.rows.count("gate_open")&&x.rows.count("gate_closed")&&!x.rows.count("gate_open:bad"));
            // Deterministic, traced or not.
            assert(RunFixture(FixtureConfig(map,seed,1),false).digest==x.digest);
        }
    }
    // The gun is set and firing before the riflemen leave; they leave only while it fires; they get down at leg ends.
    assert(departures>=5&&heard+backstop==departures&&backstop*10<=departures);
    assert(rounds>=20&&setRounds==rounds);
    assert(holds>=50&&down==holds);
    std::cout<<"FIRE MOVEMENT fixture: "<<departures<<" departures all heard ("<<backstop<<" by the backstop), "<<rounds<<" heard rounds all fired set, "
             <<holds<<" leg-end holds all down PASS\n";
}
inline void SwitchTests(){
    Config off,on;on.fireAndMovement=3;
    assert(SameConfig(off,off)&&!SameConfig(off,on));
    Config leg=on;leg.fmLeg=20;assert(!SameConfig(on,leg));
    Config offLeg=off;offLeg.fmLeg=20;offLeg.fmFireWindow=2;offLeg.fmDeadline=30;assert(SameConfig(off,offLeg)); // inert while off
    Config typed=on;typed.drills=typed.foundations=true;assert(!FireAndMovement(typed,0)&&FireAndMovement(on,0)&&FireAndMovement(on,1));
    std::string error;const auto map=ImportBattlefield(FieldMap(),error);assert(map&&error.empty());
    // Off: the constants change nothing, digest for digest.
    DiagnosticOptions quiet;quiet.enabled=false;
    Config a=FixtureConfig(map,3,0),b=a;b.fmLeg=20;b.fmFireWindow=2;b.fmDeadline=30;
    assert(GameplayDigest(Simulate(a,quiet))==GameplayDigest(Simulate(b,quiet)));
    // Ember is the static defence here and never plans: the drill on for Ember alone moves nobody (frame for frame).
    assert(FramesHash(a)==FramesHash(FixtureConfig(map,3,2)));
    // An authored battle with the drill off is the historical battle (Config{} keeps it off).
    Config authored;authored.maxSeconds=30;assert(authored.fireAndMovement==0);
    std::cout<<"FIRE MOVEMENT switch: SameConfig, constants inert off, Ember-only static defence unchanged frame for frame PASS\n";
}
}
inline void FireMovementTests(){
    std::cout.setf(std::ios::unitbuf);
    fire_movement_tests::LegStageTests();fire_movement_tests::GateTests();fire_movement_tests::SwitchTests();fire_movement_tests::BattleTests();
    std::cout<<"FIRE MOVEMENT all PASS\n";
}
