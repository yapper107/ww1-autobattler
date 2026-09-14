#include "PlatoonSim.h"
#include "CommandSim.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <cmath>
namespace army {
const char* RankTag(Role r) {
    const char* tags[]={"SGT","CPL","","MG","LT","PSG"};return tags[int(r)];
}
const char* PlatoonTaskName(PlatoonTask t) {
    const char* names[]={"LOCAL INITIATIVE","SUPPORT ENGAGED SQUAD","PLATOON FLANK NORTH","PLATOON FLANK SOUTH","CONSOLIDATE ON MAIN EFFORT","PLATOON RESERVE"};return names[int(t)];
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
    auto directive=[&](PlatoonTask task,Vec3 p){PlatoonDirective d;d.task=task;d.issuer=commander.id;d.position=p;d.sector=effort->contact.position;d.contact=effort->contact;d.enemy=effort->enemy;d.issuedAt=time;d.expiresAt=time+60;return d;};
    std::vector<PlannedPlatoonOrder> orders{{support->leader,directive(PlatoonTask::Support,support->position)}};
    if(!mover)return orders;
    float sign=commander.team?-1.f:1.f;Vec3 goal=mover->position;float routeScore=1e9f;PlatoonTask task=PlatoonTask::Consolidate;
    struct ApproachCandidate {Vec3 p;float score;float side;};std::vector<ApproachCandidate> approaches;
    TacticalRoutePlanner planner(map,commander,time,commander.team?config.emberDoctrine:config.doctrine);
    for(float side:{-1.f,1.f}){
        std::vector<ApproachCandidate> choices;
        for(const auto& cover:CoverPositions(map)){
            Vec3 p=cover.shelter,desired=effort->contact.position+Vec3{-sign*12,side*40};float travel=Distance(p,mover->position);
            if(cover.window||travel<8||travel>140||std::abs(p.z-mover->position.z)>.5f||!ProtectedAt(map,p,effort->contact.position,cover.crouch?Stance::Crouched:Stance::Standing))continue;
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
    orders.push_back({mover->leader,directive(task,goal)});
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
        rt.nextReport[squad]=f.time+3;
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
        float contactPriority=-1e9f;
        for(int enemy=0;enemy<UnitCount;++enemy) {
            const auto& ct=knowledge.contacts[enemy];
            if(!ct.known||f.time-ct.observedAt>120)continue;
            float priority=ct.observedAt+(ct.automaticWeapon?6.f:0.f);
            if(priority>contactPriority){contactPriority=priority;report.contact=ct;report.contact.visible=false;report.enemy=enemy;}
        }
        rt.messages.push_back({false,leader,receiver,f.time+MessageDelay,report,{}});
    }
    for(int team=0;team<2;++team) {
        auto& cmd=f.platoon[team];int sergeant=cmd.sergeant;
        if(sergeant>=0&&cmd.leader>=0&&sergeant!=cmd.leader&&f.soldiers[sergeant].Active()&&f.time>=rt.nextRelay[team]) {
            rt.nextRelay[team]=f.time+2;
            for(const auto& report:f.soldiers[sergeant].platoonReports)if(report.squad>=0&&f.time-report.observedAt<12)
                rt.messages.push_back({false,sergeant,cmd.leader,f.time+MessageDelay,report,{}});
        }
        if(cmd.leader<0)continue;
        uint64_t situation=0;
        for(const auto& report:f.soldiers[cmd.leader].platoonReports)if(report.squad>=0&&f.time-report.observedAt<15){
            situation=situation*131+uint64_t(report.active+32*report.engaged+64*report.movementBlocked+128*(report.enemy+1));
            const auto& previous=rt.lastOrders[report.squad];
            if(previous.task!=PlatoonTask::Support&&Distance(report.position,previous.position)<10)situation+=8192;
        }
        bool changed=situation!=rt.lastSituation[team]&&f.time-rt.lastPlan[team]>=8;
        if(f.time<cmd.nextPlanAt&&!changed)continue;
        rt.lastSituation[team]=situation;rt.lastPlan[team]=f.time;
        cmd.nextPlanAt=f.time+5;
        auto orders=PlanPlatoon(f.soldiers[cmd.leader],rt.geometryViews?(*rt.geometryViews)[cmd.leader]:map,config,f.time);
        if(orders.empty())continue;
        cmd.nextPlanAt=f.time+55;++cmd.plans;cmd.sector=orders[0].directive.sector;
        for(auto& order:orders) {
            auto& previous=rt.lastOrders[order.recipient/SquadSize];
            if(previous.task==order.directive.task&&Distance(previous.position,order.directive.position)<6&&previous.expiresAt-f.time>12)continue;
            order.directive.serial=rt.nextSerial++;previous=order.directive;
            rt.messages.push_back({true,cmd.leader,order.recipient,f.time+MessageDelay,{},order.directive});
            if(order.directive.task==PlatoonTask::Support)cmd.supportSquad=order.recipient/SquadSize;
            else if(order.directive.task==PlatoonTask::Reserve)cmd.reserveSquad=order.recipient/SquadSize;
            else if(order.directive.task!=PlatoonTask::Consolidate){cmd.mainEffortSquad=cmd.flankSquad=order.recipient/SquadSize;cmd.maneuver=order.directive.task;}
            events.push_back({f.time,EventKind::OrderIssued,cmd.leader,order.recipient,std::string(Name(cmd.leader))+" orders squad "+std::to_string(order.recipient/SquadSize%SquadsPerTeam+1)+": "+PlatoonTaskName(order.directive.task)});
        }
    }
}
}
