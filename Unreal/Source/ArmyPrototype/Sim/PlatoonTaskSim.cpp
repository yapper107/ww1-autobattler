#include "PlatoonTaskSim.h"
#include "LeaderSim.h"
#include "TacticalRouteSim.h"
#include "CommandSim.h"
#include "BeliefSim.h"
#include "Diagnostics.h"
#include <algorithm>

namespace army {
namespace {
void Trace(const Soldier& leader, Diagnostics* diagnostics, float time,
           const char* kind, const std::string& reason, Vec3 goal, int squad) {
    if (!diagnostics || !diagnostics->options.enabled) return;
    TraceEntry entry;
    entry.id=diagnostics->nextId++; entry.time=time; entry.soldier=leader.id;
    entry.squad=squad; entry.kind=kind; entry.reason=reason; entry.goal=goal;
    entry.foundations=true;entry.regions=BuildMentalMap(leader,time);
    for(int id=0;id<UnitCount;++id){
        if(leader.contacts[id].known)entry.knowledge.push_back({id,true,leader.contacts[id]});
        else if(leader.reports[id].known)entry.knowledge.push_back({id,false,leader.reports[id]});
    }
    diagnostics->entries.push_back(entry);
}
int Nearest(const Soldier& knowledge, Vec3 position) {
    int target=-1; float nearest=1e9f;
    for (int id=0; id<UnitCount; ++id) if (knowledge.contacts[id].known) {
        float distance=Distance(position,knowledge.contacts[id].position);
        if (distance<nearest) { nearest=distance; target=id; }
    }
    return target;
}
bool ResolveLeg(const Soldier& knowledge, const Map& map, const Config& config,
                Vec3 start, Vec3 wanted, float minimum, float time, Vec3& goal) {
    if (!ResolveOrderPosition(map,start,wanted,goal)) return false;
    const float direction=knowledge.team?-1.f:1.f;
    if ((goal.x-start.x)*direction<minimum) return false;
    TacticalRoutePlanner planner(map,knowledge,time,knowledge.team?config.emberDoctrine:config.doctrine,Stance::Crouched);
    return !planner.Evaluate(start,goal).points.empty();
}
void Lifetime(PlatoonDirective& order, int issuer, float time) {
    order.issuer=issuer; order.issuedAt=time; order.expiresAt=time+75;
    order.intent.expiresAt=order.expiresAt;
}
}

std::vector<PlannedPlatoonOrder> PlanPlatoonTasks(const Soldier& leader, const Map& map,
        const Config& config, PlatoonTaskState& state, Diagnostics* diagnostics, float time) {
    std::vector<PlannedPlatoonOrder> orders;
    const auto knowledge=WithTracks(leader,time);
    const auto dials=LeaderSettings(leader.officer);
    std::vector<SquadSituation> squads;
    int strength=0; bool support=false; Vec3 centre{};
    for (const auto& report:leader.platoonReports) {
        if (report.squad<0 || report.leader<0 || report.active<=0 || report.drillInstance<=0 ||
            report.observedAt>time || time-report.observedAt>=15) continue;
        const auto& previous=state.assigned[report.squad%SquadsPerTeam];
        // External executing drills retain ownership; idle staging can answer a received need.
        bool helpIdle=false;
        if(report.drillKind==int(BattleDrill::Observe)||report.drillKind==int(BattleDrill::Occupy))
            for(const auto& message:leader.squadRadio)helpIdle|=message.kind==SquadBroadcastKind::NeedSupport&&time-message.sentAt<60;
        if (report.goalId && !previous.taskNode && report.directive && report.goalStatus==TaskStatus::Executing && !helpIdle) continue;
        squads.push_back(report); strength+=report.active; centre=centre+report.position;
        support|=report.supportUseful || report.drillSuperiority;
    }
    if (squads.empty()) return orders;
    centre=centre*(1.f/squads.size());
    const int nearest=Nearest(knowledge,centre);
    const Vec3 sector=nearest<0?centre:knowledge.contacts[nearest].position;
    const float enemy=(nearest<0?0:BelievedStrength(leader,sector,120,time))*(config.leaderEffects?dials.enemyScale:1.f);
    state.believedRatio=enemy>0?strength/enemy:10;
    const bool weak=nearest>=0 && state.believedRatio<(config.leaderEffects?dials.retreatRatio:.5f) && !support;
    if (!weak) state.observeStarted=-1;
    else if (state.observeStarted<0) {
        state.observeStarted=time; state.observeObjective=sector;
        Trace(leader,diagnostics,time,"platoon_observation",config.leaderEffects?"leader risk threshold crossed without support; bounded 45 s observation":"believed ratio below one half without support; observe reports for at most 45 s",sector,leader.squad);
    }
    const bool withdraw=weak && time>=state.observeStarted+45;
    // Assess received knowledge often; only material changes emit orders.
    if (time<state.nextAssessment && state.commander==leader.id && withdraw==state.withdrawing) return orders;
    state.nextAssessment=time+(config.leaderEffects?dials.assessmentSeconds:1.f); state.commander=leader.id; state.withdrawing=withdraw; ++state.revision;
    const float direction=leader.team?-1.f:1.f;
    const SquadSituation* needing=nullptr;int helper=-1;float helpDistance=1e9f;
    for(const auto& report:squads){
        const int index=report.squad%SquadsPerTeam;
        bool need=report.drillCause==TaskCause::InsufficientStrength;
        for(const auto& message:leader.squadRadio)if(message.kind==SquadBroadcastKind::NeedSupport&&message.squad==report.squad&&time-message.sentAt<60)need=true;
        if(!need){state.needSince[index]=-1;continue;}
        if(state.needSince[index]<0)state.needSince[index]=time;
        if(time-state.needSince[index]<2*config.reportDelay)continue;
        bool answered=false;
        for(const auto& other:squads)if(other.squad!=report.squad&&other.supportUseful&&Distance(other.goalObjective,report.goalObjective)<40)answered=true;
        for(const auto& message:leader.squadRadio)if(message.kind==SquadBroadcastKind::Fixing&&message.squad!=report.squad&&message.sentAt>=state.needSince[index]&&Distance(message.objective,report.goalObjective)<40)answered=true;
        if(answered)continue;
        for(const auto& other:squads)if(other.squad!=report.squad&&other.active>=3&&
            other.drillKind!=int(BattleDrill::BreakContact)&&other.drillKind!=int(BattleDrill::Withdraw)){
            float distance=Distance(other.position,report.position);
            if(distance<helpDistance){helpDistance=distance;helper=other.squad;needing=&report;}
        }
    }
    for (const auto& report:squads) {
        const int index=report.squad%SquadsPerTeam;
        auto& previous=state.assigned[index];
        if(config.leaderEffects)previous.initiativeAllowed=dials.initiative;
        const bool matching=previous.intent.id && report.goalId==previous.intent.id && report.directive==previous.serial;
        const bool done=matching && report.goalStatus==TaskStatus::Done;
        const bool blocked=matching && report.goalStatus==TaskStatus::Blocked;
        const bool retiring=report.goalStatus==TaskStatus::Executing &&
            (report.drillKind==int(BattleDrill::BreakContact) || report.drillKind==int(BattleDrill::Withdraw));
        int target=Nearest(knowledge,report.position);
        // Keep a still-known group rather than chasing changes in nearest member.
        if (previous.enemy>=0 && knowledge.contacts[previous.enemy].known &&
            Distance(previous.sector,knowledge.contacts[previous.enemy].position)<=40) target=previous.enemy;
        const auto task=withdraw?PlatoonTask::RetreatThere:report.squad==helper?PlatoonTask::HelpSquad:PlatoonTask::FightHere;
        const bool knownChanged=(previous.enemy>=0)!=(target>=0) ||
            (target>=0 && (previous.enemy!=target || Distance(previous.sector,knowledge.contacts[target].position)>40));
        const bool change=!previous.taskNode || done || blocked ||
            (!retiring && (previous.task!=task || knownChanged));
        if (!change) {
            if (previous.expiresAt-time<=15 || previous.issuer!=leader.id) {
                Lifetime(previous,leader.id,time); orders.push_back({report.leader,previous});
                Trace(leader,diagnostics,time,"platoon_task","renew committed intent (75 s lifetime)",previous.position,report.squad);
            }
            continue;
        }
        PlatoonDirective order;
        if(config.leaderEffects)order.initiativeAllowed=dials.initiative;
        order.task=task; order.taskNode=1+report.squad; order.committedStrength=strength;
        order.enemy=target; if (target>=0) order.contact=knowledge.contacts[target];
        // Without contact a leg runs 60 m down the squad's lane. A static-defence attack has a
        // pre-battle objective of its own, so the leg leads there instead; never an enemy track.
        Vec3 leg=report.position+Vec3{direction*60,0};
        const bool ordered=config.staticDefence.layout!=DefenceLayout::None&&leader.team==0;
        if(ordered){
            Vec3 way=config.staticDefence.attackerObjectives[index]-report.position;way.z=0;const float far=Length(way);
            if(far>12)leg=report.position+way*(std::min(60.f,far)/far);
        }
        order.position=target<0?leg:knowledge.contacts[target].position;
        order.sector=order.position;
        std::string reason=target<0?"FightHere: next 60 m leg in own advance lane":"FightHere: nearest known group; squad chooses its drill";
        if (withdraw) {
            order.position=report.position+Vec3{-direction*60,0};
            reason=config.leaderEffects?"RetreatThere: leader risk threshold crossed without support after 45 s observation":"RetreatThere: believed ratio below one half without support after 45 s observation";
        }
        if(task==PlatoonTask::HelpSquad){
            order.helpSquad=needing->squad;order.position=needing->position;order.sector=needing->goalObjective;
            reason="HelpSquad: received need unanswered for one report round trip; nearest squad with capacity";
        }
        const bool advancing=target<0 && task==PlatoonTask::FightHere;
        if (advancing) {
            if (state.advanceExhausted[index]) continue;
            const bool guarded=done && state.advanceDoneSeen[index] && Distance(previous.position,state.advanceDoneObjectives[index])<18;
            if (guarded) Trace(leader,diagnostics,time,"platoon_no_progress","two Done objectives within 18 m: resolved next leg must be at least 40 m ahead",order.position,report.squad);
            Vec3 resolved;
            if (!ResolveLeg(knowledge,map,config,report.position,order.position,guarded?40.f:1.f,time,resolved)) {
                state.advanceExhausted[index]=true;
                Trace(leader,diagnostics,time,"platoon_route_exhausted","resolved advance endpoint or route cannot meet forward minimum; no unchanged renewal",order.position,report.squad);
                continue;
            }
            order.position=resolved;
            if (done) { state.advanceDoneSeen[index]=true; state.advanceDoneObjectives[index]=previous.position; }
            // The only platoon area is the advance lane. Combat has no assigned area or corridor.
            order.hasArea=true;
            order.areaMin={-map.halfWidth+2,std::max(-map.halfHeight+2,std::min(report.position.y,order.position.y)-24)};
            order.areaMax={map.halfWidth-2,std::min(map.halfHeight-2,std::max(report.position.y,order.position.y)+24)};
            if (done) { order.intent.id=previous.intent.id; reason="renew committed FightHere: completed advance leg, next own-lane objective"; }
        } else state.advanceExhausted[index]=false;
        order.intent.purpose=withdraw?GoalPurpose::Withdraw:task==PlatoonTask::HelpSquad?GoalPurpose::Support:GoalPurpose::Seize;
        order.intent.objective=task==PlatoonTask::HelpSquad?order.sector:order.position; order.intent.radius=12;
        Lifetime(order,leader.id,time); previous=order; orders.push_back({report.leader,order});
        if(config.leaderEffects){
            reason+="; leader judgement="+std::to_string(leader.officer.judgment)+" risk="+std::to_string(leader.officer.risk)+" picture multiplier="+std::to_string(dials.enemyScale)+" believed ratio="+std::to_string(state.believedRatio)+" retreat threshold="+std::to_string(dials.retreatRatio)+" initiative="+(dials.initiative?"delegated":"requires intent");
            Trace(leader,diagnostics,time,"leader_call",reason,order.position,report.squad);
        }
        Trace(leader,diagnostics,time,"platoon_task",reason,order.position,report.squad);
    }
    return orders;
}
}
