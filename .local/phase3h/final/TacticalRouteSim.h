#pragma once
#include "BattleSim.h"
#include <functional>
#include <unordered_map>
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
struct ManeuverOption {Vec3 p;Maneuver kind;float score=0,exposure=0;bool support=false;std::shared_ptr<TacticalRoute> route;};
struct ManeuverAssessment {uint64_t geometry=0,knowledge=0;float at=0;Vec3 origin{};std::vector<ManeuverOption> options;};
// Per-assessment field: actor knowledge and evaluation time cannot outlive this query batch.
class TacticalRoutePlanner {
    const Map& map;Soldier actor;float time,speed,caution;Stance stance;
    std::unordered_map<int64_t,RouteCost> samples;
    std::unordered_map<uint64_t,float> regionalCosts;
    uint64_t costRevision=0;float costFloor=0;
    std::vector<Contact> threats;std::vector<FireLane> lanes;std::vector<Vec3> friends;
    std::vector<Vec3> RegionalPath(Vec3 from,Vec3 to,int budget,int& expanded,RouteStatus& status);
public:
    TacticalRoutePlanner(const Map& geometry,const Soldier& knowledge,float at,Doctrine doctrine=Doctrine::Balanced,Stance posture=Stance::Standing);
    RouteCost Sample(Vec3 position);
    TacticalRoute Evaluate(Vec3 from,Vec3 to,int budget=256);
    RouteCost Measure(Vec3 from,const std::vector<Vec3>& path,float* exposedSeconds=nullptr);
};
std::vector<Vec3> FindCostPath(const Map& map,Vec3 from,Vec3 to,const std::function<float(Vec3)>& cost,int budget,int& expanded,RouteStatus& status);
float CorridorDistance(const TacticalRoute& route,Vec3 p);
std::vector<Vec3> FollowCorridor(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to);
// Final occupation may leave the lane only in the bounded destination area.
// Planning and physical execution use this same clearance and search contract.
std::vector<Vec3> FollowFinalApproach(const Map& map,const TacticalRoute& route,Vec3 from,Vec3 to);
}
