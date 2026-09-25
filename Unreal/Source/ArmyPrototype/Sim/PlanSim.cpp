#include "PlanSim.h"
#include "CognitiveSim.h"
#include "DrillSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "PlatoonSim.h"
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
#include "FireMovementSim.h"
#include <optional>
namespace army {
const char* SquadPhaseName(SquadPhase p){const char* names[]={"SEARCH","ESTABLISH FIRE","HOLD / SUPPRESS","PREPARE MOVEMENT","BOUND","WITHDRAW","REGROUP","BLOCKED / HOLD"};return names[int(p)];}
void UpdateSquadPlan(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,const Config& config,
    const std::vector<Vec3>& approaches,const std::vector<int>& claimed,SquadCommand& cmd,ProgressRuntime& progress,Diagnostics* diagnostics,float time){
    if(config.drills){UpdateDrillPlan(leader,squad,map,config,approaches,claimed,cmd,diagnostics,time);return;}
    if(config.cognition){UpdateCognitivePlan(leader,squad,map,config,cmd,diagnostics,time);return;}
    const auto old=cmd;
    // Higher orders describe intent. The same squad candidate comparison decides execution.
    if(leader.platoonOrder.serial>cmd.platoonOrderSerial&&time<leader.platoonOrder.expiresAt){
        cmd.platoonOrderSerial=leader.platoonOrder.serial;cmd.platoonTask=leader.platoonOrder.task;cmd.platoonUntil=leader.platoonOrder.expiresAt;
        // Plan 023 E (section 11): the attachment the commander decided travels with the directive
        // that carries it and is kept until he says otherwise: who the squad fights under, where
        // that squad was, and the enemy he named. A merge (E3) puts its men under the host's leader.
        const auto& attach=leader.platoonOrder;
        cmd.attachedTo=attach.attachMerge?-1:attach.attachTo;cmd.mergedInto=attach.attachMerge?attach.attachTo:-1;
        cmd.attachBaseOfFire=attach.attachBaseOfFire;
        if(attach.attachTo>=0){cmd.attachPosition=attach.position;cmd.attachSector=attach.sector;}
        TraceProposal(diagnostics,leader,cmd,map,time,attach.attachTo>=0?(attach.attachMerge?"squad_merged":"squad_attached"):"directive_received",
            attach.attachTo>=0?std::string(attach.attachMerge?"merged into squad ":attach.attachBaseOfFire?"attached as base of fire to squad ":"attached as support to squad ")+
                std::to_string(attach.attachTo):"platoon intent enters squad candidate comparison");
    }
    if(time>=cmd.platoonUntil)cmd.platoonTask=PlatoonTask::None;
    if(config.foundations&&cmd.platoonTask==PlatoonTask::Observe){
        cmd.hasWaypoint=false;cmd.teamPlan={};cmd.searching=false;cmd.phase=SquadPhase::HoldSuppress;
        cmd.planReason="observe assigned sector before committing; judged resistance or reported obstruction";
        if(old.platoonOrderSerial!=cmd.platoonOrderSerial)TraceProposal(diagnostics,leader,cmd,map,time,"goal_observe",cmd.planReason);
        return;
    }
    // Plan 030 K-1 (Config::retireFallen, Legacy only): a man the leader knows was seen to fall is no threat to
    // his gates. His request on such a man is withdrawn, and the manoeuvre and the bound coordination read his
    // knowledge without those tracks (WithoutFallen); everything else (search, stations, orders, reports) is
    // unchanged. Off, or with nothing seen down, the leader himself is read, as before.
    std::optional<Soldier> living;
    if(RetireFallen(config)){RetireFallenRequests(leader,cmd,time,diagnostics);if(KnowsAnyFallen(leader))living=WithoutFallen(leader);}
    const Soldier& threats=living?*living:leader;
    UpdateManeuver(threats,squad,map,config,approaches,cmd,time,diagnostics,living?&leader:nullptr);
    bool stageAdvanced=cmd.route&&old.route&&cmd.route->id==old.route->id&&cmd.routeStage!=old.routeStage;
    bool changed=!stageAdvanced&&cmd.hasWaypoint&&(!old.hasWaypoint||Distance(cmd.waypoint,old.waypoint)>3||old.maneuver!=cmd.maneuver);
    if(stageAdvanced)TraceProposal(diagnostics,leader,cmd,map,time,"route_stage_completed",cmd.planReason);
    if(changed){++cmd.planId;cmd.planStarted=time;cmd.commitUntil=time;TraceProposal(diagnostics,leader,cmd,map,time,"proposal_accepted",cmd.planReason);}
    else if(old.hasWaypoint&&!cmd.hasWaypoint)TraceProposal(diagnostics,leader,old,map,time,cmd.planReason=="movement destination reached"?"plan_completed":"plan_cancelled",cmd.planReason);
    UpdateSearchMission(leader,squad,map,config,cmd,time);
    // Plan 030 M-S6 (Config::noCoveringFire): no internal-bound request and no covering wait.
    const bool noCovering=NoCoveringFire(config);
    // Plan 031 Stage D (Config::fireAndMovement, Legacy only): this squad's team fights by the fire-and-movement drill.
    const bool drill=FireAndMovement(config,leader.team);
    UpdateCoordination(threats,squad,map,claimed,cmd,time,diagnostics,config.coverGraduated&&!config.foundations,
        config.coverRequests&&!config.foundations&&!config.recoveryFixture&&!noCovering,config.coverShift&&!config.foundations&&!config.recoveryFixture,
        config.coverQuietRelease&&!config.foundations&&!config.recoveryFixture,config.coverRifleBase&&config.coverRequests&&!config.foundations&&!config.recoveryFixture&&!noCovering,living?&leader:nullptr,noCovering,CoverSector(config),
        drill,config.fmDeadline);
    // Plan 021 A: the rifle group crosses by bounds. A bound begins when a manoeuvre is
    // committed and again at every queued stage of its route, each with its own fixed slots;
    // it ends with the movement, with a pause, or when the two fire teams bound internally.
    const bool moving=cmd.hasWaypoint&&cmd.movementBlock.reason==MoveBlock::None&&
        cmd.maneuver!=Maneuver::PullBack&&!config.foundations;
    if(moving&&!cmd.teamPlan.bounding&&(!cmd.stations.bound||cmd.stations.plan!=cmd.planId||Distance(cmd.stations.objective,cmd.waypoint)>1))
        PlanGroupStations(leader,squad,map,cmd,config,time);
    // On arrival the stations stay: they are the positions the group fights from. They are given
    // up when the squad is stopped, withdraws, or commits the next bound.
    else if(cmd.stations.bound&&(cmd.movementBlock.reason!=MoveBlock::None||cmd.maneuver==Maneuver::PullBack||config.foundations))cmd.stations.bound=false;
    // Plan 031 D: the drill's leg, its threats, the gate as the leader hears his gun, the deadline, the gun's station and payload.
    if(drill)UpdateFireMovement(threats,leader,squad,map,config,cmd,time,diagnostics);
    if(old.movementBlock.reason==MoveBlock::None&&cmd.movementBlock.reason!=MoveBlock::None){TraceProposal(diagnostics,leader,cmd,map,time,"movement_paused",cmd.movementBlock.reason==MoveBlock::Fire?"execution stopped by recognized pressure or matching soldier refusal":cmd.movementBlock.reason==MoveBlock::Support?"covering fire for crossing became unavailable":"crossing failed to arrive before execution deadline");AnnotatePause(diagnostics,leader.squad);}
    if(old.movementBlock.reason!=MoveBlock::None&&cmd.movementBlock.reason==MoveBlock::None)TraceProposal(diagnostics,leader,cmd,map,time,changed?"movement_revised":cmd.hasWaypoint?"movement_resumed":"movement_abandoned",cmd.planReason);
    auto assessment=cmd;UpdateSquadProgress(leader,squad,map,approaches,assessment,progress,time,false);
    cmd.progress=assessment.progress;cmd.idleSeconds=assessment.idleSeconds;
    // Plan 031 D (W-1's defect, repaired for the drill's teams only): the gun's must-move flag is cleared on the
    // assessment copy when he has moved; kept, it is never cleared and his station is searched again at every plan.
    if(drill)cmd.supportNeedsMove=assessment.supportNeedsMove;
    cmd.phase=cmd.movementBlock.reason!=MoveBlock::None?SquadPhase::Blocked:cmd.hasWaypoint&&cmd.maneuver==Maneuver::PullBack?SquadPhase::Withdraw:
        cmd.teamPlan.bounding?(cmd.teamPlan.released?SquadPhase::Bound:SquadPhase::PrepareMovement):cmd.hasWaypoint||cmd.opportunitySince>=0?SquadPhase::PrepareMovement:
        cmd.engaged?SquadPhase::HoldSuppress:cmd.searching?SquadPhase::Search:SquadPhase::EstablishFire;
    if(!cmd.candidateScores.empty())TraceProposal(diagnostics,leader,cmd,map,time,"candidate_comparison",cmd.candidateScores);
    if(!cmd.hasWaypoint&&!cmd.searching)TraceProposal(diagnostics,leader,cmd,map,time,cmd.opportunitySince>=0||cmd.planReason.find("waits")!=std::string::npos?"proposal_deferred":"proposal_rejected",cmd.planReason);
    if(cmd.phase!=old.phase)TraceProposal(diagnostics,leader,cmd,map,time,"plan_phase",SquadPhaseName(cmd.phase));
}
}
