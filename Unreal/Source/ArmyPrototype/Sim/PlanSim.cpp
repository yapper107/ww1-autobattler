#include "PlanSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "PlatoonSim.h"
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
namespace army {
const char* SquadPhaseName(SquadPhase p){const char* names[]={"SEARCH","ESTABLISH FIRE","HOLD / SUPPRESS","PREPARE MOVEMENT","BOUND","WITHDRAW","REGROUP","BLOCKED / HOLD"};return names[int(p)];}
void UpdateSquadPlan(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,const Config& config,
    const std::vector<Vec3>& approaches,const std::vector<int>& claimed,SquadCommand& cmd,ProgressRuntime& progress,Diagnostics* diagnostics,float time){
    const auto old=cmd;
    // Higher orders describe intent. The same squad candidate comparison decides execution.
    if(leader.platoonOrder.serial>cmd.platoonOrderSerial&&time<leader.platoonOrder.expiresAt){
        cmd.platoonOrderSerial=leader.platoonOrder.serial;cmd.platoonTask=leader.platoonOrder.task;cmd.platoonUntil=leader.platoonOrder.expiresAt;
        TraceProposal(diagnostics,leader,cmd,map,time,"directive_received","platoon intent enters squad candidate comparison");
    }
    if(time>=cmd.platoonUntil)cmd.platoonTask=PlatoonTask::None;
    UpdateManeuver(leader,squad,map,config,approaches,cmd,time,diagnostics);
    bool stageAdvanced=cmd.route&&old.route&&cmd.route->id==old.route->id&&cmd.routeStage!=old.routeStage;
    bool changed=!stageAdvanced&&cmd.hasWaypoint&&(!old.hasWaypoint||Distance(cmd.waypoint,old.waypoint)>3||old.maneuver!=cmd.maneuver);
    if(stageAdvanced)TraceProposal(diagnostics,leader,cmd,map,time,"route_stage_completed",cmd.planReason);
    if(changed){++cmd.planId;cmd.planStarted=time;cmd.commitUntil=time;TraceProposal(diagnostics,leader,cmd,map,time,"proposal_accepted",cmd.planReason);}
    else if(old.hasWaypoint&&!cmd.hasWaypoint)TraceProposal(diagnostics,leader,old,map,time,cmd.planReason=="movement destination reached"?"plan_completed":"plan_cancelled",cmd.planReason);
    UpdateSearchMission(leader,squad,map,config,cmd,time);
    UpdateCoordination(leader,squad,map,claimed,cmd,time);
    if(old.movementBlock.reason==MoveBlock::None&&cmd.movementBlock.reason!=MoveBlock::None)TraceProposal(diagnostics,leader,cmd,map,time,"movement_paused",cmd.movementBlock.reason==MoveBlock::Fire?"execution stopped by recognized pressure or matching soldier refusal":cmd.movementBlock.reason==MoveBlock::Support?"covering fire for crossing became unavailable":"crossing failed to arrive before execution deadline");
    if(old.movementBlock.reason!=MoveBlock::None&&cmd.movementBlock.reason==MoveBlock::None)TraceProposal(diagnostics,leader,cmd,map,time,changed?"movement_revised":cmd.hasWaypoint?"movement_resumed":"movement_abandoned",cmd.planReason);
    auto assessment=cmd;UpdateSquadProgress(leader,squad,map,approaches,assessment,progress,time,false);
    cmd.progress=assessment.progress;cmd.idleSeconds=assessment.idleSeconds;
    cmd.phase=cmd.movementBlock.reason!=MoveBlock::None?SquadPhase::Blocked:cmd.hasWaypoint&&cmd.maneuver==Maneuver::PullBack?SquadPhase::Withdraw:
        cmd.teamPlan.bounding?(cmd.teamPlan.released?SquadPhase::Bound:SquadPhase::PrepareMovement):cmd.hasWaypoint||cmd.opportunitySince>=0?SquadPhase::PrepareMovement:
        cmd.engaged?SquadPhase::HoldSuppress:cmd.searching?SquadPhase::Search:SquadPhase::EstablishFire;
    if(!cmd.candidateScores.empty())TraceProposal(diagnostics,leader,cmd,map,time,"candidate_comparison",cmd.candidateScores);
    if(!cmd.hasWaypoint&&!cmd.searching)TraceProposal(diagnostics,leader,cmd,map,time,cmd.opportunitySince>=0||cmd.planReason.find("waits")!=std::string::npos?"proposal_deferred":"proposal_rejected",cmd.planReason);
    if(cmd.phase!=old.phase)TraceProposal(diagnostics,leader,cmd,map,time,"plan_phase",SquadPhaseName(cmd.phase));
}
}
