#pragma once
// Plan 029 F-A: the ARMYMAP 2 grammar (a superset of the frozen ARMYMAP 1), its caps and validation
// rejections, the importer-set map flags, and the authored-geometry gates for imported footprints.
#include "ImportedMap.h"
#include "TrafficSim.h"
#include "CoordinationSim.h"
#include <cassert>
#include <cstring>
#include <functional>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

namespace imported_v2 {
using namespace army;
// One lane (floor at -1.4, 6 m ramp, link, treads) with the merged earth complement, one hedge, one
// two-storey house (3.2 m storey, 8-tread stair with one link, slab with an open stairwell, landing,
// upper window cover with window=1, a door passage), one crater ring with a prone cover.
struct Fixture {
    std::vector<std::string> lines;
    std::string Text()const{std::string t;for(const auto& l:lines)t+=l+"\n";return t;}
    size_t Find(const std::string& prefix)const{for(size_t i=0;i<lines.size();++i)if(lines[i].compare(0,prefix.size(),prefix)==0)return i;assert(false);return 0;}
    void Replace(const std::string& prefix,const std::string& with){lines[Find(prefix)]=with;}
    void Erase(const std::string& prefix){lines.erase(lines.begin()+long(Find(prefix)));}
    void Before(const std::string& prefix,const std::string& with){lines.insert(lines.begin()+long(Find(prefix)),with);}
};
inline Fixture MakeFixture(){
    Fixture f;int id=1;
    auto line=[&](const std::ostringstream& s){f.lines.push_back(s.str());};
    auto box=[&](float x,float y,float z,float hx,float hy,float h,int building,int low,int move,int flags=-1){
        std::ostringstream s;s<<"O "<<id++<<' '<<x<<' '<<y<<' '<<z<<' '<<hx<<' '<<hy<<' '<<h<<' '<<building<<' '<<low<<' '<<move;
        if(flags>=0){s<<' '<<flags;}
        line(s);};
    f.lines.push_back("ARMYMAP 2 trenches 29");
    f.lines.push_back("BOUNDS 60 40 -1.4");
    box(0,5,0,10,.3f,1.8f,0,0,1,1);                          // O 1: hedge (concealment), first record
    box(0,-12,-1.4f,60,28,1.4f,0,1,0);                       // O 2..5: earth complement around the lane
    box(0,30,-1.4f,60,10,1.4f,0,1,0);
    box(-50,18,-1.4f,10,2,1.4f,0,1,0);
    box(28,18,-1.4f,32,2,1.4f,0,1,0,0);                      // explicit flags 0 is legal
    for(int i=0;i<4;++i){const float x=-10+.75f+i*1.5f;box(x,18,-1.4f,.75f,2,(x+10)*1.4f/6,0,0,0);} // O 6..9 ramp treads
    // House: footprint x 15..25, y -19..-11 (B 1), walls 0.44 thick on the footprint edge.
    box(17.09f,-19,0,2.31f,.22f,3,1,0,1);                    // O 10 ground south wall, west of the door
    box(22.91f,-19,0,2.31f,.22f,3,1,0,1);                    // O 11 ground south wall, east of the door
    box(20,-19,2.35f,.6f,.22f,.65f,1,0,1);                   // O 12 door lintel
    box(20,-11,0,5.22f,.22f,3,1,0,1);                        // O 13 ground north wall
    box(15,-15,0,.22f,4,3,1,0,1);box(25,-15,0,.22f,4,3,1,0,1); // O 14, 15 ground west/east walls
    box(20,-14.26f,3,4.78f,3.04f,.2f,1,0,0);                 // O 16 slab (non-blocking), north of the stairwell
    box(22.19f,-18.04f,3,2.59f,.74f,.2f,1,0,0);              // O 17 slab over the landing
    box(16.89f,-11,3.2f,2.11f,.22f,3,1,0,1);box(23.11f,-11,3.2f,2.11f,.22f,3,1,0,1); // O 18, 19 upper north wall
    box(20,-11,3.2f,1,.22f,1.05f,1,0,1);                     // O 20 sill 3.2-4.25
    box(20,-11,5.55f,1,.22f,.85f,1,0,1);                     // O 21 lintel 5.55-6.4
    box(20,-19,3.2f,5.22f,.22f,3,1,0,1);box(15,-15,3.2f,.22f,4,3,1,0,1);box(25,-15,3.2f,.22f,4,3,1,0,1); // O 22-24
    for(int i=0;i<8;++i)box(16+.225f+i*.45f,-17.9f,0,.225f,.6f,(i+1)*.4f,1,0,0); // O 25..32 stair treads
    const float pi=3.14159265f;
    for(int i=0;i<8;++i)box(-20+3*std::cos(i*pi/4),-20+3*std::sin(i*pi/4),0,.5f,.5f,.6f,0,1,0,2); // O 33..40 crater rim (33 = east)
    f.lines.push_back("S 100 -25 18 -1.4 15 2 0 0 0 -1 0");                  // lane floor
    f.lines.push_back("S 101 -7 18 -0.7 3 2 0.2333333 0 1 -1 0");            // lane ramp
    f.lines.push_back("S 102 17.8 -17.9 1.6 1.8 0.6 0.8888889 0 2 0 1");     // stair 0 -> 3.2 over 3.6 m
    f.lines.push_back("S 103 20 -14.26 3.2 4.78 3.04 0 0 0 1 1");            // upper floor
    f.lines.push_back("S 104 22.19 -18.04 3.2 2.59 0.74 0 0 0 1 1");         // landing
    f.lines.push_back("L 101 -10 18 -1.4 -4 18 0");
    f.lines.push_back("L 102 16 -17.9 0 19.6 -17.9 3.2");
    f.lines.push_back("B 1 20 -15 5 4 2");
    f.lines.push_back("P 20 -19 0.6 0.3");
    f.lines.push_back("C 1000000 20 20 -11.85 3.2 20 -11.85 3.2 0 1 1 1");   // upper window cover, sill source
    f.lines.push_back("C 1000001 33 -18 -20 0 -18 -20 0 1 0 2 0");           // prone crater cover, rim source, 0.5 m inside it
    for(int i=0;i<UnitCount;++i){const int k=i%TeamSize;const bool ember=i>=TeamSize;
        const float x=(ember?44.f:-52.f)+2.f*float(k%4),y=-30.f+2.f*float(k/4),gx=(ember?-36.f:30.f)+2.f*float(k%4);
        std::ostringstream s;s<<"U "<<i<<' '<<x<<' '<<y<<" 0 "<<gx<<' '<<y<<" 0";line(s);}
    f.lines.push_back("D 0 0 -35 0.015 50 2 0.0125");
    f.lines.push_back("END");
    return f;
}
inline std::string Error(const std::string& text){std::string error;auto map=ImportBattlefield(text,error);if(map)return std::string();return error;}
}

namespace imported_v2 {
// Plan 029 F-B battle fixture: the F-A house with two upper windows in its east wall (towards Ember),
// as a city map (no lane), so a squad advancing past it can put a window team upstairs.
inline Fixture WindowHouseFixture(){
    auto f=MakeFixture();
    f.lines[0]="ARMYMAP 2 city 29";f.Replace("BOUNDS","BOUNDS 60 40 0");
    for(int id=2;id<=9;++id)f.Erase("O "+std::to_string(id)+" "); // earth complement and lane treads
    f.Erase("S 100 ");f.Erase("S 101 ");f.Erase("L 101 ");
    // East upper wall (x 25, y -19.22..-10.78) with openings at y -15.5 and -12.5 (half 0.8).
    f.Replace("O 24 ","O 24 25 -17.76 3.2 0.22 1.46 3 1 0 1");
    for(const char* row:{"O 41 25 -14 3.2 0.22 0.7 3 1 0 1","O 42 25 -11.24 3.2 0.22 0.46 3 1 0 1",
                         "O 43 25 -15.5 3.2 0.22 0.8 1.05 1 0 1","O 44 25 -15.5 5.55 0.22 0.8 0.85 1 0 1",
                         "O 45 25 -12.5 3.2 0.22 0.8 1.05 1 0 1","O 46 25 -12.5 5.55 0.22 0.8 0.85 1 0 1"})f.Before("S 102 ",row);
    f.Replace("C 1000001 ","C 1000001 43 24.15 -15.5 3.2 24.15 -15.5 3.2 1 0 1 1");
    f.Before("U 0 ","C 1000002 45 24.15 -12.5 3.2 24.15 -12.5 3.2 1 0 1 1");
    return f;
}
inline uint64_t RouteBits(const std::vector<Vec3>& route){uint64_t h=1469598103934665603ull;
    for(auto p:route){uint32_t w[3];std::memcpy(w,&p,12);for(uint32_t v:w)h=(h^v)*1099511628211ull;}return h;}
}
// Plan 029 F-B: stacked floors, imported stairs and passages, window teams on imported buildings, and
// the lazily evaluated linked-surface search.
static void ImportedLayerTests(){
    using namespace imported_v2;
    std::string error;auto parsed=ImportBattlefield(MakeFixture().Text(),error);assert(parsed);
    const Map& m=parsed->map;const auto& stair=m.surfaces[2];const auto& link=m.surfaceLinks[1];
    // Layers: grade under an upper storey, never under a stair, a lane floor or a ramp; each surface at its height.
    assert(Walkable(m,{20,-14,0})&&Walkable(m,{20,-14,UpperFloor})&&Walkable(m,{22,-18,0})&&Walkable(m,{22,-18,UpperFloor}));
    assert(!Walkable(m,{18,-17.9f,0})&&!Walkable(m,{17.5f,-17.9f,.3f})&&Walkable(m,{17.8f,-17.9f,1.6f}));
    assert(!Walkable(m,{-25,18,0})&&Walkable(m,{-25,18,-1.4f})&&!Walkable(m,{-7,18,0})&&Walkable(m,{-7,18,-.7f}));
    assert(!Walkable(m,{20,-14,1.6f})&&!Walkable(m,{20,-14,3.25f}));
    // Stairs: the imported flight is a stair within 0.08 m of its plane, the house's authored plane is not.
    assert(OnStairs(m,{17.8f,-17.9f,1.6f})&&OnStairs(m,{17.8f,-17.9f,1.67f})&&!OnStairs(m,{17.8f,-17.9f,1.7f})&&!OnStairs(m,{17.8f,-17.9f,0}));
    assert(OnStairs(m,link.from)&&OnStairs(m,link.to)&&!OnStairs(m,{20,-15.8f,1.6f}));
    // ClearLine samples Supported every 0.4 m: the whole flight is clear, and a line off the plane is not.
    assert(ClearLine(m,link.from,link.to,.48f)&&ClearLine(m,link.to,link.from,.48f));
    assert(!ClearLine(m,link.from,{link.to.x,link.to.y,0},.48f)&&!ClearLine(m,{16,-17.9f,.4f},link.to,.48f));
    // Ground -> upper floor through the door and up the flight; every leg clear; the reverse route exists.
    auto legs=[&](Vec3 from,const std::vector<Vec3>& route){bool flight=false;Vec3 p=from;
        for(auto q:route){assert(ClearLine(m,p,q,.48f));for(float t:{.25f,.5f,.75f}){Vec3 x=p+(q-p)*t;flight|=x.z>.1f&&x.z<3.1f&&OnStairs(m,x);}p=q;}
        return flight;};
    const Vec3 spawn=parsed->positions[0],window=m.windows[0].shelter,inside{22,-14,0};
    auto up=FindPath(m,spawn,window);assert(!up.empty()&&Distance(up.back(),window)<1e-4f&&legs(spawn,up));
    auto down=FindPath(m,window,spawn);assert(!down.empty()&&Distance(down.back(),spawn)<1e-4f&&legs(window,down));
    auto upstairs=FindPath(m,inside,{22,-14,UpperFloor});assert(!upstairs.empty()&&legs(inside,upstairs));
    // A man on the flight completes it towards his goal, up or down, before anything else.
    const Vec3 mid{17.8f,-17.9f,1.6f};
    auto climb=FindPath(m,mid,{22,-14,UpperFloor});assert(!climb.empty()&&Distance(climb.front(),link.to)<1e-4f&&legs(mid,climb));
    auto descend=FindPath(m,mid,spawn);assert(!descend.empty()&&Distance(descend.front(),link.from)<1e-4f);
    // From the lane floor (-1.4) up its ramp, across grade, in at the door and up the stair.
    auto lane=FindPath(m,{-25,18,-1.4f},window);assert(!lane.empty()&&legs({-25,18,-1.4f},lane));
    // Passages: one single-file stair passage over the flight, one door passage shaped like an authored door's.
    {size_t stairs=0,doors=0;
     for(const auto& p:BuildingPassages(m)){
        if(p.stairs){++stairs;assert(p.id==1000000+stair.id*1000+999&&p.center.x==stair.center.x&&p.center.y==stair.center.y&&p.center.z==stair.center.z);
            assert(std::abs(p.half.x-stair.half.x-.2f)<1e-6f&&std::abs(p.half.y-stair.half.y-.2f)<1e-6f&&InsidePassage(p,mid)&&InsidePassage(p,link.from)&&InsidePassage(p,link.to));}
        else if(p.id<1000000){++doors;assert(p.center.x==20&&p.center.y==-19&&p.center.z==0&&std::abs(p.half.x-.65f)<1e-6f&&p.half.y==1.25f&&InsidePassage(p,{20,-19,0})&&!InsidePassage(p,{20,-19,UpperFloor}));}}
     assert(stairs==1&&doors==1);}
    // Window teams use the footprint's own half: the imported house takes two riflemen to its east windows.
    {std::string e;auto house=ImportBattlefield(WindowHouseFixture().Text(),e);if(!house)std::cerr<<"window house: "<<e<<std::endl;assert(house);
     const Map& hm=house->map;assert(hm.windows.size()==3&&hm.windows[1].window&&hm.windows[2].window);
     auto f=InitialFrame(Config{});std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+SquadSize);
     for(auto& s:squad){s.position={10,-22-float(s.id%3)*2,0};s.suppression=0;assert(Walkable(hm,s.position));}
     Soldier leader=squad[0];leader.contacts[TeamSize]={true,true,{45,-14,0},0};
     SquadCommand cmd;cmd.leader=0;cmd.support=7;cmd.advancing=true;cmd.mission={40,-14,0};
     UpdateCoordination(leader,squad,hm,{},cmd,0);
     assert(cmd.building==0&&cmd.teamPlan.windowTeam[0]>=0&&cmd.teamPlan.windowTeam[1]>=0&&cmd.teamPlan.windowTeam[0]!=cmd.teamPlan.windowTeam[1]);
     for(auto w:cmd.teamPlan.windows)assert(std::abs(w.z-UpperFloor)<1e-4f&&std::abs(w.x-24.15f)<1e-4f);
     // In a battle (legacy, both sides advancing): a squad passing the house sends a window team up the
     // imported stair, and a member takes his window position on the upper floor.
     Config c;c.battlefield=house;c.maxSeconds=40;auto r=Simulate(c);
     float formed=-1,upstairs=-1;
     for(const auto& frame:r.frames)for(const auto& s:frame.soldiers)if(s.assignment.task==Task::Window){
        const auto& plan=frame.command[size_t(s.squad)].teamPlan;if(formed<0)formed=frame.time;
        for(int i=0;i<2;++i)if(plan.windowTeam[i]==s.id&&upstairs<0&&plan.windows[i].z>UpperFloor-.05f&&Distance(s.position,plan.windows[i])<.5f)upstairs=frame.time;}
     std::cout<<"F-B window team on the imported house: formed at "<<formed<<" s, a member at his upper window at "<<upstairs<<" s"<<std::endl;
     assert(formed>=0&&upstairs>=formed);}
    // The linked search on ARMYMAP 2 evaluates its edges lazily, so what a map has already answered
    // must not change an answer: a fresh map asked in the opposite order gives the same routes.
    {auto cold=ImportBattlefield(MakeFixture().Text(),error);
     const std::vector<std::pair<Vec3,Vec3>> queries={{spawn,window},{window,spawn},{mid,spawn},{inside,window},{{-25,18,-1.4f},window},{window,{-25,18,-1.4f}}};
     std::vector<uint64_t> warm,fresh(queries.size());
     for(const auto& q:queries)warm.push_back(RouteBits(FindPath(m,q.first,q.second)));
     for(size_t i=queries.size();i-->0;)fresh[i]=RouteBits(FindPath(cold->map,queries[i].first,queries[i].second));
     assert(warm==fresh);}
    std::cout<<"F-B layers: grade under upper storeys only; imported stairs; ground<->upper routes through the stair; "
               "stair and door passages; window team on an imported house\n";
}
static void ImportedV2Tests(){
    using namespace imported_v2;
    const auto fixture=MakeFixture();
    std::string error;auto parsed=ImportBattlefield(fixture.Text(),error);
    if(!parsed)std::cerr<<"fixture rejected: "<<error<<std::endl;
    assert(parsed&&error.empty());
    const Map& m=parsed->map;
    // Map flags and the appended struct fields.
    assert(m.formatVersion==2&&m.stackedSurfaces&&m.hasConcealment&&m.importedBuildings&&m.linkedSurfaceRouting&&m.prepared);
    assert(parsed->kind=="trenches"&&parsed->name=="Generated trenches"&&parsed->seed==29&&std::abs(m.groundBase+1.4f)<1e-6f);
    assert(m.obstacles.size()==40&&m.surfaces.size()==5&&m.surfaceLinks.size()==2&&m.windows.size()==2&&parsed->decorations.size()==1);
    assert(m.obstacles[0].concealment&&m.obstacles[0].flags==1&&m.obstacles[0].blocksMovement);
    for(size_t i=1;i<32;++i)assert(!m.obstacles[i].concealment&&m.obstacles[i].flags==0);
    for(size_t i=32;i<40;++i)assert(!m.obstacles[i].concealment&&m.obstacles[i].flags==2&&m.obstacles[i].halfCover&&!m.obstacles[i].blocksMovement);
    const int kinds[5]={0,1,2,0,0},levels[5]={-1,-1,0,1,1};const uint64_t owners[5]={0,0,1,1,1};const bool grade[5]={true,true,true,false,false};
    for(int i=0;i<5;++i){const auto& s=m.surfaces[size_t(i)];assert(s.kind==kinds[i]&&s.level==levels[i]&&s.building==owners[i]&&s.replacesGrade==grade[i]);}
    assert(m.stairSurfaces==std::vector<size_t>{2});
    assert(m.buildings.size()==1);{const auto& b=m.buildings[0];
        assert(!b.authoredStairs&&b.id==1&&b.floors==2&&b.center.x==20&&b.center.y==-15&&b.center.z==0&&b.half.x==5&&b.half.y==4&&b.firstObstacle==0&&b.obstacleCount==0);}
    assert(m.doorPassages.size()==1&&m.doorPassages[0].center.x==20&&m.doorPassages[0].center.y==-19&&m.doorPassages[0].center.z==0&&m.doorPassages[0].half.x==.6f);
    assert(m.windows[0].window&&m.windows[0].crouch&&!m.windows[0].prone&&m.windows[0].source==20);
    assert(!m.windows[1].window&&m.windows[1].crouch&&m.windows[1].prone&&m.windows[1].source==33);
    // `village` is a v2-only kind; the v1 header keeps rejecting it.
    {auto village=fixture;village.lines[0]="ARMYMAP 2 village 29";auto v=ImportBattlefield(village.Text(),error);assert(v&&v->kind=="village"&&v->name=="Generated village");
     village.lines[0]="ARMYMAP 1 village 29";assert(Error(village.Text())=="Unsupported map header");}
    // The same text under ARMYMAP 1 stops at the first v2 column (the hedge's flags).
    {auto v1=fixture;v1.lines[0]="ARMYMAP 1 trenches 29";assert(Error(v1.Text())=="Trailing map record data");}
    // ARMYMAP 1 is unchanged: no B/P records, no crouch 2, flags stay default.
    {std::string v1=DefenceTestMap();std::string error1;auto base=ImportBattlefield(v1,error1);assert(base&&base->map.formatVersion==1&&!base->map.stackedSurfaces&&!base->map.hasConcealment&&!base->map.importedBuildings&&base->map.buildings.empty()&&base->map.stairSurfaces.empty()&&base->map.doorPassages.empty());
     for(const auto& s:base->map.surfaces)assert(s.kind==0&&s.level==0&&s.building==0&&s.replacesGrade);
     const auto end=v1.rfind("END");
     assert(Error(std::string(v1).insert(end,"B 1 34 0 5 4 1\n"))=="Unknown map record: B");
     assert(Error(std::string(v1).insert(end,"P 34 -4 0.6 0.3\n"))=="Unknown map record: P");
     assert(Error(std::string(v1).insert(end,"C 1000000 1 8 -18 0 8 -18 0 1 0 2 0\n"))=="Invalid cover record");
     assert(Error(std::string(v1).insert(end,"O 999 -30 30 0 1 1 1 0 1 1 0\n"))=="Trailing map record data");
     assert(Error(std::string(v1).insert(end,"S 999 -30 30 0 1 1 0 0 0 0 0\n"))=="Trailing map record data");
     std::string padded=v1;padded.insert(padded.find('\n')+1,std::string(5*1024*1024,' ')+"\n");assert(Error(padded)=="Map file is empty or exceeds 4 MiB");
     std::string manyLines=v1;manyLines.insert(manyLines.find('\n')+1,std::string(12000,'\n'));assert(Error(manyLines)=="Too many map records");}
    // Authored-geometry gates: an imported footprint is never read as the authored 10x8 house.
    assert(!OnStairs(m,{20,-15.8f,1.6f}));                   // the authored stair plane of a house at (20,-15)
    assert(!Walkable(m,{15.85f,-17.9f,UpperFloor}));        // authored upper floor, but no surface here (stairwell)
    assert(Walkable(m,{20,-13,UpperFloor})&&Walkable(m,{16.5f,-17.9f,SurfaceHeight(m.surfaces[2],{16.5f,-17.9f,0})}));
    // Passages (plan 029 F-B): the lane's corridor passages, one stair passage, one door passage.
    {const auto passages=BuildingPassages(m);size_t stairs=0,doors=0;
     for(const auto& p:passages){if(p.stairs)++stairs;else if(p.id<1000000)++doors;else assert(p.center.z<-1);}
     assert(stairs==1&&doors==1);}
    // v2 size and record caps are raised; the v1 ones stay.
    {std::string text=fixture.Text();text.insert(text.find('\n')+1,std::string(5*1024*1024,' ')+"\n");assert(Error(text).empty());
     text=fixture.Text();text.insert(text.find('\n')+1,std::string(8*1024*1024,' ')+"\n");assert(Error(text)=="Map file is empty or exceeds 8 MiB");
     text=fixture.Text();text.insert(text.find('\n')+1,std::string(15000,'\n'));assert(Error(text).empty());
     text=fixture.Text();text.insert(text.find('\n')+1,std::string(20000,'\n'));assert(Error(text)=="Too many map records");}
    // Rejections, each with its own message.
    struct Case {std::string name;std::function<void(Fixture&)> edit;std::string message;};
    auto many=[](int count,std::function<std::string(int)> row){return [=](Fixture& f){for(int i=0;i<count;++i)f.Before("END",row(i));};};
    const std::vector<Case> cases={
        {"flags range",[](Fixture& f){f.Replace("O 1 ","O 1 0 5 0 10 0.3 1.8 0 0 1 8");},"Invalid obstacle flags"},
        {"flags token",[](Fixture& f){f.Replace("O 1 ","O 1 0 5 0 10 0.3 1.8 0 0 1 x");},"Invalid obstacle flags"},
        {"flags extra",[](Fixture& f){f.Replace("O 1 ","O 1 0 5 0 10 0.3 1.8 0 0 1 1 0");},"Trailing map record data"},
        {"depth",[](Fixture& f){f.Replace("BOUNDS","BOUNDS 60 40 -0.7");},"Unsupported map dimensions/depth"},
        {"version 3",[](Fixture& f){f.lines[0]="ARMYMAP 3 trenches 29";},"Unsupported map header"},
        {"surface columns",[](Fixture& f){f.Replace("S 103 ","S 103 20 -14.26 3.2 4.78 3.04 0 0 0 1");},"Invalid surface"},
        {"floor slope",[](Fixture& f){f.Replace("S 100 ","S 100 -25 18 -1.4 15 2 0.01 0 0 -1 0");},"Invalid surface kind/slope"},
        {"ramp steep",[](Fixture& f){f.Replace("S 101 ","S 101 -7 18 -0.7 3 2 0.31 0 1 -1 0");},"Invalid surface kind/slope"},
        {"stair shallow",[](Fixture& f){f.Replace("S 102 ","S 102 17.8 -17.9 1.6 1.8 0.6 0.45 0 2 0 1");},"Invalid surface kind/slope"},
        {"stair two axes",[](Fixture& f){f.Replace("S 102 ","S 102 17.8 -17.9 1.6 1.8 0.6 0.8888889 0.1 2 0 1");},"Invalid surface kind/slope"},
        {"kind 3",[](Fixture& f){f.Replace("S 100 ","S 100 -25 18 -1.4 15 2 0 0 3 -1 0");},"Invalid surface kind/slope"},
        {"level",[](Fixture& f){f.Replace("S 100 ","S 100 -25 18 -1.4 15 2 0 0 0 -2 0");},"Invalid surface level"},
        {"stair links",[](Fixture& f){f.Before("B 1 ","L 102 16 -17.9 0 19.6 -17.9 3.2");},"Stair needs exactly one link"},
        {"stair unlinked",[](Fixture& f){f.Erase("L 102 ");},"Stair needs exactly one link"},
        {"stair link ends",[](Fixture& f){f.Replace("L 102 ","L 102 16.5 -17.9 0.4444444 19.6 -17.9 3.2");},"Stair link endpoints are not at both ends"},
        {"link off slope",[](Fixture& f){f.Replace("L 102 ","L 102 16 -17.9 0.5 19.6 -17.9 3.2");},"Link is not on its slope"},
        {"missing building",[](Fixture& f){f.Replace("S 104 ","S 104 22.19 -18.04 3.2 2.59 0.74 0 0 0 1 7");},"Surface cites a missing building"},
        {"outside footprint",[](Fixture& f){f.Replace("B 1 ","B 1 20 -15 5 3.7 2");},"Upper-floor surface outside its building footprint"},
        {"floors",[](Fixture& f){f.Replace("B 1 ","B 1 20 -15 5 4 1");},"Surface level exceeds its building's floors"},
        {"homeless upper",[](Fixture& f){f.Replace("S 104 ","S 104 22.19 -18.04 3.2 2.59 0.74 0 0 0 1 0");},"Upper-floor surface without a building"},
        {"building record",[](Fixture& f){f.Before("END","B 1 -30 -30 3 3 1");},"Invalid/duplicate building"},
        {"building floors",[](Fixture& f){f.Before("END","B 2 -30 -30 3 3 4");},"Invalid/duplicate building"},
        {"building outside",[](Fixture& f){f.Before("END","B 2 58 0 3 3 1");},"Building outside map"},
        {"door record",[](Fixture& f){f.Before("END","P 0 0 0 0.3");},"Invalid door passage"},
        {"door walls",[](Fixture& f){f.Replace("P ","P 17 -19 0.6 0.3");},"Unwalkable door passage 0"},
        {"stacked overlap",[](Fixture& f){f.Replace("S 104 ","S 104 21.99 -18.04 3.2 2.79 0.74 0 0 0 1 1");},"Flat floor overlaps ramp interior"},
        {"crouch 3",[](Fixture& f){f.Replace("C 1000001 ","C 1000001 33 -18.6 -20 0 -18.6 -20 0 1 0 3 0");},"Invalid cover record"},
        {"prone source",[](Fixture& f){f.Replace("C 1000001 ","C 1000001 2 -18.6 -20 0 -18.6 -20 0 1 0 2 0");},"Prone cover needs a crater-rim source"},
        // Plan 029 M-A2: prone cover must hold prone against a level threat 4 m out (1.1 m from the rim it does not),
        // and a crater rim never blocks movement.
        {"prone exposed",[](Fixture& f){f.Replace("C 1000001 ","C 1000001 33 -18.6 -20 0 -18.6 -20 0 1 0 2 0");},"Prone cover unprotected 1"},
        {"rim blocks",[](Fixture& f){f.Replace("O 33 ","O 33 -17 -20 0 0.5 0.5 0.6 0 1 1 2");},"Crater rim blocks movement"},
        {"hedge source",[](Fixture& f){f.Replace("C 1000001 ","C 1000001 1 -18.6 -20 0 -18.6 -20 0 1 0 1 0");},"Cover source is concealment"},
        {"upper exposed",[](Fixture& f){f.Replace("O 20 ","O 20 20 -11 3.2 1 0.22 0.1 1 0 1");},"Upper cover unprotected from the ground 0"},
        {"no earth",[](Fixture& f){f.Replace("O 2 ","O 2 0 -12 -1.4 1 1 1.4 0 1 0");},"Grade spawn/goal has no earth below 0"},
        {"obstacle cap",many(5961,[](int i){std::ostringstream s;s<<"O "<<(1000+i)<<' '<<(-55+(i%100)*.5f)<<' '<<(-38+(i/100)*.2f)<<" -1.4 0.1 0.05 0.1 0 0 0";return s.str();}),"Map geometry budget exceeded: obstacles"},
        {"surface cap",many(1496,[](int i){std::ostringstream s;s<<"S "<<(10000+i)<<" 50 -35 -1.4 0.1 0.1 0 0 0 -1 0";return s.str();}),"Map geometry budget exceeded: surfaces"},
        {"link cap",many(255,[](int){return std::string("L 101 -10 18 -1.4 -4 18 0");}),"Map geometry budget exceeded: links"},
        {"cover cap",many(2999,[](int i){std::ostringstream s;s<<"C "<<(1100000+i)<<" 33 -18.6 -20 0 -18.6 -20 0 1 0 1 0";return s.str();}),"Map geometry budget exceeded: covers"},
        {"decoration cap",many(1500,[](int){return std::string("D 0 0 -35 0.015 50 2 0.0125");}),"Map geometry budget exceeded: decorations"},
        {"building cap",many(128,[](int i){std::ostringstream s;s<<"B "<<(10+i)<<" -30 -30 3 3 1";return s.str();}),"Map geometry budget exceeded: buildings"},
        {"door cap",many(512,[](int){return std::string("P -30 -30 0.6 0.3");}),"Map geometry budget exceeded: door passages"},
    };
    std::set<std::string> messages;
    for(const auto& c:cases){auto f=fixture;c.edit(f);const auto got=Error(f.Text());
        if(got!=c.message){std::cerr<<"case "<<c.name<<": expected '"<<c.message<<"', got '"<<got<<"'"<<std::endl;assert(false);}
        messages.insert(c.message);}
    // At the cap exactly, each count is accepted (the cap cases above add one past it).
    {auto f=fixture;for(int i=0;i<127;++i){std::ostringstream s;s<<"B "<<(10+i)<<" -30 -30 3 3 1";f.Before("END",s.str());}
     for(int i=0;i<511;++i){f.Before("END","P -30 -30 0.6 0.3");}
     for(int i=0;i<254;++i){f.Before("END","L 101 -10 18 -1.4 -4 18 0");}
     const auto got=Error(f.Text());if(!got.empty())std::cerr<<"at-cap fixture: "<<got<<std::endl;assert(got.empty());}
    std::cout<<"ARMYMAP 2: fixture parses with its flags; ARMYMAP 1 rejects it at the first v2 column; "
             <<cases.size()<<" rejection cases ("<<messages.size()<<" distinct messages); authored-geometry gates hold\n";
    ImportedLayerTests();
}
