#include "TacticalRouteSim.h"
#include "CommandSim.h"
#include <algorithm>
#include <cmath>
#include <limits>
#include <queue>
#include <chrono>
#include <cstring>
#if defined(_MSC_VER)&&!defined(__clang__)&&(defined(_M_X64)||defined(_M_IX86))
#include <xmmintrin.h>
#endif
namespace army {
struct TacticalVisibilityCache {
    // Coordinates occupy 48 bits. Store the answer in the spare high bit rather
    // than paying an eight-byte alignment pad per entry.
    struct Ray {uint64_t from=0,toAndVisible=0;};
    // mask: the table's size less one (8388607 at full size; Map::cacheScale shrinks it, plan 033). A slot is Slot()'s
    // 23-bit hash masked by it: the same slots at full size, and every entry still keys the exact ray.
    uint64_t revision=0;size_t mask=8388607;std::vector<Ray> rays;
    explicit TacticalVisibilityCache(int scale=0):mask((size_t(8388608)>>std::min(16,scale))-1),rays(mask+1){}
    static size_t Slot(uint64_t a,uint64_t b){
        uint64_t hash=a*1099511628211ull+b;hash=(hash^(hash>>30))*0xbf58476d1ce4e5b9ull;hash=(hash^(hash>>27))*0x94d049bb133111ebull;hash^=hash>>31;
        return size_t(hash&8388607);
    }
    // A load hint only: no table state or answer depends on it.
    static void Prefetch(const Ray* ray){
#if defined(__GNUC__)||defined(__clang__)
        __builtin_prefetch(ray);
#elif defined(_MSC_VER)&&(defined(_M_X64)||defined(_M_IX86))
        _mm_prefetch(reinterpret_cast<const char*>(ray),_MM_HINT_T0);
#else
        (void)ray;
#endif
    }
};
TacticalRoutePlanner::SightPoint TacticalRoutePlanner::SnapSightPoint(Vec3 p){
    // Preserve the original rounding, packing and arithmetic order exactly.
    p={std::round(p.x*2)*.5f,std::round(p.y*2)*.5f,std::round(p.z*2)*.5f};
    const uint64_t packed=uint64_t(uint16_t(int(p.x*2)+32768))|
        (uint64_t(uint16_t(int(p.y*2)+32768))<<16)|
        (uint64_t(uint16_t(int(p.z*2)+32768))<<32);
    return {p,packed};
}
bool TacticalRoutePlanner::EstimatedVisible(const SightPoint& from,const SightPoint& to) const {
    return EstimatedVisible(from,to,TacticalVisibilityCache::Slot(from.packed,to.packed));
}
bool TacticalRoutePlanner::EstimatedVisible(const SightPoint& from,const SightPoint& to,size_t slot) const {
    if(!map.tacticalVisibility||map.tacticalVisibility->revision!=map.revision){map.tacticalVisibility=std::make_shared<TacticalVisibilityCache>(map.cacheScale);map.tacticalVisibility->revision=map.revision;}
    const uint64_t a=from.packed,b=to.packed;
    auto& entry=map.tacticalVisibility->rays[slot&map.tacticalVisibility->mask];if(entry.from==a&&(entry.toAndVisible&0xffffffffffffull)==b)return (entry.toAndVisible>>63)!=0;
    // This ray table already caches the exact snapped query. On prepared maps
    // query the obstacle index directly instead of probing a second memo table.
    // Preserve the sight counter and the ordinary unprepared-map fallback.
    bool visible;
    if(map.prepared){
        if(map.queryProfile)++map.queryProfile->sight;
        visible=IndexedContact(map,from.position,to.position,true)<0;
    }else visible=ClearLine3D(map,from.position,to.position);
    entry={a,b|(uint64_t(visible)<<63)};return visible;
}
const char* RouteStatusName(RouteStatus s){const char* n[]={"complete","unreachable","budget_exhausted","unsupported_surface","incomplete_topology"};return n[int(s)];}
static float SegmentDistance(Vec3 p,Vec3 a,Vec3 b){Vec3 d=b-a;float len=d.x*d.x+d.y*d.y+d.z*d.z;float t=len>.0001f?std::clamp(((p.x-a.x)*d.x+(p.y-a.y)*d.y+(p.z-a.z)*d.z)/len,0.f,1.f):0;return Distance(p,a+d*t);}
TacticalRoutePlanner::TacticalRoutePlanner(const Map& m,const Soldier& k,float at,Doctrine d,Stance posture):map(m),actor(WithTracks(k,at)),time(at),speed((k.machineGun?2.55f:3.15f)*(k.understoodHealth<55?.72f:1.f)*Posture(posture).speed),caution(d==Doctrine::Cautious?1.4f:d==Doctrine::Aggressive?.7f:1.f),stance(posture){
    // Nearby reports describe one threatened patch. Keep its strongest weapon and uncertainty.
    // All reports remain in actor knowledge and crossing-specific fire tests.
    if(!map.prepared){map.routeGraph.reset();map.tacticalVisibility.reset();}
    for(const auto& lane:actor.blockedLanes)if(time-lane.observedAt<6&&Distance(lane.origin,lane.target)>1)lanes.push_back(lane);
    for(int i=0;i<UnitCount;++i)if(i!=actor.id&&actor.allies[i].known&&time-actor.allies[i].observedAt<5)friends.push_back(actor.allies[i].position);
    std::vector<Contact> groups;
    for(const auto& ct:actor.contacts)if(ct.known){bool merged=false;
        for(auto& group:groups)if(Distance(group.position,ct.position)<4&&group.automaticWeapon==ct.automaticWeapon){if(ct.observedAt>group.observedAt)group=ct;merged=true;break;}
        if(!merged)groups.push_back(ct);
    }
    // Actor knowledge and time are fixed for the lifetime of this assessment.
    // Reuse report weights; snap each endpoint only when first queried below.
    threats.reserve(groups.size());
    for(const auto& ct:groups){
        const float u=std::min(8.f,std::ceil(TrackUncertainty(ct,time)/2)*2);
        threats.push_back({ct.position,TrackConfidence(ct,time),u,ct.automaticWeapon});
    }
    // Exposure is the maximum of these nonnegative weighted visibility values.
    // Larger upper bounds first let Sample skip more reports without changing
    // that maximum. Group reports before sorting; keep equal bounds stable.
    std::stable_sort(threats.begin(),threats.end(),[](const ThreatSample& a,const ThreatSample& b){
        return a.confidence*(a.automaticWeapon?1.f:.7f)>b.confidence*(b.automaticWeapon?1.f:.7f);
    });
}
RouteCost TacticalRoutePlanner::Sample(Vec3 p){
    // Half-metre cells, including elevation. Query batches are never shared between actors.
    int64_t key=(int64_t(std::lround((p.z+32)*2))*2048+std::lround((p.y+512)*2))*2048+std::lround((p.x+512)*2);
    if(const RouteCost* found=samples.Find(key))return *found;
    RouteCost c;c.travel=1/speed;float seen=0;SightPoint body{};bool bodyReady=false;
    // Exposure is the maximum over reports of (k/3)*confidence*weight, k being the
    // number of the report's three rays that are visible. Every value is a finite
    // float >= +0 (confidence is clamped to [0,1]), so the maximum, bits included,
    // does not depend on the order in which reports are combined, and a report
    // (or its remaining rays) may be skipped whenever even all remaining rays
    // visible could not give a value above the current maximum: nonnegative float
    // products are monotone, and the bound uses the same expression and addition
    // sequence as the value. Rays already answered by the exact table are counted
    // first, for all reports, and only then are unanswered rays queried.
    static const float counted[4]={0.f,1.f/3,1.f/3+1.f/3,1.f/3+1.f/3+1.f/3};
    auto& pending=exposureScratch;pending.clear();
    for(size_t t=0;t<threats.size();++t){auto& ct=threats[t];
        // Same report filters as before; seen is still zero here.
        if(seen>=ct.confidence*(ct.automaticWeapon?1.f:.7f))continue;
        const float u=ct.uncertainty;
        if(Distance(ct.position,p)>100+u)continue;
        if(!ct.eyesReady){
            const Vec3 offsets[3]={{0,0},{u,0},{-u,0}};
            for(size_t i=0;i<3;++i)ct.eyes[i]=SnapSightPoint(ct.position+offsets[i]+Vec3{0,0,1.5f});
            ct.eyesReady=true;
        }
        if(!bodyReady){body=SnapSightPoint(p+Vec3{0,0,Posture(stance).plannerBody});bodyReady=true;}
        ExposureQuery q;q.threat=uint32_t(t);
        for(size_t i=0;i<3;++i)q.slots[i]=TacticalVisibilityCache::Slot(ct.eyes[i].packed,body.packed);
        pending.push_back(q);
    }
    if(!pending.empty()){
        if(!map.tacticalVisibility||map.tacticalVisibility->revision!=map.revision){map.tacticalVisibility=std::make_shared<TacticalVisibilityCache>(map.cacheScale);map.tacticalVisibility->revision=map.revision;}
        const auto* rays=map.tacticalVisibility->rays.data();const size_t mask=map.tacticalVisibility->mask;
        // Independent table loads for every report start together.
        for(const auto& q:pending)for(size_t slot:q.slots)TacticalVisibilityCache::Prefetch(rays+(slot&mask));
        size_t unresolved=0;
        for(auto& q:pending){const auto& ct=threats[q.threat];
            const float weight=ct.automaticWeapon?1.f:.7f;
            if(seen>=ct.confidence*weight)continue;
            int visibleRays=0,unknown=0;
            for(int i=0;i<3;++i){const auto& entry=rays[q.slots[i]&mask];
                if(entry.from==ct.eyes[i].packed&&(entry.toAndVisible&0xffffffffffffull)==body.packed)visibleRays+=int(entry.toAndVisible>>63);
                else q.unknown[unknown++]=uint8_t(i);}
            if(!unknown){seen=std::max(seen,counted[visibleRays]*ct.confidence*weight);continue;}
            q.visible=uint8_t(visibleRays);q.unknownCount=uint8_t(unknown);pending[unresolved++]=q;
        }
        for(size_t r=0;r<unresolved;++r){const auto& q=pending[r];const auto& ct=threats[q.threat];
            const float weight=ct.automaticWeapon?1.f:.7f;
            int visibleRays=q.visible;bool bounded=false;
            for(int j=0;j<q.unknownCount;++j){
                if(counted[visibleRays+q.unknownCount-j]*ct.confidence*weight<=seen){bounded=true;break;}
                const int i=q.unknown[j];
                if(EstimatedVisible(ct.eyes[i],body,q.slots[i]))++visibleRays;
            }
            if(!bounded)seen=std::max(seen,counted[visibleRays]*ct.confidence*weight);
        }
    }
    c.exposure=seen*8*caution/speed;
    c.fire=FireDanger(actor,p,time)*6*caution/speed;
    for(const auto& lane:lanes)
        c.lanes=std::max(c.lanes,std::max(0.f,1-SegmentDistance(p,lane.origin,lane.target)/2)*2/speed);
    bool observed=false;
    if(Distance(p,actor.position)<20){
        if(!observerEyeReady){observerEye=SnapSightPoint(actor.position+Vec3{0,0,1.5f});observerEyeReady=true;}
        observed=EstimatedVisible(observerEye,
            bodyReady&&stance==Stance::Standing?body:SnapSightPoint(p+Vec3{0,0,1.5f}));
    }
    c.uncertainty=observed?0:.12f*caution/speed;
    for(Vec3 friendPosition:friends)c.congestion+=std::max(0.f,1-Distance(p,friendPosition)/2)*.5f/speed;
    samples.Insert(key,c);return c;
}
RouteCost TacticalRoutePlanner::Measure(Vec3 from,const std::vector<Vec3>& path,float* exposure){
    RouteCost total;if(exposure)*exposure=0;
    for(Vec3 end:path){float distance=Distance(from,end);int n=std::max(1,int(std::ceil(distance/2.f)));for(int i=0;i<n;++i){auto c=Sample(from+(end-from)*((i+.5f)/n));float d=distance/n;
        total.travel+=c.travel*d;total.exposure+=c.exposure*d;total.fire+=c.fire*d;total.lanes+=c.lanes*d;total.congestion+=c.congestion*d;total.uncertainty+=c.uncertainty*d;
        if(exposure)*exposure+=c.exposure/(8*caution)*d;
    }from=end;}return total;
}
struct RouteGraph {
    struct Edge {int to;std::vector<Vec3> points;};
    uint64_t revision=0;float floor=0;int width=0,height=0;
    std::vector<Vec3> nodes;std::vector<bool> valid,built;std::vector<std::vector<Edge>> edges;
    // FindPath answers for this geometry revision, keyed by the exact bits of both
    // endpoints. FindPath depends only on the geometry and its two arguments (its own
    // caches are exact memos), so a stored answer is the answer a new call returns.
    // Bounded: when full, further queries are computed and not stored.
    struct PathKey {uint32_t bits[6];bool operator==(const PathKey& o) const {return std::memcmp(bits,o.bits,sizeof bits)==0;}};
    struct PathKeyHash {size_t operator()(const PathKey& k) const {uint64_t h=1469598103934665603ull;for(uint32_t w:k.bits)h=(h^w)*1099511628211ull;return size_t(h^(h>>29));}};
    std::unordered_map<PathKey,std::vector<Vec3>,PathKeyHash> paths;
};
// A route graph node: its 8 m grid point on the floor, or the first walkable of eight offsets around it.
static bool RouteNode(const Map& map,int x,int y,float floor,Vec3& p){
    p={-map.halfWidth+x*8,-map.halfHeight+y*8,floor};bool valid=Walkable(map,p);
    if(!valid)for(Vec3 offset:std::vector<Vec3>{{2,0},{-2,0},{0,2},{0,-2},{2,2},{-2,2},{2,-2},{-2,-2}})if(Walkable(map,p+offset)){p=p+offset;valid=true;break;}
    return valid;
}
std::shared_ptr<RouteGraph> CurrentRouteGraph(const Map& map){return map.routeGraph&&map.routeGraph->revision==map.revision?map.routeGraph:nullptr;}
void DeriveRouteGraph(const Map& map,const RouteGraph& previous,const std::vector<std::array<float,4>>& changed){
    auto graph=std::make_shared<RouteGraph>();graph->revision=map.revision;graph->floor=previous.floor;graph->width=previous.width;graph->height=previous.height;
    graph->nodes=previous.nodes;graph->valid=previous.valid;
    for(int y=0;y<graph->height;++y)for(int x=0;x<graph->width;++x){
        const float gx=-map.halfWidth+float(x*8),gy=-map.halfHeight+float(y*8);bool touched=false;
        for(const auto& b:changed)if(gx>=b[0]-4&&gx<=b[2]+4&&gy>=b[1]-4&&gy<=b[3]+4){touched=true;break;}
        if(!touched)continue;
        const size_t i=size_t(y)*size_t(graph->width)+size_t(x);Vec3 p{};const bool valid=RouteNode(map,x,y,previous.floor,p);
        if(i<graph->nodes.size()){graph->nodes[i]=p;graph->valid[i]=valid;}
    }
    graph->edges.resize(graph->nodes.size());graph->built.resize(graph->nodes.size());map.routeGraph=graph;
}
// Same result as FindPath(map,from,to). The reference stays valid until the graph is replaced.
static const std::vector<Vec3>& GraphPath(const Map& map,RouteGraph& g,Vec3 from,Vec3 to,std::vector<Vec3>& scratch){
    RouteGraph::PathKey key;const float f[6]={from.x,from.y,from.z,to.x,to.y,to.z};std::memcpy(key.bits,f,sizeof key.bits);
    auto found=g.paths.find(key);if(found!=g.paths.end())return found->second;
    if(g.paths.size()>=32768){scratch=FindPath(map,from,to);return scratch;}
    return g.paths.emplace(key,FindPath(map,from,to)).first->second;
}
std::vector<Vec3> TacticalRoutePlanner::RegionalPath(Vec3 from,Vec3 to,int budget,int& expanded,RouteStatus& status){
    if(!map.routeGraph||map.routeGraph->revision!=map.revision||map.routeGraph->floor!=from.z){
        auto graph=std::make_shared<RouteGraph>();graph->revision=map.revision;graph->floor=from.z;
        graph->width=int(std::ceil(map.halfWidth*2/8))+1;graph->height=int(std::ceil(map.halfHeight*2/8))+1;
        for(int y=0;y<graph->height;++y)for(int x=0;x<graph->width;++x){Vec3 p{};const bool valid=RouteNode(map,x,y,from.z,p);
            graph->nodes.push_back(p);graph->valid.push_back(valid);
        }
        graph->edges.resize(graph->nodes.size());graph->built.resize(graph->nodes.size());map.routeGraph=graph;
    }
    auto& g=*map.routeGraph;const int n=int(g.nodes.size());
    if(costRevision!=map.revision||costFloor!=g.floor){regionalCosts.clear();costRevision=map.revision;costFloor=g.floor;}
    auto connect=[&](Vec3 p){std::vector<std::pair<float,int>> choices;for(int i=0;i<n;++i)if(g.valid[i]&&Distance(p,g.nodes[i])<18)choices.push_back({Distance(p,g.nodes[i]),i});std::sort(choices.begin(),choices.end());return choices;};
    auto starts=connect(from),ends=connect(to);std::vector<float> cost(n,1e9f);std::vector<int> parent(n,-1);std::vector<std::vector<Vec3>> links(n);
    using Entry=std::pair<float,int>;std::priority_queue<Entry,std::vector<Entry>,std::greater<Entry>> open;
    std::vector<Vec3> scratch;
    int used=0;for(auto option:starts){if(used>=4)break;const auto& path=GraphPath(map,g,from,g.nodes[option.second],scratch);if(path.empty())continue;
        cost[option.second]=Measure(from,path).Total();links[option.second]=path;open.push({cost[option.second]+Distance(g.nodes[option.second],to)/speed,option.second});++used;}
    float best=1e9f;int goal=-1;std::vector<Vec3> final;expanded=0;status=RouteStatus::Unreachable;
    while(!open.empty()){
        auto entry=open.top();open.pop();int a=entry.second;Vec3 p=g.nodes[a];if(entry.first>cost[a]+Distance(p,to)/speed+.001f)continue;
        if(entry.first>=best)break;
        if(++expanded>budget){status=RouteStatus::BudgetExhausted;break;}
        if(Distance(p,to)<18){const auto& tail=GraphPath(map,g,p,to,scratch);if(!tail.empty()){float value=cost[a]+Measure(p,tail).Total();if(value<best){best=value;goal=a;final=tail;}}}
        if(!g.built[a]){g.built[a]=true;for(int dy=-1;dy<=1;++dy)for(int dx=-1;dx<=1;++dx){if(!dx&&!dy)continue;
            int x=a%g.width+dx,y=a/g.width+dy;if(x<0||y<0||x>=g.width||y>=g.height)continue;int b=y*g.width+x;if(!g.valid[b])continue;
            auto path=FindPath(map,p,g.nodes[b]);float length=0;Vec3 previous=p;for(auto end:path){length+=Distance(previous,end);previous=end;}
            // An edge is a local region connection; longer topology is represented by other regions.
            if(!path.empty()&&length<=28)g.edges[a].push_back({b,std::move(path)});
        }}
        for(const auto& edge:g.edges[a]){
            // The actor, time and sampled field are immutable for this assessment.
            // Reusing an already measured directed edge preserves the same float result.
            const uint64_t key=uint64_t(a)*uint64_t(n)+uint64_t(edge.to);
            auto cached=regionalCosts.find(key);
            const float traversal=cached!=regionalCosts.end()?cached->second:regionalCosts.emplace(key,Measure(p,edge.points).Total()).first->second;
            float value=cost[a]+traversal;if(value+.001f<cost[edge.to]){cost[edge.to]=value;parent[edge.to]=a;links[edge.to]=edge.points;open.push({value+Distance(g.nodes[edge.to],to)/speed,edge.to});}}
    }
    if(goal<0)return {};
    std::vector<int> sequence;for(int a=goal;a>=0;a=parent[a])sequence.push_back(a);std::reverse(sequence.begin(),sequence.end());std::vector<Vec3> path;
    for(int a:sequence)path.insert(path.end(),links[a].begin(),links[a].end());
    path.insert(path.end(),final.begin(),final.end());
    if(status!=RouteStatus::BudgetExhausted)status=RouteStatus::Complete;
    return path;
}
TacticalRoute TacticalRoutePlanner::Evaluate(Vec3 from,Vec3 to,int budget){
    auto started=std::chrono::steady_clock::now();
    struct Timer {QueryProfile* p;std::chrono::steady_clock::time_point start;~Timer(){if(p)p->tacticalSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();}}timer{map.queryProfile.get(),started};
    if(map.queryProfile)++map.queryProfile->tacticalQueries;
    TacticalRoute r;r.start=from;r.destination=to;r.owner=actor.id;r.geometry=map.revision;r.knowledge=actor.knowledgeRevision;r.evaluatedAt=time;r.speed=speed;r.stance=stance;
    if(std::abs(from.z-to.z)>.02f){r.points=FindPath(map,from,to);r.status=r.points.empty()?RouteStatus::Unreachable:RouteStatus::Complete;}
    else if(Distance(from,to)>12&&std::abs(from.z-to.z)<.02f)r.points=RegionalPath(from,to,budget,r.expanded,r.status);
    else r.points=FindCostPath(map,from,to,[&](Vec3 p){return Sample(p).Total()*speed;},std::min(budget,1200),r.expanded,r.status);
    if(map.queryProfile)map.queryProfile->tacticalExpanded+=uint64_t(r.expanded);
    // A completed physical query supplies an incumbent with fully measured tactical cost.
    // Exhausting the optimization budget never makes a reachable approach look impossible.
    std::vector<Vec3> incumbent;
    if(map.routeGraph&&map.routeGraph->revision==map.revision){std::vector<Vec3> scratch;incumbent=GraphPath(map,*map.routeGraph,from,to,scratch);}
    else incumbent=FindPath(map,from,to);
    if(!incumbent.empty()&&r.status==RouteStatus::Unreachable)r.status=RouteStatus::IncompleteTopology;
    if(!incumbent.empty()&&(r.points.empty()||Measure(from,incumbent).Total()<Measure(from,r.points).Total()))r.points=std::move(incumbent);
    if(r.points.empty())return r;
    std::vector<Vec3> segmented;Vec3 segmentStart=from;
    for(Vec3 end:r.points){int n=std::max(1,int(std::ceil(Distance(segmentStart,end)/6.f)));for(int i=1;i<=n;++i)segmented.push_back(segmentStart+(end-segmentStart)*(float(i)/n));segmentStart=end;}
    r.points=std::move(segmented);
    r.cost=Measure(from,r.points,&r.exposedSeconds);
    RouteStage stage;Vec3 previous=from;
    for(size_t i=0;i<r.points.size();++i){float exposure=0;auto cost=Measure(previous,{r.points[i]},&exposure);stage.seconds+=cost.travel;stage.exposedSeconds+=exposure;
        // Bends and at most twelve metres delimit stages; a protected approach can start before the crossing is ready.
        if(stage.seconds*speed>=12||i+1==r.points.size()){stage.end=i+1;stage.destination=r.points[i];r.stages.push_back(stage);stage={};stage.begin=i+1;}
        previous=r.points[i];
    }
    return r;
}
float CorridorDistance(const TacticalRoute& route,Vec3 p){float best=std::numeric_limits<float>::infinity();Vec3 a=route.start;for(Vec3 b:route.points){best=std::min(best,SegmentDistance(p,a,b));a=b;}return best;}
std::vector<Vec3> FollowFinalApproach(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to){
    if(route.geometry!=map.revision||Distance(to,route.destination)>10)return {};
    // Inside the bounded final area, a clear local approach does not need to
    // funnel every member through the same route centre before reaching cover.
    if(Distance(from,route.destination)<=12&&ClearLine(map,from,to,.48f))return {to};
    auto direct=FollowCorridor(map,route,from,to);if(!direct.empty())return direct;
    int expanded=0;RouteStatus status;
    return FindCostPath(map,from,to,[&](Vec3 p){
        const float lane=CorridorDistance(route,p);
        if(lane>4&&Distance(p,from)>4&&Distance(p,route.destination)>12)return std::numeric_limits<float>::infinity();
        return 1+lane*.2f;
    },6000,expanded,status);
}
std::vector<Vec3> FollowCorridor(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to){
    struct Timer {QueryProfile* p;std::chrono::steady_clock::time_point start;~Timer(){if(p)p->corridorSeconds+=std::chrono::duration<double>(std::chrono::steady_clock::now()-start).count();}}timer{map.queryProfile.get(),std::chrono::steady_clock::now()};
    // Join and leave near the ordered lane; no unrestricted replan may cut across its interior.
    if(Distance(from,to)<.75f&&ClearLine(map,from,to,.48f))return {to};
    struct Join {size_t segment=0;Vec3 point{};float distance=1e9f;};
    auto project=[&](Vec3 p){Join best;Vec3 a=route.start;for(size_t i=0;i<route.points.size();++i){Vec3 b=route.points[i],d=b-a;float square=d.x*d.x+d.y*d.y+d.z*d.z;
        float t=square>.0001f?std::clamp(((p.x-a.x)*d.x+(p.y-a.y)*d.y+(p.z-a.z)*d.z)/square,0.f,1.f):0;
        Vec3 q=a+d*t;float distance=Distance(p,q);if(distance<best.distance){best={i,q,distance};}a=b;}return best;};
    auto start=project(from),end=project(to);
    if(start.distance<=5&&end.distance<=5&&start.segment<=end.segment){
        std::vector<Vec3> path{start.point};for(size_t i=start.segment;i<end.segment;++i)path.push_back(route.points[i]);path.push_back(end.point);path.push_back(to);
        bool valid=true;Vec3 previous=from;for(auto p:path){if(!Walkable(map,p)||!ClearLine(map,previous,p,.48f)){valid=false;break;}previous=p;}
        if(valid)return path;
    }
    int expanded=0;RouteStatus status;
    return FindCostPath(map,from,to,[&](Vec3 p){
        float lane=CorridorDistance(route,p);
        if(lane>4&&Distance(p,from)>4&&Distance(p,to)>4)return std::numeric_limits<float>::infinity();
        return 1+lane*.2f;
    },6000,expanded,status);
}
}
