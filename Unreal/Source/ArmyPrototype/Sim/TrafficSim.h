#pragma once
#include "BattleSim.h"
namespace army {
struct Passage {Vec3 center,half;bool stairs=false;uint64_t id=0;};
struct TrafficInput {const Soldier* soldier=nullptr;Vec3 next{};bool moving=false;};
struct TrafficDecision {bool waiting=false;int passage=-1;Vec3 holdingPoint{};};
struct PassageLease {int owner=-1;int squad=-1;Vec3 direction{};bool entered=false, evacuating=false;float movedAt=0;Vec3 lastPosition{};};
struct TrafficRuntime {
    std::array<std::vector<PassageLease>,2> leases;
    std::array<int,UnitCount> pending{};
    std::array<float,UnitCount> since{},nextHoldingCheck{};
    std::array<Vec3,UnitCount> holding{},goal{};
    bool initialized=false;uint64_t geometry=0;
};
std::vector<Passage> BuildingPassages(const Map& map);
bool InsidePassage(const Passage& passage,Vec3 position,float padding=0);
std::array<TrafficDecision,UnitCount> CoordinatePassages(const Map& map,const std::vector<Passage>& passages,
    const std::vector<TrafficInput>& friendly,TrafficRuntime& runtime,float time);
}
