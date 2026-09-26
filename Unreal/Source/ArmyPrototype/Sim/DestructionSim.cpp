#include "DestructionSim.h"
#include "BlastSim.h"
#include "Diagnostics.h"
#include "PerceptionSim.h"
#include "ReactionSim.h"
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iterator>
#include <sstream>

namespace army {
// ---- The table ------------------------------------------------------------------------------------------------------
const std::vector<DestructionParam>& DestructionParams(){
    static const std::vector<DestructionParam> params={
        {"cell_size",&DestructionTuning::cellSize},{"reach",&DestructionTuning::reach},
        {"room_pressure",&DestructionTuning::roomPressure},{"room_duration",&DestructionTuning::roomDuration},
        {"stone_density",&DestructionTuning::stoneDensity},{"stone_tensile",&DestructionTuning::stoneTensile},
        {"stone_modulus",&DestructionTuning::stoneModulus},{"stone_compressive",&DestructionTuning::stoneCompressive},
        {"brick_density",&DestructionTuning::brickDensity},{"brick_tensile",&DestructionTuning::brickTensile},
        {"brick_modulus",&DestructionTuning::brickModulus},{"brick_compressive",&DestructionTuning::brickCompressive},
        {"timber_board",&DestructionTuning::timberBoard},{"timber_density",&DestructionTuning::timberDensity},
        {"timber_rupture",&DestructionTuning::timberRupture},{"timber_modulus",&DestructionTuning::timberModulus},{"timber_spans",&DestructionTuning::timberSpans},
        {"arching",&DestructionTuning::arching},{"spandrel_arching",&DestructionTuning::spandrelArching},
        {"masonry_heavy",&DestructionTuning::masonryHeavy},{"masonry_blowout",&DestructionTuning::masonryBlowout},
        {"timber_crack",&DestructionTuning::timberCrack},{"timber_breach",&DestructionTuning::timberBreach},{"timber_blowout",&DestructionTuning::timberBlowout},
        {"breach_stone",&DestructionTuning::breachStone},{"breach_brick",&DestructionTuning::breachBrick},
        {"breach_timber",&DestructionTuning::breachTimber},{"breach_placement",&DestructionTuning::breachPlacement},
        {"glass_break",&DestructionTuning::glassBreak},{"glass_thickness",&DestructionTuning::glassThickness},{"glass_density",&DestructionTuning::glassDensity},
        {"collapse_share",&DestructionTuning::collapseShare},{"arch_span",&DestructionTuning::archSpan},
        {"fall_damage",&DestructionTuning::fallDamage},{"crush_chance",&DestructionTuning::crushChance},{"crush_damage",&DestructionTuning::crushDamage},
        {"debris_share",&DestructionTuning::debrisShare},{"chunk_mass",&DestructionTuning::chunkMass},{"max_chunks",&DestructionTuning::maxChunks},
        {"speed_spread",&DestructionTuning::speedSpread},{"chunk_cone",&DestructionTuning::chunkCone},
        {"max_shards",&DestructionTuning::maxShards},{"shard_mass",&DestructionTuning::shardMass},{"shard_cone",&DestructionTuning::shardCone},
        {"max_debris_speed",&DestructionTuning::maxDebrisSpeed},
        {"rubble_bulking",&DestructionTuning::rubbleBulking},{"rubble_min",&DestructionTuning::rubbleMin},
        {"rubble_max",&DestructionTuning::rubbleMax},{"rubble_spread",&DestructionTuning::rubbleSpread},
        {"drag_coefficient",&DestructionTuning::dragCoefficient},{"flight_seconds",&DestructionTuning::flightSeconds},
        {"stop_speed",&DestructionTuning::stopSpeed},{"hit_suppression",&DestructionTuning::hitSuppression},
        {"observe_every",&DestructionTuning::observeEvery}};
    return params;
}
bool SetDestructionParam(DestructionTuning& table,const std::string& name,float value){
    for(const auto& p:DestructionParams())if(name==p.name){table.*(p.member)=value;return true;}
    return false;
}
bool SameDestructionTuning(const DestructionTuning& a,const DestructionTuning& b){
    for(const auto& p:DestructionParams())if(a.*(p.member)!=b.*(p.member))return false;
    return true;
}
const char* BuildMaterialName(BuildMaterial material){
    const char* names[]={"stone","brick","timber","glass"};return names[int(material)];
}

namespace {
constexpr float Pi=3.14159265f, Gravity=9.81f, AirDensity=1.2f;
// Counter-based draws: SplitMix64 of (seed, explosion, item, salt), uniform in [0, 1).
enum Salt : uint32_t { SaltChunkMass=1, SaltChunkSpeed, SaltChunkAzimuth, SaltChunkElevation, SaltChunkU, SaltChunkV,
    SaltShardSpeed, SaltShardAzimuth, SaltShardElevation, SaltShardU, SaltShardV, SaltFall, SaltCrush, SaltCrushDamage,
    SaltSeverity, SaltWounded, SaltHeap };
float Draw(uint32_t seed,uint32_t explosion,uint32_t item,uint32_t salt){
    uint64_t x=(uint64_t(seed)<<32)^(uint64_t(explosion)*0x9e3779b97f4a7c15ull)^(uint64_t(item)*0xbf58476d1ce4e5b9ull)^(uint64_t(salt)*0x94d049bb133111ebull);
    x+=0x9e3779b97f4a7c15ull;x=(x^(x>>30))*0xbf58476d1ce4e5b9ull;x=(x^(x>>27))*0x94d049bb133111ebull;x^=x>>31;
    return float(x>>40)/16777216.f;
}
float DotOf(Vec3 a,Vec3 b){return a.x*b.x+a.y*b.y+a.z*b.z;}
Vec3 Unit(Vec3 a){const float n=Length(a);return n>1e-6f?a*(1/n):Vec3{0,0,1};}
float Top(const Obstacle& o){return o.center.z+ObstacleHeight(o);}
bool AlongX(const Obstacle& o){return o.half.x>=o.half.y;}
float Thin(const Obstacle& o){return std::min(o.half.x,o.half.y);}
float Long(const Obstacle& o){return std::max(o.half.x,o.half.y);}
// The distance from p to an obstacle's box (0 inside).
float BoxDistance(const Obstacle& o,Vec3 p){
    const float dx=std::max(0.f,std::abs(p.x-o.center.x)-o.half.x),dy=std::max(0.f,std::abs(p.y-o.center.y)-o.half.y);
    const float dz=std::max(0.f,std::max(o.center.z-p.z,p.z-Top(o)));
    return std::sqrt(dx*dx+dy*dy+dz*dz);
}
// An obstacle as a DestructionEvent box (centre at mid-height).
void EventBox(const Obstacle& o,Vec3& center,Vec3& half){const float h=ObstacleHeight(o);center={o.center.x,o.center.y,o.center.z+h*.5f};half={o.half.x,o.half.y,h*.5f};}
struct MaterialProps { float density=2000, strength=1e5f, modulus=2e9f, compressive=2e6f, breach=.35f; bool masonry=true; };
MaterialProps Props(const DestructionTuning& k,BuildMaterial m){
    MaterialProps p;
    if(m==BuildMaterial::Stone){p.density=k.stoneDensity;p.strength=k.stoneTensile*1e6f;p.modulus=k.stoneModulus*1e9f;p.compressive=k.stoneCompressive*1e6f;p.breach=k.breachStone;}
    else if(m==BuildMaterial::Brick){p.density=k.brickDensity;p.strength=k.brickTensile*1e6f;p.modulus=k.brickModulus*1e9f;p.compressive=k.brickCompressive*1e6f;p.breach=k.breachBrick;}
    else if(m==BuildMaterial::Timber){p.density=k.timberDensity;p.strength=k.timberRupture*1e6f;p.modulus=k.timberModulus*1e9f;p.compressive=0;p.breach=k.breachTimber;p.masonry=false;}
    else{p.density=k.glassDensity;p.masonry=false;}
    return p;
}
int StoreyOf(float z){return std::max(0,int(std::floor((z+.3f)/UpperFloor)));}
bool InsideFootprint(const StructureBuilding& b,Vec3 p,float margin){return std::abs(p.x-b.center.x)<=b.half.x+margin&&std::abs(p.y-b.center.y)<=b.half.y+margin;}
}

// ---- The response ---------------------------------------------------------------------------------------------------
float BreachRadius(float charge,float factor,float placement){
    const float pounds=std::max(0.f,charge)*2.20462f;
    return std::cbrt(pounds/std::max(1e-6f,factor*placement))*.3048f;
}
// The single-degree-of-freedom strip (UFC 3-340-02 chapter 3; Biggs 1964): a uniformly loaded one-way strip of unit width,
// equivalent mass K_LM m with K_LM 0.78 (simply supported, elastic) or 0.65 (cantilever, elastic) and 0.66 once it has
// yielded; stiffness 384 E I / (5 L^4) (simply supported) or 8 E I / L^4 (cantilever), I = t^3 / 12; resistance at yield
// 8 M / L^2 or 2 M / L^2. Masonry: M = (f_t + sigma) t^2 / 6 with sigma the axial precompression (the load above and its own
// weight above the critical section: mid-height or base); once cracked the strip rocks under that axial force N (rigid
// three-hinge rocking, r = 8 N (t - x) / L^2 simply supported; N (t - x) / L^2 about a cantilever's toe) or, when confined,
// arches (arching x 0.72 f_m (t/L)^2 (1 - x/t)), the larger; both reach zero at x = t, where it rocks over. Timber:
// elastic-perfectly plastic at M = MOR t^2 / 6. Integrated (semi-implicit Euler) from rest over the load to the first peak.
StripResponse RespondStrip(const StripProperties& s,const std::vector<StripCell>& cells,const DestructionTuning& k){
    StripResponse r;
    double weights=0;float loadEnd=0;
    for(const auto& c:cells){weights+=c.weight;if(c.pressure>0)loadEnd=std::max(loadEnd,c.duration*1e-3f);}
    if(!(weights>0)||!(loadEnd>0)||!(s.span>0)||!(s.thickness>0))return r;
    const float L=s.span,t=s.thickness,m=s.density*t,I=t*t*t/12;
    const bool cantilever=s.support==Span::Cantilever;
    const float K=(cantilever?8.f:76.8f)*s.modulus*I/(L*L*L*L);
    const float factor=cantilever?2.f:8.f,elastic=cantilever?.65f:.78f,plastic=.66f,arm=cantilever?L:L*.5f;
    float yield=0,ultimate=0,rock=0,arch=0;
    if(s.masonry){
        const float own=s.support==Span::Horizontal?0.f:s.density*Gravity*t*L*(cantilever?1.f:.5f);
        const float axial=s.support==Span::Horizontal?0.f:s.axialTop+own;
        const float crack=factor*(s.strength+axial/t)*t*t/6/(L*L);
        yield=crack/K;
        rock=s.support==Span::Horizontal?0.f:(cantilever?1.f:8.f)*axial/(L*L);
        arch=s.support==Span::Horizontal?s.spandrel*.72f*s.compressive*(t/L)*(t/L):s.confined&&s.support==Span::Vertical?s.arching*.72f*s.compressive*(t/L)*(t/L):0.f;
    }else{ultimate=factor*s.strength*t*t/6/(L*L);yield=ultimate/K;}
    auto resistance=[&](float x)->float{
        if(x<=yield||x<=0)return K*x;
        if(s.masonry){const float left=std::max(0.f,t-x);return std::min(K*x,std::max(rock*left,arch*left/t));}
        return std::min(K*x,ultimate);
    };
    auto load=[&](float time)->float{
        double sum=0;
        for(const auto& c:cells){const float d=c.duration*1e-3f;if(c.pressure>0&&time<d)sum+=double(c.weight)*double(c.pressure)*double(1-time/d);}
        return float(sum/weights*1000);   // kPa to Pa
    };
    const float period=2*Pi*std::sqrt(elastic*m/std::max(K,1e-6f));
    float dt=std::max(1e-6f,std::min(loadEnd/40,period/200));
    float x=0,v=0,time=0,peak=0,fastest=0;
    for(int step=0;step<400000&&time<2.f;++step){
        const float mass=(x<=yield?elastic:plastic)*m;
        v+=(load(time)-resistance(x))/mass*dt;x+=v*dt;time+=dt;
        peak=std::max(peak,x);fastest=std::max(fastest,v);
        if(s.masonry&&x>=t)break;                          // rocked over
        if(time>loadEnd){if(v<=0)break;dt=std::max(dt,std::min(period/200,5e-4f));}
    }
    r.peak=peak;r.velocity=fastest;r.yield=yield;r.ductility=yield>0?peak/yield:(peak>1e-5f?1e9f:0.f);
    r.rotation=std::atan(peak/arm)*180/Pi;
    if(s.masonry){
        if(peak>=t*.999f||r.rotation>=k.masonryBlowout)r.state=3;
        else if(r.rotation>=k.masonryHeavy)r.state=2;
        else if(peak>yield&&peak>1e-5f)r.state=1;
    }else{
        if(r.ductility>=k.timberBlowout)r.state=3;
        else if(r.ductility>=k.timberBreach)r.state=2;
        else if(r.ductility>=k.timberCrack)r.state=1;
    }
    return r;
}
StripProperties PanelStrip(const DestructionRuntime& d,const Panel& panel,const Obstacle& box){
    StripProperties s;const auto p=Props(d.k,panel.material);
    s.density=p.density;s.modulus=p.modulus;s.compressive=p.compressive;s.masonry=p.masonry;s.arching=d.k.arching;s.spandrel=d.k.spandrelArching;
    s.strength=panel.cracked?(p.masonry?0.f:p.strength*.5f):p.strength;
    s.thickness=panel.kind==PanelKind::Shed?d.k.timberBoard:2*Thin(box);
    const float height=ObstacleHeight(box);
    // A lintel and a sill (the masonry under a window, bonded into the piers either side) span horizontally between the
    // piers and arch against them; a garden wall stands free as a cantilever from its foot.
    if(panel.kind==PanelKind::Lintel||panel.kind==PanelKind::Sill){s.support=Span::Horizontal;s.span=2*Long(box);}
    else if(panel.kind==PanelKind::GardenWall){s.support=Span::Cantilever;s.span=height;}
    else{s.support=Span::Vertical;s.span=height;}
    if(panel.kind==PanelKind::Wall&&panel.building>=0){
        const auto& b=d.buildings[size_t(panel.building)];
        for(int q=panel.storey+1;q<b.storeys&&q<int(b.levels.size());++q)s.axialTop+=p.density*Gravity*s.thickness*(b.levels[size_t(q)].top-b.levels[size_t(q)].base);
        s.confined=panel.storey+1<b.storeys;
    }
    return s;
}

// ---- The structure --------------------------------------------------------------------------------------------------
namespace {
// Which of the runtime's buildings owns a building obstacle: an authored house by its obstacle range, an imported
// footprint by containing the obstacle's centre (0.35 m of slack for the wall thickness).
int OwnerOf(const DestructionRuntime& d,const Map& map,size_t index,const Obstacle& o){
    if(!o.building)return -1;
    for(size_t i=0;i<d.buildings.size();++i){const auto& b=d.buildings[i];const auto& record=map.buildings[b.index];
        if(b.authored?(index>=record.firstObstacle&&index<record.firstObstacle+record.obstacleCount):InsideFootprint(b,o.center,.35f))return int(i);}
    return -1;
}
}
void QueueExplosion(DestructionRuntime& d,const Explosion& explosion){
    // Kept in time order; equal times keep their queueing order.
    auto at=std::upper_bound(d.queue.begin()+std::ptrdiff_t(d.next),d.queue.end(),explosion.time,[](float t,const Explosion& e){return t<e.time;});
    d.queue.insert(at,explosion);
}
void StartDestruction(DestructionRuntime& d,const Config& c,const Map& map){
    d.k=c.destructionTable;d.seed=c.seed;d.incremental=!c.destructionFullRebuild;
    d.masonry=c.battlefield&&c.battlefield->kind=="village"?BuildMaterial::Stone:BuildMaterial::Brick;
    d.nextId=map.nextGeometryId;
    std::unordered_map<uint64_t,size_t> where;where.reserve(map.obstacles.size());
    for(size_t i=0;i<map.obstacles.size();++i)where[map.obstacles[i].id]=i;
    auto byId=[&](uint64_t id)->const Obstacle*{const auto it=where.find(id);return it==where.end()?nullptr:&map.obstacles[it->second];};
    for(size_t i=0;i<map.buildings.size();++i){const auto& record=map.buildings[i];
        StructureBuilding b;b.index=i;b.authored=record.authoredStairs;b.center=record.center;b.half=record.half;
        b.storeys=record.authoredStairs?2:std::max(1,record.floors);d.buildings.push_back(b);}
    // Panels: every structural obstacle box.
    for(size_t index=0;index<map.obstacles.size();++index){const auto& o=map.obstacles[index];
        if(o.concealment||(o.flags&3u))continue;               // hedges and crater rims are not structures
        const float height=ObstacleHeight(o),thin=Thin(o),length=Long(o);
        Panel p;p.obstacle=o.id;
        const int owner=OwnerOf(d,map,index,o);
        if(owner>=0){
            if(thin>.35f||length<.1f)continue;                  // massive (a tower) or a sliver
            const int storey=StoreyOf(o.center.z);const float relative=o.center.z-float(storey)*UpperFloor;
            if(!o.blocksMovement&&relative<.1f)continue;       // a stair tread
            if(height<=.3f)continue;                           // a floor slab
            p.kind=relative>=1.5f?PanelKind::Lintel:height<=1.35f?PanelKind::Sill:PanelKind::Wall;
            p.material=d.masonry;p.building=owner;p.storey=storey;
        }else if(!o.building&&o.blocksMovement&&o.center.z>-.05f){
            if(height>=1.9f&&height<=2.7f&&thin>=.8f&&length<=2.f){p.kind=PanelKind::Shed;p.material=BuildMaterial::Timber;}
            else if(thin<=.35f&&length>=.5f&&height>=.8f&&height<=2.2f){p.kind=PanelKind::GardenWall;p.material=d.masonry;}
            else continue;
        }else continue;
        d.panelOf[o.id]=d.panels.size();d.panels.push_back(p);
    }
    // Each building's storeys: the walls' base and top, and the length of full-height wall that carries what is above.
    for(size_t bi=0;bi<d.buildings.size();++bi){auto& b=d.buildings[bi];
        b.levels.assign(size_t(b.storeys),StoreyWalls{});std::vector<bool> seen(size_t(b.storeys),false);
        for(const auto& p:d.panels)if(p.building==int(bi)&&p.kind==PanelKind::Wall&&p.storey<b.storeys){
            const Obstacle* it=byId(p.obstacle);if(!it)continue;
            auto& level=b.levels[size_t(p.storey)];
            if(!seen[size_t(p.storey)]){level.base=it->center.z;level.top=Top(*it);seen[size_t(p.storey)]=true;}
            level.base=std::min(level.base,it->center.z);level.top=std::max(level.top,Top(*it));
        }
        for(int q=0;q<b.storeys;++q)if(!seen[size_t(q)]){b.levels[size_t(q)].base=float(q)*UpperFloor;b.levels[size_t(q)].top=float(q)*UpperFloor+3.f;}
        for(const auto& p:d.panels)if(p.building==int(bi)&&p.kind==PanelKind::Wall&&p.storey<b.storeys){
            const Obstacle* it=byId(p.obstacle);if(!it)continue;
            const auto& level=b.levels[size_t(p.storey)];
            if(it->center.z<=level.base+.1f&&Top(*it)>=level.base+.85f*(level.top-level.base))b.levels[size_t(p.storey)].supportLength+=2*Long(*it);
        }
    }
    // Window panes: a sill with a lintel over it (same centre and size) leaves an opening; its glass fills it. A sill with
    // nothing over it is a ruined wall's gap and has no glass.
    std::vector<std::vector<const Obstacle*>> lintels(d.buildings.size());
    for(const auto& lintel:d.panels)if(lintel.kind==PanelKind::Lintel&&lintel.building>=0){const Obstacle* l=byId(lintel.obstacle);if(l)lintels[size_t(lintel.building)].push_back(l);}
    for(const auto& sill:d.panels){if(sill.kind!=PanelKind::Sill||sill.building<0)continue;
        const Obstacle* s=byId(sill.obstacle);if(!s)continue;
        for(const Obstacle* l:lintels[size_t(sill.building)]){
            if(std::abs(l->center.x-s->center.x)>.05f||std::abs(l->center.y-s->center.y)>.05f||std::abs(Long(*l)-Long(*s))>.05f||l->center.z<=Top(*s)+.2f||l->center.z>Top(*s)+2.5f)continue;
            Pane pane;pane.id=PaneIdBase+d.panes.size()+1;pane.building=sill.building;pane.storey=sill.storey;
            const float bottom=Top(*s),top=l->center.z;const bool alongX=AlongX(*s);
            pane.center={s->center.x,s->center.y,(bottom+top)*.5f};
            pane.half={alongX?s->half.x:d.k.glassThickness*.5f,alongX?d.k.glassThickness*.5f:s->half.y,(top-bottom)*.5f};
            d.panes.push_back(pane);break;
        }
    }
    for(const auto& e:c.testCharges)QueueExplosion(d,e);
}

// ---- One explosion --------------------------------------------------------------------------------------------------
namespace {
// A face: the plane point at its base centre, the unit direction along it, its outward normal (toward the burst), and
// its size.
struct Face { Vec3 origin{}, along{}, normal{}; float length=0, height=0; };
// Where a panel's hole is: along [a0, a1] (from the panel's centre along its length), z [z0, z1] (absolute).
struct Hole { bool any=false; float a0=0, a1=0, z0=0, z1=0; void Add(float b0,float b1,float c0,float c1){if(!any){a0=b0;a1=b1;z0=c0;z1=c1;any=true;return;}a0=std::min(a0,b0);a1=std::max(a1,b1);z0=std::min(z0,c0);z1=std::max(z1,c1);} };
struct Outcome {
    int state=0;            // 0 intact, 1 cracked, 2 breached, 3 destroyed (the geometry changes for 2 and 3, sheds only at 3)
    bool fallen=false;      // its section (or all of it) fell because the wall under it went
    bool collapsed=false;   // taken by a storey's collapse
    Hole hole;              // the breached (or fallen) part, while state is 2
    Vec3 normal{};          // the loaded face's normal (toward the burst)
    float speed=0;          // m/s: mean speed of its debris
};
// The loads on a face's cells (row-major: height rows of `columns`), each nothing where a solid stands between the burst
// and the cell (solid geometry only: a hedge does not shield).
struct FaceLoad { int columns=1, rows=1; std::vector<StripCell> cells; };
FaceLoad LoadFace(const Map& truth,const DestructionTuning& k,const Face& face,Vec3 burst,float charge,bool room){
    FaceLoad f;f.columns=std::max(1,int(std::lround(face.length/k.cellSize)));f.rows=std::max(1,int(std::lround(face.height/k.cellSize)));
    f.cells.resize(size_t(f.columns*f.rows));
    for(int j=0;j<f.rows;++j)for(int i=0;i<f.columns;++i){
        const float u=-face.length*.5f+(float(i)+.5f)*face.length/float(f.columns),z=(float(j)+.5f)*face.height/float(f.rows);
        const Vec3 point=face.origin+face.along*u+Vec3{0,0,z};
        auto& cell=f.cells[size_t(j*f.columns+i)];
        if(IndexedContact(truth,burst,point+face.normal*.02f,true,-1,true)>=0)continue;
        const SurfaceLoad load=BlastOnSurface(charge,burst,point,face.normal,room?k.roomPressure:1.f,room?k.roomDuration:1.f);
        if(load.cosine>0){cell.pressure=load.pressure;cell.duration=load.duration;}
    }
    return f;
}
// The burst's room: inside this building's footprint on the panel's storey.
bool InRoom(const StructureBuilding& b,int storey,Vec3 burst){return InsideFootprint(b,burst,0)&&StoreyOf(burst.z)==storey;}
// A burst inside a solid is moved out of it, across its thin side, 2 cm off the nearer face (a test charge placed in a wall).
Vec3 FreeBurst(const Map& truth,Vec3 p){
    for(const auto& o:truth.obstacles){
        if(o.concealment||std::abs(p.x-o.center.x)>=o.half.x||std::abs(p.y-o.center.y)>=o.half.y||p.z<=o.center.z||p.z>=Top(o))continue;
        if(AlongX(o))p.y=o.center.y+(p.y>=o.center.y?1.f:-1.f)*(o.half.y+.02f);else p.x=o.center.x+(p.x>=o.center.x?1.f:-1.f)*(o.half.x+.02f);
    }
    return p;
}
// The pieces of a wall box around a hole (up to four: either side at full height, below and above the hole), slivers
// thinner than 0.15 m left out; they keep the wall's flags, and a low piece standing on the wall's base is low cover.
std::vector<Obstacle> SplitAround(const Obstacle& o,const Hole& h){
    std::vector<Obstacle> pieces;const bool alongX=AlongX(o);const float half=Long(o),base=o.center.z,top=Top(o);
    auto piece=[&](float a0,float a1,float z0,float z1){
        if(a1-a0<.15f||z1-z0<.15f)return;
        Obstacle p=o;p.id=0;const float mid=(a0+a1)*.5f;
        p.center={alongX?o.center.x+mid:o.center.x,alongX?o.center.y:o.center.y+mid,z0};
        p.half={alongX?(a1-a0)*.5f:o.half.x,alongX?o.half.y:(a1-a0)*.5f,0};p.height=z1-z0;
        if(z0<=base+.01f&&z1-z0<=1.3f)p.halfCover=true;
        pieces.push_back(p);
    };
    piece(-half,h.a0,base,top);piece(h.a1,half,base,top);piece(h.a0,h.a1,base,h.z0);piece(h.a0,h.a1,h.z1,top);
    return pieces;
}
// Rubble: a low heap of crossable, bullet-stopping stuff (half cover, not blocking movement).
Obstacle Heap(Vec3 center,float halfX,float halfY,float height){
    Obstacle o;o.center=center;o.half={std::max(.1f,halfX),std::max(.1f,halfY),0};o.building=false;o.halfCover=true;o.height=height;o.blocksMovement=false;return o;
}
}
void Explode(DestructionRuntime& d,Map& map,const Explosion& explosion,Frame* frame,std::vector<DestructionEvent>& events,std::vector<Event>* log,const DestructionHooks& hooks){
    const auto& k=d.k;const int number=++d.explosions;++d.totals.explosions;
    const float charge=std::max(1e-6f,explosion.tnt),reach=k.reach*std::cbrt(charge);
    const float now=frame?frame->time:explosion.time;
    const Vec3 burst=FreeBurst(map,explosion.position);
    const uint32_t tag=uint32_t(number);
    if(log){std::ostringstream text;text<<std::fixed<<std::setprecision(2)<<"explosion "<<number<<": "<<charge<<" kg TNT at "<<burst.x<<", "<<burst.y<<", "<<burst.z;
        log->push_back({now,EventKind::Decision,-1,-1,text.str()});}
    std::unordered_map<uint64_t,size_t> where;where.reserve(map.obstacles.size());
    for(size_t i=0;i<map.obstacles.size();++i)where[map.obstacles[i].id]=i;
    auto obstacle=[&](uint64_t id)->const Obstacle*{const auto it=where.find(id);return it==where.end()?nullptr:&map.obstacles[it->second];};
    std::vector<DestructionEvent> rubbleEvents;
    // Glass: a pane shatters when the load on it reaches glassBreak (its room's factor on it; nothing if shielded).
    for(size_t i=0;i<d.panes.size();++i){auto& pane=d.panes[i];if(!pane.intact)continue;
        Obstacle box;box.center={pane.center.x,pane.center.y,pane.center.z-pane.half.z};box.half=pane.half;box.height=2*pane.half.z;
        if(BoxDistance(box,burst)>reach)continue;
        const bool alongX=pane.half.x>=pane.half.y;
        const Vec3 normal=alongX?Vec3{0,burst.y>=pane.center.y?1.f:-1.f,0}:Vec3{burst.x>=pane.center.x?1.f:-1.f,0,0};
        if(IndexedContact(map,burst,pane.center+normal*.05f,true,-1,true)>=0)continue;
        const bool room=pane.building>=0&&InRoom(d.buildings[size_t(pane.building)],pane.storey,burst);
        const SurfaceLoad load=BlastOnSurface(charge,burst,pane.center,normal,room?k.roomPressure:1.f,room?k.roomDuration:1.f);
        if(load.pressure<k.glassBreak)continue;
        pane.intact=false;++d.totals.panes;
        const float mass=8*pane.half.x*pane.half.y*pane.half.z*k.glassDensity;
        const float speed=std::min(k.maxDebrisSpeed,load.impulse/std::max(1e-6f,k.glassDensity*k.glassThickness));
        const Vec3 away=normal*-1.f;
        DestructionEvent e;e.time=now;e.kind=DestructionKind::GlassShattered;e.obstacle=pane.id;e.center=pane.center;e.half=pane.half;e.velocity=away*speed;e.material=int(BuildMaterial::Glass);e.mass=mass;events.push_back(e);
        const int shards=std::max(0,int(k.maxShards));
        for(int n=0;n<shards;++n){const uint32_t item=uint32_t(i)*64u+uint32_t(n);
            const float azimuth=(2*Draw(d.seed,tag,item,SaltShardAzimuth)-1)*k.shardCone,elevation=(2*Draw(d.seed,tag,item,SaltShardElevation)-1)*k.shardCone*.5f+.1f;
            const Vec3 side=alongX?Vec3{1,0,0}:Vec3{0,1,0};
            const Vec3 direction=Unit(away*std::cos(azimuth)+side*std::sin(azimuth)+Vec3{0,0,std::sin(elevation)});
            DebrisFragment fr;fr.material=BuildMaterial::Glass;fr.mass=k.shardMass;fr.born=fr.time=now;fr.explosion=number;fr.index=int(item);
            fr.p=pane.center+(alongX?Vec3{(2*Draw(d.seed,tag,item,SaltShardU)-1)*pane.half.x,0,0}:Vec3{0,(2*Draw(d.seed,tag,item,SaltShardU)-1)*pane.half.y,0})+Vec3{0,0,(2*Draw(d.seed,tag,item,SaltShardV)-1)*pane.half.z}+away*.05f;
            fr.velocity=direction*(speed*(1+k.speedSpread*(2*Draw(d.seed,tag,item,SaltShardSpeed)-1)));
            const float area=1.2f*std::pow(fr.mass/k.glassDensity,2.f/3.f);fr.dragK=.5f*AirDensity*k.dragCoefficient*area/fr.mass;
            if(Length(fr.velocity)>=k.stopSpeed){d.fragments.push_back(fr);++d.totals.fragments;}
        }
    }
    // Panels: loads, strips, local breach.
    std::unordered_map<size_t,Outcome> outcomes;
    for(size_t pi=0;pi<d.panels.size();++pi){auto& panel=d.panels[pi];if(!panel.alive)continue;
        const Obstacle* box=obstacle(panel.obstacle);if(!box)continue;
        if(BoxDistance(*box,burst)>reach)continue;
        const auto props=Props(k,panel.material);const auto strip=PanelStrip(d,panel,*box);
        const bool room=panel.building>=0&&InRoom(d.buildings[size_t(panel.building)],panel.storey,burst);
        Outcome out;const float height=ObstacleHeight(*box),base=box->center.z,top=base+height;
        std::vector<float> speeds;
        if(panel.kind==PanelKind::Shed){
            // A timber shed: each board face toward the burst, as vertical strips; its worst face is the shed's state.
            for(int axis=0;axis<2;++axis)for(float sign:{-1.f,1.f}){
                const Vec3 normal=axis?Vec3{0,sign,0}:Vec3{sign,0,0};
                Face face;face.normal=normal;face.along=axis?Vec3{1,0,0}:Vec3{0,1,0};face.length=axis?2*box->half.x:2*box->half.y;face.height=height;
                face.origin={box->center.x+(axis?0.f:sign*box->half.x),box->center.y+(axis?sign*box->half.y:0.f),base};
                if(DotOf(burst-face.origin-Vec3{0,0,height*.5f},normal)<=0)continue;
                const auto load=LoadFace(map,k,face,burst,charge,false);
                // The boards span between the rails: each column is timberSpans strips, each over its own rows.
                const int spans=std::clamp(int(std::lround(k.timberSpans)),1,load.rows);
                StripProperties board=strip;board.span=height/float(spans);
                for(int i=0;i<load.columns;++i)for(int q=0;q<spans;++q){std::vector<StripCell> cells;
                    const int j0=q*load.rows/spans,j1=(q+1)*load.rows/spans;
                    for(int j=j0;j<j1;++j){auto c=load.cells[size_t(j*load.columns+i)];c.weight=std::sin(Pi*(float(j-j0)+.5f)/float(j1-j0));cells.push_back(c);}
                    const auto response=RespondStrip(board,cells,k);
                    if(response.state>=2)speeds.push_back(response.velocity);
                    if(response.state>out.state){out.state=response.state;out.normal=normal;}
                }
                // The breaching formula on the board wall, for a charge at it.
                const float standoff=DotOf(burst-face.origin,normal),radius=BreachRadius(charge,props.breach,k.breachPlacement);
                if(standoff>=0&&radius>=standoff+k.timberBoard&&std::abs(DotOf(burst-face.origin,face.along))<=face.length*.5f+radius&&out.state<2){out.state=2;out.normal=normal;}
            }
            if(out.state>=3){out.state=3;out.hole.Add(-Long(*box),Long(*box),base,top);}
        }else{
            const bool alongX=AlongX(*box);const float thick=2*Thin(*box),length=2*Long(*box);
            const float sign=(alongX?burst.y-box->center.y:burst.x-box->center.x)>=0?1.f:-1.f;
            Face face;face.normal=alongX?Vec3{0,sign,0}:Vec3{sign,0,0};face.along=alongX?Vec3{1,0,0}:Vec3{0,1,0};face.length=length;face.height=height;
            face.origin={box->center.x+(alongX?0.f:sign*thick*.5f),box->center.y+(alongX?sign*thick*.5f:0.f),base};
            out.normal=face.normal;
            const auto load=LoadFace(map,k,face,burst,charge,room);
            const float columnWidth=length/float(load.columns);
            bool cracked=false;int failed=0;Hole sdof;
            if(strip.support==Span::Horizontal){
                for(int j=0;j<load.rows;++j){std::vector<StripCell> cells;
                    for(int i=0;i<load.columns;++i){auto c=load.cells[size_t(j*load.columns+i)];c.weight=std::sin(Pi*(float(i)+.5f)/float(load.columns));cells.push_back(c);}
                    const auto response=RespondStrip(strip,cells,k);cracked=cracked||response.state>=1;
                    if(response.state>=2){++failed;speeds.push_back(response.velocity);}
                }
                if(failed)sdof.Add(-length*.5f,length*.5f,base,top);   // a lintel or a sill that fails goes whole
            }else{
                for(int i=0;i<load.columns;++i){std::vector<StripCell> cells;
                    for(int j=0;j<load.rows;++j){auto c=load.cells[size_t(j*load.columns+i)];const float xi=(float(j)+.5f)/float(load.rows);
                        c.weight=strip.support==Span::Cantilever?xi*xi:std::sin(Pi*xi);cells.push_back(c);}
                    const auto response=RespondStrip(strip,cells,k);cracked=cracked||response.state>=1;
                    if(response.state<2)continue;
                    ++failed;speeds.push_back(response.velocity);
                    const float a0=-length*.5f+float(i)*columnWidth,a1=a0+columnWidth;
                    // Blown out: the whole strip. Breached: where it was pushed through (a spanning strip's middle half, a
                    // cantilever's upper 60%).
                    if(response.state>=3)sdof.Add(a0,a1,base,top);
                    else if(strip.support==Span::Cantilever)sdof.Add(a0,a1,base+.4f*height,top);
                    else sdof.Add(a0,a1,base+.25f*height,base+.75f*height);
                }
            }
            // Local breach (FM 5-250) by a charge at or near the face.
            const float standoff=DotOf(burst-face.origin,face.normal),radius=BreachRadius(charge,props.breach,k.breachPlacement);
            Hole local;
            if(standoff>=0&&radius>=standoff+thick){
                const float h=std::sqrt(std::max(0.f,radius*radius-standoff*standoff)),u=DotOf(burst-face.origin,face.along);
                const float a0=std::max(-length*.5f,u-h),a1=std::min(length*.5f,u+h),z0=std::max(base,burst.z-h),z1=std::min(top,burst.z+h);
                if(a1-a0>.05f&&z1-z0>.05f){local.Add(a0,a1,z0,z1);
                    const float impulse=KingeryBulmash(charge,std::max(.05f,standoff)).reflectedImpulse*(room?k.roomPressure*k.roomDuration:1.f);
                    speeds.push_back(std::min(k.maxDebrisSpeed,impulse/std::max(1e-6f,props.density*thick)));}
            }
            if(sdof.any)out.hole.Add(sdof.a0,sdof.a1,sdof.z0,sdof.z1);
            if(local.any)out.hole.Add(local.a0,local.a1,local.z0,local.z1);
            if(out.hole.any){
                out.state=(out.hole.a1-out.hole.a0>=.9f*length&&out.hole.z1-out.hole.z0>=.9f*height)?3:2;
                if(out.state==3)out.hole={true,-length*.5f,length*.5f,base,top};
            }else if(cracked)out.state=1;
        }
        if(!speeds.empty()){float sum=0;for(float s:speeds)sum+=s;out.speed=std::min(k.maxDebrisSpeed,sum/float(speeds.size()));}
        if(out.state>0)outcomes[pi]=out;
    }
    // Falling walls: a section gone to the ground (a blown-out panel, or a full-height hole wider than archSpan) takes the
    // wall directly above it (the next storey's panels over it on the same wall line) and the lintels it carried.
    struct Section { int building=-1; bool alongX=true; float line=0, a0=0, a1=0, base=0, top=0; };
    auto sectionOf=[&](const Obstacle& o,const Hole& h){Section s;s.alongX=AlongX(o);s.line=s.alongX?o.center.y:o.center.x;
        const float c=s.alongX?o.center.x:o.center.y;s.a0=c+h.a0;s.a1=c+h.a1;s.base=h.z0;s.top=h.z1;return s;};
    std::vector<Section> sections;
    for(const auto& entry:outcomes){const auto& panel=d.panels[entry.first];const auto& out=entry.second;
        if(panel.building<0||panel.kind==PanelKind::Shed||out.state<2)continue;
        const Obstacle* box=obstacle(panel.obstacle);if(!box)continue;
        const bool fullHeight=out.hole.z0<=box->center.z+.05f&&out.hole.z1>=Top(*box)-.05f;
        if(out.state==3||(fullHeight&&out.hole.a1-out.hole.a0>=k.archSpan)){auto s=sectionOf(*box,out.hole);s.building=panel.building;sections.push_back(s);}
    }
    for(size_t si=0;si<sections.size()&&si<4096;++si){const Section section=sections[si];
        for(size_t pi=0;pi<d.panels.size();++pi){const auto& panel=d.panels[pi];
            if(!panel.alive||panel.building!=section.building||panel.kind==PanelKind::Shed)continue;
            auto found=outcomes.find(pi);if(found!=outcomes.end()&&found->second.state==3)continue;
            const Obstacle* box=obstacle(panel.obstacle);if(!box||AlongX(*box)!=section.alongX)continue;
            const float line=section.alongX?box->center.y:box->center.x;if(std::abs(line-section.line)>.3f)continue;
            const float c=section.alongX?box->center.x:box->center.y,half=Long(*box),p0=c-half,p1=c+half;
            Hole fall;
            if(panel.kind==PanelKind::Lintel){
                if(section.a1>=p0-.06f&&section.a0<=p1+.06f&&section.base<=box->center.z+.05f&&section.top>=box->center.z+.05f)fall.Add(-half,half,box->center.z,Top(*box));
            }else if(box->center.z>=section.top-.35f&&box->center.z<=section.top+.6f){
                const float o0=std::max(p0,section.a0),o1=std::min(p1,section.a1);
                if(o1-o0>=std::min(k.archSpan,2*half-.01f)&&o1>o0)fall.Add(o0-c,o1-c,box->center.z,Top(*box));
            }
            if(!fall.any)continue;
            auto& out=outcomes[pi];const int before=out.state;const Hole was=out.hole;
            if(out.state<2){out.state=2;out.hole=fall;out.normal=AlongX(*box)?Vec3{0,1,0}:Vec3{1,0,0};}else out.hole.Add(fall.a0,fall.a1,fall.z0,fall.z1);
            out.fallen=true;
            if(out.hole.a1-out.hole.a0>=.9f*2*half&&out.hole.z1-out.hole.z0>=.9f*ObstacleHeight(*box)){out.state=3;out.hole={true,-half,half,box->center.z,Top(*box)};}
            if(out.state!=before||out.hole.a0!=was.a0||out.hole.a1!=was.a1){auto s=sectionOf(*box,out.state==3?out.hole:fall);s.building=panel.building;s.base=box->center.z;s.top=Top(*box);sections.push_back(s);}
        }
    }
    // Storeys: a floor (or a single storey's roof) falls, with everything above it, when the full-height walls under it
    // have lost more than collapseShare of their length.
    struct Collapse { size_t building=0; int storey=0; };
    std::vector<Collapse> collapses;
    for(size_t bi=0;bi<d.buildings.size();++bi){auto& b=d.buildings[bi];
        bool touched=false;for(const auto& entry:outcomes)if(d.panels[entry.first].building==int(bi)&&entry.second.state>=2)touched=true;
        if(!touched||b.roofDown)continue;
        for(int s=0;s<b.storeys;++s){const auto& level=b.levels[size_t(s)];if(level.supportLength<=0)continue;
            float standing=0;
            for(size_t pi=0;pi<d.panels.size();++pi){const auto& panel=d.panels[pi];
                if(!panel.alive||panel.building!=int(bi)||panel.kind!=PanelKind::Wall||panel.storey!=s)continue;
                const Obstacle* box=obstacle(panel.obstacle);if(!box)continue;
                if(box->center.z>level.base+.1f||Top(*box)<level.base+.85f*(level.top-level.base))continue;
                float length=2*Long(*box);const auto found=outcomes.find(pi);
                if(found!=outcomes.end()){const auto& out=found->second;
                    if(out.state==3)length=0;
                    else if(out.state==2&&out.hole.z0<=box->center.z+.05f&&out.hole.z1>=Top(*box)-.05f)length-=out.hole.a1-out.hole.a0;}
                standing+=std::max(0.f,length);
            }
            if(standing<(1-k.collapseShare)*level.supportLength){collapses.push_back({bi,s});break;}
        }
    }
    // Everything a collapse takes: the obstacles of the building at and above the fallen floor (and the stair up to it).
    std::vector<std::vector<uint64_t>> taken(collapses.size());
    for(size_t ci=0;ci<collapses.size();++ci){const auto& b=d.buildings[collapses[ci].building];const auto& level=b.levels[size_t(collapses[ci].storey)];
        const bool floorFalls=collapses[ci].storey+1<b.storeys;
        for(const auto& o:map.obstacles){if(!o.building||!InsideFootprint(b,o.center,.35f))continue;
            const bool above=o.center.z>=level.top-.3f,stair=floorFalls&&collapses[ci].storey==0&&!o.blocksMovement&&o.center.z<.1f;
            if(above||stair)taken[ci].push_back(o.id);}
        for(size_t pi=0;pi<d.panels.size();++pi){const auto& panel=d.panels[pi];
            if(panel.building==int(collapses[ci].building)&&std::find(taken[ci].begin(),taken[ci].end(),panel.obstacle)!=taken[ci].end()){auto& out=outcomes[pi];out.collapsed=true;}}
    }
    // The explosion's change unit (the true map's batch), the events.
    ChangeUnit unit;unit.explosion=number;GeometryBatch& batch=unit.batch;
    const int firstUnit=int(d.units.size());
    std::vector<uint64_t> gone;   // obstacles this explosion removes (for the unit's needs and samples)
    std::vector<std::pair<size_t,Outcome>> ordered(outcomes.begin(),outcomes.end());
    std::sort(ordered.begin(),ordered.end(),[](const std::pair<size_t,Outcome>& a,const std::pair<size_t,Outcome>& b){return a.first<b.first;});
    std::vector<uint64_t> removedIds;
    auto rubbleFor=[&](const Obstacle& box,const Hole& hole,Vec3 away,float volume,BuildMaterial material,const StructureBuilding* b,std::vector<GeometryOp>& ops){
        const float mass=volume*Props(k,material).density*(1-k.debrisShare);if(mass<=0)return;
        const bool alongX=AlongX(box);const float width=std::max(.5f,hole.a1-hole.a0),across=2*Thin(box)+2*k.rubbleSpread;
        const float height=std::clamp(volume*(1-k.debrisShare)*k.rubbleBulking/(width*across),k.rubbleMin,k.rubbleMax);
        // It lands on the ground: a building's ground floor, a free wall's own foot.
        const float c=(hole.a0+hole.a1)*.5f;const float ground=b&&!b->levels.empty()?b->levels[0].base:box.center.z;
        Vec3 center{alongX?box.center.x+c:box.center.x,alongX?box.center.y:box.center.y+c,ground};
        center=center+Vec3{away.x,away.y,0}*(k.rubbleSpread*.25f);
        Obstacle heap=Heap(center,alongX?width*.5f:across*.5f,alongX?across*.5f:width*.5f,height);heap.id=d.nextId++;
        GeometryOp op;op.kind=GeometryOp::Kind::Add;op.id=heap.id;op.obstacle=heap;ops.push_back(op);
        DestructionEvent e;e.time=now;e.kind=DestructionKind::Rubble;e.obstacle=heap.id;EventBox(heap,e.center,e.half);e.material=int(material);e.mass=mass;rubbleEvents.push_back(e);++d.totals.rubble;
    };
    for(const auto& entry:ordered){const size_t pi=entry.first;const Outcome& out=entry.second;auto& panel=d.panels[pi];
        const Obstacle* found=obstacle(panel.obstacle);if(!found)continue;const Obstacle box=*found;
        const auto props=Props(k,panel.material);const float thick=panel.kind==PanelKind::Shed?k.timberBoard:2*Thin(box);
        const Vec3 away=out.normal*-1.f;
        if(out.collapsed){panel.alive=false;continue;}   // its storey falls: the collapse below takes it
        if(out.state==1){if(!panel.cracked){panel.cracked=true;++d.totals.cracked;
                DestructionEvent e;e.time=now;e.kind=DestructionKind::Cracked;e.obstacle=box.id;EventBox(box,e.center,e.half);e.material=int(panel.material);events.push_back(e);}
            continue;}
        if(panel.kind==PanelKind::Shed&&out.state==2){   // broken boards: the solid box stays (the model has no hollow shed)
            panel.cracked=true;++d.totals.breached;
            DestructionEvent e;e.time=now;e.kind=DestructionKind::Breached;e.obstacle=box.id;EventBox(box,e.center,e.half);e.velocity=away*out.speed;e.material=int(panel.material);
            e.mass=k.debrisShare*props.density*k.timberBoard*2*(box.half.x+box.half.y)*ObstacleHeight(box)*.25f;events.push_back(e);
            continue;}
        if(out.state<2)continue;
        // Geometry: the panel goes; its pieces (a breach) or nothing (blown out) take its place, rubble at its foot.
        unit.boxes.push_back(box);gone.push_back(box.id);
        GeometryOp remove;remove.kind=GeometryOp::Kind::Remove;remove.id=box.id;batch.ops.push_back(remove);
        const float holeVolume=panel.kind==PanelKind::Shed?2*(box.half.x+box.half.y)*2*ObstacleHeight(box)*k.timberBoard:(out.hole.a1-out.hole.a0)*(out.hole.z1-out.hole.z0)*thick;
        const float thrown=out.fallen?0.f:k.debrisShare*holeVolume*props.density;
        std::vector<Obstacle> pieces;if(out.state==2)pieces=SplitAround(box,out.hole);
        for(auto& piece:pieces){piece.id=d.nextId++;GeometryOp add;add.kind=GeometryOp::Kind::Add;add.id=piece.id;add.obstacle=piece;batch.ops.push_back(add);}
        const StructureBuilding* building=panel.building>=0?&d.buildings[size_t(panel.building)]:nullptr;
        rubbleFor(box,out.hole,away,holeVolume,panel.material,building,batch.ops);
        removedIds.push_back(box.id);
        // New panels for the pieces (cracked: a breached wall keeps no bond).
        panel.alive=false;
        for(const auto& piece:pieces){Panel p=panel;p.obstacle=piece.id;p.alive=true;p.cracked=true;
            if(p.kind==PanelKind::Wall&&(piece.center.z>box.center.z+.05f||piece.height<.85f*ObstacleHeight(box)))p.kind=piece.height<=1.35f&&piece.center.z<=box.center.z+.01f?PanelKind::Sill:PanelKind::Lintel;
            d.panelOf[piece.id]=d.panels.size();d.panels.push_back(p);}
        // Events: breached (the hole) or destroyed (the panel), or collapsed for a section that fell.
        DestructionEvent e;e.time=now;e.obstacle=box.id;e.material=int(panel.material);e.mass=out.fallen?holeVolume*props.density:thrown;
        const bool alongX=AlongX(box);const float c=(out.hole.a0+out.hole.a1)*.5f;
        e.center={alongX?box.center.x+c:box.center.x,alongX?box.center.y:box.center.y+c,(out.hole.z0+out.hole.z1)*.5f};
        e.half={alongX?(out.hole.a1-out.hole.a0)*.5f:Thin(box),alongX?Thin(box):(out.hole.a1-out.hole.a0)*.5f,(out.hole.z1-out.hole.z0)*.5f};
        if(out.fallen){e.kind=DestructionKind::Collapsed;e.velocity={0,0,-std::sqrt(Gravity*std::max(.1f,out.hole.z1-out.hole.z0))};++d.totals.fallen;}
        else{e.kind=out.state==3?DestructionKind::Destroyed:DestructionKind::Breached;e.velocity=away*out.speed;if(out.state==3)++d.totals.destroyed;else ++d.totals.breached;}
        if(out.state==3)EventBox(box,e.center,e.half);
        events.push_back(e);
        // Debris: chunks thrown from the far face of the hole.
        if(thrown>0&&out.speed>=k.stopSpeed){
            // A sample of the thrown mass: chunks of about chunkMass (x 0.5-1.5), at most maxChunks; the rest is small stuff and dust.
            const int count=std::clamp(int(std::lround(thrown/std::max(1e-3f,k.chunkMass))),1,std::max(1,int(k.maxChunks)));
            const Vec3 along=alongX?Vec3{1,0,0}:Vec3{0,1,0};
            for(int n=0;n<count;++n){const uint32_t item=uint32_t(pi)*64u+uint32_t(n);
                DebrisFragment fr;fr.material=panel.material;fr.mass=std::min(thrown/float(count),k.chunkMass*(.5f+Draw(d.seed,tag,item,SaltChunkMass)));fr.born=fr.time=now;fr.explosion=number;fr.index=int(item);
                const float a=out.hole.a0+(out.hole.a1-out.hole.a0)*Draw(d.seed,tag,item,SaltChunkU),z=out.hole.z0+(out.hole.z1-out.hole.z0)*Draw(d.seed,tag,item,SaltChunkV);
                fr.p=Vec3{box.center.x,box.center.y,z}+along*a+away*(thick*.5f+.05f);
                const Vec3 radial=Unit(fr.p-burst);
                const float azimuth=(2*Draw(d.seed,tag,item,SaltChunkAzimuth)-1)*k.chunkCone,elevation=(2*Draw(d.seed,tag,item,SaltChunkElevation)-1)*k.chunkCone*.5f+.1f;
                const Vec3 heading=Unit(away+radial*.5f);
                const Vec3 direction=Unit(heading*std::cos(azimuth)+along*std::sin(azimuth)+Vec3{0,0,std::sin(elevation)});
                fr.velocity=direction*(out.speed*(1+k.speedSpread*(2*Draw(d.seed,tag,item,SaltChunkSpeed)-1)));
                const float area=1.2f*std::pow(fr.mass/props.density,2.f/3.f);fr.dragK=.5f*AirDensity*k.dragCoefficient*area/std::max(1e-6f,fr.mass);
                if(Length(fr.velocity)>=k.stopSpeed){d.fragments.push_back(fr);++d.totals.fragments;}
            }
        }
    }
    // Collapses: one unit each (the obstacles, the upper floors' surfaces and stair, the building record, rubble inside).
    struct Falling { int soldier=-1; float drop=0; bool crushed=false; };
    std::vector<Falling> falling;
    for(size_t ci=0;ci<collapses.size();++ci){auto& b=d.buildings[collapses[ci].building];const int s=collapses[ci].storey;const auto level=b.levels[size_t(s)];
        const bool floorFalls=s+1<b.storeys;const auto& record=map.buildings[b.index];
        float roofline=level.top;for(const auto& lv:b.levels)roofline=std::max(roofline,lv.top);
        // What a man must see of it: the whole building, ground to roofline (the men inside are under it).
        {Obstacle footprint;footprint.center={b.center.x,b.center.y,b.levels[0].base};footprint.half={b.half.x,b.half.y,0};footprint.height=std::max(1.f,roofline-b.levels[0].base);unit.boxes.push_back(footprint);}
        float volume=0;
        for(uint64_t id:taken[ci]){const Obstacle* o=obstacle(id);if(!o)continue;
            GeometryOp remove;remove.kind=GeometryOp::Kind::Remove;remove.id=id;batch.ops.push_back(remove);removedIds.push_back(id);gone.push_back(id);
            const float v=4*o->half.x*o->half.y*ObstacleHeight(*o);volume+=v;
            DestructionEvent e;e.time=now;e.kind=DestructionKind::Collapsed;e.obstacle=id;EventBox(*o,e.center,e.half);e.velocity={0,0,-std::sqrt(Gravity*std::max(.1f,o->center.z-level.base))};
            e.material=int(d.masonry);e.mass=v*Props(k,d.masonry).density;events.push_back(e);
            const auto p=d.panelOf.find(id);if(p!=d.panelOf.end())d.panels[p->second].alive=false;}
        if(!record.authoredStairs)for(const auto& surface:map.surfaces)if(surface.building==record.id&&surface.level>s){
            GeometryOp op;op.kind=GeometryOp::Kind::RemoveSurface;op.id=surface.id;batch.ops.push_back(op);}
        if(floorFalls){GeometryOp op;op.kind=GeometryOp::Kind::Floors;op.building=b.index;op.floors=s+1;batch.ops.push_back(op);}
        // The level itself (obstacle 0): the footprint over the fallen height, for the renderer's floors and roof.
        DestructionEvent level0;level0.time=now;level0.kind=DestructionKind::Collapsed;level0.center={b.center.x,b.center.y,(level.top+roofline)*.5f+.5f};
        level0.half={b.half.x,b.half.y,(roofline-level.top)*.5f+.5f};level0.velocity={0,0,-std::sqrt(Gravity*std::max(.5f,level.top-level.base))};level0.material=int(d.masonry);
        volume+=4*b.half.x*b.half.y*.15f;   // the roof (timber, slate, tile): assumed 0.15 m spread over the footprint
        level0.mass=volume*Props(k,d.masonry).density;events.push_back(level0);++d.totals.collapses;
        // Rubble heaps inside the walls, about 4 m apart, their heights varied by draw.
        const float ix=std::max(.3f,b.half.x-.5f),iy=std::max(.3f,b.half.y-.5f);
        const int nx=std::max(1,int(std::ceil(2*ix/4))),ny=std::max(1,int(std::ceil(2*iy/4)));
        const float mean=volume*k.rubbleBulking/(4*ix*iy);
        for(int y=0;y<ny;++y)for(int x=0;x<nx;++x){const uint32_t item=uint32_t(ci)*1024u+uint32_t(y*nx+x);
            const float h=std::clamp(mean*(.7f+.6f*Draw(d.seed,tag,item,SaltHeap)),std::max(.4f,k.rubbleMin),std::max(1.5f,k.rubbleMax));
            Obstacle heap=Heap({b.center.x-ix+(float(x)+.5f)*2*ix/float(nx),b.center.y-iy+(float(y)+.5f)*2*iy/float(ny),b.levels[0].base},ix/float(nx),iy/float(ny),h);
            heap.id=d.nextId++;GeometryOp add;add.kind=GeometryOp::Kind::Add;add.id=heap.id;add.obstacle=heap;batch.ops.push_back(add);
            DestructionEvent e;e.time=now;e.kind=DestructionKind::Rubble;e.obstacle=heap.id;EventBox(heap,e.center,e.half);e.material=int(d.masonry);e.mass=4*heap.half.x*heap.half.y*h/k.rubbleBulking*Props(k,d.masonry).density;
            rubbleEvents.push_back(e);++d.totals.rubble;}
        // Glass of the fallen storeys breaks with them.
        for(size_t i=0;i<d.panes.size();++i){auto& pane=d.panes[i];
            if(!pane.intact||pane.building!=int(collapses[ci].building)||pane.storey<=s)continue;
            pane.intact=false;++d.totals.panes;DestructionEvent e;e.time=now;e.kind=DestructionKind::GlassShattered;e.obstacle=pane.id;e.center=pane.center;e.half=pane.half;
            e.velocity={0,0,-3};e.material=int(BuildMaterial::Glass);e.mass=8*pane.half.x*pane.half.y*pane.half.z*k.glassDensity;events.push_back(e);}
        b.storeys=s+1;b.roofDown=true;   // the floor falls with the roof over it: nothing is left to fall
        // The men: on the fallen floor (or its stair) they fall to the floor below; under it they may be crushed.
        if(frame)for(const auto& man:frame->soldiers){if(!man.Active()||!InsideFootprint(b,man.position,-.05f))continue;
            Falling fall;fall.soldier=man.id;
            if(floorFalls&&man.position.z>=level.base+.3f)fall.drop=man.position.z-level.base;
            else fall.crushed=Draw(d.seed,tag,uint32_t(man.id),SaltCrush)<k.crushChance;
            if(fall.drop>0||fall.crushed)falling.push_back(fall);}
    }
    // The panes whose sill or lintel went with this explosion's changes break too.
    for(size_t i=0;i<d.panes.size();++i){auto& pane=d.panes[i];if(!pane.intact)continue;
        bool frameGone=false;for(uint64_t id:removedIds){const Obstacle* o=obstacle(id);if(o&&std::abs(o->center.x-pane.center.x)<.05f+o->half.x&&std::abs(o->center.y-pane.center.y)<.05f+o->half.y&&
            o->center.z<=pane.center.z+pane.half.z+.3f&&Top(*o)>=pane.center.z-pane.half.z-.3f&&std::abs(Long(*o)-std::max(pane.half.x,pane.half.y))<.05f){frameGone=true;break;}}
        if(!frameGone)continue;
        pane.intact=false;++d.totals.panes;DestructionEvent e;e.time=now;e.kind=DestructionKind::GlassShattered;e.obstacle=pane.id;e.center=pane.center;e.half=pane.half;
        e.velocity={0,0,-2};e.material=int(BuildMaterial::Glass);e.mass=8*pane.half.x*pane.half.y*pane.half.z*k.glassDensity;events.push_back(e);
    }
    events.insert(events.end(),rubbleEvents.begin(),rubbleEvents.end());
    // Apply: one revision for the whole explosion, one unit for men to learn of it.
    if(!batch.ops.empty()){
        for(uint64_t id:gone){const auto it=d.createdBy.find(id);if(it!=d.createdBy.end())unit.needs.push_back(it->second);}
        std::sort(unit.needs.begin(),unit.needs.end());unit.needs.erase(std::unique(unit.needs.begin(),unit.needs.end()),unit.needs.end());
        // What a man must see: the corners of the pieces that went (0.1 m outside them, at most 1.4 m up), at most 16.
        std::vector<Vec3> samples;
        for(const auto& o:unit.boxes)for(float side:{-1.f,1.f})for(float edge:{-1.f,1.f})
            samples.push_back(o.center+Vec3{side*(o.half.x+.1f),edge*(o.half.y+.1f),std::min(1.4f,ObstacleHeight(o))});
        const size_t keep=std::min<size_t>(16,samples.size());
        for(size_t n=0;n<keep;++n)unit.samples.push_back(samples[n*samples.size()/keep]);
        for(const auto& op:batch.ops)if(op.kind==GeometryOp::Kind::Add)d.createdBy[op.id]=firstUnit;
        if(hooks.beforeChange)hooks.beforeChange(firstUnit);
        const auto started=std::chrono::steady_clock::now();
        ApplyGeometryBatch(map,batch,0,d.incremental);++d.totals.revisions;
        d.totals.geometrySeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
        d.nextId=std::max(d.nextId,map.nextGeometryId);
        d.units.push_back(std::move(unit));
    }
    d.totals.units=int(d.units.size());
    // The men who fell or were crushed.
    if(frame)for(const auto& fall:falling){auto& man=frame->soldiers[size_t(fall.soldier)];const uint32_t item=uint32_t(man.id);
        float damage=0;
        if(fall.drop>0){
            damage=k.fallDamage*fall.drop/UpperFloor*(.5f+Draw(d.seed,tag,item,SaltFall));++d.totals.falls;
            Vec3 landing{man.position.x,man.position.y,man.position.z-fall.drop};
            if(!Walkable(map,landing)){bool placed=false;
                for(float radius=.5f;radius<=3.f&&!placed;radius+=.5f)for(int a=0;a<12&&!placed;++a){const float angle=float(a)*Pi/6;
                    const Vec3 at=landing+Vec3{std::cos(angle)*radius,std::sin(angle)*radius,0};if(Walkable(map,at)){landing=at;placed=true;}}}
            man.position=landing;if(hooks.displaced)hooks.displaced(man.id);
        }
        if(fall.crushed){damage+=k.crushDamage*(.5f+Draw(d.seed,tag,item,SaltCrushDamage));++d.totals.crushed;}
        if(damage<=0)continue;
        man.health=std::max(0.f,man.health-damage);
        if(log)log->push_back({now,EventKind::Hit,-1,man.id,std::string(Name(man.id))+(fall.crushed?" crushed by a falling floor":" fell with a floor")});
        if(!man.Active()){
            man.action=Draw(d.seed,tag,item,SaltWounded)<.55f?Action::Wounded:Action::Killed;man.reason=Reason::Down;man.aim=0;man.aimTarget=-1;man.movingFire=false;man.sprinting=false;
            for(auto& contact:man.contacts)contact.visible=false;
            ++d.totals.casualties;if(hooks.downed)hooks.downed(man.id);
            if(log)log->push_back({now,EventKind::Casualty,man.id,-1,std::string(Name(man.id))+(man.action==Action::Killed?" killed in action":" incapacitated")});
        }
    }
}

// ---- The battle -----------------------------------------------------------------------------------------------------
namespace {
// Heavy caches are dropped from a stored version (a replay reads its obstacles, and the exporter its cover catalogue).
Map Stored(const Map& map){Map m=map;m.tacticalVisibility.reset();m.routeGraph.reset();m.spatial.reset();m.segments.reset();m.navigation.reset();m.rasterStatic.reset();return m;}
// A knowledge state's line memo and planner ray table rebuilt at 1/16 on their next queries (the same answers, far less memory).
void Downgrade(Map& m){if(m.cacheScale)return;m.cacheScale=4;m.segments.reset();m.tacticalVisibility.reset();}
void RefreshPointers(DestructionRuntime& d,const Map& truth){for(int i=0;i<UnitCount;++i)d.pointers[size_t(i)]=d.view[size_t(i)]?d.view[size_t(i)]->map.get():&truth;}
// Before the true map changes, every man who knows all of it keeps what he knew: one shared copy of the map as it is now.
// Only the true map and this newest snapshot keep full-size tables: every older state is downgraded.
void KeepViews(DestructionRuntime& d,const Map& truth,int unitsBefore){
    d.viewsActive=true;std::shared_ptr<KnowledgeState> snapshot;
    for(const auto& weak:d.states)if(auto state=weak.lock())Downgrade(*state->map);
    for(int i=0;i<UnitCount;++i){if(d.view[size_t(i)])continue;
        if(!snapshot){snapshot=std::make_shared<KnowledgeState>();snapshot->map=std::make_shared<Map>(truth);
            d.states.push_back(snapshot);++d.totals.viewStates;for(int u=0;u<unitsBefore;++u)snapshot->units.push_back(u);}
        d.view[size_t(i)]=snapshot;d.known[size_t(i)]=snapshot->units;}
}
}
bool StepExplosions(DestructionRuntime& d,Frame& f,Record& r,float time,const DestructionHooks& hooks){
    bool changed=false;
    while(d.next<d.queue.size()&&d.queue[d.next].time<=time){
        const Explosion explosion=d.queue[d.next++];
        const auto started=std::chrono::steady_clock::now();
        const double geometryBefore=d.totals.geometrySeconds;
        DestructionHooks local=hooks;
        local.beforeChange=[&](int unitsBefore){
            if(r.geometryVersions.empty())r.geometryVersions.push_back({0,Stored(r.map),"initial"});
            const auto kept=std::chrono::steady_clock::now();KeepViews(d,r.map,unitsBefore);
            d.totals.viewSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-kept).count();
        };
        const uint64_t revision=r.map.revision;
        Explode(d,r.map,explosion,&f,r.destruction,&r.events,local);
        if(r.map.revision!=revision){
            changed=true;RefreshPointers(d,r.map);
            for(int i=0;i<UnitCount;++i)d.receipt[size_t(i)].resize(d.units.size(),-1.f);
            r.geometryVersions.push_back({f.time,Stored(r.map),"explosion "+std::to_string(d.explosions)});
            r.events.push_back({f.time,EventKind::Decision,-1,-1,"geometry revision "+std::to_string(r.map.revision)});
            if(hooks.diagnostics&&hooks.diagnostics->options.enabled){TraceEntry e;e.id=hooks.diagnostics->nextId++;e.time=f.time;e.geometry=r.map.revision;e.kind="geometry_changed";e.reason=r.geometryVersions.back().reason;hooks.diagnostics->entries.push_back(e);}
        }
        d.totals.physicsSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count()-(d.totals.geometrySeconds-geometryBefore);
    }
    r.destructionTotals=d.totals;
    return changed;
}
const std::array<const Map*,UnitCount>* DestructionViews(const DestructionRuntime& d){return d.viewsActive?&d.pointers:nullptr;}
void ObserveChanges(DestructionRuntime& d,Frame& f,const Map& truth,float time,int tick,Diagnostics* diagnostics){
    if(!d.viewsActive)return;
    const auto started=std::chrono::steady_clock::now();
    const int stride=std::max(1,int(std::lround(d.k.observeEvery/TickSeconds)));
    bool changed=false;
    for(auto& s:f.soldiers){const size_t id=size_t(s.id);if(!s.Active()||!d.view[id])continue;
        auto& receipts=d.receipt[id];receipts.resize(d.units.size(),-1.f);
        const bool look=(tick+s.id)%stride==0;
        std::vector<int> due;
        for(size_t u=0;u<d.units.size();++u){float& receipt=receipts[u];if(receipt==-2.f)continue;
            if(receipt<0){if(!look)continue;
                const auto& unit=d.units[u];const float range=SightRange(s);
                bool seen=false,inRange=false;
                for(const auto& box:unit.boxes){const float distance=BoxDistance(box,s.position);if(distance<3){seen=true;break;}inRange=inRange||distance<range;}
                if(!seen&&inRange){const Vec3 eye=s.position+Vec3{0,0,1.5f};
                    for(const auto& sample:unit.samples){if(InVisualField(s,sample,range)&&ClearLine3D(truth,eye,sample)){seen=true;break;}}}
                if(seen)receipt=time+ReactionSeconds(s,ReactionKind::Report);
            }
            if(receipt>=0&&time>=receipt)due.push_back(int(u));
        }
        if(due.empty())continue;
        // What he now knows: the units due and every earlier unit they build on.
        std::vector<char> adding(d.units.size(),0);std::vector<int> stack=due;
        while(!stack.empty()){const int u=stack.back();stack.pop_back();if(adding[size_t(u)]||receipts[size_t(u)]==-2.f)continue;adding[size_t(u)]=1;
            for(int need:d.units[size_t(u)].needs)stack.push_back(need);}
        std::vector<int> fresh;for(size_t u=0;u<adding.size();++u)if(adding[u]){fresh.push_back(int(u));receipts[u]=-2.f;}
        std::vector<int> knownNow;std::merge(d.known[id].begin(),d.known[id].end(),fresh.begin(),fresh.end(),std::back_inserter(knownNow));
        if(knownNow.size()==d.units.size())d.view[id]=nullptr;   // he knows everything: the true map
        else{
            std::shared_ptr<KnowledgeState> state;
            for(const auto& weak:d.states)if(auto live=weak.lock())if(live->units==knownNow){state=live;break;}
            if(!state){
                state=std::make_shared<KnowledgeState>();state->units=knownNow;state->map=std::make_shared<Map>(*d.view[id]->map);
                state->map->cacheScale=4;   // a few men query it: its memo and ray tables at 1/16 (answers unchanged)
                GeometryBatch batch;for(int u:fresh)for(const auto& op:d.units[size_t(u)].batch.ops)batch.ops.push_back(op);
                ApplyGeometryBatch(*state->map,batch,(uint64_t(1)<<40)+(++d.viewSerial),d.incremental);
                d.states.erase(std::remove_if(d.states.begin(),d.states.end(),[](const std::weak_ptr<KnowledgeState>& w){return w.expired();}),d.states.end());
                d.states.push_back(state);++d.totals.viewStates;
            }
            d.view[id]=state;
        }
        d.known[id]=std::move(knownNow);++s.knowledgeRevision;changed=true;++d.totals.viewUpdates;
        if(diagnostics&&diagnostics->options.enabled){TraceEntry e;e.id=diagnostics->nextId++;e.time=time;e.soldier=s.id;e.squad=s.squad;e.geometry=truth.revision;e.kind="geometry_observed";e.reason="local geometry change recognized after observation delay";diagnostics->entries.push_back(e);}
    }
    if(changed){RefreshPointers(d,truth);
        // A state few men still hold (a snapshot of an older true map, most often) keeps its full-size tables no longer:
        // they are dropped and rebuilt at 1/16 on its next queries (the same answers, far less memory).
        int live=0;
        for(const auto& weak:d.states)if(auto state=weak.lock()){++live;
            if(state.use_count()<=1+4)Downgrade(*state->map);}
        d.totals.liveStates=std::max(d.totals.liveStates,live);}
    d.totals.observeSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
}
// One fragment through one substep (and on from a body it passes); false once it has stopped. The bullets' flight: the
// first contact with the map (solid geometry), the ground or a man swept from where he stood.
void StepDebris(DestructionRuntime& d,Frame& f,Record& r,int tick,const std::array<Vec3,UnitCount>& before,const DestructionHooks& hooks){
    if(d.fragments.empty())return;
    const auto started=std::chrono::steady_clock::now();
    constexpr int Substeps=10;constexpr float Step=TickSeconds/Substeps;
    const auto& k=d.k;const Map& map=r.map;
    std::vector<char> alive(d.fragments.size(),1);
    for(int sub=0;sub<Substeps;++sub)for(size_t n=0;n<d.fragments.size();++n){if(!alive[n])continue;auto& fr=d.fragments[n];
        const float until=std::min(f.time,float(tick-1)*TickSeconds+float(sub+1)*Step);
        float segBegin=float(sub)/Substeps;
        for(;;){
            const float start=fr.time,dt=std::max(0.f,until-start);if(dt<=0)break;
            const Vec3 next=BallisticPosition(fr.p,fr.velocity,dt);
            float first=1;int hit=-1;bool stopped=false;
            const float contact=MapContact(map,fr.p,next);if(contact>=0&&contact<=first){first=contact;stopped=true;}
            if(next.z<=map.groundBase){const float t=(fr.p.z-map.groundBase)/std::max(1e-6f,fr.p.z-next.z);if(t<=first){first=std::max(0.f,t);stopped=true;}}
            const float fraction=float(sub+1)/Substeps;
            for(const auto& s:f.soldiers){if(!s.Active()||((fr.struck>>s.id)&1ull))continue;
                const Vec3 b0=before[size_t(s.id)],delta=s.position-b0,from=b0+delta*segBegin,to=b0+delta*fraction;
                const float t=SegmentSoldier(fr.p,next,from,to,BodyHeight(s.stance));if(t>=0&&t<first){first=t;hit=s.id;}}
            const Vec3 end=fr.p+(next-fr.p)*first;const float endTime=std::min(f.time,start+dt*first);
            if(hit>=0){auto& v=f.soldiers[size_t(hit)];
                Vec3 velocity=fr.velocity;velocity.z-=Gravity*dt*first;velocity=velocity*std::exp(-fr.dragK*Distance(fr.p,end));
                const float energy=.5f*fr.mass*DotOf(velocity,velocity);
                const uint32_t item=uint32_t(fr.index)*uint32_t(UnitCount)+uint32_t(hit);
                const float damage=HitDamage(energy,HitSeverity(Draw(d.seed,uint32_t(fr.explosion),item,SaltSeverity)));
                v.health=std::max(0.f,v.health-damage);
                v.suppression=std::min(1.f,v.suppression+k.hitSuppression/StatScale(v.stats.Get(Stat::Composure)));
                fr.struck|=uint64_t(1)<<hit;++d.totals.fragmentHits;
                r.events.push_back({endTime,EventKind::Hit,-1,hit,std::string(fr.material==BuildMaterial::Glass?"Flying glass":"Flying debris")+" hit "+Name(hit)});
                if(!v.Active()){
                    v.action=Draw(d.seed,uint32_t(fr.explosion),item,SaltWounded)<.55f?Action::Wounded:Action::Killed;v.reason=Reason::Down;v.aim=0;v.aimTarget=-1;v.movingFire=false;v.sprinting=false;
                    for(auto& contactOf:v.contacts)contactOf.visible=false;
                    ++d.totals.casualties;if(hooks.downed)hooks.downed(hit);
                    r.events.push_back({endTime,EventKind::Casualty,hit,-1,std::string(Name(hit))+(v.action==Action::Killed?" killed in action":" incapacitated")});
                }
                alive[n]=0;break;   // a chunk or a shard stops in the body it strikes
            }
            if(stopped){alive[n]=0;break;}
            const float travelled=Distance(fr.p,next);fr.p=next;fr.velocity=fr.velocity*std::exp(-fr.dragK*travelled);fr.velocity.z-=Gravity*dt;fr.time=until;
            if(Length(fr.velocity)<k.stopSpeed||fr.time-fr.born>=k.flightSeconds||std::abs(fr.p.x)>map.halfWidth+3||std::abs(fr.p.y)>map.halfHeight+3)alive[n]=0;
            break;
        }
    }
    size_t kept=0;for(size_t n=0;n<d.fragments.size();++n)if(alive[n])d.fragments[kept++]=d.fragments[n];
    d.fragments.resize(kept);
    d.totals.debrisSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-started).count();
    r.destructionTotals=d.totals;
}
}
