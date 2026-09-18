#pragma once
#include "BattleSim.h"
#include <chrono>
#include <unordered_map>
#ifndef ARMY_BUILD_ID
#define ARMY_BUILD_ID "unversioned"
#endif
namespace army {
std::string BuildIdentifier();
struct Alternative { Vec3 position{}; float score=0; std::string reason; };
struct DecisionAlternatives { std::vector<Alternative> choices; void Add(Vec3 p,float score,const char* reason); };
struct TraceContact { int id=-1; bool personal=false; Contact contact; };
struct TraceEntry {
    ExecutionContract execution;
    Vec3 peek{},sector{};
    int support=-1,supportSquad=-1;
    bool supportDeployed=false,supportUseful=false;
    SupportProgress supportProgress;
    float supportDeadline=0;
    float stageDeadline=0;
    std::array<InjuryAssessment,SquadSize> injuries{};
    float taskRemaining=-1;
    int supportThreat=-1,localSupport=-1,localThreat=-1;bool localUseful=false;float localDeadline=0;Vec3 localSector{},localPosition{};
    std::vector<FriendlyIntent> friendlyIntent;
    std::vector<ObservationCoverage> coverage;
    std::vector<FailedAttempt> attempts;
    std::vector<int> movers,holders,scouts;
    float scoutDeadline=0,prepareDeadline=0;
    std::vector<SupportFailure> supportFailures;
    bool foundations=false;
    Vec3 look{};float estimateBias=0;
    std::vector<RegionEstimate> regions;
    GoalIntent intent;
    int goalStatus=-1;float goalObservedAt=-100;
    uint64_t taskId=0;int taskStatus=0,taskCause=0,taskSequence=0,taskSubject=-1,taskTarget=-1;float taskObservedAt=0;
    uint64_t id=0,parent=0,geometry=1,planDecision=0;
    float time=0; int soldier=-1,squad=-1,order=0,issuer=-1,plan=0;
    std::string kind,reason,phase;
    Vec3 position{},goal{},cover{},orderGoal{};
    uint64_t coverId=0,routeId=0;int routeStage=0;
    bool assigned=false,protectedPosition=false,nearShelter=false,supportReady=false,blocked=false,alive=true;
    int action=0,task=0,stance=0,rounds=0,role=0,movementBlock=0;
    float aim=0,suppression=0,danger=0,health=100,orderIssued=0,orderReceived=0;
    Stats stats;float maxHealth=100;const char* weapon="Rifle";int magazine=8;
    float swayYaw=0,swayPitch=0,recoilYaw=0,recoilPitch=0;
    std::vector<TraceContact> knowledge;
    std::vector<MoveFailure> movementReports;
    std::vector<FireDelivery> deliveries;
    std::vector<Alternative> alternatives;
};
struct TracePrevious { bool valid=false; TraceEntry state; float heartbeat=-100; };
struct PathEvidence {
    uint64_t decision=0,geometry=0,route=0; float time=0; int soldier=-1,squad=-1,order=0;
    Vec3 start{},goal{}; std::string kind,status; std::vector<Vec3> points;
};
struct Diagnostics {
    DiagnosticOptions options;
    uint64_t nextId=1;
    std::array<TracePrevious,UnitCount> previous;
    std::array<uint64_t,UnitCount> lastDecision{};
    std::array<uint64_t,SquadCount> lastPlan{};
    std::vector<TraceEntry> entries;
    std::vector<PathEvidence> paths;
    std::vector<std::shared_ptr<const TacticalRoute>> routes;
    std::unordered_map<int,uint64_t> issuedOrders,receivedOrders;
    std::array<int,SquadCount> activePlanIds{};
    double perception=0,commands=0,decisions=0,movement=0,ballistics=0,firing=0,recording=0,trace=0,total=0;
};
using DiagnosticClock=std::chrono::steady_clock;
double DiagnosticSeconds(DiagnosticClock::time_point start);
bool DetailedFor(const Diagnostics* d,int id,int squad,float time);
void TraceSoldier(Diagnostics& data,const Soldier& soldier,const SquadCommand& command,const Map& map,const Tactics& tactics,float time,const DecisionAlternatives* alternatives=nullptr);
void TraceProposal(Diagnostics* data,const Soldier& leader,const SquadCommand& command,const Map& map,float time,const char* kind,const std::string& reason);
void TraceOrder(Diagnostics* diagnostics,const Soldier& recipient,const Assignment& order,float time,const char* kind);
void TracePath(Diagnostics* data,const Soldier& soldier,const Map& map,float time,const std::vector<Vec3>& path,const char* kind,uint64_t route=0);
// digest: a GameplayDigest already computed for this record, or 0 to compute it here.
// The digest walks every recorded frame, so callers that also print it pass it in.
std::string ExportBattle(const Record& record,const std::string& root,const std::string& build="development",uint64_t digest=0);
std::string TraceJson(const TraceEntry& entry);
void ExportEvaluation(const Record& record,const std::string& directory);
uint64_t GameplayDigest(const Record& record);
}
