#include "PlatoonSim.h"
#include "DrillSim.h"
#include "BeliefSim.h"
#include "Diagnostics.h"
#include "CommandSim.h"
#include "CognitiveSim.h"
#include "PerceptionSim.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <cmath>
namespace army {
static void TraceGoalFeedback(Diagnostics* d,const Soldier& observer,const SquadSituation& report,float time,const char* kind,const char* reason){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=observer.id;e.squad=report.squad;
    e.kind=kind;e.reason=reason;e.intent.id=report.goalId;e.goalStatus=int(report.goalStatus);e.goalObservedAt=report.observedAt;
    d->entries.push_back(e);
}
const char* RankTag(Role r) {
    const char* tags[]={"SGT","CPL","","MG","LT","PSG"};return tags[int(r)];
}
const char* PlatoonTaskName(PlatoonTask t) {
    const char* names[]={"LOCAL INITIATIVE","SUPPORT ENGAGED SQUAD","PLATOON FLANK NORTH","PLATOON FLANK SOUTH","CONSOLIDATE ON MAIN EFFORT","PLATOON RESERVE","OBSERVE BEFORE COMMITTING","WITHDRAW"};return names[int(t)];
}
bool GoalAlternative(const SquadSituation& report,const PlatoonDirective& previous,float time,PlatoonDirective& next,bool cognition){
    if(!previous.intent.id||!previous.hasAlternative||report.goalId!=previous.intent.id||
        (cognition&&report.directive!=previous.serial)||
        report.observedAt<previous.issuedAt||report.observedAt>time||time-report.observedAt>15||
        time>=previous.expiresAt||(report.goalStatus!=TaskStatus::Blocked&&report.goalStatus!=TaskStatus::Failed))return false;
    next=previous;next.intent.parent=previous.intent.id;next.intent.id=0;
    next.task=previous.alternativeTask;next.position=previous.alternativePosition;
    next.intent.purpose=next.task==PlatoonTask::Observe?GoalPurpose::Observe:GoalPurpose::Seize;
    next.intent.objective=next.task==PlatoonTask::Observe?previous.sector:next.position;
    if(cognition&&next.task==PlatoonTask::Observe){
        bool tried=report.observationComplete;
        for(const auto& failure:report.attempts)tried|=failure.method==CognitiveMethod::Observe;
        if(tried){next.task=PlatoonTask::Reserve;next.position=report.position;next.intent.purpose=GoalPurpose::Support;next.intent.objective=report.position;}
    }
    next.hasAlternative=false;next.issuedAt=time;next.expiresAt=cognition?previous.expiresAt:time+60;next.intent.expiresAt=next.expiresAt;return true;
}
std::vector<PlannedPlatoonOrder> PlanPlatoon(const Soldier& commander,const Map& map,const Config& config,float time) {
    const SquadSituation* effort=nullptr;float priority=-1;
    for(const auto& r:commander.platoonReports)if(r.squad>=0&&r.leader>=0&&r.active>=2&&time-r.observedAt<15&&r.contact.known&&TrackConfidence(r.contact,time)>.15f){
        float value=(r.contact.automaticWeapon?3.f:0.f)+(r.engaged?2.f:0.f)+r.danger+(r.movementBlocked?1.f:0.f);
        if(value>priority){priority=value;effort=&r;}
    }
    if(!effort)return {};
    const SquadSituation* support=effort;float gunScore=-1e9f;
    for(const auto& r:commander.platoonReports)if(r.squad>=0&&r.leader>=0&&r.active>=2&&time-r.observedAt<15&&Distance(r.position,effort->contact.position)<110){
        float score=r.machineGuns*8+(r.supportUseful?4.f:0.f)-Distance(r.position,effort->contact.position)*.03f;
        if(score>gunScore){gunScore=score;support=&r;}
    }
    const SquadSituation* mover=nullptr;float best=-1e9f;
    for(const auto& r:commander.platoonReports)if(r.squad>=0&&r.leader>=0&&r.squad!=support->squad&&r.mobile>=2&&time-r.observedAt<15){
        float score=r.mobile*2-r.suppression*10-r.danger*6-r.machineGuns*8-Distance(r.position,effort->contact.position)*.05f;
        if(score>best){best=score;mover=&r;}
    }
    auto directive=[&](PlatoonTask task,Vec3 p){PlatoonDirective d;d.task=task;d.issuer=commander.id;d.position=p;d.sector=effort->contact.position;d.contact=effort->contact;d.enemy=effort->enemy;d.issuedAt=time;d.expiresAt=config.cognition?config.maxSeconds:time+60;return d;};
    std::vector<PlannedPlatoonOrder> orders{{support->leader,directive(PlatoonTask::Support,support->position)}};
    if(!mover)return orders;
    float sign=commander.team?-1.f:1.f;Vec3 goal=mover->position;float routeScore=1e9f;PlatoonTask task=PlatoonTask::Consolidate;
    struct ApproachCandidate {Vec3 p;float score;float side;};std::vector<ApproachCandidate> approaches;
    TacticalRoutePlanner planner(map,commander,time,commander.team?config.emberDoctrine:config.doctrine);
    for(float side:{-1.f,1.f}){
        std::vector<ApproachCandidate> choices;
        for(const auto& cover:CoverPositions(map)){
            Vec3 p=config.cognition?cover.peek:cover.shelter,desired=effort->contact.position+Vec3{-sign*12,side*40};float travel=Distance(p,mover->position);
            if(cover.window||travel<8||travel>140||std::abs(p.z-mover->position.z)>.5f||!ProtectedAt(map,cover.shelter,effort->contact.position,cover.crouch?Stance::Crouched:Stance::Standing))continue;
            if(config.cognition&&(Distance(cover.peek,effort->contact.position)>68||!ClearLine3D(map,cover.peek+Vec3{0,0,1.5f},Vec3{effort->contact.position.x,effort->contact.position.y,effort->contact.aimHeight})))continue;
            // Arrival must improve an angle or observation relationship, not just change latitude.
            float score=Distance(p,desired)+travel*.12f+FireDanger(commander,p,time)*20;
            choices.push_back({p,score,side});
        }
        std::stable_sort(choices.begin(),choices.end(),[](const auto& a,const auto& b){return a.score<b.score;});
        for(size_t i=0;i<std::min(size_t(2),choices.size());++i)approaches.push_back(choices[i]);
    }
    for(const auto& candidate:approaches){auto route=planner.Evaluate(mover->position,candidate.p);if(route.points.empty())continue;
        float score=candidate.score+route.cost.Total()*.5f;
        if(score<routeScore){routeScore=score;goal=candidate.p;task=candidate.side<0?PlatoonTask::FlankNorth:PlatoonTask::FlankSouth;}
    }
    auto movement=directive(task,goal);
    if(config.cognition){movement.supportSoldier=support->supportSoldier;movement.supportSquad=support->squad;}
    if(config.foundations){
        movement.intent.purpose=GoalPurpose::Seize;movement.intent.objective=goal;
        movement.hasAlternative=true;movement.alternativeTask=PlatoonTask::Observe;movement.alternativePosition=mover->position;
        const float resistance=BelievedStrength(commander,effort->contact.position,24,time);
        const float available=mover->mobile+(support->supportUseful?2.f:0.f);
        if(resistance>available*(config.cognition?.8f+commander.officer.risk*1.4f:1.5f)){
            movement.task=PlatoonTask::Observe;movement.position=mover->position;
            movement.intent.purpose=GoalPurpose::Observe;movement.intent.objective=effort->contact.position;
            movement.hasAlternative=false;
            if(config.cognition){
                bool inspected=mover->observationComplete||(mover->contact.known&&time-mover->contact.observedAt<8&&Distance(mover->contact.position,movement.intent.objective)<8);
                for(const auto& evidence:mover->coverage)inspected|=time-evidence.observedAt<30&&CoverageSamples(evidence.samples)>=5&&Distance(evidence.sector,effort->contact.position)<8;
                for(const auto& attempt:mover->attempts)inspected|=attempt.method==CognitiveMethod::Observe&&attempt.geometry==map.revision&&Distance(attempt.objective,movement.intent.objective)<8;
                if(inspected){movement.task=PlatoonTask::Reserve;movement.intent.purpose=GoalPurpose::Support;movement.intent.objective=mover->position;}
            }
        }
        if(config.cognition&&resistance>available*2.5f&&commander.officer.risk<.4f){
            movement.task=PlatoonTask::Withdraw;movement.intent.purpose=GoalPurpose::Withdraw;
            Vec3 delta=mover->position-effort->contact.position;
            Vec3 desired=mover->position+delta*(18/std::max(1.f,Length(delta))),resolved;
            if(ResolveOrderPosition(map,mover->position,desired,resolved))movement.position=resolved;
            else movement.position=mover->position;
            movement.intent.objective=movement.position;movement.hasAlternative=false;
        }
        orders.front().directive.intent.purpose=GoalPurpose::Support;
        orders.front().directive.intent.objective=effort->contact.position;
    }
    orders.push_back({mover->leader,movement});
    const SquadSituation* reserve=nullptr;
    for(const auto& r:commander.platoonReports)if(r.squad>=0&&r.leader>=0&&r.squad!=mover->squad&&r.squad!=support->squad&&time-r.observedAt<15&&(!reserve||r.mobile>reserve->mobile))reserve=&r;
    for(const auto& r:commander.platoonReports)if(r.squad>=0&&r.leader>=0&&r.squad!=mover->squad&&r.squad!=support->squad&&time-r.observedAt<15){
        bool held=&r==reserve;Vec3 desired=mover->position+Vec3{-sign*(held?20.f:10.f),held?10.f:-10.f};
        Vec3 delta=desired-r.position;float d=Length(delta);if(d>30)desired=r.position+delta*(30/d);
        orders.push_back({r.leader,directive(held?PlatoonTask::Reserve:PlatoonTask::Consolidate,desired)});
    }
    return orders;
}
void ApplyPlatoonDirective(const Soldier& leader,SquadCommand& cmd,float time) {
    if(time>=cmd.platoonUntil)cmd.platoonTask=PlatoonTask::None;
    const auto& order=leader.platoonOrder;
    if(order.serial<=cmd.platoonOrderSerial||time>=order.expiresAt)return;
    // Personal danger can veto the manoeuvre; an order never overrides withdrawal.
    if(cmd.danger>0.7f||(cmd.hasWaypoint&&cmd.maneuver==Maneuver::PullBack))return;
    cmd.platoonOrderSerial=order.serial;cmd.platoonTask=order.task;cmd.platoonUntil=order.expiresAt;
    if(order.task==PlatoonTask::FlankNorth||order.task==PlatoonTask::FlankSouth) {
        cmd.hasWaypoint=true;cmd.waypoint=order.position;
        cmd.maneuver=order.task==PlatoonTask::FlankNorth?Maneuver::FlankNorth:Maneuver::FlankSouth;
        cmd.maneuverUntil=order.expiresAt;cmd.nextManeuverAt=time+25;
        cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;
    }
}
void UpdatePlatoon(Frame& f,const Map& map,const Config& config,PlatoonRuntime& rt,ReactionRuntime& reactions,std::vector<Event>& events) {
    // Transport/succession may inspect friendly endpoint activity. Policy cannot.
    for(int team=0;team<2;++team) {
        auto& cmd=f.platoon[team];
        if(cmd.leader>=0&&!f.soldiers[cmd.leader].Active()) {
            events.push_back({f.time,EventKind::Succession,cmd.leader,-1,"Platoon commander down; squads continue existing orders"});
            cmd.leader=-1;cmd.disruptedUntil=f.time+3;
        }
        if(cmd.leader<0&&f.time>=cmd.disruptedUntil) {
            if(cmd.sergeant>=0&&f.soldiers[cmd.sergeant].Active())cmd.leader=cmd.sergeant;
            else for(int squad=team*SquadsPerTeam;squad<(team+1)*SquadsPerTeam;++squad)if(f.command[squad].leader>=0){cmd.leader=f.command[squad].leader;break;}
            if(cmd.leader>=0){cmd.nextPlanAt=f.time;events.push_back({f.time,EventKind::Succession,cmd.leader,-1,std::string(Name(cmd.leader))+" assumes platoon command using their own received reports"});}
        }
    }
    for(size_t i=0;i<rt.messages.size();) {
        auto m=rt.messages[i];if(m.arrives>f.time){++i;continue;}rt.messages.erase(rt.messages.begin()+i);
        auto& recipient=f.soldiers[m.recipient];const auto& sender=f.soldiers[m.sender];
        if(!recipient.Active()||!sender.Active()||recipient.team!=sender.team)continue;
        if(m.order&&(f.platoon[sender.team].leader!=sender.id||f.command[recipient.squad].leader!=recipient.id))continue;
        PendingReaction p;p.source=m.sender;p.kind=m.order?ReactionKind::PlatoonOrder:ReactionKind::PlatoonReport;
        p.directive=m.directive;p.situation=m.situation;QueueReaction(recipient,p,f.time,reactions);
        if(m.order)events.push_back({f.time,EventKind::OrderReceived,m.sender,m.recipient,std::string(Name(m.recipient))+" hears "+PlatoonTaskName(m.directive.task)});
    }
    for(int squad=0;squad<SquadCount;++squad) {
        if(f.time<rt.nextReport[squad])continue;
        rt.nextReport[squad]=f.time+(TypedController(config)?1.f:3.f);
        int leader=f.command[squad].leader;if(leader<0)continue;
        const auto& local=f.soldiers[leader];auto& platoon=f.platoon[local.team];
        int receiver=platoon.sergeant>=0&&f.soldiers[platoon.sergeant].Active()?platoon.sergeant:platoon.leader;
        if(receiver<0)continue;
        SquadSituation report;report.squad=squad;report.leader=leader;report.observedAt=f.time;
        for(const auto& s:f.soldiers)if(s.squad==squad&&s.Active()&&!IsPlatoonStaff(s)) {
            report.position=report.position+s.position;++report.active;report.machineGuns+=s.machineGun;
            report.suppression+=s.understoodSuppression;
            report.mobile+=!KnowsWounded(local,s)&&s.understoodSuppression<.5f;
        }
        if(report.active)report.suppression/=report.active;
        if(report.active)report.position=report.position*(1.f/report.active);
        report.movementBlocked=f.command[squad].movementBlock.reason!=MoveBlock::None;
        report.engaged=f.command[squad].engaged;report.danger=f.command[squad].danger;report.supportUseful=f.command[squad].supportUseful;
        auto knowledge=WithTracks(local,f.time);
        if(config.foundations){
            if(TypedController(config))for(const auto& delivery:local.deliveries)if(delivery.shooter>=0&&f.time-delivery.observedAt<6)report.deliveries.push_back(delivery);
            report.goalId=f.time<local.platoonOrder.expiresAt?local.platoonOrder.intent.id:0;
            report.goalStatus=ReportedGoalStatus(local,f.time);
            if(config.cognition){const auto& plan=f.command[squad].accepted;
                report.directive=plan.directive;report.goalId=plan.intent.parent;report.goalObjective=plan.mission.objective;report.goalPurpose=plan.mission.purpose;
                report.method=plan.method;report.attempts=plan.attempts;report.lastProgress=plan.lastProgress;
                report.observationComplete=plan.informationGained;
                report.movementBlocked=plan.stage==MethodStage::Blocked;
                report.supportUseful=ReceivedUsefulSupport(local,plan.sector,f.time);
                for(const auto& member:f.soldiers)if(member.squad==squad&&member.Active()&&member.machineGun)report.supportSoldier=member.id;
                for(const auto& evidence:local.coverage)if(evidence.observer>=0&&f.time-evidence.observedAt<120)report.coverage.push_back(evidence);
                const bool reachedIntent=(plan.mission.purpose==GoalPurpose::Observe&&plan.method==CognitiveMethod::Observe)||
                    (plan.method!=CognitiveMethod::Observe&&Distance(plan.destination,plan.mission.objective)<=plan.mission.radius);
                report.goalStatus=plan.stage==MethodStage::Complete&&reachedIntent?TaskStatus::Done:plan.stage==MethodStage::Blocked&&plan.exhausted?TaskStatus::Blocked:TaskStatus::Executing;
            }
            if(config.drills){const auto& p=f.command[squad].battleDrill;report.drillInstance=p.instance;report.drillKind=int(p.kind);report.goalId=p.intent.parent;report.goalObjective=p.intent.objective;report.goalPurpose=p.intent.purpose;report.goalStatus=p.blocked?TaskStatus::Blocked:TaskStatus::Executing;report.drillCause=p.action.cause!=TaskCause::None?p.action.cause:p.blocked?TaskCause::Support:TaskCause::None;report.movementBlocked=p.blocked;}
            if((report.goalId||config.drills)&&report.goalStatus!=TaskStatus::Executing)
                TraceGoalFeedback(reactions.diagnostics,local,report,f.time,"goal_feedback_sent","status derived from matching received member receipts");
            for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
                if(ct.known||f.time-ct.clearedAt<15)report.observations.push_back({id,ct});
            }
        }
        float contactPriority=-1e9f;
        for(int enemy=0;enemy<UnitCount;++enemy) {
            const auto& ct=knowledge.contacts[enemy];
            if(!ct.known||f.time-ct.observedAt>120)continue;
            float priority=ct.observedAt+(ct.automaticWeapon?6.f:0.f);
            if(priority>contactPriority){contactPriority=priority;report.contact=ct;report.contact.visible=false;report.enemy=enemy;}
        }
        rt.messages.push_back({false,leader,receiver,f.time+(TypedController(config)?config.reportDelay:MessageDelay),report,{}});
    }
    for(int team=0;team<2;++team) {
        auto& cmd=f.platoon[team];int sergeant=cmd.sergeant;
        if(sergeant>=0&&cmd.leader>=0&&sergeant!=cmd.leader&&f.soldiers[sergeant].Active()&&f.time>=rt.nextRelay[team]) {
            rt.nextRelay[team]=f.time+(TypedController(config)?.5f:2.f);
            for(const auto& report:f.soldiers[sergeant].platoonReports)if(report.squad>=0&&f.time-report.observedAt<12)
                rt.messages.push_back({false,sergeant,cmd.leader,f.time+(TypedController(config)?config.reportDelay:MessageDelay),report,{}});
        }
        if(cmd.leader<0)continue;
        if(TypedController(config)&&f.time>=rt.nextSupportRelay[team]){
            rt.nextSupportRelay[team]=f.time+.5f;
            // Disseminate already received support evidence; the recipient's belief is not refreshed.
            for(const auto& report:f.soldiers[cmd.leader].platoonReports)if(!report.deliveries.empty()&&f.time-report.observedAt<6)
                for(int squad=team*SquadsPerTeam;squad<(team+1)*SquadsPerTeam;++squad){int recipient=f.command[squad].leader;
                    if(recipient>=0&&recipient!=report.leader)rt.messages.push_back({false,cmd.leader,recipient,f.time+config.reportDelay,report,{}});
                }
        }
        // Support availability can change while the objective is still executing.
        // Amend only the binding using fresh received squad reports; keep the
        // mission identity, route objective and original expiry intact.
        if(config.cognition){const auto& commander=f.soldiers[cmd.leader];
            for(const auto& mover:commander.platoonReports){
                if(mover.squad<team*SquadsPerTeam||mover.squad>=(team+1)*SquadsPerTeam||mover.leader<0||f.time-mover.observedAt>8)continue;
                auto& previous=rt.lastOrders[mover.squad];
                if(!previous.intent.id||previous.supportSoldier<0||f.time>=previous.expiresAt||mover.goalId!=previous.intent.id)continue;
                const SquadSituation* supplier=nullptr;
                for(const auto& report:commander.platoonReports)if(report.squad==previous.supportSoldier/SquadSize&&
                    f.time-report.observedAt<=8&&report.observedAt>previous.issuedAt)supplier=&report;
                if(!supplier||supplier->supportSoldier==previous.supportSoldier)continue;
                int replacement=-1,replacementSquad=-1;float best=1e9f;
                for(const auto& report:commander.platoonReports)if(report.squad>=0&&report.leader>=0&&report.supportSoldier>=0&&
                    report.supportSoldier!=previous.supportSoldier&&report.machineGuns>0&&f.time-report.observedAt<=8){
                    const float distance=Distance(report.position,previous.intent.objective);
                    if(distance<=110&&distance<best){best=distance;replacement=report.supportSoldier;replacementSquad=report.squad;}
                }
                auto amendment=previous;amendment.serial=rt.nextSerial++;amendment.issuedAt=f.time;amendment.issuer=cmd.leader;
                amendment.supportWithdrawn=true;amendment.supportSoldier=replacement;amendment.supportSquad=replacementSquad;previous=amendment;
                rt.messages.push_back({true,cmd.leader,mover.leader,f.time+config.reportDelay,{},amendment});
                events.push_back({f.time,EventKind::OrderIssued,cmd.leader,mover.leader,replacement<0?"Support withdrawn after received loss report":"Replacement support assigned to the retained mission"});
                if(reactions.diagnostics&&reactions.diagnostics->options.enabled){TraceEntry e;e.id=reactions.diagnostics->nextId++;e.time=f.time;e.soldier=cmd.leader;e.squad=mover.squad;e.kind="platoon_support_amended";e.support=replacement;e.intent=amendment.intent;e.reason="fresh supplier report changes support binding without renewing the executing mission";reactions.diagnostics->entries.push_back(e);}
            }
        }
        bool handledFeedback=false;
        if(config.foundations){
            // Matching feedback wakes the commander immediately after message recognition.
            // The replacement is the fallback retained at issue time; no enemy truth is read.
            for(const auto& report:f.soldiers[cmd.leader].platoonReports){
                if(report.squad<0||report.squad>=SquadCount||report.leader<0)continue;
                auto& previous=rt.lastOrders[report.squad];PlatoonDirective replacement;
                const bool valid=GoalAlternative(report,previous,f.time,replacement,config.cognition);
                if(report.goalId&&report.goalStatus!=TaskStatus::Executing&&report.observedAt>rt.feedbackObserved[report.squad]){
                    rt.feedbackObserved[report.squad]=report.observedAt;
                    TraceGoalFeedback(reactions.diagnostics,f.soldiers[cmd.leader],report,f.time,
                        valid?"goal_feedback_received":"goal_feedback_ignored",
                        valid?"received matching blocked goal":"no current matching blocked goal with a retained alternative");
                }
                if(!valid)continue;
                replacement.serial=rt.nextSerial++;replacement.intent.id=replacement.serial;previous=replacement;
                handledFeedback=true;
                rt.messages.push_back({true,cmd.leader,report.leader,f.time+(TypedController(config)?config.reportDelay:MessageDelay),{},replacement});
                cmd.nextPlanAt=f.time+10;
                events.push_back({f.time,EventKind::OrderIssued,cmd.leader,report.leader,"Blocked goal "+std::to_string(replacement.intent.parent)+" replaced by observe goal "+std::to_string(replacement.intent.id)});
                if(reactions.diagnostics&&reactions.diagnostics->options.enabled){TraceEntry e;e.id=reactions.diagnostics->nextId++;e.time=f.time;e.soldier=cmd.leader;e.squad=report.squad;e.kind="goal_alternative_applied";e.intent=replacement.intent;e.plan=replacement.intent.id;e.order=replacement.intent.parent;e.goal=replacement.intent.objective;e.reason="matching delayed subordinate failure; higher command revises mission";reactions.diagnostics->entries.push_back(e);}
            }
        }
        if(handledFeedback){rt.lastPlan[team]=f.time;continue;}
        uint64_t situation=0;
        for(const auto& report:f.soldiers[cmd.leader].platoonReports)if(report.squad>=0&&f.time-report.observedAt<15){
            situation=situation*131+uint64_t(report.active+32*report.engaged+64*report.movementBlocked+128*(report.enemy+1));
            const auto& previous=rt.lastOrders[report.squad];
            if(previous.task!=PlatoonTask::Support&&Distance(report.position,previous.position)<10)situation+=8192;
        }
        if(TypedController(config))for(const auto& report:f.soldiers[cmd.leader].platoonReports)situation=situation*131+uint64_t(int(report.goalStatus)+report.goalId);
        bool changed=situation!=rt.lastSituation[team]&&f.time-rt.lastPlan[team]>=8;
        if(f.time<cmd.nextPlanAt&&!changed)continue;
        rt.lastSituation[team]=situation;rt.lastPlan[team]=f.time;
        cmd.nextPlanAt=f.time+5;
        auto orders=(config.drills?PlanPlatoonTasks:PlanPlatoon)(f.soldiers[cmd.leader],rt.geometryViews?(*rt.geometryViews)[cmd.leader]:map,config,f.time);
        if(orders.empty())continue;
        cmd.nextPlanAt=f.time+55;++cmd.plans;cmd.sector=orders[0].directive.sector;
        for(auto& order:orders) {
            auto& previous=rt.lastOrders[order.recipient/SquadSize];
            if(TypedController(config)&&previous.intent.id&&f.time<previous.expiresAt&&order.directive.task!=PlatoonTask::Withdraw){
                bool executing=false,acknowledged=false;
                for(const auto& report:f.soldiers[cmd.leader].platoonReports)if(report.squad==order.recipient/SquadSize&&report.goalId==previous.intent.id&&report.directive==previous.serial){
                    acknowledged=true;executing|=report.goalStatus==TaskStatus::Executing;
                }
                // A pre-amendment failure can arrive after its replacement was
                // issued. Wait for matching acknowledgment through the normal
                // return path before replacing this mission again.
                if(executing||(!acknowledged&&f.time-previous.issuedAt<4*config.reportDelay+5))continue; // An active accepted mission owns its roles until feedback or a material emergency.
            }
            if(previous.task==order.directive.task&&Distance(previous.position,order.directive.position)<6&&previous.expiresAt-f.time>12)continue;
            order.directive.serial=rt.nextSerial++;
            if(config.foundations){order.directive.intent.id=order.directive.serial;order.directive.intent.expiresAt=order.directive.expiresAt;
                if(order.directive.intent.purpose==GoalPurpose::None){order.directive.intent.purpose=GoalPurpose::Support;order.directive.intent.objective=order.directive.position;}}
            previous=order.directive;
            rt.messages.push_back({true,cmd.leader,order.recipient,f.time+(TypedController(config)?config.reportDelay:MessageDelay),{},order.directive});
            if(order.directive.task==PlatoonTask::Support)cmd.supportSquad=order.recipient/SquadSize;
            else if(order.directive.task==PlatoonTask::Reserve)cmd.reserveSquad=order.recipient/SquadSize;
            else if(order.directive.task!=PlatoonTask::Consolidate){cmd.mainEffortSquad=cmd.flankSquad=order.recipient/SquadSize;cmd.maneuver=order.directive.task;}
            events.push_back({f.time,EventKind::OrderIssued,cmd.leader,order.recipient,std::string(Name(cmd.leader))+" orders squad "+std::to_string(order.recipient/SquadSize%SquadsPerTeam+1)+": "+PlatoonTaskName(order.directive.task)});
        }
    }
}
}
