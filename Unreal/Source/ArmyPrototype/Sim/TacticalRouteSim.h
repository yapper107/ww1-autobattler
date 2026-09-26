#pragma once
#include "BattleSim.h"
#include <functional>
#include <unordered_map>
#include <limits>
namespace army {
enum class RouteStatus { Complete, Unreachable, BudgetExhausted, UnsupportedSurface, IncompleteTopology };
const char* RouteStatusName(RouteStatus status);
struct RouteCost {
    float travel=0,exposure=0,fire=0,lanes=0,congestion=0,uncertainty=0;
    float Total() const {return travel+exposure+fire+lanes+congestion+uncertainty;}
};
struct RouteStage {size_t begin=0,end=0;Vec3 destination{};float seconds=0,exposedSeconds=0;};
struct TacticalRoute {
    uint64_t id=0,geometry=0,knowledge=0;int owner=-1,plan=0,expanded=0;
    float evaluatedAt=0,speed=3.15f,exposedSeconds=0;Vec3 start{},destination{};
    Stance stance=Stance::Standing;RouteStatus status=RouteStatus::Unreachable;
    RouteCost cost;std::vector<Vec3> points;std::vector<RouteStage> stages;
};
struct ManeuverOption {Vec3 p;Maneuver kind;float score=0,exposure=0;bool support=false;std::shared_ptr<TacticalRoute> route;
    SquadFeatures policyFeatures{}; // features at assessment time, matching cached candidate costs
    bool quiet=false;}; // plan 030 M-S5 (Config::coverQuietRelease): its crossing's overlooking threats are quiet (QuietCrossing)
struct ManeuverAssessment {uint64_t geometry=0,knowledge=0;float at=0;Vec3 origin{};std::vector<ManeuverOption> options;};
// Per-assessment field: actor knowledge and evaluation time cannot outlive this query batch.
class TacticalRoutePlanner {
    const Map& map;Soldier actor;float time,speed,caution;Stance stance;
    // Exact per-assessment sample memo: open addressing with linear probing on the
    // full 64-bit cell key. Only find/insert are used; no iteration order exists.
    struct SampleTable {
        struct Slot {int64_t key;RouteCost cost;};
        static constexpr int64_t Empty=std::numeric_limits<int64_t>::min();
        std::vector<Slot> slots;size_t mask=0,count=0;bool hasEmptyKey=false;RouteCost emptyKeyCost{};
        explicit SampleTable(size_t capacity=8192):slots(capacity,Slot{Empty,{}}),mask(capacity-1){}
        static size_t Hash(int64_t key){return size_t((uint64_t(key)*0x9e3779b97f4a7c15ull)>>32);}
        const RouteCost* Find(int64_t key) const {
            if(key==Empty)return hasEmptyKey?&emptyKeyCost:nullptr;
            for(size_t i=Hash(key)&mask;;i=(i+1)&mask){const Slot& s=slots[i];if(s.key==key)return &s.cost;if(s.key==Empty)return nullptr;}
        }
        void Insert(int64_t key,const RouteCost& cost){ // key is absent
            if(key==Empty){hasEmptyKey=true;emptyKeyCost=cost;return;}
            if((count+1)*2>slots.size()){std::vector<Slot> old(slots.size()*2,Slot{Empty,{}});old.swap(slots);mask=slots.size()-1;
                for(const Slot& s:old)if(s.key!=Empty){size_t i=Hash(s.key)&mask;while(slots[i].key!=Empty)i=(i+1)&mask;slots[i]=s;}}
            size_t i=Hash(key)&mask;while(slots[i].key!=Empty)i=(i+1)&mask;slots[i]={key,cost};++count;
        }
    } samples;
    std::unordered_map<uint64_t,float> regionalCosts;
    uint64_t costRevision=0;float costFloor=0;
    struct SightPoint {Vec3 position;uint64_t packed;};
    struct ThreatSample {
        Vec3 position;float confidence,uncertainty;bool automaticWeapon;
        std::array<SightPoint,3> eyes{};bool eyesReady=false;
    };
    struct ExposureQuery {uint32_t threat=0;uint8_t visible=0,unknownCount=0,unknown[3]={};size_t slots[3]={};};
    std::vector<ExposureQuery> exposureScratch;
    std::vector<ThreatSample> threats;std::vector<FireLane> lanes;std::vector<Vec3> friends;
    SightPoint observerEye{};bool observerEyeReady=false;
    static SightPoint SnapSightPoint(Vec3 position);
    bool EstimatedVisible(const SightPoint& from,const SightPoint& to) const;
    bool EstimatedVisible(const SightPoint& from,const SightPoint& to,size_t slot) const;
    std::vector<Vec3> RegionalPath(Vec3 from,Vec3 to,int budget,int& expanded,RouteStatus& status);
public:
    TacticalRoutePlanner(const Map& geometry,const Soldier& knowledge,float at,Doctrine doctrine=Doctrine::Balanced,Stance posture=Stance::Standing);
    RouteCost Sample(Vec3 position);
    TacticalRoute Evaluate(Vec3 from,Vec3 to,int budget=256);
    RouteCost Measure(Vec3 from,const std::vector<Vec3>& path,float* exposedSeconds=nullptr);
};
// cls (plan 029 M-C): the vault class the search may use; None is the search as it always was.
std::vector<Vec3> FindCostPath(const Map& map,Vec3 from,Vec3 to,const std::function<float(Vec3)>& cost,int budget,int& expanded,RouteStatus& status,VaultClass cls=VaultClass::None);
float CorridorDistance(const TacticalRoute& route,Vec3 p);
// Shared policy/execution area: route buffer union objective disc; rectangle only without a route.
inline bool InOperationArea(Vec3 p,Vec3 lo,Vec3 hi,const std::shared_ptr<const TacticalRoute>& route,float width,Vec3 objective,float radius){
    return (route&&width>0?CorridorDistance(*route,p)<=width:(p.x>=lo.x&&p.x<=hi.x&&p.y>=lo.y&&p.y<=hi.y))||(radius>0&&Distance(p,objective)<=radius);
}
std::vector<Vec3> FollowCorridor(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to);
// Final occupation may leave the lane only in the bounded destination area.
// Planning and physical execution use this same clearance and search contract.
std::vector<Vec3> FollowFinalApproach(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to);
// Plan 033 (ApplyGeometryBatch): the map's route graph if it belongs to its current revision (else null), and the graph of
// a new revision after a local change (the 2D boxes x0, y0, x1, y1): the old graph's nodes, each re-tested only within 4 m of
// a change (a node is its 8 m grid point or the first walkable of eight offsets within 2.83 m), its edges and stored paths
// rebuilt on demand. Installed as map.routeGraph.
std::shared_ptr<RouteGraph> CurrentRouteGraph(const Map& map);
void DeriveRouteGraph(const Map& map,const RouteGraph& previous,const std::vector<std::array<float,4>>& changed);
}
