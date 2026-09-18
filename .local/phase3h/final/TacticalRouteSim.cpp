#include "TacticalRouteSim.h"
#include "CommandSim.h"
#include <algorithm>
#include <cmath>
#include <limits>
#include <queue>
#include <chrono>
namespace army {
struct TacticalVisibilityCache {
    // Coordinates occupy 48 bits. Store the answer in the spare high bit rather
    // than paying an eight-byte alignment pad per entry.
    struct Ray {uint64_t from=0,toAndVisible=0;};
    uint64_t revision=0;std::vector<Ray> rays=std::vector<Ray>(8388608);
};
static bool EstimatedVisible(const Map& map,Vec3 from,Vec3 to){
    auto snap=[](Vec3 p){return Vec3{std::round(p.x*2)*.5f,std::round(p.y*2)*.5f,std::round(p.z*2)*.5f};};from=snap(from);to=snap(to);
    auto pack=[](Vec3 p){return uint64_t(uint16_t(int(p.x*2)+32768))|(uint64_t(uint16_t(int(p.y*2)+32768))<<16)|(uint64_t(uint16_t(int(p.z*2)+32768))<<32);};
    if(!map.tacticalVisibility||map.tacticalVisibility->revision!=map.revision){map.tacticalVisibility=std::make_shared<TacticalVisibilityCache>();map.tacticalVisibility->revision=map.revision;}
    uint64_t a=pack(from),b=pack(to),hash=a*1099511628211ull+b;hash=(hash^(hash>>30))*0xbf58476d1ce4e5b9ull;hash=(hash^(hash>>27))*0x94d049bb133111ebull;hash^=hash>>31;
    auto& entry=map.tacticalVisibility->rays[hash&8388607];if(entry.from==a&&(entry.toAndVisible&0xffffffffffffull)==b)return (entry.toAndVisible>>63)!=0;
    bool visible=ClearLine3D(map,from,to);entry={a,b|(uint64_t(visible)<<63)};return visible;
}
const char* RouteStatusName(RouteStatus s){const char* n[]={"complete","unreachable","budget_exhausted","unsupported_surface","incomplete_topology"};return n[int(s)];}
static float SegmentDistance(Vec3 p,Vec3 a,Vec3 b){Vec3 d=b-a;float len=d.x*d.x+d.y*d.y+d.z*d.z;float t=len>.0001f?std::clamp(((p.x-a.x)*d.x+(p.y-a.y)*d.y+(p.z-a.z)*d.z)/len,0.f,1.f):0;return Distance(p,a+d*t);}
TacticalRoutePlanner::TacticalRoutePlanner(const Map& m,const Soldier& k,float at,Doctrine d,Stance posture):map(m),actor(WithTracks(k,at)),time(at),speed((k.machineGun?2.55f:3.15f)*(k.understoodHealth<55?.72f:1.f)*(posture==Stance::Crouched?.6f:1.f)),caution(d==Doctrine::Cautious?1.4f:d==Doctrine::Aggressive?.7f:1.f),stance(posture){
    // Nearby reports describe one threatened patch. Keep its strongest weapon and uncertainty.
    // All reports remain in actor knowledge and crossing-specific fire tests.
    if(!map.prepared){map.routeGraph.reset();map.tacticalVisibility.reset();}
    samples.reserve(4096);
    for(const auto& lane:actor.blockedLanes)if(time-lane.observedAt<6&&Distance(lane.origin,lane.target)>1)lanes.push_back(lane);
    for(int i=0;i<UnitCount;++i)if(i!=actor.id&&actor.allies[i].known&&time-actor.allies[i].observedAt<5)friends.push_back(actor.allies[i].position);
    for(const auto& ct:actor.contacts)if(ct.known){bool merged=false;
        for(auto& group:threats)if(Distance(group.position,ct.position)<4&&group.automaticWeapon==ct.automaticWeapon){if(ct.observedAt>group.observedAt)group=ct;merged=true;break;}
        if(!merged)threats.push_back(ct);
    }
}
RouteCost TacticalRoutePlanner::Sample(Vec3 p){
    // Half-metre cells, including elevation. Query batches are never shared between actors.
    int64_t key=(int64_t(std::lround((p.z+32)*2))*2048+std::lround((p.y+512)*2))*2048+std::lround((p.x+512)*2);
    auto found=samples.find(key);if(found!=samples.end())return found->second;
    RouteCost c;c.travel=1/speed;float seen=0;
    for(const auto& ct:threats){
        float confidence=TrackConfidence(ct,time),u=std::min(8.f,std::ceil(TrackUncertainty(ct,time)/2)*2);
        // Even full visibility of this report cannot raise the current maximum.
        // This bound skips only queries whose exact result cannot affect the cost.
        if(seen>=confidence*(ct.automaticWeapon?1.f:.7f))continue;
        if(Distance(ct.position,p)>100+u)continue;
        float visible=0;const Vec3 offsets[3]={{0,0},{u,0},{-u,0}};
        for(Vec3 offset:offsets)if(EstimatedVisible(map,ct.position+offset+Vec3{0,0,1.5f},p+Vec3{0,0,stance==Stance::Crouched?.9f:1.5f}))visible+=1.f/3;
        seen=std::max(seen,visible*confidence*(ct.automaticWeapon?1.f:.7f));
    }
    c.exposure=seen*8*caution/speed;
    c.fire=FireDanger(actor,p,time)*6*caution/speed;
    for(const auto& lane:lanes)
        c.lanes=std::max(c.lanes,std::max(0.f,1-SegmentDistance(p,lane.origin,lane.target)/2)*2/speed);
    bool observed=Distance(p,actor.position)<20&&EstimatedVisible(map,actor.position+Vec3{0,0,1.5f},p+Vec3{0,0,1.5f});
    c.uncertainty=observed?0:.12f*caution/speed;
    for(Vec3 friendPosition:friends)c.congestion+=std::max(0.f,1-Distance(p,friendPosition)/2)*.5f/speed;
    samples.emplace(key,c);return c;
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
};
std::vector<Vec3> TacticalRoutePlanner::RegionalPath(Vec3 from,Vec3 to,int budget,int& expanded,RouteStatus& status){
    if(!map.routeGraph||map.routeGraph->revision!=map.revision||map.routeGraph->floor!=from.z){
        auto graph=std::make_shared<RouteGraph>();graph->revision=map.revision;graph->floor=from.z;
        graph->width=int(std::ceil(map.halfWidth*2/8))+1;graph->height=int(std::ceil(map.halfHeight*2/8))+1;
        for(int y=0;y<graph->height;++y)for(int x=0;x<graph->width;++x){Vec3 p{-map.halfWidth+x*8,-map.halfHeight+y*8,from.z};bool valid=Walkable(map,p);
            if(!valid)for(Vec3 offset:std::vector<Vec3>{{2,0},{-2,0},{0,2},{0,-2},{2,2},{-2,2},{2,-2},{-2,-2}})if(Walkable(map,p+offset)){p=p+offset;valid=true;break;}
            graph->nodes.push_back(p);graph->valid.push_back(valid);
        }
        graph->edges.resize(graph->nodes.size());graph->built.resize(graph->nodes.size());map.routeGraph=graph;
    }
    auto& g=*map.routeGraph;const int n=int(g.nodes.size());
    if(costRevision!=map.revision||costFloor!=g.floor){regionalCosts.clear();costRevision=map.revision;costFloor=g.floor;}
    auto connect=[&](Vec3 p){std::vector<std::pair<float,int>> choices;for(int i=0;i<n;++i)if(g.valid[i]&&Distance(p,g.nodes[i])<18)choices.push_back({Distance(p,g.nodes[i]),i});std::sort(choices.begin(),choices.end());return choices;};
    auto starts=connect(from),ends=connect(to);std::vector<float> cost(n,1e9f);std::vector<int> parent(n,-1);std::vector<std::vector<Vec3>> links(n);
    using Entry=std::pair<float,int>;std::priority_queue<Entry,std::vector<Entry>,std::greater<Entry>> open;
    int used=0;for(auto option:starts){if(used>=4)break;auto path=FindPath(map,from,g.nodes[option.second]);if(path.empty())continue;
        cost[option.second]=Measure(from,path).Total();links[option.second]=path;open.push({cost[option.second]+Distance(g.nodes[option.second],to)/speed,option.second});++used;}
    float best=1e9f;int goal=-1;std::vector<Vec3> final;expanded=0;status=RouteStatus::Unreachable;
    while(!open.empty()){
        auto entry=open.top();open.pop();int a=entry.second;Vec3 p=g.nodes[a];if(entry.first>cost[a]+Distance(p,to)/speed+.001f)continue;
        if(entry.first>=best)break;
        if(++expanded>budget){status=RouteStatus::BudgetExhausted;break;}
        if(Distance(p,to)<18){auto tail=FindPath(map,p,to);if(!tail.empty()){float value=cost[a]+Measure(p,tail).Total();if(value<best){best=value;goal=a;final=tail;}}}
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
    auto incumbent=FindPath(map,from,to);
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
