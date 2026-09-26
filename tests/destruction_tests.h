// Plan 033: building destruction from blast force, behind Config::destruction (sim_tests --destruction).
// Parts: the blast fits (BlastSim), the single-degree-of-freedom strip against closed forms, the calibration anchors of
// plan 033 section 5 (with the numbers printed for the report), breach geometry, walls falling and a storey collapsing
// with the men on it, one revision per explosion and the batched mutation, the observation path (a man learns of a change
// only by seeing it or coming within 3 m, after his report delay), incremental caches equal to a full rebuild, determinism
// and the cost per explosion and per battle.
#pragma once
#include "DestructionSim.h"
#include "BlastSim.h"
#include "Diagnostics.h"
#include "ImportedMap.h"
#include "ReactionSim.h"
#include <cassert>
#include <chrono>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <memory>
#include <sstream>
namespace destruction_tests {
using namespace army;
// ---- Fixture maps ---------------------------------------------------------------------------------------------------
static Obstacle Box(Vec3 center,Vec3 half,float height,bool building,bool move=true){Obstacle o;o.center=center;o.half=half;o.height=height;o.building=building;o.blocksMovement=move;return o;}
// An imported-style map (a `B` footprint that owns no obstacles), 120 x 80 m.
static Map Open(){Map m;m.halfWidth=60;m.halfHeight=40;m.linkedSurfaceRouting=true;m.formatVersion=2;m.stackedSurfaces=true;return m;}
// A one-storey house 10 x 8 m centred at the origin: walls of thickness t and height h; in the middle of its north wall a
// 1.5 m window (a 1.15 m sill, the opening to 2.4 m, a lintel over it) or a plain wall.
static Map House(float t,float h,bool window=true){
    Map m=Open();m.importedBuildings=true;
    Building b;b.center={0,0,0};b.half={5,4,0};b.authoredStairs=false;b.id=1;b.floors=1;m.buildings.push_back(b);
    const float ht=t*.5f;
    if(window){m.obstacles.push_back(Box({-2.875f,4-ht,0},{2.125f,ht,0},h,true));m.obstacles.push_back(Box({2.875f,4-ht,0},{2.125f,ht,0},h,true));
        auto sill=Box({0,4-ht,0},{.75f,ht,0},1.15f,true);sill.halfCover=true;m.obstacles.push_back(sill);
        m.obstacles.push_back(Box({0,4-ht,2.4f},{.75f,ht,0},h-2.4f,true,false));}
    else m.obstacles.push_back(Box({0,4-ht,0},{5,ht,0},h,true));
    m.obstacles.push_back(Box({0,-4+ht,0},{5,ht,0},h,true));
    m.obstacles.push_back(Box({-5+ht,0,0},{ht,4-t,0},h,true));m.obstacles.push_back(Box({5-ht,0,0},{ht,4-t,0},h,true));
    PrepareGeometry(m);return m;
}
// A two-storey house 10 x 8 m: ground walls 0-3.0 m, a 0.2 m slab at 3.0 m, upper walls 3.2-6.2 m, the upper floor a
// level-1 surface; windows (sill, lintel) in the middle of both long walls on both storeys; thickness t (upper storey
// `upper` when given).
static Map TwoStorey(float t,float upper=0){
    Map m=Open();m.importedBuildings=true;
    Building b;b.center={0,0,0};b.half={5,4,0};b.authoredStairs=false;b.id=1;b.floors=2;m.buildings.push_back(b);
    for(int storey=0;storey<2;++storey){const float base=storey?3.2f:0.f,h=storey?3.f:3.f,sillTop=storey?1.05f:1.15f,lintelBase=storey?2.35f:2.4f;
        const float ht=(storey&&upper>0?upper:t)*.5f;
        for(float side:{-1.f,1.f}){const float y=side*(4-ht);
            m.obstacles.push_back(Box({-2.875f,y,base},{2.125f,ht,0},h,true));m.obstacles.push_back(Box({2.875f,y,base},{2.125f,ht,0},h,true));
            auto sill=Box({0,y,base},{.75f,ht,0},sillTop,true);sill.halfCover=true;m.obstacles.push_back(sill);
            m.obstacles.push_back(Box({0,y,base+lintelBase},{.75f,ht,0},h-lintelBase,true,false));}
        m.obstacles.push_back(Box({-5+ht,0,base},{ht,4-t,0},h,true));m.obstacles.push_back(Box({5-ht,0,base},{ht,4-t,0},h,true));}
    m.obstacles.push_back(Box({0,0,3.f},{5,4,0},.2f,true,false));   // the slab
    GroundSurface floor;floor.id=9001;floor.center={0,0,3.2f};floor.half={5-t,4-t,0};floor.kind=0;floor.level=1;floor.building=1;floor.replacesGrade=false;m.surfaces.push_back(floor);
    PrepareGeometry(m);return m;
}
// A timber shed 2 x 2 x 2.2 m (not a building obstacle) at the origin.
static Map Shed(){Map m=Open();m.obstacles.push_back(Box({0,0,0},{1,1,0},2.2f,false));PrepareGeometry(m);return m;}
// One charge, or several, on a map: the runtime, the map after and the events. Masonry becomes `masonry` (a hand-built map
// has no family: brick by default).
struct Blast { std::unique_ptr<DestructionRuntime> d; Map map; std::vector<DestructionEvent> events; };
static Blast Detonate(Map map,const std::vector<Explosion>& charges,BuildMaterial masonry=BuildMaterial::Brick,const DestructionTuning& k=DestructionTuning{}){
    Blast b;b.d=std::make_unique<DestructionRuntime>();b.map=std::move(map);Config c;c.destruction=true;c.destructionTable=k;
    StartDestruction(*b.d,c,b.map);
    for(auto& p:b.d->panels)if(p.material!=BuildMaterial::Timber)p.material=masonry;
    for(const auto& e:charges)Explode(*b.d,b.map,e,nullptr,b.events,nullptr,{});
    return b;
}
// The worst event an obstacle had: 0 none, 1 cracked, 2 breached, 3 destroyed or collapsed.
static int Worst(const std::vector<DestructionEvent>& events,uint64_t id){int worst=0;
    for(const auto& e:events)if(e.obstacle==id){const int s=e.kind==DestructionKind::Cracked?1:e.kind==DestructionKind::Breached?2:(e.kind==DestructionKind::Destroyed||e.kind==DestructionKind::Collapsed)?3:0;worst=std::max(worst,s);}
    return worst;}
static int Count(const std::vector<DestructionEvent>& events,DestructionKind kind){int n=0;for(const auto& e:events)n+=e.kind==kind;return n;}
static const char* StateName(int s){const char* names[]={"intact","cracked","breached","destroyed"};return names[std::clamp(s,0,3)];}
// The central vertical strip of a wall panel in front of a burst (no shielding): its response, for the report.
static StripResponse CentralStrip(const DestructionRuntime& d,const Map& m,uint64_t id,Vec3 burst,float charge){
    const Obstacle* box=nullptr;for(const auto& o:m.obstacles)if(o.id==id)box=&o;assert(box);
    const Panel* panel=nullptr;for(const auto& p:d.panels)if(p.obstacle==id)panel=&p;assert(panel);
    const auto strip=PanelStrip(d,*panel,*box);const float h=ObstacleHeight(*box);const int rows=std::max(1,int(std::lround(h/d.k.cellSize)));
    const bool alongX=box->half.x>=box->half.y;const float sign=(alongX?burst.y-box->center.y:burst.x-box->center.x)>=0?1.f:-1.f;
    const Vec3 normal=alongX?Vec3{0,sign,0}:Vec3{sign,0,0};
    const Vec3 face{alongX?burst.x:box->center.x+sign*std::min(box->half.x,box->half.y),alongX?box->center.y+sign*std::min(box->half.x,box->half.y):burst.y,box->center.z};
    std::vector<StripCell> cells;
    for(int j=0;j<rows;++j){const float xi=(float(j)+.5f)/float(rows);const auto load=BlastOnSurface(charge,burst,face+Vec3{0,0,xi*h},normal);
        StripCell c;c.pressure=load.pressure;c.duration=load.duration;c.weight=strip.support==Span::Cantilever?xi*xi:std::sin(3.14159265f*xi);cells.push_back(c);}
    return RespondStrip(strip,cells,d.k);
}

// ---- The blast fits -------------------------------------------------------------------------------------------------
static void BlastFitTests(){
    // The fits evaluated independently here (Swisdak 1994, surface burst, metric), in double.
    auto fit=[](double z,std::initializer_list<double> c){const double l=std::log(z);double sum=0,p=1;for(double v:c){sum+=v*p;p*=l;}return std::exp(sum);};
    for(double z:{.5,1.,2.,5.,10.,20.}){const auto kb=KingeryBulmash(1,float(z));
        const double pressure=z<=2.9?fit(z,{7.2106,-2.1069,-.3229,.1117,.0685}):fit(z,{7.5938,-3.0523,.40977,.0261,-.01267});
        const double impulse=z<=.96?fit(z,{5.522,1.117,.6,-.292,-.087}):z<=2.38?fit(z,{5.465,-.308,-1.464,1.362,-.432}):fit(z,{5.2749,-.4677,-.2499,.0588,-.00554});
        const double reflected=fit(z,{6.7853,-1.3466,.101,-.01123});
        assert(std::abs(kb.pressure-pressure)<1e-3*pressure&&std::abs(kb.impulse-impulse)<1e-3*impulse&&std::abs(kb.reflectedImpulse-reflected)<1e-3*reflected);
    }
    // Scaling: W^(1/3); the reflected pressure exceeds the incident one (at least twice at low pressure); each falls with range.
    {const auto a=KingeryBulmash(8,10),b=KingeryBulmash(1,5);assert(std::abs(a.pressure-b.pressure)<1e-3f*b.pressure&&std::abs(a.impulse-2*b.impulse)<2e-3f*b.impulse);}
    float lastP=1e9f,lastI=1e9f;
    for(float r=.5f;r<40;r*=1.25f){const auto kb=KingeryBulmash(1,r);assert(kb.pressure<lastP&&kb.reflectedImpulse<lastI&&kb.reflectedPressure>=2*kb.pressure*.98f);lastP=kb.pressure;lastI=kb.reflectedImpulse;} // the reflected fits end at Z 40
    // Obliquity: normal incidence the reflected value, grazing the incident one, between them monotonic.
    assert(ObliqueLoad(100,40,1)==100&&ObliqueLoad(100,40,0)==40&&ObliqueLoad(100,40,-.5f)==40);
    for(float c=0;c<1;c+=.1f)assert(ObliqueLoad(100,40,c)<=ObliqueLoad(100,40,c+.1f)+1e-4f);
    // The surface load keeps the impulse in its triangle, and a room raises pressure x2.5 and the pulse x3.
    {const auto open=BlastOnSurface(1,{0,0,0},{3,0,0},{-1,0,0}),room=BlastOnSurface(1,{0,0,0},{3,0,0},{-1,0,0},2.5f,3);
     const auto kb=KingeryBulmash(1,3);assert(std::abs(open.pressure-kb.reflectedPressure)<1e-3f*kb.reflectedPressure&&std::abs(open.impulse-kb.reflectedImpulse)<1e-3f*kb.reflectedImpulse);
     assert(std::abs(room.pressure-2.5f*open.pressure)<1e-3f*room.pressure&&std::abs(room.duration-3*open.duration)<1e-3f*room.duration);}
    // Beyond the reflected fit (Z 40) the reflected value keeps falling with the incident one.
    assert(BlastOnSurface(1,{0,0,0},{60,0,0},{-1,0,0}).pressure<BlastOnSurface(1,{0,0,0},{40,0,0},{-1,0,0}).pressure);
    std::cout<<"Blast fits: 1 kg TNT surface burst at 5 m: "<<std::fixed<<std::setprecision(1)<<KingeryBulmash(1,5).pressure<<" kPa incident, "
             <<KingeryBulmash(1,5).reflectedPressure<<" kPa reflected, "<<KingeryBulmash(1,5).reflectedImpulse<<" kPa ms reflected impulse\n";
}
// ---- The strip against closed forms ---------------------------------------------------------------------------------
static void StripTests(){
    DestructionTuning k;
    // An elastic simply supported strip (timber, far below its strength) under a short pulse: the impulsive peak
    // x = I / (K_LM m omega), omega = sqrt(K / (K_LM m)).
    StripProperties s;s.masonry=false;s.span=3;s.thickness=.2f;s.density=500;s.modulus=10e9f;s.strength=1e9f;
    const float I=.2f*.2f*.2f/12,K=76.8f*s.modulus*I/81,m=500*.2f,omega=std::sqrt(K/(.78f*m));
    {std::vector<StripCell> cells(8,StripCell{100,.2f,1});   // 100 kPa for 0.2 ms: 10 Pa s
     const auto r=RespondStrip(s,cells,k);const float expected=10/(.78f*m*omega);
     assert(std::abs(r.peak-expected)<.03f*expected&&r.state==0);}
    // A long pulse (a step, for many periods): the dynamic load factor 2, x = 2 p / K.
    {std::vector<StripCell> cells(8,StripCell{1,2000,1});
     const auto r=RespondStrip(s,cells,k);const float expected=2*1000/K;assert(std::abs(r.peak-expected)<.03f*expected);}
    // Masonry: a strip loaded past cracking and past what its rocking resistance can hold rocks over (blown out); one
    // just past cracking is cracked; both reach their state in order of the impulse.
    StripProperties w;w.span=3;w.thickness=.23f;w.density=1900;w.modulus=4e9f;w.strength=2e5f;
    int last=0;for(float impulse:{5.f,20.f,60.f,150.f,400.f}){std::vector<StripCell> cells(6,StripCell{impulse/.5f*2,1,1});
        const auto r=RespondStrip(w,cells,k);assert(r.state>=last);last=r.state;}
    assert(last==3);
}
// ---- The anchors (plan 033 section 5) -------------------------------------------------------------------------------
static void AnchorTests(){
    std::cout<<std::fixed<<std::setprecision(2);
    const float hand[]={.06f,.17f,.23f};
    // 1. A hand grenade (60-230 g TNT) 1-2 m from a stone or brick wall: no breach, at most cracked. The walls of the E-6
    //    maps (0.5 m, one storey 3.6 m), a one-brick wall (0.23 m, 3 m) and a garden wall (0.5 m, 1.15 m).
    struct Wall { const char* name; float t, h; BuildMaterial m; bool garden; };
    const Wall walls[]={{"village stone 0.5 m",.5f,3.6f,BuildMaterial::Stone,false},{"city2 brick 0.5 m",.5f,3.6f,BuildMaterial::Brick,false},
                        {"one-brick 0.23 m",.23f,3.f,BuildMaterial::Brick,false},{"stone garden wall 0.5 m",.5f,1.15f,BuildMaterial::Stone,true}};
    for(const auto& w:walls)for(float charge:hand)for(float range:{1.f,2.f}){
        Map m=w.garden?[&]{Map g=Open();g.obstacles.push_back(Box({0,4-w.t*.5f,0},{5,w.t*.5f,0},w.h,false));PrepareGeometry(g);return g;}():House(w.t,w.h,false);
        const Vec3 burst{0,4+range,.05f};const uint64_t id=m.obstacles.front().id;
        auto b=Detonate(m,{{0,burst,charge}},w.m);const int state=Worst(b.events,id);
        const auto strip=CentralStrip(*b.d,m,id,burst,charge);
        std::cout<<"anchor grenade "<<charge*1000<<" g at "<<range<<" m, "<<w.name<<": "<<StateName(state)<<" (central strip ductility "<<strip.ductility<<", rotation "<<strip.rotation<<" deg)\n";
        assert(state<=1);
    }
    // 1b. Indoors (the room rule: pressure x2.5, pulse x3): a grenade 1-2 m from the sill or a pier of the E-6 maps' 0.5 m
    //     walls cracks them at most; one-brick walls, reported (the room's impulse x7.5 blows them out; room_duration 1 does not).
    for(float t:{.5f,.23f})for(auto material:{BuildMaterial::Stone,BuildMaterial::Brick})for(float charge:hand)for(float range:{1.f,2.f})for(float pulse:{3.f,1.f}){
        if(t>.3f&&pulse<2)continue;
        Map m=House(t,3.6f,true);uint64_t pier=0,sill=0;for(const auto& o:m.obstacles){if(o.center.x<-2&&o.center.y>3)pier=o.id;if(o.halfCover)sill=o.id;}
        DestructionTuning k;k.roomDuration=pulse;
        auto a=Detonate(m,{{0,{0,4-t-range,.05f},charge}},material,k),b=Detonate(m,{{0,{-2.875f,4-t-range,.05f},charge}},material,k);
        const int worst=std::max(Worst(a.events,sill),Worst(b.events,pier));
        std::cout<<"anchor indoor grenade "<<charge*1000<<" g at "<<range<<" m, "<<(material==BuildMaterial::Stone?"stone ":"brick ")<<t<<" m (room pulse x"<<pulse<<"): sill "
                 <<StateName(Worst(a.events,sill))<<", pier "<<StateName(Worst(b.events,pier))<<"\n";
        if(t>.3f||pulse<2)assert(worst<=1);
    }
    // 2. Every window within several metres of a grenade shatters: panes facing the burst at 2, 4 and 6 m.
    for(float charge:{.06f,.17f})for(float range:{2.f,4.f,6.f}){
        auto b=Detonate(House(.5f,3.6f,true),{{0,{0,4+range,.05f},charge}});
        std::cout<<"anchor window, grenade "<<charge*1000<<" g at "<<range<<" m: "<<(Count(b.events,DestructionKind::GlassShattered)?"shattered":"intact")<<"\n";
        assert(Count(b.events,DestructionKind::GlassShattered)==1);
    }
    // 3. Light timber within 1-2 m of a grenade is broken (breached or blown in).
    for(float charge:{.06f,.17f,.23f})for(float range:{1.f,1.5f,2.f}){
        auto b=Detonate(Shed(),{{0,{0,1+range,.05f},charge}});const int state=Worst(b.events,b.d->panels.front().obstacle);
        std::cout<<"anchor shed, grenade "<<charge*1000<<" g at "<<range<<" m: "<<StateName(state)<<"\n";
        if(range<=1.f||charge>=.17f)assert(state>=2);
    }
    // 4. About 0.5-1 kg of TNT against a one-brick wall breaches it (FM 5-250 sizes the hole); a grenade against it does not.
    for(float charge:{.17f,.5f,1.f}){
        Map m=House(.23f,3.f,false);const uint64_t id=m.obstacles.front().id;
        auto b=Detonate(m,{{0,{0,4.02f,1.f},charge}});const int state=Worst(b.events,id);
        float width=0;for(const auto& e:b.events)if(e.obstacle==id&&e.kind==DestructionKind::Breached)width=2*e.half.x;
        std::cout<<"anchor contact "<<charge<<" kg on one-brick wall: "<<StateName(state)<<" (breaching radius "<<BreachRadius(charge,b.d->k.breachBrick,b.d->k.breachPlacement)<<" m, hole "<<width<<" m wide)\n";
        assert(charge<.3f?state<=1:state>=2);
    }
    // 5. A 105 mm shell's charge (2.2 kg TNT) at 2-3 m: heavy damage to a one-brick wall; the 0.5 m walls, reported.
    for(const auto& w:walls)for(float range:{2.f,3.f}){if(w.garden)continue;
        Map m=House(w.t,w.h,false);const uint64_t id=m.obstacles.front().id;const Vec3 burst{0,4+range,.5f};
        auto b=Detonate(m,{{0,burst,2.2f}},w.m);const int state=Worst(b.events,id);const auto strip=CentralStrip(*b.d,m,id,burst,2.2f);
        std::cout<<"anchor 2.2 kg at "<<range<<" m, "<<w.name<<": "<<StateName(state)<<" (central strip ductility "<<strip.ductility<<", rotation "<<strip.rotation<<" deg)\n";
        if(w.t<.3f)assert(state>=2);
    }
    // For the later artillery test: the smallest charge 2 m from each wall that breaches it, and against it (FM 5-250).
    for(const auto& w:walls){if(w.garden)continue;
        auto breaches=[&](float charge,float range){Map m=House(w.t,w.h,false);const uint64_t id=m.obstacles.front().id;
            auto b=Detonate(m,{{0,{0,4+range,range>0?.5f:1.f},charge}},w.m);return Worst(b.events,id)>=2;};
        auto smallest=[&](float range){float low=.05f,high=200;if(!breaches(high,range))return -1.f;
            for(int n=0;n<24;++n){const float mid=std::sqrt(low*high);if(breaches(mid,range))high=mid;else low=mid;}return high;};
        std::cout<<"anchor breaching charge, "<<w.name<<": "<<smallest(.02f)<<" kg against it, "<<smallest(2)<<" kg at 2 m\n";
    }
    std::cout<<std::defaultfloat;
}
// ---- Breach geometry: the panel split around its hole, one revision, a line through the hole ------------------------
static float Volume(const Obstacle& o){return 4*o.half.x*o.half.y*ObstacleHeight(o);}
static void BreachGeometryTests(){
    Map m=House(.23f,3.f,false);const Obstacle wall=m.obstacles.front();const uint64_t revision=m.revision;const size_t count=m.obstacles.size();
    assert(!ClearLine3D(m,{0,6,1},{0,2,1}));
    auto b=Detonate(m,{{0,{0,4.02f,1.f},1.f}});
    assert(b.map.revision==revision+1);                                     // one revision for the explosion
    for(const auto& o:b.map.obstacles)assert(o.id!=wall.id);                // the panel is gone ...
    const DestructionEvent* hole=nullptr;for(const auto& e:b.events)if(e.obstacle==wall.id&&e.kind==DestructionKind::Breached)hole=&e;
    assert(hole&&std::abs(hole->center.y-wall.center.y)<1e-4f&&hole->half.x>.2f&&hole->half.z>.2f);
    // ... and its pieces (up to four, building walls in its line) fill it but for the hole.
    std::vector<Obstacle> pieces;for(const auto& o:b.map.obstacles)if(o.building&&o.id>=b.d->panels.front().obstacle&&std::abs(o.center.y-wall.center.y)<1e-4f&&o.id!=wall.id&&o.id>m.nextGeometryId-1)pieces.push_back(o);
    assert(!pieces.empty()&&pieces.size()<=4);
    float filled=0;for(const auto& p:pieces)filled+=Volume(p);
    const float holeVolume=8*hole->half.x*hole->half.y*hole->half.z;
    assert(std::abs(filled+holeVolume-Volume(wall))<.02f*Volume(wall)||filled<Volume(wall));   // slivers under 0.15 m go with the hole
    assert(ClearLine3D(b.map,{0,6,1},{0,2,1}));                             // the hole is open
    // Rubble at its foot is an obstacle of the map (the event carries its id), low cover that does not block movement.
    int heaps=0;for(const auto& e:b.events)if(e.kind==DestructionKind::Rubble){++heaps;bool found=false;
        for(const auto& o:b.map.obstacles)if(o.id==e.obstacle){found=true;assert(o.halfCover&&!o.blocksMovement&&o.center.z==0);}
        assert(found);}
    assert(heaps>=1&&b.map.obstacles.size()>=count-1+pieces.size()+size_t(heaps));
    // The mutation interface: a batch is one revision, added obstacles keep canonical order (originals first, then by id),
    // and AddObstacle is the one-change form.
    {Map a=House(.5f,3.6f,true),c=a;
     Obstacle x=Box({20,0,0},{1,1,0},1,false),y=Box({-20,0,0},{1,1,0},1,false);x.id=a.nextGeometryId+5;y.id=a.nextGeometryId+2;
     GeometryBatch one,two;GeometryOp addX;addX.kind=GeometryOp::Kind::Add;addX.id=x.id;addX.obstacle=x;GeometryOp addY=addX;addY.id=y.id;addY.obstacle=y;
     GeometryOp remove;remove.kind=GeometryOp::Kind::Remove;remove.id=a.obstacles[2].id;
     one.ops={addX,remove,addY};two.ops={addY};GeometryBatch three;three.ops={remove,addX};
     const uint64_t before=a.revision;ApplyGeometryBatch(a,one);assert(a.revision==before+1);
     ApplyGeometryBatch(c,two);ApplyGeometryBatch(c,three);   // the same changes, another order, two revisions
     assert(a.obstacles.size()==c.obstacles.size());for(size_t i=0;i<a.obstacles.size();++i)assert(a.obstacles[i].id==c.obstacles[i].id);
     assert(a.obstacles[a.obstacles.size()-2].id==y.id&&a.obstacles.back().id==x.id);
     const uint64_t id=AddObstacle(a,Box({30,0,0},{1,1,0},1,false));assert(a.revision==before+2&&a.obstacles.back().id==id&&id>x.id);}
}
// ---- Falling walls and a storey's collapse, with the men on it -------------------------------------------------------
static void CollapseTests(){
    // A pier of the ground storey blown out takes the upper wall over it (falling masonry, not blast): a one-brick ground
    // storey under a 0.6 m upper storey that the blast itself only cracks.
    {Map m=TwoStorey(.23f,.6f);uint64_t pier=0,upper=0;
     for(const auto& o:m.obstacles){if(std::abs(o.center.x+2.875f)<.01f&&o.center.y<0&&o.center.z==0)pier=o.id;if(std::abs(o.center.x+2.875f)<.01f&&o.center.y<0&&o.center.z==3.2f)upper=o.id;}
     assert(pier&&upper);
     auto b=Detonate(m,{{0,{-2.875f,-6.f,1.f},3.f}});
     std::cout<<"collapse: 3 kg at 2 m from a one-brick pier: pier "<<StateName(Worst(b.events,pier))<<", the 0.6 m wall over it "<<StateName(Worst(b.events,upper))<<"\n";
     assert(Worst(b.events,pier)>=2&&Worst(b.events,upper)>=2);
     bool fell=false;for(const auto& e:b.events)fell=fell||(e.obstacle==upper&&e.kind==DestructionKind::Collapsed);assert(fell);}
    // A charge in the ground storey blows out its walls: the floor above falls with the upper storey. The man upstairs falls
    // and is hurt; the man downstairs may be crushed (a counter-based draw: the same every time).
    Config c;const auto frame=std::make_unique<Frame>(InitialFrame(c));
    for(auto& s:frame->soldiers)s.position={40.f+float(s.id%8),30.f-float(s.id/8),0};
    frame->soldiers[0].position={1,1,3.2f};frame->soldiers[1].position={-2,-1,0};frame->time=12;
    auto run=[&](Frame& f){
        auto d=std::make_unique<DestructionRuntime>();Map m=TwoStorey(.23f);Config k;k.destruction=true;StartDestruction(*d,k,m);
        std::vector<DestructionEvent> events;std::vector<Event> log;int displaced=0,downed=0;DestructionHooks hooks;
        hooks.displaced=[&](int){++displaced;};hooks.downed=[&](int){++downed;};
        const uint64_t revision=m.revision;assert(Walkable(m,{1,1,3.2f}));
        Explode(*d,m,{12,{0,0,.3f},8.f},&f,events,&log,hooks);
        assert(m.revision==revision+1&&m.buildings[0].floors==1&&m.surfaces.empty()&&!Walkable(m,{1,1,3.2f}));
        for(const auto& o:m.obstacles)assert(!(o.building&&o.center.z>=2.9f));               // slab and upper storey gone
        assert(Count(events,DestructionKind::Collapsed)>0);bool level=false;for(const auto& e:events)level=level||(e.kind==DestructionKind::Collapsed&&e.obstacle==0);assert(level);
        int inside=0;for(const auto& o:m.obstacles)inside+=!o.building&&o.halfCover&&!o.blocksMovement&&std::abs(o.center.x)<5&&std::abs(o.center.y)<4;assert(inside>0);
        assert(displaced==1);return std::make_pair(events.size(),downed);
    };
    auto first=std::make_unique<Frame>(*frame),second=std::make_unique<Frame>(*frame);
    const auto a=run(*first),b=run(*second);
    const auto& man=first->soldiers[0];
    std::cout<<"collapse: the man upstairs fell to z "<<man.position.z<<", health "<<man.health<<"; the man below: health "<<first->soldiers[1].health<<"\n";
    assert(man.position.z==0&&man.health<frame->soldiers[0].health&&Walkable(TwoStorey(.23f),{man.position.x,man.position.y,0}));
    assert(a==b&&first->soldiers[0].health==second->soldiers[0].health&&first->soldiers[1].health==second->soldiers[1].health);
    for(int i=2;i<UnitCount;++i)assert(first->soldiers[size_t(i)].health==frame->soldiers[size_t(i)].health);   // nobody outside is touched
}
// ---- Knowledge: a man learns of a change only by seeing it (or being within 3 m), after his report delay -------------
static void ObservationTests(){
    Config c;c.destruction=true;
    Record r;r.map=House(.23f,3.f,false);r.config=c;const uint64_t wall=r.map.obstacles.front().id;
    auto frame=std::make_unique<Frame>(InitialFrame(Config{}));Frame& f=*frame;
    for(auto& s:f.soldiers)s.position={-2.8f+.8f*float(s.id%8),-31.f-float(s.id/8),0};   // everyone south of the house ...
    f.soldiers[0].position={0,20,0};                                        // ... but A, facing the north wall,
    f.soldiers[1].position={0,-20,0};                                       // and B, behind the house (south of it)
    DestructionRuntime d;StartDestruction(d,c,r.map);QueueExplosion(d,{.05f,{0,4.02f,1.f},1.f});
    f.time=.05f;assert(StepExplosions(d,f,r,f.time,{}));
    const auto* views=DestructionViews(d);assert(views);
    auto knows=[&](int id){for(const auto& o:(*views)[size_t(id)]->obstacles)if(o.id==wall)return false;return true;};
    assert(!knows(0)&&!knows(1)&&(*views)[0]!=&r.map);
    const float delayA=ReactionSeconds(f.soldiers[0],ReactionKind::Report);const uint64_t revisionA=f.soldiers[0].knowledgeRevision;
    float learnedA=-1;
    for(int tick=2;tick<=200;++tick){f.time=float(tick)*TickSeconds;ObserveChanges(d,f,r.map,f.time,tick,nullptr);if(learnedA<0&&knows(0))learnedA=f.time;}
    std::cout<<"observation: A saw the breach and knew it at "<<learnedA<<" s (report delay "<<delayA<<" s); B, behind the house: "<<(knows(1)?"knows":"does not know")<<"\n";
    assert(learnedA>=.05f+delayA-1e-4f&&learnedA<=.05f+delayA+d.k.observeEvery+TickSeconds+1e-4f&&(*views)[0]==&r.map&&f.soldiers[0].knowledgeRevision==revisionA+1);
    assert(!knows(1));
    f.soldiers[1].position={0,6.5f,0};                                      // B walks up to within 3 m of the wall
    float learnedB=-1;for(int tick=201;tick<=400;++tick){f.time=float(tick)*TickSeconds;ObserveChanges(d,f,r.map,f.time,tick,nullptr);if(learnedB<0&&knows(1))learnedB=f.time;}
    assert(learnedB>0&&(*views)[1]==&r.map);
    // The men south of the house (it hides the north wall from them) never learned of it.
    for(int id=2;id<UnitCount;++id)assert(!knows(id)&&(*views)[size_t(id)]!=&r.map);
}
// ---- Incremental caches equal a full rebuild -------------------------------------------------------------------------
static std::string RepositoryFile(const char* path){std::string here=__FILE__;const auto at=here.rfind("tests/");return (at==std::string::npos?std::string():here.substr(0,at))+path;}
static std::shared_ptr<const ImportedBattlefield> Village(){
    std::ifstream file(RepositoryFile("Unreal/Config/GeneratedMaps/village.army"));std::ostringstream source;source<<file.rdbuf();std::string error;
    auto field=ImportBattlefield(source.str(),error);assert(field);return field;
}
static void IncrementalTests(){
    const auto field=Village();
    Map a=field->map;for(auto& o:a.obstacles)o.concealment=false;a.hasConcealment=false;InvalidateGeometry(a);
    // Warm every cache the derivation keeps: the catalogue, the walkable grid and its edges (paths through the village), and
    // a regional route graph.
    (void)CoverPositions(a);
    const Vec3 targets[]={{-120.5f,14,0},{-110,8,0},{-128,2,0},{-120,-2,0}};
    for(const auto& p:targets)for(const auto& q:targets)(void)FindPath(a,p,q);
    Map b=a;
    auto da=std::make_unique<DestructionRuntime>(),db=std::make_unique<DestructionRuntime>();Config c;c.destruction=true;
    StartDestruction(*da,c,a);StartDestruction(*db,c,b);db->incremental=false;
    std::vector<DestructionEvent> ea,eb;
    const Explosion charges[]={{1,{-117.7f,12.27f,1},6},{2,{-113,8,.2f},2.2f},{3,{-120.5f,8,.3f},25}};
    for(const auto& e:charges){
        Explode(*da,a,e,nullptr,ea,nullptr,{});Explode(*db,b,e,nullptr,eb,nullptr,{});
        assert(a.revision==b.revision&&a.obstacles.size()==b.obstacles.size());
        // The derived catalogue is the full sample, entry for entry.
        Map fresh=a;fresh.coverCatalog.reset();fresh.coverRevision=0;fresh.navigation.reset();fresh.spatial.reset();fresh.segments.reset();fresh.routeGraph.reset();
        const auto& derived=CoverPositions(a);const auto& full=CoverPositions(fresh);assert(derived.size()==full.size()&&derived.size()==CoverPositions(b).size());
        for(size_t i=0;i<full.size();++i){const auto& x=derived[i];const auto& y=full[i];
            assert(x.id==y.id&&x.source==y.source&&x.crouch==y.crouch&&x.prone==y.prone&&x.window==y.window&&std::memcmp(&x.shelter,&y.shelter,sizeof x.shelter)==0&&std::memcmp(&x.peek,&y.peek,sizeof x.peek)==0);}
        // Paths through the damage on the derived navigation equal those of a full rebuild.
        for(const auto& p:targets)for(const auto& q:targets){const auto x=FindPath(a,p,q),y=FindPath(fresh,p,q),z=FindPath(b,p,q);
            assert(x.size()==y.size()&&x.size()==z.size());for(size_t i=0;i<x.size();++i)assert(std::memcmp(&x[i],&y[i],sizeof x[i])==0&&std::memcmp(&x[i],&z[i],sizeof x[i])==0);}
        for(float x=-135;x<=-106;x+=.5f)for(float y=-3;y<=19;y+=.5f)assert(Walkable(a,{x,y,0})==Walkable(fresh,{x,y,0}));
    }
    assert(ea.size()==eb.size());
    std::cout<<"incremental: "<<ea.size()<<" events over three explosions, the derived caches equal a full rebuild\n";
}
// ---- Battles: one revision per explosion, determinism, incremental = full, the cost ----------------------------------
struct Fought { uint64_t digest=0; double seconds=0; size_t peak=0; Record record; };
static Fought Fight(const Config& c){
    DiagnosticOptions options;options.enabled=false;LeanRecorder recorder;options.keepFrames=false;
    options.frameSink=[&](const Record& record,const Frame& frame){recorder.Record_(record,frame);};
    Fought f;const auto start=std::chrono::steady_clock::now();f.record=Simulate(c,options);
    f.seconds=std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();f.digest=recorder.Digest(f.record);
    f.record.frames.clear();f.record.frames.shrink_to_fit();return f;
}
static void BattleTests(){
    Config c;c.battlefield=Village();c.maxSeconds=90;c.squadMachineGuns=true;c.concealment=c.prone=c.vaulting=true;
    const Fought off=Fight(c);
    c.destruction=true;c.testCharges={{20,{-117.7f,12.27f,1},6},{25,{-113,8,.2f},2.2f},{30,{-120.5f,8,.3f},25},{40,{6,27,1},.17f},{45,{0,0,.1f},.5f}};
    const Fought on=Fight(c),again=Fight(c);
    Config full=c;full.destructionFullRebuild=true;const Fought rebuilt=Fight(full);
    const auto& r=on.record;
    int changed=0;for(const auto& v:r.geometryVersions)changed+=v.reason.rfind("explosion",0)==0;
    std::cout<<"battle: "<<r.destructionTotals.explosions<<" explosions, "<<changed<<" changed the geometry ("<<r.geometryVersions.size()<<" versions), "
             <<r.destruction.size()<<" events, "<<r.glassPanes.size()<<" panes; digest "<<on.digest<<"\n";
    assert(r.destructionTotals.explosions==5&&changed==r.destructionTotals.revisions&&changed>=2);
    assert(r.geometryVersions.front().time==0&&r.geometryVersions.front().reason=="initial"&&r.geometryVersions.size()==size_t(changed)+1);
    assert(r.map.revision==r.geometryVersions.front().map.revision+uint64_t(changed));
    for(size_t i=1;i<r.destruction.size();++i)assert(r.destruction[i].time>=r.destruction[i-1].time);
    assert(on.digest==again.digest&&on.digest!=off.digest);                 // deterministic; the switch changes the battle
    assert(rebuilt.digest==on.digest);                                      // incremental caches change no answer
    const auto& t=r.destructionTotals;
    std::cout<<std::fixed<<std::setprecision(3)<<"cost (90 s battle, village seed 17): off "<<off.seconds<<" s, destruction "<<on.seconds<<" s (incremental), "<<rebuilt.seconds
             <<" s (full rebuild); per explosion: physics "<<t.physicsSeconds/t.explosions*1000<<" ms, batch "<<t.geometrySeconds/std::max(1,t.revisions)*1000
             <<" ms; knowledge states "<<t.viewStates<<", view updates "<<t.viewUpdates<<", observation "<<t.observeSeconds<<" s, debris "<<t.debrisSeconds<<" s\n"<<std::defaultfloat;
}
static void DestructionTests(){
    std::cout.setf(std::ios::unitbuf);
    BlastFitTests();StripTests();AnchorTests();BreachGeometryTests();CollapseTests();ObservationTests();IncrementalTests();BattleTests();
    std::cout<<"Destruction checks passed\n";
}
}
using destruction_tests::DestructionTests;
