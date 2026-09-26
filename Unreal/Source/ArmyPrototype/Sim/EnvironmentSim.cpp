#include "BattleSim.h"
#include "TacticalRouteSim.h"
#include "SquadRaster.h"
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>
#include <chrono>
#include <unordered_map>
namespace army {
void PrepareGeometry(Map& m){
    for(auto& o:m.obstacles)if(!o.id)o.id=m.nextGeometryId++;else m.nextGeometryId=std::max(m.nextGeometryId,o.id+1);
    for(auto& w:m.windows){if(!w.id)w.id=(m.nextGeometryId++)*16+15;
        if(!w.source){float best=1e9f;for(const auto& o:m.obstacles)if(o.building&&std::abs(o.height-1.05f)<.01f&&std::abs(o.center.z-w.shelter.z)<.01f){float d=Distance(o.center,w.shelter);if(d<best){best=d;w.source=o.id;}}}}
    // Plan 029 derived map flags (false/empty on every ARMYMAP 1 and authored map).
    m.hasConcealment=std::any_of(m.obstacles.begin(),m.obstacles.end(),[](const Obstacle& o){return o.concealment;});
    m.stairSurfaces.clear();for(size_t i=0;i<m.surfaces.size();++i)if(m.surfaces[i].kind==2)m.stairSurfaces.push_back(i);
    m.prepared=true;
}
void InvalidateGeometry(Map& m){++m.revision;m.tacticalVisibility.reset();m.routeGraph.reset();m.spatial.reset();m.segments.reset();m.navigation.reset();m.coverCatalog.reset();m.coverRevision=0;m.rasterStatic.reset();PrepareGeometry(m);}
bool RemoveObstacle(Map& m,uint64_t id){
    auto it=std::find_if(m.obstacles.begin(),m.obstacles.end(),[&](const Obstacle&o){return o.id==id;});if(it==m.obstacles.end())return false;
    size_t at=size_t(it-m.obstacles.begin());m.obstacles.erase(it);
    for(auto& b:m.buildings){if(at<b.firstObstacle)--b.firstObstacle;else if(at<b.firstObstacle+b.obstacleCount)--b.obstacleCount;}
    m.windows.erase(std::remove_if(m.windows.begin(),m.windows.end(),[&](const CoverPosition&w){return w.source==id;}),m.windows.end());
    InvalidateGeometry(m);return true;
}
bool ReplaceObstacle(Map& m,uint64_t id,Obstacle replacement){for(auto& o:m.obstacles)if(o.id==id){replacement.id=id;o=replacement;m.windows.erase(std::remove_if(m.windows.begin(),m.windows.end(),[&](const CoverPosition&w){return w.source==id;}),m.windows.end());InvalidateGeometry(m);return true;}return false;}
bool CoverExists(const Map& m,uint64_t id){if(!id)return false;for(const auto& c:CoverPositions(m))if(c.id==id)return true;return false;}
const Map& GeometryAt(const Record& r,float time){const Map* map=&r.map;for(const auto& version:r.geometryVersions){if(version.time>time)break;map=&version.map;}return *map;}

struct FloorRouteKey {
    std::array<float,6> p;
    bool operator==(const FloorRouteKey& other)const{return p==other.p;}
};
struct FloorRouteHash {size_t operator()(const FloorRouteKey& key)const{
    size_t h=0;for(float v:key.p)h^=std::hash<float>{}(v)+0x9e3779b9+(h<<6)+(h>>2);return h;
}};
// Exact per-revision memo of ordinary (untactical) floor paths. The result of an
// ordinary FindFloorPath is a pure function of the prepared geometry revision and
// the exact bits of both endpoints, so identical requests return the stored result.
struct FloorPathBits {
    uint32_t w[6];
    bool operator==(const FloorPathBits& other)const{return std::memcmp(w,other.w,sizeof w)==0;}
};
struct FloorPathBitsHash {size_t operator()(const FloorPathBits& key)const{
    uint64_t h=1469598103934665603ull;for(uint32_t v:key.w)h=(h^v)*1099511628211ull;h^=h>>32;return size_t(h*0x9e3779b97f4a7c15ull);
}};
// Per-node search state, kept together so one neighbourhood touches few cache lines.
// closed==searchId: expanded in this search at its current cost (reset whenever the cost falls).
struct FloorSearchNode {float cost;int parent;uint32_t visited,closed;};
struct NavigationCache {
    std::vector<int> flatComponents;
    std::vector<std::vector<size_t>> surfaceBins;
    std::unordered_map<int,std::vector<int>> endpointParents;
    std::unordered_map<FloorRouteKey,std::vector<Vec3>,FloorRouteHash> importedFloorRoutes;
    bool surfaceReady=false;
    std::vector<std::vector<Vec3>> surfacePaths;
    uint64_t key=0;
    std::unordered_map<int,std::vector<int8_t>> nodes,edges;
    std::vector<FloorSearchNode> search;uint32_t searchId=0;
    std::vector<uint64_t> openKeys;std::vector<std::pair<float,int>> openEntries;
    std::unordered_map<FloorPathBits,std::vector<Vec3>,FloorPathBitsHash> floorPaths;
    // Link endpoints (from,to of every surface link, in link order), built once per revision. For
    // ARMYMAP 2 also the storey each endpoint stands on: the building of a level>=1 surface under it
    // at its height, 0 for grade, lanes and ramps. surfaceDone marks the lazily computed table entries (v2).
    bool linkEndsReady=false;std::vector<Vec3> linkEnds;std::vector<uint64_t> linkEndStorey;
    std::vector<uint8_t> surfaceDone;
    // Plan 029 M-C, used only by a search with a vault class (index class-1): the long edges of each
    // grid node per floor height (18 slots a node: direction (dy+1)*3+dx+1, then two or three cells;
    // -1 unknown, else the VaultClass the leg needs, 0 none), and the class searches' own memos, so
    // the class-None caches above are exactly what they were.
    std::unordered_map<int,std::vector<int8_t>> vaultEdges[2];
    std::unordered_map<FloorPathBits,std::vector<Vec3>,FloorPathBitsHash> classFloorPaths[2];
    std::unordered_map<FloorRouteKey,std::vector<Vec3>,FloorRouteHash> classImportedFloorRoutes[2];
    std::unordered_map<int,std::vector<int>> classEndpointParents[2];
    // Plan 029 P-1, OnStairs only: an exact index of its candidates on the 8 m grid Supported uses. Cell
    // c holds stairItems[stairStart[c]..stairStart[c+1]): a stair surface index, or a building index with
    // the top bit set (authored stairs), for every one whose own test could hold for a point in that
    // cell. Built once per revision from stairSurfaces and the buildings (rebuilt if their counts differ).
    bool stairsReady=false;size_t stairCounts[3]={};std::vector<uint32_t> stairStart,stairItems;
};
static uint64_t GeometryKey(const Map& m) {
    uint64_t key=1469598103934665603ull;
    auto add=[&](float f){uint32_t v;std::memcpy(&v,&f,4);key=(key^v)*1099511628211ull;};
    add(m.halfWidth);add(m.halfHeight);add(m.groundBase);
    auto word=[&](uint64_t v){key=(key^(v&0xffffffffu))*1099511628211ull;key=(key^(v>>32))*1099511628211ull;};
    for(const auto& s:m.surfaces){add(s.center.x);add(s.center.y);add(s.center.z);add(s.half.x);add(s.half.y);add(s.slope.x);add(s.slope.y);
        if(s.kind||s.level||s.building||!s.replacesGrade){word(uint64_t(uint32_t(s.kind)));word(uint64_t(uint32_t(s.level)));word(s.building);word(s.replacesGrade);}}
    for(const auto& o:m.obstacles){add(o.center.x);add(o.center.y);add(o.center.z);add(o.half.x);add(o.half.y);add(ObstacleHeight(o));add(o.blocksMovement?1.f:0.f);add(o.halfCover?1.f:0.f);
        if(o.concealment||o.flags){word(o.concealment);word(o.flags);}}
    for(const auto& b:m.buildings){add(b.center.x);add(b.center.y);
        if(!b.authoredStairs||b.id||b.floors){add(b.half.x);add(b.half.y);word(b.authoredStairs);word(b.id);word(uint64_t(uint32_t(b.floors)));}}
    // Plan 029 map-format fields fold only when they differ from their defaults.
    if(m.formatVersion>=2||m.stackedSurfaces||m.importedBuildings){word(uint64_t(uint32_t(m.formatVersion)));word(m.stackedSurfaces);word(m.importedBuildings);}
    if(m.proneCover)word(0x2903u); // plan 029 M-A2: the battle's prone-cover flag changes the catalogue
    for(const auto& d:m.doorPassages){add(d.center.x);add(d.center.y);add(d.center.z);add(d.half.x);add(d.half.y);}
    return key;
}
static float Clamp(float x,float a,float b){return std::clamp(x,a,b);}
static Vec3 StairBottom(const Building& b){return b.center+Vec3{-3,-0.8f,0};}
static Vec3 StairTop(const Building& b){return b.center+Vec3{3,-0.8f,UpperFloor};}
static bool StairFootprint(const Building& b,Vec3 p){return std::abs(p.y-b.center.y+0.8f)<0.8f&&std::abs(p.x-b.center.x)<3.02f;}
static bool OnStairSurface(const GroundSurface& s,Vec3 p){return InsideSurface(s,p)&&std::abs(p.z-SurfaceHeight(s,p))<0.08f;}
static bool OnAuthoredStair(const Building& b,Vec3 p){return b.authoredStairs&&StairFootprint(b,p)&&std::abs(p.z-(p.x-b.center.x+3)*UpperFloor/6)<0.08f;}
bool OnStairs(const Map& m,Vec3 p){
    // Plan 029 P-1: OnStairs is an OR of pure per-surface and per-building tests, so testing only the
    // candidates the revision's grid index lists for p's cell gives the same answer. A candidate's cell
    // range is its test's own box padded by 0.05 m (the tests allow 0.001 m and float rounding), and the
    // clamped cell of a coordinate is monotone in it, so no candidate whose test could hold is left out.
    // The index lives in the revision's navigation cache and OnStairs never creates that cache (creating
    // it here moved its allocation and measurably slowed the navigation that follows): until Supported or
    // a path search has made it, and on unprepared maps and non-finite points, it is the full scan. With
    // no candidates at all the answer is false.
    if(m.stairSurfaces.empty()&&m.buildings.empty())return false;
    const float cx=(p.x+m.halfWidth)/8,cy=(p.y+m.halfHeight)/8;
    if(m.prepared&&std::isfinite(cx)&&std::isfinite(cy)&&m.navigation&&m.navigation->key==m.revision){
        auto& cache=*m.navigation;
        const int width=int(std::ceil(m.halfWidth*2/8))+1,height=int(std::ceil(m.halfHeight*2/8))+1;
        auto cellX=[&](float x){return int(std::clamp(std::floor((x+m.halfWidth)/8),0.f,float(width-1)));};
        auto cellY=[&](float y){return int(std::clamp(std::floor((y+m.halfHeight)/8),0.f,float(height-1)));};
        const size_t counts[3]={m.surfaces.size(),m.stairSurfaces.size(),m.buildings.size()};
        if(!cache.stairsReady||!std::equal(counts,counts+3,cache.stairCounts)){
            std::vector<std::vector<uint32_t>> bins(size_t(width)*size_t(height));
            auto add=[&](float x0,float x1,float y0,float y1,uint32_t item){
                for(int y=cellY(y0);y<=cellY(y1);++y)for(int x=cellX(x0);x<=cellX(x1);++x)bins[size_t(y)*size_t(width)+size_t(x)].push_back(item);};
            for(size_t i:m.stairSurfaces){const auto& s=m.surfaces[i];
                add(s.center.x-s.half.x-.05f,s.center.x+s.half.x+.05f,s.center.y-s.half.y-.05f,s.center.y+s.half.y+.05f,uint32_t(i));}
            for(size_t i=0;i<m.buildings.size();++i){const auto& b=m.buildings[i];if(!b.authoredStairs)continue;
                add(b.center.x-3.07f,b.center.x+3.07f,b.center.y-1.65f,b.center.y+.05f,uint32_t(i)|0x80000000u);}
            cache.stairStart.assign(bins.size()+1,0);cache.stairItems.clear();
            for(size_t c=0;c<bins.size();++c){cache.stairItems.insert(cache.stairItems.end(),bins[c].begin(),bins[c].end());cache.stairStart[c+1]=uint32_t(cache.stairItems.size());}
            std::copy(counts,counts+3,cache.stairCounts);cache.stairsReady=true;
        }
        const size_t cell=size_t(cellY(p.y))*size_t(width)+size_t(cellX(p.x));
        for(uint32_t k=cache.stairStart[cell],end=cache.stairStart[cell+1];k<end;++k){const uint32_t item=cache.stairItems[k];
            if(item&0x80000000u?OnAuthoredStair(m.buildings[item&0x7fffffffu],p):OnStairSurface(m.surfaces[item],p))return true;}
        return false;
    }
    // ARMYMAP 2 stair surfaces (empty on every ARMYMAP 1 and authored map).
    for(size_t i:m.stairSurfaces)if(OnStairSurface(m.surfaces[i],p))return true;
    for(const auto& b:m.buildings)if(OnAuthoredStair(b,p))return true;
    return false;
}
void AddBuilding(Map& m,Vec3 center) {
    Building b;b.center=center;b.firstObstacle=m.obstacles.size();m.buildings.push_back(b);
    auto box=[&](Vec3 p,Vec3 half,float height,bool movement=true){m.obstacles.push_back({center+p,half,true,false,height,movement});};
    // Openings are actual missing wall volumes. Lower sills protect crouched users.
    for(int floor=0;floor<2;++floor)for(int axis=0;axis<2;++axis)for(float side:{-1.f,1.f}) {
        float z=floor*UpperFloor,extent=axis?5.f:4.f;
        struct Opening {float mid,half;bool door;};
        std::vector<Opening> holes=axis?std::vector<Opening>{{-2.5f,0.9f,false},{2.5f,0.9f,false}}:
            std::vector<Opening>{{-2.6f,0.8f,false},{0,floor?0.8f:1.1f,floor==0},{2.6f,0.8f,false}};
        auto wall=[&](float a,float end,float base,float height){if(end-a<0.01f)return;
            Vec3 p=axis?Vec3{(a+end)*0.5f,side*4,base}:Vec3{side*5,(a+end)*0.5f,base};
            Vec3 half=axis?Vec3{(end-a)*0.5f,0.22f,0}:Vec3{0.22f,(end-a)*0.5f,0};box(p,half,height);};
        float last=-extent;
        for(const auto& hole:holes){
            float a=hole.mid-hole.half,end=hole.mid+hole.half;wall(last,a,z,3.2f);
            if(!hole.door)wall(a,end,z,1.05f);
            wall(a,end,z+2.35f,0.85f);last=end;
            if(!hole.door){Vec3 p=center+(axis?Vec3{hole.mid,side*3.15f,z}:Vec3{side*4.15f,hole.mid,z});m.windows.push_back({p,p,true,true});}
        }
        wall(last,extent,z,3.2f);
    }
    // Upper slab leaves a stairwell open; stair treads provide physical bullet collision.
    box({0,-2.7f,UpperFloor-0.2f},{4.78f,1.1f,0},0.2f,false);
    box({0,1.9f,UpperFloor-0.2f},{4.78f,1.9f,0},0.2f,false);
    box({-3.9f,-0.8f,UpperFloor-0.2f},{0.9f,0.8f,0},0.2f,false);
    box({3.9f,-0.8f,UpperFloor-0.2f},{0.9f,0.8f,0},0.2f,false);
    for(int i=0;i<16;++i){float x=-3+(i+0.5f)*6/16;float h=(i+1)*UpperFloor/16;
        box({x,-0.8f,0},{3.f/16,0.72f,0},h,false);}
    m.buildings.back().obstacleCount=m.obstacles.size()-b.firstObstacle;
}
Map MakeSkirmishMap() {
    Map m;
    // Fractured Works: mirrored opportunities, staggered approaches and no centre objective.
    for(Vec3 p:std::vector<Vec3>{{-38,-62},{-62,64}}){AddBuilding(m,p);AddBuilding(m,p*-1.f);}
    auto solidPair=[&](Vec3 p,Vec3 half,float height){m.obstacles.push_back({p,half,false,false,height});m.obstacles.push_back({p*-1.f,half,false,false,height});};
    // Opaque six-metre masses form short courts and doglegs rather than one wall.
    solidPair({-18,-8},{4,14},6);
    solidPair({-62,28},{8,14},6);
    solidPair({-52,38},{9,4},6);
    solidPair({-95,-44},{7,12},6);
    solidPair({-88,-34},{9,4},6);
    solidPair({-34,-87},{13,5},6);
    solidPair({-112,72},{4,12},6);
    solidPair({-20,40},{5,8},6);
    solidPair({-80,122},{10,5},6);
    solidPair({-22,116},{4,10},6);
    auto fits=[&](Vec3 p,Vec3 half){
        for(const auto& b:m.buildings)if(std::abs(p.x-b.center.x)<half.x+7&&std::abs(p.y-b.center.y)<half.y+6)return false;
        for(const auto& o:m.obstacles)if(!o.building&&std::abs(p.x-o.center.x)<half.x+o.half.x+2&&std::abs(p.y-o.center.y)<half.y+o.half.y+2)return false;
        return true;
    };
    auto coverPair=[&](Vec3 p,Vec3 half,bool low,float height=0){if(!fits(p,half)||!fits(p*-1.f,half))return;
        m.obstacles.push_back({p,half,false,low,height});m.obstacles.push_back({p*-1.f,half,false,low,height});};
    // Longer positions support deployed guns. Individual blocks are staggered
    // across each approach, with room for other soldiers and friendly fire lanes.
    for(float lane:{-120.f,-72.f,-24.f,24.f,72.f,120.f}) {
        coverPair({-128,lane},{0.6f,3.5f},true);
        coverPair({-58,lane-8},{0.6f,3.5f},true);
        for(float x:{-112.f,-78.f,-40.f,-8.f}) {
            coverPair({x,lane+5},{0.65f,0.95f},true,1.2f);
            coverPair({x+8,lane-5},{0.7f,0.9f},true,1.2f);
            coverPair({x-5,lane-13},{0.8f,0.85f},false,1.9f);
        }
    }
    // Cross-facing cover at junctions lets a squad turn to meet a flank.
    for(Vec3 p:std::vector<Vec3>{{-9,-5},{-9,28},{-38,5},{-48,-30},{-72,-8},{-76,90},{-20,-58},{-135,96}})coverPair(p,{0.65f,2.5f},true);
    for(Vec3 p:std::vector<Vec3>{{-34,51},{-74,-62},{-124,4},{-9,-99},{-48,0},{-8,-42}})coverPair(p,{2.4f,0.65f},false,2.2f);
    for(Vec3 p:std::vector<Vec3>{{-22,4},{-58,-10},{-88,8},{-44,86},{-18,-72}})coverPair(p,{1.0f,0.65f},true);
    PrepareGeometry(m);return m;
}
// The cover one obstacle offers, appended to `out` (CoverPositions' per-obstacle step; plan 033 re-derives the catalogue
// one obstacle at a time with it). Linked (imported) maps sample its physical faces with the soldiers' walkability and
// protection checks; authored maps take fixed spots around it.
static void LinkedObstacleCover(const Map& m,const Obstacle& o,std::vector<CoverPosition>& positions){
    if(!((o.blocksMovement||o.halfCover)&&!o.concealment))return;
    uint64_t slot=0;
    for(int axis=0;axis<2;++axis)for(float sign:{-1.f,1.f}){
        const float extent=axis?o.half.x:o.half.y,across=axis?o.half.y:o.half.x;
        const int count=std::max(1,int(std::ceil(extent*2/3.f)));
        Vec3 normal=axis?Vec3{0,sign,0}:Vec3{sign,0,0};
        for(int i=0;i<count;++i){
            const uint64_t id=2000000+o.id*2048+(slot++);
            const float along=-extent+(i+.5f)*extent*2/count;
            Vec3 p=o.center+normal*(across+.65f)+(axis?Vec3{along,0,0}:Vec3{0,along,0});
            if(!Walkable(m,p))continue;
            const Vec3 threat=p-normal*4;
            bool crouch=o.height<1.86f,prone=false;
            if(!ProtectedAt(m,p,threat,crouch?Stance::Crouched:Stance::Standing)){
                // Plan 029 M-A2 (Config::prone only, through the battle's map copy; ARMYMAP 2 maps only):
                // behind an obstacle too low to shelter a crouched man (a crater rim), prone cover if it
                // protects him lying down.
                if(crouch&&m.proneCover&&m.formatVersion>=2&&o.height<.9f&&ProtectedAt(m,p,threat,Stance::Prone))prone=true;
                else if(crouch||!ProtectedAt(m,p,threat,Stance::Crouched))continue;
                crouch=true;
            }
            Vec3 peek=p;
            if(!o.halfCover){
                const float corner=(along>=0?1.f:-1.f)*(extent+.65f);
                Vec3 candidate=o.center+normal*(across+.65f)+(axis?Vec3{corner,0,0}:Vec3{0,corner,0});
                if(Walkable(m,candidate)&&ClearLine(m,p,candidate,.48f))peek=candidate;
            }
            positions.push_back({p,peek,crouch,false,id,o.id,prone});
        }
    }
}
static void AuthoredObstacleCover(const Obstacle& o,std::vector<CoverPosition>& positions){
    if(!(!o.building&&!o.concealment&&(o.blocksMovement||(o.halfCover&&o.center.z<0))))return;
    if(o.halfCover)for(float side:{-1.f,1.f})for(float along:{-0.55f,0.f,0.55f}) {
        Vec3 p=o.center+(o.half.y>o.half.x?Vec3{side*(o.half.x+0.6f),along*o.half.y}:Vec3{along*o.half.x,side*(o.half.y+0.6f)});
        positions.push_back({p,p,true,false,o.id*16+uint64_t((side>0?3:0)+(along<0?0:along>0?2:1))+1,o.id});
    } else for(float side:{-1.f,1.f})for(float edge:{-1.f,1.f}) {
        positions.push_back({o.center+Vec3{side*(o.half.x+0.6f),edge*std::max(0.f,o.half.y-1)},o.center+Vec3{side*(o.half.x+0.6f),edge*(o.half.y+2)},false,false,o.id*16+uint64_t((side>0?4:0)+(edge>0?2:0))+1,o.id});
        positions.push_back({o.center+Vec3{edge*std::max(0.f,o.half.x-1),side*(o.half.y+0.6f)},o.center+Vec3{edge*(o.half.x+2),side*(o.half.y+0.6f)},false,false,o.id*16+uint64_t((side>0?4:0)+(edge>0?2:0))+2,o.id});
    }
}
const std::vector<CoverPosition>& CoverPositions(const Map& m) {
    const uint64_t key=m.prepared?m.revision:GeometryKey(m);
    if(m.coverCatalog&&m.coverRevision==key)return *m.coverCatalog;
    auto positions=m.windows;
    for(auto& w:positions)w.id=w.id? w.id:0;
    if(m.linkedSurfaceRouting){
        // Sample physical faces, not just authored markers or rectangle centres.
        // Internal earth seams and inaccessible wall faces fail the same walkability
        // and six-body-ray protection checks used by soldiers. Cache once/revision.
        // A hedge (concealment, plan 029) is never a cover source.
        for(const auto& o:m.obstacles)LinkedObstacleCover(m,o,positions);
        m.coverRevision=key;m.coverCatalog=std::make_shared<const std::vector<CoverPosition>>(std::move(positions));return *m.coverCatalog;
    }
    for(const auto& o:m.obstacles)AuthoredObstacleCover(o,positions);
    m.coverRevision=key;m.coverCatalog=std::make_shared<const std::vector<CoverPosition>>(std::move(positions));return *m.coverCatalog;
}
// Plan 026 4c: static map-view channels (blocked fraction, obstacle height, cover positions) of
// every global 6 m cell, from this map's own geometry. Cached once per revision like CoverPositions;
// reading it never changes a query result.
const SquadRasterStatic& SquadRasterStaticChannels(const Map& m) {
    const uint64_t key=m.prepared?m.revision:GeometryKey(m);
    if(m.rasterStatic&&m.rasterStatic->key==key)return *m.rasterStatic;
    auto grid=std::make_shared<SquadRasterStatic>();grid->key=key;
    grid->width=std::max(1,int(std::ceil(m.halfWidth*2/SquadRasterCell)));grid->height=std::max(1,int(std::ceil(m.halfHeight*2/SquadRasterCell)));
    const size_t count=size_t(grid->width)*size_t(grid->height);
    std::vector<float> blocked(count,0.f),top(count,0.f);std::vector<int> covers(count,0);
    for(const auto& o:m.obstacles) {
        const float x0=o.center.x-o.half.x,x1=o.center.x+o.half.x,y0=o.center.y-o.half.y,y1=o.center.y+o.half.y;
        const int ax=std::max(0,int(std::floor((x0+m.halfWidth)/SquadRasterCell))),bx=std::min(grid->width-1,int(std::floor((x1+m.halfWidth)/SquadRasterCell)));
        const int ay=std::max(0,int(std::floor((y0+m.halfHeight)/SquadRasterCell))),by=std::min(grid->height-1,int(std::floor((y1+m.halfHeight)/SquadRasterCell)));
        // Ground-level walls and blocks stop movement; the upper floor's own walls do not.
        const bool ground=o.blocksMovement&&o.center.z<m.groundBase+UpperFloor*.5f;
        const float height=std::max(0.f,o.center.z+ObstacleHeight(o)-m.groundBase);
        for(int y=ay;y<=by;++y)for(int x=ax;x<=bx;++x) {
            const float cx=-m.halfWidth+float(x)*SquadRasterCell,cy=-m.halfHeight+float(y)*SquadRasterCell;
            const float w=std::min(x1,cx+SquadRasterCell)-std::max(x0,cx),h=std::min(y1,cy+SquadRasterCell)-std::max(y0,cy);
            if(!(w>0&&h>0))continue;
            const size_t index=size_t(y)*size_t(grid->width)+size_t(x);
            if(ground)blocked[index]+=w*h;
            top[index]=std::max(top[index],height);
        }
    }
    for(const auto& cover:CoverPositions(m)) {
        const int x=int(std::floor((cover.shelter.x+m.halfWidth)/SquadRasterCell)),y=int(std::floor((cover.shelter.y+m.halfHeight)/SquadRasterCell));
        if(x>=0&&y>=0&&x<grid->width&&y<grid->height)++covers[size_t(y)*size_t(grid->width)+size_t(x)];
    }
    auto quantize=[](float value,float limit){return uint8_t(value>=limit?int(limit):value>0?int(value+.5f):0);};
    grid->cells.resize(count*SquadRasterStaticChannelCount);
    for(size_t i=0;i<count;++i) {
        grid->cells[i*3]=quantize(std::min(1.f,blocked[i]/(SquadRasterCell*SquadRasterCell))*254,254);
        grid->cells[i*3+1]=quantize(top[i]*12.7f,254);
        grid->cells[i*3+2]=quantize(float(covers[i])*32,255);
    }
    m.rasterStatic=grid;return *m.rasterStatic;
}
static bool Supported(const Map& m,Vec3 p) {
    bool gradeReplaced=false; // ARMYMAP 2 only: some containing surface replaces grade here
    if(m.linkedSurfaceRouting&&m.prepared){
        if(!m.navigation||m.navigation->key!=m.revision){m.navigation=std::make_shared<NavigationCache>();m.navigation->key=m.revision;}
        const int width=int(std::ceil(m.halfWidth*2/8))+1,height=int(std::ceil(m.halfHeight*2/8))+1;
        auto cellX=[&](float x){return std::clamp(int(std::floor((x+m.halfWidth)/8)),0,width-1);};
        auto cellY=[&](float y){return std::clamp(int(std::floor((y+m.halfHeight)/8)),0,height-1);};
        auto& bins=m.navigation->surfaceBins;
        if(bins.empty()){
            bins.resize(size_t(width*height));
            for(size_t i=0;i<m.surfaces.size();++i){const auto& s=m.surfaces[i];
                for(int y=cellY(s.center.y-s.half.y-.001f);y<=cellY(s.center.y+s.half.y+.001f);++y)
                    for(int x=cellX(s.center.x-s.half.x-.001f);x<=cellX(s.center.x+s.half.x+.001f);++x)bins[size_t(y*width+x)].push_back(i);
            }
        }
        const auto& bin=bins[size_t(cellY(p.y)*width+cellX(p.x))];
        if(m.stackedSurfaces){
            // ARMYMAP 2 layers: every containing surface is a candidate floor at its own height. Grade
            // survives under a surface that does not replace it (an upper storey), never under one that
            // does (a lane floor, a ramp, a stair or a ground-level floor).
            for(size_t i:bin){const auto& s=m.surfaces[i];if(!InsideSurface(s,p))continue;
                if(std::abs(p.z-SurfaceHeight(s,p))<.03f)return true;
                gradeReplaced=gradeReplaced||s.replacesGrade;}
        }else for(size_t i:bin){const auto& s=m.surfaces[i];if(InsideSurface(s,p))return std::abs(p.z-SurfaceHeight(s,p))<.03f;}
    }else if(m.stackedSurfaces){
        for(const auto& s:m.surfaces){if(!InsideSurface(s,p))continue;
            if(std::abs(p.z-SurfaceHeight(s,p))<.03f)return true;
            gradeReplaced=gradeReplaced||s.replacesGrade;}
    }else for(const auto& s:m.surfaces)if(InsideSurface(s,p))return std::abs(p.z-SurfaceHeight(s,p))<.03f;
    // Authored houses only: an imported (ARMYMAP 2) footprint has explicit stair/floor surfaces.
    for(const auto& b:m.buildings)if(b.authoredStairs&&StairFootprint(b,p))return OnStairs(m,p);
    if(std::abs(p.z)<0.02f)return !gradeReplaced;
    if(std::abs(p.z-UpperFloor)>0.02f)return false;
    for(const auto& b:m.buildings)if(b.authoredStairs&&std::abs(p.x-b.center.x)<4.8f&&std::abs(p.y-b.center.y)<3.8f)return true;
    return false;
}
static bool ClearLineCompute(const Map& m,Vec3 a,Vec3 b,float pad);
bool ClearLine(const Map& m,Vec3 a,Vec3 b,float pad) {
    if(m.prepared)return MemoisedSegment(m,a,b,pad,1,ClearLineCompute);
    return ClearLineCompute(m,a,b,pad);
}
static bool ClearLineCompute(const Map& m,Vec3 a,Vec3 b,float pad) {
    size_t building=0;
    if(m.prepared&&IndexedContact(m,a,b,true,pad)>=0)return false;
    for(size_t i=0;!m.prepared&&i<m.obstacles.size();++i) {
        if(building<m.buildings.size()&&i==m.buildings[building].firstObstacle) {
            const auto& structure=m.buildings[building++];
            Obstacle bounds{structure.center,structure.half+Vec3{0.23f,0.23f,0},true};
            if(structure.obstacleCount&&SegmentBox(a,b,bounds,pad)<0){i+=structure.obstacleCount-1;continue;}
        }
        const auto& o=m.obstacles[i];
        if(o.blocksMovement&&o.center.z<std::max(a.z,b.z)+1.85f-0.01f&&o.center.z+ObstacleHeight(o)>std::min(a.z,b.z)+0.02f&&SegmentBox(a,b,o,pad)>=0)return false;
    }
    if(!m.buildings.empty()||!m.surfaces.empty()) {
        int steps=std::max(1,int(std::ceil(Distance(a,b)/0.4f)));
        for(int i=0;i<=steps;++i)if(!Supported(m,a+(b-a)*(float(i)/steps)))return false;
    } else if(std::abs(a.z)>0.02f||std::abs(b.z)>0.02f)return false;
    return true;
}
bool Walkable(const Map& m,Vec3 p) {
    if(std::abs(p.x)>m.halfWidth-0.6f||std::abs(p.y)>m.halfHeight-0.6f||!Supported(m,p))return false;
    return ClearLine(m,p,p,0.48f);
}
// Plan 029 M-C. The whole vault test for a top limit (the class's height); height gets the top above
// his feet. See VaultCrossing in BattleSim.h for the rule.
static bool VaultDetail(const Map& m,Vec3 a,Vec3 b,float topLimit,float* height){
    const auto& v=Vaulting();
    if(std::abs(a.z-b.z)>.02f)return false;
    const float length=Distance(a,b);
    if(!(length>.001f&&length<=v.maxLeg))return false;
    if(!Walkable(m,a)||!Walkable(m,b)||OnStairs(m,a)||OnStairs(m,b))return false;
    // The ground runs on under the whole leg at his height: never a jump over a lane or a trench.
    const int steps=std::max(1,int(std::ceil(length/.4f)));
    for(int i=1;i<steps;++i)if(!Supported(m,a+(b-a)*(float(i)/float(steps))))return false;
    // The movement band ClearLine tests (feet +0.02 to feet +1.84), padded by pad.
    const float low=std::min(a.z,b.z),high=std::max(a.z,b.z);
    std::vector<size_t> touched;CollectObstacles(m,a,b,v.pad,low+0.02f,high+1.85f-0.01f,touched);
    if(touched.empty())return false;
    float top=low;
    for(size_t index:touched){const auto& o=m.obstacles[index];
        if(!o.blocksMovement||o.concealment||(o.flags&1u)||o.building)return false;   // hedge (authored bit too), house
        if(o.center.z>low+.02f)return false;                                           // standing on the ground
        const float crest=o.center.z+ObstacleHeight(o);
        if(crest-low>topLimit)return false;
        // Crossed completely: the unpadded footprint lies strictly between take-off and landing, and
        // the leg spends at most `depth` metres inside it.
        float enter=-1e30f,leave=1e30f;
        for(int k=0;k<2;++k){
            const float p=k?a.y:a.x,d=k?b.y-a.y:b.x-a.x,c=k?o.center.y:o.center.x,h=k?o.half.y:o.half.x;
            if(std::abs(d)<1e-7f){if(p<c-h||p>c+h)return false;continue;}
            float t0=(c-h-p)/d,t1=(c+h-p)/d;if(t0>t1)std::swap(t0,t1);
            enter=std::max(enter,t0);leave=std::min(leave,t1);
        }
        if(!(enter<=leave&&enter>0&&leave<1&&(leave-enter)*length<=v.depth+1e-4f))return false;
        top=std::max(top,crest);
    }
    // Headroom: nothing over the top within `headroom` along the leg.
    std::vector<size_t> above;CollectObstacles(m,a,b,v.pad,top+1e-3f,top+v.headroom,above);
    if(!above.empty())return false;
    if(height)*height=top-low;
    return true;
}
static bool VaultLowCompute(const Map& m,Vec3 a,Vec3 b,float){return VaultDetail(m,a,b,Vaulting().lowTop,nullptr);}
static bool VaultHighCompute(const Map& m,Vec3 a,Vec3 b,float){return VaultDetail(m,a,b,Vaulting().highTop,nullptr);}
static bool VaultOver(const Map& m,Vec3 a,Vec3 b,bool high){
    const auto compute=high?VaultHighCompute:VaultLowCompute;
    return m.prepared?MemoisedSegment(m,a,b,0.f,high?4:3,compute):compute(m,a,b,0.f);
}
VaultClass VaultCrossing(const Map& m,Vec3 a,Vec3 b,VaultClass cls,float* height){
    if(cls==VaultClass::None)return VaultClass::None;
    VaultClass need=VaultClass::None;
    if(VaultOver(m,a,b,false))need=VaultClass::Low;
    else if(cls==VaultClass::High&&VaultOver(m,a,b,true))need=VaultClass::High;
    if(height&&need!=VaultClass::None){*height=0;VaultDetail(m,a,b,need==VaultClass::High?Vaulting().highTop:Vaulting().lowTop,height);}
    return need;
}
// Open list of the ordinary search. Priorities there are finite and never negative
// (costs from zero plus positive steps, plus a Euclidean heuristic), so the float bits
// order exactly as the values, and (bits<<32|node) orders exactly as std::pair<float,int>.
// Equal keys are identical entries, so any min-heap pops the same sequence as the
// std::priority_queue it replaces.
static void OpenPush(std::vector<uint64_t>& heap,uint64_t k){
    size_t i=heap.size();heap.push_back(k);
    while(i>0){const size_t p=(i-1)/4;if(heap[p]<=k)break;heap[i]=heap[p];i=p;}
    heap[i]=k;
}
static uint64_t OpenPop(std::vector<uint64_t>& heap){
    const uint64_t top=heap[0],last=heap.back();heap.pop_back();
    const size_t n=heap.size();
    if(n){size_t i=0;
        for(;;){const size_t c=i*4+1;if(c>=n)break;
            size_t best=c;const size_t end=std::min(c+4,n);
            for(size_t j=c+1;j<end;++j)if(heap[j]<heap[best])best=j;
            if(heap[best]>=last)break;
            heap[i]=heap[best];i=best;}
        heap[i]=last;}
    return top;
}
template<bool Tactical>
static std::vector<Vec3> FloorSearch(const Map& m,Vec3 from,Vec3 to,const std::function<float(Vec3)>* tactical,int budget,int* expanded,RouteStatus* status,
                                     int X,int Y,int W,int H,int N,std::vector<int8_t>& nodes,std::vector<int8_t>& edges,
                                     VaultClass cls=VaultClass::None,std::vector<int8_t>* vault=nullptr){
    auto position=[=](int i)->Vec3 { return {float(i%W-X),float(i/W-Y),to.z}; };
    auto nodeWalkable=[&](int i){if(nodes[i]<0)nodes[i]=Walkable(m,position(i));return nodes[i]!=0;};
    auto index=[=](Vec3 p) {return int(Clamp(std::round(p.y)+Y,0,H-1))*W+int(Clamp(std::round(p.x)+X,0,W-1));};
    int start=index(from),goal=index(to);
    if(!Walkable(m,position(start))||!ClearLine(m,from,position(start),0.48f)) {
        float best=100;
        for(int y=-2;y<=2;++y) for(int x=-2;x<=2;++x) {
            int j=index(from+Vec3{float(x),float(y)}); auto p=position(j);
            if(Walkable(m,p)&&ClearLine(m,from,p,0.48f)&&Distance(from,p)<best) {best=Distance(from,p);start=j;}
        }
        if(best==100) return {};
    }
    if(!Walkable(m,position(goal))||!ClearLine(m,position(goal),to,0.48f)) {
        float best=100;
        for(int y=-2;y<=2;++y)for(int x=-2;x<=2;++x) {
            int j=index(to+Vec3{float(x),float(y)});auto p=position(j);
            if(Walkable(m,p)&&ClearLine(m,p,to,0.48f)&&Distance(p,to)<best){best=Distance(p,to);goal=j;}
        }
        if(best==100)return {};
    }
    auto& cache=*m.navigation;
    if(cache.search.size()!=size_t(N))cache.search.assign(size_t(N),FloorSearchNode{0,0,0,0});
    if(++cache.searchId==0){for(auto& node:cache.search){node.visited=0;node.closed=0;}cache.searchId=1;}
    const uint32_t id=cache.searchId;FloorSearchNode* const state=cache.search.data();
    auto initialize=[&](int n){auto& s=state[n];if(s.visited!=id){s.visited=id;s.cost=1e9f;s.parent=-1;}};
    initialize(start);initialize(goal);
    // Identical arithmetic to Distance(position(n),position(goal)): sqrt((dx*dx+dy*dy)+dz*dz).
    const float goalX=float(goal%W-X),goalY=float(goal/W-Y);
    auto heuristic=[&](float qx,float qy){const float dx=qx-goalX,dy=qy-goalY,dz=to.z-to.z;return std::sqrt(dx*dx+dy*dy+dz*dz);};
    using Entry=std::pair<float,int>;
    auto& openKeys=cache.openKeys;auto& openEntries=cache.openEntries;
    openKeys.clear();openEntries.clear();
    state[start].cost=0;
    if(Tactical){openEntries.push_back({0,start});}else OpenPush(openKeys,uint64_t(uint32_t(start)));
    while(Tactical?!openEntries.empty():!openKeys.empty()) {
        int a;
        if(Tactical){
            // Same container operations as std::priority_queue<Entry,vector,greater>.
            const float priority=openEntries.front().first;a=openEntries.front().second;
            std::pop_heap(openEntries.begin(),openEntries.end(),std::greater<Entry>());openEntries.pop_back();
            if(priority>state[a].cost+heuristic(float(a%W-X),float(a/W-Y))+.001f)continue;
            if(++*expanded>budget){*status=RouteStatus::BudgetExhausted;return {};}
            if(a==goal) break;
        }else{
            a=int(uint32_t(OpenPop(openKeys)));
            if(a==goal) break;
            // Re-expanding a node at the same cost relaxes nothing and computes nothing new:
            // every neighbour's walkability, edge and search state is already cached, and
            // neighbour costs have only fallen since. The ordinary search skips it.
            if(state[a].closed==id)continue;
            state[a].closed=id;
        }
        const int ax=a%W,ay=a/W;
        const Vec3 p{float(ax-X),float(ay-Y),to.z};
        const float costA=state[a].cost;
        // Plan 029 M-C, only with a vault class: where the one-cell step in a direction is blocked, the
        // two- and three-cell legs that direction over a vaultable obstacle, at their length plus the
        // vault's seconds as metres. Never reached by a class-None search.
        auto vaultFrom=[&](int x,int y){
            for(int k=2;k<=3;++k){
                const float length=float(k)*((x&&y)?1.41421356f:1.f);
                if(length>Vaulting().maxLeg)break;
                const int nx=ax+k*x,ny=ay+k*y;
                if(nx<0||nx>=W||ny<0||ny>=H)break;
                const int b=ny*W+nx;
                if(!nodeWalkable(b))continue;
                const Vec3 q{float(nx-X),float(ny-Y),to.z};
                int8_t& need=(*vault)[size_t(a)*18+size_t((y+1)*3+x+1)*2+size_t(k-2)];
                if(need<0)need=int8_t(VaultCrossing(m,p,q,cls));
                if(!need)continue;
                initialize(b);
                const float leg=length+(need==int8_t(VaultClass::High)?Vaulting().highSeconds:Vaulting().lowSeconds)*Vaulting().plannerPace;
                float cost;
                if(Tactical){
                    float rate=((*tactical)(p)+(*tactical)(q))*.5f;
                    if(!std::isfinite(rate))continue;
                    cost=costA+leg*rate;
                }else cost=costA+leg;
                auto& s=state[b];
                if(cost+0.001f<s.cost) {
                    s.cost=cost; s.parent=a;
                    const float priority=cost+heuristic(q.x,q.y);
                    if(Tactical){openEntries.push_back({priority,b});std::push_heap(openEntries.begin(),openEntries.end(),std::greater<Entry>());}
                    else{s.closed=0;uint32_t bits;std::memcpy(&bits,&priority,4);OpenPush(openKeys,(uint64_t(bits)<<32)|uint32_t(b));}
                }
            }
        };
        for(int y=-1;y<=1;++y) for(int x=-1;x<=1;++x) {
            if(x==0&&y==0) continue;
            const int nx=ax+x,ny=ay+y;
            if(nx<0||nx>=W||ny<0||ny>=H) continue;
            const int b=ny*W+nx;
            if(!nodeWalkable(b)){if(vault)vaultFrom(x,y);continue;}
            const Vec3 q{float(nx-X),float(ny-Y),to.z};
            auto& edge=edges[a*9+(y+1)*3+x+1];
            if(edge<0)edge=ClearLine(m,p,q,0.48f);
            if(!edge){if(vault)vaultFrom(x,y);continue;}
            initialize(b);
            float cost;
            if(Tactical){
                float rate=((*tactical)(p)+(*tactical)(q))*.5f;
                if(!std::isfinite(rate))continue;
                cost=costA+((x&&y)?1.41421356f:1.f)*rate;
            }else cost=costA+((x&&y)?1.41421356f:1.f);
            auto& s=state[b];
            if(cost+0.001f<s.cost) {
                s.cost=cost; s.parent=a;
                const float priority=cost+heuristic(q.x,q.y);
                if(Tactical){openEntries.push_back({priority,b});std::push_heap(openEntries.begin(),openEntries.end(),std::greater<Entry>());}
                else{s.closed=0;uint32_t bits;std::memcpy(&bits,&priority,4);OpenPush(openKeys,(uint64_t(bits)<<32)|uint32_t(b));}
            }
        }
    }
    if(state[goal].parent<0&&goal!=start) return {};
    std::vector<Vec3> path;
    for(int a=goal;a!=start;a=state[a].parent) path.push_back(position(a));
    path.push_back(position(start)); std::reverse(path.begin(),path.end());
    // Plan 029 M-C: the two ends of every vault leg (nodes more than one cell apart) are kept exactly.
    // The string pulling below keeps them by itself (a leg it cannot see through is only ever the original
    // edge), the collinear compaction must be told.
    std::vector<uint8_t> vaultEnd;
    if(vault){
        std::vector<int> chain;for(int a=goal;a!=start;a=state[a].parent)chain.push_back(a);chain.push_back(start);std::reverse(chain.begin(),chain.end());
        vaultEnd.assign(chain.size(),0);
        for(size_t i=1;i<chain.size();++i)if(std::abs(chain[i]%W-chain[i-1]%W)>1||std::abs(chain[i]/W-chain[i-1]/W)>1)vaultEnd[i-1]=vaultEnd[i]=1;
    }
    if(ClearLine(m,position(goal),to,0.48f)) path.push_back(to);
    if(Tactical){
        *status=RouteStatus::Complete;
        // Only remove collinear nodes. Clearance alone cannot justify cutting a tactical corner.
        std::vector<Vec3> compact;Vec3 previous=from;
        for(size_t i=0;i<path.size();++i){
            if(i<vaultEnd.size()&&vaultEnd[i]){compact.push_back(path[i]);previous=path[i];continue;}
            if(i+1<path.size()&&Distance(previous,path[i])+Distance(path[i],path[i+1])-Distance(previous,path[i+1])<.0001f)continue;
            compact.push_back(path[i]);previous=path[i];
        }
        return compact;
    }
    // String pulling retains swept clearance around obstacle corners.
    std::vector<Vec3> smooth; Vec3 p=from;
    for(size_t i=0;i<path.size();) {
        size_t furthest=i;
        for(size_t j=i;j<path.size();++j) if(ClearLine(m,p,path[j],0.48f)) furthest=j;
        smooth.push_back(path[furthest]); p=path[furthest]; i=furthest+1;
    }
    return smooth;
}
static std::vector<Vec3> FindFloorPath(const Map& m,Vec3 from,Vec3 to,const std::function<float(Vec3)>* tactical=nullptr,int budget=0,int* expanded=nullptr,RouteStatus* status=nullptr,VaultClass cls=VaultClass::None) {
    if(!Walkable(m,to)) return {};
    if(!tactical&&ClearLine(m,from,to,0.48f)) return {to};
    const int X=int(std::ceil(m.halfWidth)),Y=int(std::ceil(m.halfHeight));
    const int W=X*2+1,H=Y*2+1,N=W*H;
    const auto key=m.prepared?m.revision:GeometryKey(m);
    if(!m.navigation||m.navigation->key!=key){m.navigation=std::make_shared<NavigationCache>();m.navigation->key=key;}
    auto& nodes=m.navigation->nodes[int(std::lround(to.z*1000))];auto& edges=m.navigation->edges[int(std::lround(to.z*1000))];
    if(nodes.empty()){nodes.assign(N,-1);edges.assign(N*9,-1);}
    std::vector<int8_t>* vault=nullptr; // plan 029 M-C: the class's long-edge cache for this floor height
    if(cls!=VaultClass::None){auto& v=m.navigation->vaultEdges[int(cls)-1][int(std::lround(to.z*1000))];if(v.empty())v.assign(size_t(N)*18,-1);vault=&v;}
    if(tactical)return FloorSearch<true>(m,from,to,tactical,budget,expanded,status,X,Y,W,H,N,nodes,edges,cls,vault);
    if(!m.prepared)return FloorSearch<false>(m,from,to,nullptr,0,nullptr,nullptr,X,Y,W,H,N,nodes,edges,cls,vault);
    FloorPathBits bits;const float words[6]={from.x,from.y,from.z,to.x,to.y,to.z};std::memcpy(bits.w,words,sizeof words);
    auto& memo=cls==VaultClass::None?m.navigation->floorPaths:m.navigation->classFloorPaths[int(cls)-1];
    auto found=memo.find(bits);if(found!=memo.end())return found->second;
    auto path=FloorSearch<false>(m,from,to,nullptr,0,nullptr,nullptr,X,Y,W,H,N,nodes,edges,cls,vault);
    if(memo.size()<65536)memo.emplace(bits,path);
    return path;
}
std::vector<Vec3> FindCostPath(const Map& m,Vec3 from,Vec3 to,const std::function<float(Vec3)>& cost,int budget,int& expanded,RouteStatus& status,VaultClass cls){
    expanded=0;status=RouteStatus::Unreachable;
    if(std::abs(from.z-to.z)>.02f){status=RouteStatus::UnsupportedSurface;return {};}
    if(!Walkable(m,from)||!Walkable(m,to))return {};
    return FindFloorPath(m,from,to,&cost,budget,&expanded,&status,cls);
}
// The building whose upper storey (a level>=1 surface) carries p at its height; 0 when none does.
static uint64_t UpperStorey(const Map& m,Vec3 p){
    for(const auto& s:m.surfaces)if(s.level>=1&&s.building&&InsideSurface(s,p)&&std::abs(p.z-SurfaceHeight(s,p))<.03f)return s.building;
    return 0;
}
// The link endpoints of this revision (and, on ARMYMAP 2, their storeys), computed once.
static const NavigationCache& LinkEnds(const Map& m){
    auto& cache=*m.navigation;
    if(!cache.linkEndsReady){
        cache.linkEnds.clear();for(const auto& l:m.surfaceLinks){cache.linkEnds.push_back(l.from);cache.linkEnds.push_back(l.to);}
        cache.linkEndStorey.assign(cache.linkEnds.size(),0);
        if(m.formatVersion>=2)for(size_t i=0;i<cache.linkEnds.size();++i)cache.linkEndStorey[i]=UpperStorey(m,cache.linkEnds[i]);
        cache.linkEndsReady=true;
    }
    return cache;
}
// A trench exit is queried against many candidate destinations. One Dijkstra
// field per exit answers all of those queries, rather than rerunning A* per slot.
static bool ImportedEndpointPath(const Map& m,Vec3 from,Vec3 to,std::vector<Vec3>& result,VaultClass cls=VaultClass::None){
    int endpoint=-1;bool reverse=false;Vec3 origin{},target{};
    for(size_t i=0;i<m.surfaceLinks.size()*2;++i){Vec3 e=i%2?m.surfaceLinks[i/2].to:m.surfaceLinks[i/2].from;
        if(Distance(from,e)<.0001f){endpoint=int(i);origin=e;target=to;break;}
        if(Distance(to,e)<.0001f){endpoint=int(i);origin=e;target=from;reverse=true;break;}}
    if(endpoint<0||std::abs(origin.z-target.z)>.001f||std::abs(origin.x-std::round(origin.x))>.0001f||std::abs(origin.y-std::round(origin.y))>.0001f)return false;
    // ARMYMAP 2: an endpoint on an upper storey never floods a whole-map field (a storey is a few
    // rooms); its routes are ordinary floor paths. Only grade and lane endpoints keep a parent field.
    if(m.formatVersion>=2&&LinkEnds(m).linkEndStorey[size_t(endpoint)])return false;
    if(!Walkable(m,target))return true;
    if(ClearLine(m,from,to,.48f)){result={to};return true;}
    const int X=int(std::ceil(m.halfWidth)),Y=int(std::ceil(m.halfHeight)),W=X*2+1,H=Y*2+1,N=W*H;
    auto position=[&](int i){return Vec3{float(i%W-X),float(i/W-Y),origin.z};};
    auto index=[&](Vec3 p){return int(Clamp(std::round(p.y)+Y,0,H-1))*W+int(Clamp(std::round(p.x)+X,0,W-1));};
    const int start=index(origin);int goal=index(target);auto& cache=*m.navigation;
    if(!Walkable(m,position(goal))||!ClearLine(m,position(goal),target,.48f)){
        float best=100;for(int y=-2;y<=2;++y)for(int x=-2;x<=2;++x){int n=index(target+Vec3{float(x),float(y)});Vec3 p=position(n);
            if(Walkable(m,p)&&ClearLine(m,p,target,.48f)&&Distance(p,target)<best){best=Distance(p,target);goal=n;}}
        if(best==100)return true;
    }
    // Plan 029 M-C: a class search keeps its own fields (vault legs over blocked one-cell steps).
    auto& parents=cls==VaultClass::None?cache.endpointParents:cache.classEndpointParents[int(cls)-1];
    auto found=parents.find(endpoint);
    if(found==parents.end()){
        auto& nodes=cache.nodes[int(std::lround(origin.z*1000))];auto& edges=cache.edges[int(std::lround(origin.z*1000))];
        if(nodes.empty()){nodes.assign(N,-1);edges.assign(N*9,-1);}
        std::vector<int8_t>* vault=nullptr;
        if(cls!=VaultClass::None){auto& v=cache.vaultEdges[int(cls)-1][int(std::lround(origin.z*1000))];if(v.empty())v.assign(size_t(N)*18,-1);vault=&v;}
        std::vector<int> parent(size_t(N),-1);std::vector<float> cost(size_t(N),1e30f);parent[size_t(start)]=start;cost[size_t(start)]=0;
        using Entry=std::pair<float,int>;std::priority_queue<Entry,std::vector<Entry>,std::greater<Entry>> open;open.push({0,start});
        while(!open.empty()){
            auto entry=open.top();open.pop();const int a=entry.second;if(entry.first>cost[size_t(a)]+.001f)continue;Vec3 p=position(a);
            auto vaultFrom=[&](int x,int y){
                for(int k=2;k<=3;++k){const float length=float(k)*((x&&y)?1.41421356f:1.f);if(length>Vaulting().maxLeg)break;
                    const int nx=a%W+k*x,ny=a/W+k*y;if(nx<0||nx>=W||ny<0||ny>=H)break;
                    const int b=ny*W+nx;Vec3 q=position(b);if(nodes[size_t(b)]<0)nodes[size_t(b)]=Walkable(m,q);if(!nodes[size_t(b)])continue;
                    int8_t& need=(*vault)[size_t(a)*18+size_t((y+1)*3+x+1)*2+size_t(k-2)];if(need<0)need=int8_t(VaultCrossing(m,p,q,cls));if(!need)continue;
                    const float candidate=cost[size_t(a)]+length+(need==int8_t(VaultClass::High)?Vaulting().highSeconds:Vaulting().lowSeconds)*Vaulting().plannerPace;
                    if(candidate+.001f<cost[size_t(b)]){cost[size_t(b)]=candidate;parent[size_t(b)]=a;open.push({candidate,b});}
                }
            };
            for(int y=-1;y<=1;++y)for(int x=-1;x<=1;++x){if(!x&&!y)continue;const int nx=a%W+x,ny=a/W+y;if(nx<0||nx>=W||ny<0||ny>=H)continue;
                const int b=ny*W+nx;Vec3 q=position(b);if(nodes[size_t(b)]<0)nodes[size_t(b)]=Walkable(m,q);if(!nodes[size_t(b)]){if(vault)vaultFrom(x,y);continue;}
                auto& edge=edges[size_t(a*9+(y+1)*3+x+1)];if(edge<0)edge=ClearLine(m,p,q,.48f);if(!edge){if(vault)vaultFrom(x,y);continue;}
                const float candidate=cost[size_t(a)]+((x&&y)?1.41421356f:1.f);
                if(candidate+.001f<cost[size_t(b)]){cost[size_t(b)]=candidate;parent[size_t(b)]=a;open.push({candidate,b});}
            }
        }
        found=parents.emplace(endpoint,std::move(parent)).first;
    }
    const auto& parent=found->second;if(parent[size_t(goal)]<0)return true;
    std::vector<Vec3> path{target};for(int n=goal;n!=start;n=parent[size_t(n)])path.push_back(position(n));path.push_back(origin);
    if(!reverse)std::reverse(path.begin(),path.end());
    Vec3 previous=from;
    for(size_t i=0;i<path.size();){size_t last=i;
        for(size_t j=i;j<path.size();++j){if(!ClearLine(m,previous,path[j],.48f))break;last=j;}
        // A class path's leg that cannot be seen through is one of its vault legs, kept as it is.
        if(!ClearLine(m,previous,path[last],.48f)&&!(cls!=VaultClass::None&&VaultCrossing(m,previous,path[last],cls)!=VaultClass::None)){result.clear();return true;}
        result.push_back(path[last]);previous=path[last];i=last+1;
    }
    return true;
}
// Reuse geometric work across the thousands of cover evaluations in a command pass.
// Exact coordinates and revision ownership retain the same clearance/path semantics.
static std::vector<Vec3> ImportedFloorPath(const Map& m,Vec3 from,Vec3 to,VaultClass cls=VaultClass::None){
    auto& cache=*m.navigation;
    if(cache.flatComponents.empty()){
        const int n=int(m.surfaces.size());cache.flatComponents.resize(size_t(n));
        for(int i=0;i<n;++i)cache.flatComponents[size_t(i)]=i;
        auto root=[&](int i){while(cache.flatComponents[size_t(i)]!=i)i=cache.flatComponents[size_t(i)];return i;};
        for(int i=0;i<n;++i){const auto& a=m.surfaces[size_t(i)];if(std::abs(a.slope.x)+std::abs(a.slope.y)>.001f)continue;
            for(int j=0;j<i;++j){const auto& b=m.surfaces[size_t(j)];
                if(std::abs(b.slope.x)+std::abs(b.slope.y)>.001f||std::abs(a.center.z-b.center.z)>.001f)continue;
                if(std::abs(a.center.x-b.center.x)<=a.half.x+b.half.x+.001f&&std::abs(a.center.y-b.center.y)<=a.half.y+b.half.y+.001f)
                    cache.flatComponents[size_t(root(i))]=root(j);
            }
        }
        for(int i=0;i<n;++i)cache.flatComponents[size_t(i)]=root(i);
    }
    auto component=[&](Vec3 p){for(size_t i=0;i<m.surfaces.size();++i){const auto& s=m.surfaces[i];
        if(std::abs(s.slope.x)+std::abs(s.slope.y)<.001f&&std::abs(s.center.z-p.z)<.001f&&InsideSurface(s,p))return cache.flatComponents[i];}return -1;};
    // Grade is implicit and unbounded by the explicit floor rectangles. Only reject
    // disconnected below-grade flat networks; ramps remain graph edges.
    if(from.z<-.03f&&to.z<-.03f){const int a=component(from),b=component(to);if(a>=0&&b>=0&&a!=b)return {};}
    FloorRouteKey key{{from.x,from.y,from.z,to.x,to.y,to.z}};
    auto& routes=cls==VaultClass::None?cache.importedFloorRoutes:cache.classImportedFloorRoutes[int(cls)-1];
    auto found=routes.find(key);if(found!=routes.end())return found->second;
    std::vector<Vec3> path;if(!ImportedEndpointPath(m,from,to,path,cls))path=FindFloorPath(m,from,to,nullptr,0,nullptr,nullptr,cls);
    if(routes.size()<(m.formatVersion>=2?65536u:16384u))routes.emplace(key,path);
    return path;
}
// A link's own surface joins two points of different height on it (a ramp or stair flight).
static std::vector<Vec3> AttachLinked(const Map& m,Vec3 a,Vec3 b,VaultClass cls=VaultClass::None){
    if(std::abs(a.z-b.z)<.03f)return ImportedFloorPath(m,a,b,cls);
    for(const auto& l:m.surfaceLinks){
        const auto s=std::find_if(m.surfaces.begin(),m.surfaces.end(),[&](const GroundSurface& surface){return surface.id==l.id;});
        if(s!=m.surfaces.end()&&InsideSurface(*s,a)&&InsideSurface(*s,b)&&ClearLine(m,a,b,.48f))return std::vector<Vec3>{b};
    }
    return std::vector<Vec3>{};
}
// ARMYMAP 2 form of the linked search below. Same graph (node 0 from, 1 to, 2.. every link endpoint),
// same edges, same Dijkstra answer (distances, pop order and parents, hence the same route), but an
// edge's path is computed only when it could matter. Every edge u->v gets a lower bound on the length
// the eager search would add: its path runs from point(u) to within 3.54 m of point(v) (a floor
// search may stop at the grid node nearest an unreachable exact goal), so length >= |uv| - 3.54; the
// bound keeps 4 m and a 1e-4 relative float margin. Before each pop every pending edge whose
// distance[u]+bound does not exceed the smallest tentative distance is evaluated, so the popped node,
// its distance and its parent (the earliest-popped tail achieving that distance, as the eager
// search's strict '<' in pop order gives) are exactly the eager search's. Endpoint pairs fill the
// same count*count table on first use and are kept for the revision. Pruned: two endpoints on the
// upper storeys of different buildings (no floor joins them without going down a stair).
static std::vector<Vec3> LazyLinkedSurfacePath(const Map& m,Vec3 from,Vec3 to,NavigationCache& cache,const std::vector<Vec3>& ends,VaultClass cls=VaultClass::None){
    const int count=int(ends.size()),n=count+2;const auto& storey=cache.linkEndStorey;
    if(!cache.surfaceReady){cache.surfacePaths.assign(size_t(count*count),{});cache.surfaceDone.assign(size_t(count*count),0);cache.surfaceReady=true;}
    const uint64_t fromStorey=UpperStorey(m,from),toStorey=UpperStorey(m,to);
    auto separated=[](uint64_t a,uint64_t b){return a&&b&&a!=b;};
    auto point=[&](int node){return node==0?from:node==1?to:ends[size_t(node-2)];};
    // Structural filter: the eager search leaves these edges empty without computing anything.
    auto exists=[&](int u,int v){
        if(v==0||u==v||u==1)return false;
        if(u==0)return v>=2&&!separated(fromStorey,storey[size_t(v-2)]);
        if(v==1)return !separated(storey[size_t(u-2)],toStorey);
        const int i=u-2,j=v-2;
        return !separated(storey[size_t(i)],storey[size_t(j)])&&(i/2==j/2||std::abs(ends[size_t(i)].z-ends[size_t(j)].z)<.03f);
    };
    std::vector<std::vector<Vec3>> fromPaths(static_cast<size_t>(count)),toPaths(static_cast<size_t>(count));
    std::vector<uint8_t> fromDone(static_cast<size_t>(count),0),toDone(static_cast<size_t>(count),0);
    static const std::vector<Vec3> none;
    auto edge=[&](int u,int v)->const std::vector<Vec3>&{
        if(!exists(u,v))return none;
        // Plan 029 M-C: the man's own legs to and from the network take his class; the endpoint table stays None.
        if(u==0){auto& path=fromPaths[size_t(v-2)];if(!fromDone[size_t(v-2)]){path=AttachLinked(m,from,ends[size_t(v-2)],cls);fromDone[size_t(v-2)]=1;}return path;}
        if(v==1){auto& path=toPaths[size_t(u-2)];if(!toDone[size_t(u-2)]){path=AttachLinked(m,ends[size_t(u-2)],to,cls);toDone[size_t(u-2)]=1;}return path;}
        const int i=u-2,j=v-2;const size_t k=size_t(i*count+j);auto& path=cache.surfacePaths[k];
        if(!cache.surfaceDone[k]){
            if(i/2==j/2&&ClearLine(m,ends[size_t(i)],ends[size_t(j)],.48f))path={ends[size_t(j)]};
            else if(std::abs(ends[size_t(i)].z-ends[size_t(j)].z)<.03f)path=ImportedFloorPath(m,ends[size_t(i)],ends[size_t(j)]);
            cache.surfaceDone[k]=1;
        }
        return path;
    };
    std::vector<float> distance(size_t(n),1e30f);std::vector<int> parent(size_t(n),-1),rank(size_t(n),-1),parentRank(size_t(n),n);
    std::vector<bool> visited(size_t(n),false);distance[0]=0;int pops=0;
    struct Pending{float key;int u,v;bool operator>(const Pending& o)const{return key>o.key;}};
    std::priority_queue<Pending,std::vector<Pending>,std::greater<Pending>> pending;
    auto relax=[&](int u,int v){
        const auto& path=edge(u,v);if(path.empty())return;
        float length=0;Vec3 previous=point(u);for(auto p:path){length+=Distance(previous,p);previous=p;}
        const float value=distance[size_t(u)]+length;
        if(value<distance[size_t(v)]||(value==distance[size_t(v)]&&rank[size_t(u)]<parentRank[size_t(v)])){distance[size_t(v)]=value;parent[size_t(v)]=u;parentRank[size_t(v)]=rank[size_t(u)];}
    };
    for(int pass=0;pass<n;++pass){int u=-1;
        for(;;){u=-1;for(int i=0;i<n;++i)if(!visited[size_t(i)]&&(u<0||distance[size_t(i)]<distance[size_t(u)]))u=i;
            if(u<0||pending.empty()||pending.top().key>distance[size_t(u)])break;
            const auto next=pending.top();pending.pop();if(!visited[size_t(next.v)])relax(next.u,next.v);}
        if(u<0||distance[size_t(u)]>=1e29f)break;
        if(u==1)break;
        visited[size_t(u)]=true;rank[size_t(u)]=pops++;
        for(int v=0;v<n;++v)if(!visited[size_t(v)]&&exists(u,v)){
            const float bound=std::max(0.f,Distance(point(u),point(v))*(1-1e-4f)-4.f);
            pending.push({distance[size_t(u)]+bound,u,v});
        }
    }
    if(parent[1]<0)return {};
    std::vector<int> chain;for(int node=1;node!=0;node=parent[size_t(node)])chain.push_back(node);std::reverse(chain.begin(),chain.end());
    std::vector<Vec3> result;int previous=0;for(int node:chain){const auto& path=edge(previous,node);result.insert(result.end(),path.begin(),path.end());previous=node;}return result;
}
// Imported networks may require floor -> ramp -> grade -> ramp -> floor.
// Cache endpoint routes with the same revision-owned cache as ordinary navigation.
static std::vector<Vec3> FindLinkedSurfacePath(const Map& m,Vec3 from,Vec3 to,VaultClass cls=VaultClass::None){
    const uint64_t key=m.prepared?m.revision:GeometryKey(m);
    if(!m.navigation||m.navigation->key!=key){m.navigation=std::make_shared<NavigationCache>();m.navigation->key=key;}
    if(std::abs(from.z-to.z)<.03f){auto direct=ImportedFloorPath(m,from,to,cls);if(!direct.empty())return direct;}
    const auto cache=m.navigation;
    const std::vector<Vec3>& ends=LinkEnds(m).linkEnds;
    const int count=int(ends.size());
    if(m.formatVersion>=2)return LazyLinkedSurfacePath(m,from,to,*cache,ends,cls);
    if(!cache->surfaceReady){
        cache->surfacePaths.resize(size_t(count*count));
        for(int i=0;i<count;++i)for(int j=0;j<count;++j)if(i!=j){
            auto& path=cache->surfacePaths[size_t(i*count+j)];
            if(i/2==j/2&&ClearLine(m,ends[i],ends[j],.48f))path={ends[j]};
            else if(std::abs(ends[i].z-ends[j].z)<.03f)path=ImportedFloorPath(m,ends[i],ends[j]);
        }
        cache->surfaceReady=true;
    }
    auto attach=[&](Vec3 a,Vec3 b){
        if(std::abs(a.z-b.z)<.03f)return ImportedFloorPath(m,a,b,cls);
        for(const auto& l:m.surfaceLinks){
            const auto s=std::find_if(m.surfaces.begin(),m.surfaces.end(),[&](const GroundSurface& surface){return surface.id==l.id;});
            if(s!=m.surfaces.end()&&InsideSurface(*s,a)&&InsideSurface(*s,b)&&ClearLine(m,a,b,.48f))return std::vector<Vec3>{b};
        }
        return std::vector<Vec3>{};
    };
    std::vector<Vec3> points{from,to};points.insert(points.end(),ends.begin(),ends.end());
    const int n=int(points.size());std::vector<std::vector<Vec3>> paths(size_t(n*n));
    for(int i=0;i<count;++i){paths[size_t(i+2)]=attach(from,ends[i]);paths[size_t((i+2)*n+1)]=attach(ends[i],to);
        for(int j=0;j<count;++j)paths[size_t((i+2)*n+j+2)]=cache->surfacePaths[size_t(i*count+j)];}
    std::vector<float> distance(size_t(n),1e30f);std::vector<int> parent(size_t(n),-1);std::vector<bool> visited(size_t(n),false);distance[0]=0;
    for(int pass=0;pass<n;++pass){int u=-1;for(int i=0;i<n;++i)if(!visited[size_t(i)]&&(u<0||distance[size_t(i)]<distance[size_t(u)]))u=i;
        if(u<0||distance[size_t(u)]>=1e29f)break;
        if(u==1)break;
        visited[size_t(u)]=true;
        for(int v=0;v<n;++v){const auto& path=paths[size_t(u*n+v)];if(path.empty())continue;float length=0;Vec3 previous=points[size_t(u)];
            for(auto p:path){length+=Distance(previous,p);previous=p;}if(distance[size_t(u)]+length<distance[size_t(v)]){distance[size_t(v)]=distance[size_t(u)]+length;parent[size_t(v)]=u;}}
    }
    if(parent[1]<0)return {};
    std::vector<int> chain;for(int node=1;node!=0;node=parent[size_t(node)])chain.push_back(node);std::reverse(chain.begin(),chain.end());
    std::vector<Vec3> result;int previous=0;for(int node:chain){const auto& path=paths[size_t(previous*n+node)];result.insert(result.end(),path.begin(),path.end());previous=node;}return result;
}
std::vector<Vec3> FindPath(const Map& m,Vec3 from,Vec3 to) {return FindPath(m,from,to,VaultClass::None);}
// Class None is FindPath exactly (every branch, cache and recursion is the old one); a class reaches the
// floor searches (and the man's own legs of a linked-surface route), never a link table.
std::vector<Vec3> FindPath(const Map& m,Vec3 from,Vec3 to,VaultClass cls) {
    struct Measure {QueryProfile* p;std::chrono::steady_clock::time_point start;
        explicit Measure(QueryProfile* q):p(q){if(p){++p->paths;if(p->depth++==0)start=std::chrono::steady_clock::now();}}
        ~Measure(){if(p&&--p->depth==0)p->navigationSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();}
    } measure(m.queryProfile.get());
    if(!Walkable(m,from)||!Walkable(m,to))return {};
    if(m.linkedSurfaceRouting&&!m.surfaceLinks.empty())return FindLinkedSurfacePath(m,from,to,cls);
    // Ramps connect explicit terrain surfaces. Finish a ramp before selecting another layer.
    for(const auto& surface:m.surfaces)if(InsideSurface(surface,from)&&(std::abs(surface.slope.x)+std::abs(surface.slope.y))>.01f&&std::abs(from.z)>.03f&&std::abs(from.z+1.4f)>.03f){
        for(const auto& link:m.surfaceLinks)if(link.id==surface.id){Vec3 end=std::abs(to.z-link.to.z)<std::abs(to.z-link.from.z)?link.to:link.from;auto rest=FindPath(m,end,to,cls);if(rest.empty())return {};rest.insert(rest.begin(),end);return rest;}
    }
    if(!m.surfaceLinks.empty()&&std::abs(from.z-to.z)>.03f){
        std::vector<Vec3> best;float bestLength=1e9f;
        for(const auto& link:m.surfaceLinks)for(int reverse=0;reverse<2;++reverse){Vec3 a=reverse?link.to:link.from,b=reverse?link.from:link.to;
            if(std::abs(from.z-a.z)>.03f||std::abs(to.z-b.z)>.03f)continue;
            auto first=FindFloorPath(m,from,a,nullptr,0,nullptr,nullptr,cls),last=FindFloorPath(m,b,to,nullptr,0,nullptr,nullptr,cls);if(first.empty()||last.empty()||!ClearLine(m,a,b,.48f))continue;
            first.push_back(b);first.insert(first.end(),last.begin(),last.end());float length=0;Vec3 previous=from;for(auto p:first){length+=Distance(previous,p);previous=p;}
            if(length<bestLength){bestLength=length;best=std::move(first);}
        }
        if(!best.empty())return best;
    }
    // A soldier already on a flight completes that stair connection before replanning.
    if(OnStairs(m,from)&&from.z>0.02f&&from.z<UpperFloor-0.02f) {
        for(const auto& b:m.buildings)if(b.authoredStairs&&StairFootprint(b,from)) {
            Vec3 end=to.z>=UpperFloor-0.02f?StairTop(b):StairBottom(b);
            auto rest=FindPath(m,end,to,cls);if(rest.empty())return {};
            rest.insert(rest.begin(),end);return rest;
        }
    }
    if(std::abs(from.z-to.z)<0.02f) {
        auto path=FindFloorPath(m,from,to,nullptr,0,nullptr,nullptr,cls);if(!path.empty())return path;
    }
    auto buildingAt=[&](Vec3 p)->const Building* {for(const auto& b:m.buildings)if(b.authoredStairs&&std::abs(p.x-b.center.x)<5&&std::abs(p.y-b.center.y)<4)return &b;return nullptr;};
    std::vector<Vec3> path;
    if(from.z>1) {
        const auto* b=buildingAt(from);if(!b)return {};
        auto part=FindFloorPath(m,from,StairTop(*b),nullptr,0,nullptr,nullptr,cls);if(part.empty())return {};
        path=part;from=StairBottom(*b);path.push_back(from);
    }
    if(to.z>1) {
        const auto* b=buildingAt(to);if(!b)return {};
        auto part=FindFloorPath(m,from,StairBottom(*b),nullptr,0,nullptr,nullptr,cls);if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());path.push_back(StairTop(*b));
        part=FindFloorPath(m,StairTop(*b),to,nullptr,0,nullptr,nullptr,cls);if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());
    } else {
        auto part=FindFloorPath(m,from,to,nullptr,0,nullptr,nullptr,cls);if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());
    }
    return path;
}

// ---- Plan 033: the batched mutation and the incremental caches ------------------------------------------------------
namespace {
using ChangeBoxes=std::vector<std::array<float,4>>; // x0, y0, x1, y1 of every changed obstacle, before and after
void AddChangeBox(ChangeBoxes& boxes,const Obstacle& o){boxes.push_back({o.center.x-o.half.x,o.center.y-o.half.y,o.center.x+o.half.x,o.center.y+o.half.y});}
bool NearChange(const ChangeBoxes& boxes,const Obstacle& o,float margin){
    for(const auto& b:boxes)if(o.center.x-o.half.x<=b[2]+margin&&o.center.x+o.half.x>=b[0]-margin&&o.center.y-o.half.y<=b[3]+margin&&o.center.y+o.half.y>=b[1]-margin)return true;
    return false;
}
void EraseSourcedCover(Map& m,uint64_t id){m.windows.erase(std::remove_if(m.windows.begin(),m.windows.end(),[&](const CoverPosition& w){return w.source==id;}),m.windows.end());}
// The catalogue of a linked map after a local change, from the catalogue before it. An obstacle's own candidates depend
// only on the obstacle and on the geometry within 6 m of it (the spots stand 0.65 m off its faces, each tests the man's
// clearance (0.48 m), his cover against a threat 4 m through the obstacle (body rays reaching 3 m, 0.4 m to either side)
// and the corner peek along its face), and on the surfaces, which a local change keeps. So an obstacle farther than 6 m
// from every changed box keeps its old run; the others, and every added one, are sampled again. The result is the full
// sample's, in its order (the map's windows, then each obstacle's candidates in obstacle order).
std::shared_ptr<const std::vector<CoverPosition>> DeriveCover(const Map& m,const std::vector<CoverPosition>& old,size_t oldWindows,const ChangeBoxes& boxes){
    std::unordered_map<uint64_t,std::pair<size_t,size_t>> runs;
    for(size_t i=std::min(oldWindows,old.size());i<old.size();){size_t j=i;while(j<old.size()&&old[j].source==old[i].source)++j;runs.emplace(old[i].source,std::make_pair(i,j));i=j;}
    auto positions=m.windows;
    for(auto& w:positions)w.id=w.id? w.id:0;
    for(const auto& o:m.obstacles){
        if(NearChange(boxes,o,6.f)){LinkedObstacleCover(m,o,positions);continue;}
        const auto run=runs.find(o.id);
        if(run!=runs.end())positions.insert(positions.end(),old.begin()+std::ptrdiff_t(run->second.first),old.begin()+std::ptrdiff_t(run->second.second));
    }
    return std::make_shared<const std::vector<CoverPosition>>(std::move(positions));
}
// The navigation cache after a local change, from the one before it. Surface bins, flat components, link ends and the
// stair index depend on surfaces, links and buildings only (kept: a local change edits none). The 1 m walkable grid (a
// node reads obstacles within 0.48 m of it), its 8-neighbour edges (a line of 1.42 m padded 0.48 m) and the vault legs
// (at most three cells, 4.25 m, with their 0.3 m pad and headroom) are kept outside 1, 2.5 and 5.5 m of the change and
// unknown (-1, re-tested on demand) inside. Every path, route, endpoint field and link path is dropped: a new opening
// can shorten any of them.
void DeriveNavigation(const Map& m,const NavigationCache& old,const ChangeBoxes& boxes){
    auto nav=std::make_shared<NavigationCache>();nav->key=m.revision;
    nav->surfaceBins=old.surfaceBins;nav->flatComponents=old.flatComponents;
    nav->linkEndsReady=old.linkEndsReady;nav->linkEnds=old.linkEnds;nav->linkEndStorey=old.linkEndStorey;
    nav->stairsReady=old.stairsReady;std::copy(old.stairCounts,old.stairCounts+3,nav->stairCounts);nav->stairStart=old.stairStart;nav->stairItems=old.stairItems;
    const int X=int(std::ceil(m.halfWidth)),Y=int(std::ceil(m.halfHeight)),W=X*2+1,H=Y*2+1;
    auto unknown=[&](std::vector<int8_t>& grid,size_t stride,float margin){
        for(const auto& b:boxes){
            const int x0=std::max(0,int(std::floor(b[0]-margin))+X),x1=std::min(W-1,int(std::ceil(b[2]+margin))+X);
            const int y0=std::max(0,int(std::floor(b[1]-margin))+Y),y1=std::min(H-1,int(std::ceil(b[3]+margin))+Y);
            for(int y=y0;y<=y1;++y)for(int x=x0;x<=x1;++x){const size_t node=size_t(y)*size_t(W)+size_t(x);
                for(size_t k=0;k<stride&&node*stride+k<grid.size();++k)grid[node*stride+k]=-1;}
        }
    };
    for(const auto& entry:old.nodes){auto grid=entry.second;unknown(grid,1,1.f);nav->nodes.emplace(entry.first,std::move(grid));}
    for(const auto& entry:old.edges){auto grid=entry.second;unknown(grid,9,2.5f);nav->edges.emplace(entry.first,std::move(grid));}
    for(int c=0;c<2;++c)for(const auto& entry:old.vaultEdges[c]){auto grid=entry.second;unknown(grid,18,5.5f);nav->vaultEdges[c].emplace(entry.first,std::move(grid));}
    m.navigation=nav;
}
}
uint64_t AddObstacle(Map& m,Obstacle obstacle){
    GeometryBatch batch;GeometryOp op;op.kind=GeometryOp::Kind::Add;obstacle.id=m.nextGeometryId;op.id=obstacle.id;op.obstacle=obstacle;batch.ops.push_back(op);
    ApplyGeometryBatch(m,batch);return obstacle.id;
}
void ApplyGeometryBatch(Map& m,const GeometryBatch& batch,uint64_t revision,bool incremental){
    const size_t oldWindows=m.windows.size();
    const auto oldCover=m.prepared&&m.coverCatalog&&m.coverRevision==m.revision?m.coverCatalog:nullptr;
    const auto oldNavigation=m.prepared&&m.navigation&&m.navigation->key==m.revision?m.navigation:nullptr;
    const auto oldGraph=m.prepared?CurrentRouteGraph(m):nullptr;
    ChangeBoxes boxes;bool structural=false;
    auto find=[&](uint64_t id){return std::find_if(m.obstacles.begin(),m.obstacles.end(),[&](const Obstacle& o){return o.id==id;});};
    for(const auto& op:batch.ops){
        if(op.kind==GeometryOp::Kind::Remove){
            const auto it=find(op.id);if(it==m.obstacles.end())continue;
            AddChangeBox(boxes,*it);const size_t at=size_t(it-m.obstacles.begin());m.obstacles.erase(it);
            for(auto& b:m.buildings){if(at<b.firstObstacle)--b.firstObstacle;else if(at<b.firstObstacle+b.obstacleCount)--b.obstacleCount;}
            EraseSourcedCover(m,op.id);
        }else if(op.kind==GeometryOp::Kind::Replace){
            const auto it=find(op.id);if(it==m.obstacles.end())continue;
            AddChangeBox(boxes,*it);Obstacle replacement=op.obstacle;replacement.id=op.id;*it=replacement;AddChangeBox(boxes,replacement);
            EraseSourcedCover(m,op.id);
        }else if(op.kind==GeometryOp::Kind::Add){
            Obstacle added=op.obstacle;if(!added.id)added.id=op.id?op.id:m.nextGeometryId;
            // Canonical order: after the last obstacle with a smaller id (every original obstacle precedes every added one).
            size_t at=m.obstacles.size();while(at>0&&m.obstacles[at-1].id>added.id)--at;
            m.obstacles.insert(m.obstacles.begin()+std::ptrdiff_t(at),added);
            for(auto& b:m.buildings){if(b.obstacleCount&&at<=b.firstObstacle)++b.firstObstacle;else if(at>b.firstObstacle&&at<b.firstObstacle+b.obstacleCount)++b.obstacleCount;}
            m.nextGeometryId=std::max(m.nextGeometryId,added.id+1);AddChangeBox(boxes,added);
        }else if(op.kind==GeometryOp::Kind::RemoveSurface){
            const size_t before=m.surfaces.size();
            m.surfaces.erase(std::remove_if(m.surfaces.begin(),m.surfaces.end(),[&](const GroundSurface& s){return s.id==op.id;}),m.surfaces.end());
            m.surfaceLinks.erase(std::remove_if(m.surfaceLinks.begin(),m.surfaceLinks.end(),[&](const SurfaceLink& l){return l.id==op.id;}),m.surfaceLinks.end());
            structural=structural||m.surfaces.size()!=before;
        }else if(op.kind==GeometryOp::Kind::Floors&&op.building<m.buildings.size()){
            auto& b=m.buildings[op.building];
            if(b.authoredStairs){if(op.floors<2){b.authoredStairs=false;b.floors=std::max(1,op.floors);structural=true;}}
            else if(op.floors<b.floors){b.floors=std::max(1,op.floors);structural=true;}
        }
    }
    m.revision=revision?revision:m.revision+1;
    m.tacticalVisibility.reset();m.routeGraph.reset();m.spatial.reset();m.segments.reset();m.navigation.reset();m.coverCatalog.reset();m.coverRevision=0;m.rasterStatic.reset();
    PrepareGeometry(m);
    if(!incremental||structural||boxes.empty())return;
    if(oldNavigation)DeriveNavigation(m,*oldNavigation,boxes);
    if(oldGraph)DeriveRouteGraph(m,*oldGraph,boxes);
    if(oldCover&&m.linkedSurfaceRouting){m.coverCatalog=DeriveCover(m,*oldCover,oldWindows,boxes);m.coverRevision=m.revision;}
}
}
