#pragma once
#include "RecoverySim.h"
namespace army {
struct ReservedPosition {int soldier=-1;CoverPosition cover;};
struct GroupPositionQuery {
    Vec3 center{},target{},support{},areaMin{-10000,-10000,-10000},areaMax{10000,10000,10000};
    float radius=25,targetRadius=12,angleProbe=6,minAngle=0,groupCap=60,coherenceRadius=50;
    Vec3 boundCenter{};float boundRadius=0;
    float shelterSpacing=2,peekSpacing=1.8f,preferredSpacing=10;
    float travelWeight=.25f,anchorWeight=1,coverWeight=12,lineWeight=20;
    bool firing=false,protectedPosition=false,formation=false;
    bool preferCover=false,safeEndpoint=false;
    float maxPathLength=0;
    // Permission from received buddy fire; only the named objective area is
    // exempt from endpoint protection inside this close-assault radius.
    Vec3 supportedObjective{};float supportedAssaultRadius=0;bool inspectSupportedObjective=false;
    // Optional attack sector and lane-union-disc; defaults preserve basic queries.
    float maxAngle=180,minTargetDistance=0,maxTargetDistance=10000,areaDiscRadius=0;
    Vec3 areaDiscCenter{};
    size_t maxFallbacks=2;
    std::array<Vec3,SquadSize> anchors{};
    std::vector<ReservedPosition> reserved;
    std::shared_ptr<const TacticalRoute> corridor;
};
struct MemberPositions {int soldier=-1;bool valid=false;TacticalSlot primary;std::vector<TacticalSlot> fallbacks;std::string reason;};
std::vector<MemberPositions> QueryPositions(const Soldier& leader,const std::vector<Soldier>& members,const Map& map,const GroupPositionQuery& query,float time,Diagnostics* diagnostics);
}
