#include "BattleSim.h"
#include "TacticalRouteSim.h"
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
    m.prepared=true;
}
void InvalidateGeometry(Map& m){++m.revision;m.tacticalVisibility.reset();m.routeGraph.reset();m.spatial.reset();m.segments.reset();m.navigation.reset();m.coverCatalog.reset();m.coverRevision=0;PrepareGeometry(m);}
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
struct NavigationCache {
    std::vector<int> flatComponents;
    std::vector<std::vector<size_t>> surfaceBins;
    std::unordered_map<int,std::vector<int>> endpointParents;
    std::unordered_map<FloorRouteKey,std::vector<Vec3>,FloorRouteHash> importedFloorRoutes;
    bool surfaceReady=false;
    std::vector<std::vector<Vec3>> surfacePaths;
    uint64_t key=0;
    std::unordered_map<int,std::vector<int8_t>> nodes,edges;
    std::vector<float> costs;std::vector<int> parent;std::vector<uint32_t> visited;uint32_t search=0;
};
static uint64_t GeometryKey(const Map& m) {
    uint64_t key=1469598103934665603ull;
    auto add=[&](float f){uint32_t v;std::memcpy(&v,&f,4);key=(key^v)*1099511628211ull;};
    add(m.halfWidth);add(m.halfHeight);add(m.groundBase);
    for(const auto& s:m.surfaces){add(s.center.x);add(s.center.y);add(s.center.z);add(s.half.x);add(s.half.y);add(s.slope.x);add(s.slope.y);}
    for(const auto& o:m.obstacles){add(o.center.x);add(o.center.y);add(o.center.z);add(o.half.x);add(o.half.y);add(ObstacleHeight(o));add(o.blocksMovement?1.f:0.f);add(o.halfCover?1.f:0.f);}
    for(const auto& b:m.buildings){add(b.center.x);add(b.center.y);}
    return key;
}
static float Clamp(float x,float a,float b){return std::clamp(x,a,b);}
static Vec3 StairBottom(const Building& b){return b.center+Vec3{-3,-0.8f,0};}
static Vec3 StairTop(const Building& b){return b.center+Vec3{3,-0.8f,UpperFloor};}
static bool StairFootprint(const Building& b,Vec3 p){return std::abs(p.y-b.center.y+0.8f)<0.8f&&std::abs(p.x-b.center.x)<3.02f;}
bool OnStairs(const Map& m,Vec3 p){
    for(const auto& b:m.buildings)if(StairFootprint(b,p)&&std::abs(p.z-(p.x-b.center.x+3)*UpperFloor/6)<0.08f)return true;
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
const std::vector<CoverPosition>& CoverPositions(const Map& m) {
    const uint64_t key=m.prepared?m.revision:GeometryKey(m);
    if(m.coverCatalog&&m.coverRevision==key)return *m.coverCatalog;
    auto positions=m.windows;
    for(auto& w:positions)w.id=w.id? w.id:0;
    if(m.linkedSurfaceRouting){
        // Sample physical faces, not just authored markers or rectangle centres.
        // Internal earth seams and inaccessible wall faces fail the same walkability
        // and six-body-ray protection checks used by soldiers. Cache once/revision.
        for(const auto& o:m.obstacles)if(o.blocksMovement||o.halfCover){
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
                    bool crouch=o.height<1.86f;
                    if(!ProtectedAt(m,p,threat,crouch?Stance::Crouched:Stance::Standing)){
                        if(crouch||!ProtectedAt(m,p,threat,Stance::Crouched))continue;
                        crouch=true;
                    }
                    Vec3 peek=p;
                    if(!o.halfCover){
                        const float corner=(along>=0?1.f:-1.f)*(extent+.65f);
                        Vec3 candidate=o.center+normal*(across+.65f)+(axis?Vec3{corner,0,0}:Vec3{0,corner,0});
                        if(Walkable(m,candidate)&&ClearLine(m,p,candidate,.48f))peek=candidate;
                    }
                    positions.push_back({p,peek,crouch,false,id,o.id});
                }
            }
        }
        m.coverRevision=key;m.coverCatalog=std::make_shared<const std::vector<CoverPosition>>(std::move(positions));return *m.coverCatalog;
    }
    for(const auto& o:m.obstacles)if(!o.building&&(o.blocksMovement||(o.halfCover&&o.center.z<0))) {
        if(o.halfCover)for(float side:{-1.f,1.f})for(float along:{-0.55f,0.f,0.55f}) {
            Vec3 p=o.center+(o.half.y>o.half.x?Vec3{side*(o.half.x+0.6f),along*o.half.y}:Vec3{along*o.half.x,side*(o.half.y+0.6f)});
            positions.push_back({p,p,true,false,o.id*16+uint64_t((side>0?3:0)+(along<0?0:along>0?2:1))+1,o.id});
        } else for(float side:{-1.f,1.f})for(float edge:{-1.f,1.f}) {
            positions.push_back({o.center+Vec3{side*(o.half.x+0.6f),edge*std::max(0.f,o.half.y-1)},o.center+Vec3{side*(o.half.x+0.6f),edge*(o.half.y+2)},false,false,o.id*16+uint64_t((side>0?4:0)+(edge>0?2:0))+1,o.id});
            positions.push_back({o.center+Vec3{edge*std::max(0.f,o.half.x-1),side*(o.half.y+0.6f)},o.center+Vec3{edge*(o.half.x+2),side*(o.half.y+0.6f)},false,false,o.id*16+uint64_t((side>0?4:0)+(edge>0?2:0))+2,o.id});
        }
    }
    m.coverRevision=key;m.coverCatalog=std::make_shared<const std::vector<CoverPosition>>(std::move(positions));return *m.coverCatalog;
}
static bool Supported(const Map& m,Vec3 p) {
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
        for(size_t i:bins[size_t(cellY(p.y)*width+cellX(p.x))]){const auto& s=m.surfaces[i];if(InsideSurface(s,p))return std::abs(p.z-SurfaceHeight(s,p))<.03f;}
    }else for(const auto& s:m.surfaces)if(InsideSurface(s,p))return std::abs(p.z-SurfaceHeight(s,p))<.03f;
    for(const auto& b:m.buildings)if(StairFootprint(b,p))return OnStairs(m,p);
    if(std::abs(p.z)<0.02f)return true;
    if(std::abs(p.z-UpperFloor)>0.02f)return false;
    for(const auto& b:m.buildings)if(std::abs(p.x-b.center.x)<4.8f&&std::abs(p.y-b.center.y)<3.8f)return true;
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
static std::vector<Vec3> FindFloorPath(const Map& m,Vec3 from,Vec3 to,const std::function<float(Vec3)>* tactical=nullptr,int budget=0,int* expanded=nullptr,RouteStatus* status=nullptr) {
    if(!Walkable(m,to)) return {};
    if(!tactical&&ClearLine(m,from,to,0.48f)) return {to};
    const int X=int(std::ceil(m.halfWidth)),Y=int(std::ceil(m.halfHeight));
    const int W=X*2+1,H=Y*2+1,N=W*H;
    auto position=[=](int i)->Vec3 { return {float(i%W-X),float(i/W-Y),to.z}; };
    const auto key=m.prepared?m.revision:GeometryKey(m);
    if(!m.navigation||m.navigation->key!=key){m.navigation=std::make_shared<NavigationCache>();m.navigation->key=key;}
    auto& nodes=m.navigation->nodes[int(std::lround(to.z*1000))];auto& edges=m.navigation->edges[int(std::lround(to.z*1000))];
    if(nodes.empty()){nodes.assign(N,-1);edges.assign(N*9,-1);}
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
    if(cache.costs.size()!=size_t(N)){cache.costs.resize(N);cache.parent.resize(N);cache.visited.assign(N,0);}
    if(++cache.search==0){std::fill(cache.visited.begin(),cache.visited.end(),0);cache.search=1;}
    auto& costs=cache.costs;auto& parent=cache.parent;auto& visited=cache.visited;
    auto initialize=[&](int n){if(visited[n]!=cache.search){visited[n]=cache.search;costs[n]=1e9f;parent[n]=-1;}};
    initialize(start);initialize(goal);
    using Entry=std::pair<float,int>;
    std::priority_queue<Entry,std::vector<Entry>,std::greater<Entry>> open;
    costs[start]=0; open.push({0,start});
    while(!open.empty()) {
        float priority=open.top().first;int a=open.top().second; open.pop();
        if(tactical&&priority>costs[a]+Distance(position(a),position(goal))+.001f)continue;
        if(tactical&&++*expanded>budget){*status=RouteStatus::BudgetExhausted;return {};}
        if(a==goal) break;
        Vec3 p=position(a);
        for(int y=-1;y<=1;++y) for(int x=-1;x<=1;++x) {
            if(x==0&&y==0) continue;
            int nx=a%W+x,ny=a/W+y;
            if(nx<0||nx>=W||ny<0||ny>=H) continue;
            int b=ny*W+nx; Vec3 q=position(b);
            if(!nodeWalkable(b))continue;
            auto& edge=edges[a*9+(y+1)*3+x+1];
            if(edge<0)edge=ClearLine(m,p,q,0.48f);
            if(!edge)continue;
            initialize(b);
            float rate=tactical?((*tactical)(p)+(*tactical)(q))*.5f:1.f;
            if(!std::isfinite(rate))continue;
            float cost=costs[a]+((x&&y)?1.41421356f:1.f)*rate;
            if(cost+0.001f<costs[b]) {
                costs[b]=cost; parent[b]=a;
                open.push({cost+Distance(q,position(goal)),b});
            }
        }
    }
    if(parent[goal]<0&&goal!=start) return {};
    std::vector<Vec3> path;
    for(int a=goal;a!=start;a=parent[a]) path.push_back(position(a));
    path.push_back(position(start)); std::reverse(path.begin(),path.end());
    if(ClearLine(m,position(goal),to,0.48f)) path.push_back(to);
    if(tactical){
        *status=RouteStatus::Complete;
        // Only remove collinear nodes. Clearance alone cannot justify cutting a tactical corner.
        std::vector<Vec3> compact;Vec3 previous=from;
        for(size_t i=0;i<path.size();++i){
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
std::vector<Vec3> FindCostPath(const Map& m,Vec3 from,Vec3 to,const std::function<float(Vec3)>& cost,int budget,int& expanded,RouteStatus& status){
    expanded=0;status=RouteStatus::Unreachable;
    if(std::abs(from.z-to.z)>.02f){status=RouteStatus::UnsupportedSurface;return {};}
    if(!Walkable(m,from)||!Walkable(m,to))return {};
    return FindFloorPath(m,from,to,&cost,budget,&expanded,&status);
}
// A trench exit is queried against many candidate destinations. One Dijkstra
// field per exit answers all of those queries, rather than rerunning A* per slot.
static bool ImportedEndpointPath(const Map& m,Vec3 from,Vec3 to,std::vector<Vec3>& result){
    int endpoint=-1;bool reverse=false;Vec3 origin{},target{};
    for(size_t i=0;i<m.surfaceLinks.size()*2;++i){Vec3 e=i%2?m.surfaceLinks[i/2].to:m.surfaceLinks[i/2].from;
        if(Distance(from,e)<.0001f){endpoint=int(i);origin=e;target=to;break;}
        if(Distance(to,e)<.0001f){endpoint=int(i);origin=e;target=from;reverse=true;break;}}
    if(endpoint<0||std::abs(origin.z-target.z)>.001f||std::abs(origin.x-std::round(origin.x))>.0001f||std::abs(origin.y-std::round(origin.y))>.0001f)return false;
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
    auto found=cache.endpointParents.find(endpoint);
    if(found==cache.endpointParents.end()){
        auto& nodes=cache.nodes[int(std::lround(origin.z*1000))];auto& edges=cache.edges[int(std::lround(origin.z*1000))];
        if(nodes.empty()){nodes.assign(N,-1);edges.assign(N*9,-1);}
        std::vector<int> parent(size_t(N),-1);std::vector<float> cost(size_t(N),1e30f);parent[size_t(start)]=start;cost[size_t(start)]=0;
        using Entry=std::pair<float,int>;std::priority_queue<Entry,std::vector<Entry>,std::greater<Entry>> open;open.push({0,start});
        while(!open.empty()){
            auto entry=open.top();open.pop();const int a=entry.second;if(entry.first>cost[size_t(a)]+.001f)continue;Vec3 p=position(a);
            for(int y=-1;y<=1;++y)for(int x=-1;x<=1;++x){if(!x&&!y)continue;const int nx=a%W+x,ny=a/W+y;if(nx<0||nx>=W||ny<0||ny>=H)continue;
                const int b=ny*W+nx;Vec3 q=position(b);if(nodes[size_t(b)]<0)nodes[size_t(b)]=Walkable(m,q);if(!nodes[size_t(b)])continue;
                auto& edge=edges[size_t(a*9+(y+1)*3+x+1)];if(edge<0)edge=ClearLine(m,p,q,.48f);if(!edge)continue;
                const float candidate=cost[size_t(a)]+((x&&y)?1.41421356f:1.f);
                if(candidate+.001f<cost[size_t(b)]){cost[size_t(b)]=candidate;parent[size_t(b)]=a;open.push({candidate,b});}
            }
        }
        found=cache.endpointParents.emplace(endpoint,std::move(parent)).first;
    }
    const auto& parent=found->second;if(parent[size_t(goal)]<0)return true;
    std::vector<Vec3> path{target};for(int n=goal;n!=start;n=parent[size_t(n)])path.push_back(position(n));path.push_back(origin);
    if(!reverse)std::reverse(path.begin(),path.end());
    Vec3 previous=from;
    for(size_t i=0;i<path.size();){size_t last=i;
        for(size_t j=i;j<path.size();++j){if(!ClearLine(m,previous,path[j],.48f))break;last=j;}
        if(!ClearLine(m,previous,path[last],.48f)){result.clear();return true;}
        result.push_back(path[last]);previous=path[last];i=last+1;
    }
    return true;
}
// Reuse geometric work across the thousands of cover evaluations in a command pass.
// Exact coordinates and revision ownership retain the same clearance/path semantics.
static std::vector<Vec3> ImportedFloorPath(const Map& m,Vec3 from,Vec3 to){
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
    auto found=cache.importedFloorRoutes.find(key);if(found!=cache.importedFloorRoutes.end())return found->second;
    std::vector<Vec3> path;if(!ImportedEndpointPath(m,from,to,path))path=FindFloorPath(m,from,to);
    if(cache.importedFloorRoutes.size()<16384)cache.importedFloorRoutes.emplace(key,path);
    return path;
}
// Imported networks may require floor -> ramp -> grade -> ramp -> floor.
// Cache endpoint routes with the same revision-owned cache as ordinary navigation.
static std::vector<Vec3> FindLinkedSurfacePath(const Map& m,Vec3 from,Vec3 to){
    const uint64_t key=m.prepared?m.revision:GeometryKey(m);
    if(!m.navigation||m.navigation->key!=key){m.navigation=std::make_shared<NavigationCache>();m.navigation->key=key;}
    if(std::abs(from.z-to.z)<.03f){auto direct=ImportedFloorPath(m,from,to);if(!direct.empty())return direct;}
    const auto cache=m.navigation;
    std::vector<Vec3> ends;for(const auto& l:m.surfaceLinks){ends.push_back(l.from);ends.push_back(l.to);}
    const int count=int(ends.size());
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
        if(std::abs(a.z-b.z)<.03f)return ImportedFloorPath(m,a,b);
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
std::vector<Vec3> FindPath(const Map& m,Vec3 from,Vec3 to) {
    struct Measure {QueryProfile* p;std::chrono::steady_clock::time_point start;
        explicit Measure(QueryProfile* q):p(q){if(p){++p->paths;if(p->depth++==0)start=std::chrono::steady_clock::now();}}
        ~Measure(){if(p&&--p->depth==0)p->navigationSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();}
    } measure(m.queryProfile.get());
    if(!Walkable(m,from)||!Walkable(m,to))return {};
    if(m.linkedSurfaceRouting&&!m.surfaceLinks.empty())return FindLinkedSurfacePath(m,from,to);
    // Ramps connect explicit terrain surfaces. Finish a ramp before selecting another layer.
    for(const auto& surface:m.surfaces)if(InsideSurface(surface,from)&&(std::abs(surface.slope.x)+std::abs(surface.slope.y))>.01f&&std::abs(from.z)>.03f&&std::abs(from.z+1.4f)>.03f){
        for(const auto& link:m.surfaceLinks)if(link.id==surface.id){Vec3 end=std::abs(to.z-link.to.z)<std::abs(to.z-link.from.z)?link.to:link.from;auto rest=FindPath(m,end,to);if(rest.empty())return {};rest.insert(rest.begin(),end);return rest;}
    }
    if(!m.surfaceLinks.empty()&&std::abs(from.z-to.z)>.03f){
        std::vector<Vec3> best;float bestLength=1e9f;
        for(const auto& link:m.surfaceLinks)for(int reverse=0;reverse<2;++reverse){Vec3 a=reverse?link.to:link.from,b=reverse?link.from:link.to;
            if(std::abs(from.z-a.z)>.03f||std::abs(to.z-b.z)>.03f)continue;
            auto first=FindFloorPath(m,from,a),last=FindFloorPath(m,b,to);if(first.empty()||last.empty()||!ClearLine(m,a,b,.48f))continue;
            first.push_back(b);first.insert(first.end(),last.begin(),last.end());float length=0;Vec3 previous=from;for(auto p:first){length+=Distance(previous,p);previous=p;}
            if(length<bestLength){bestLength=length;best=std::move(first);}
        }
        if(!best.empty())return best;
    }
    // A soldier already on a flight completes that stair connection before replanning.
    if(OnStairs(m,from)&&from.z>0.02f&&from.z<UpperFloor-0.02f) {
        for(const auto& b:m.buildings)if(StairFootprint(b,from)) {
            Vec3 end=to.z>=UpperFloor-0.02f?StairTop(b):StairBottom(b);
            auto rest=FindPath(m,end,to);if(rest.empty())return {};
            rest.insert(rest.begin(),end);return rest;
        }
    }
    if(std::abs(from.z-to.z)<0.02f) {
        auto path=FindFloorPath(m,from,to);if(!path.empty())return path;
    }
    auto buildingAt=[&](Vec3 p)->const Building* {for(const auto& b:m.buildings)if(std::abs(p.x-b.center.x)<5&&std::abs(p.y-b.center.y)<4)return &b;return nullptr;};
    std::vector<Vec3> path;
    if(from.z>1) {
        const auto* b=buildingAt(from);if(!b)return {};
        auto part=FindFloorPath(m,from,StairTop(*b));if(part.empty())return {};
        path=part;from=StairBottom(*b);path.push_back(from);
    }
    if(to.z>1) {
        const auto* b=buildingAt(to);if(!b)return {};
        auto part=FindFloorPath(m,from,StairBottom(*b));if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());path.push_back(StairTop(*b));
        part=FindFloorPath(m,StairTop(*b),to);if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());
    } else {
        auto part=FindFloorPath(m,from,to);if(part.empty())return {};
        path.insert(path.end(),part.begin(),part.end());
    }
    return path;
}
}
