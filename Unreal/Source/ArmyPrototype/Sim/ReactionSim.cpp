#include "ReactionSim.h"
#include "Diagnostics.h"
#include "TaskSim.h"
#include "ManeuverSim.h"
#include <algorithm>
namespace army {
float ReactionSeconds(const Soldier& s,ReactionKind kind) {
    float factor=kind==ReactionKind::UnderFire?0.5f:(kind==ReactionKind::Order||kind==ReactionKind::PlatoonOrder)?1.25f:kind==ReactionKind::Sight?1.f:1.1f;
    return s.reactionBase*factor*(1+s.suppression*1.5f)*(s.health<55?1.3f:1.f);
}
const char* ReactionName(ReactionKind k) {
    const char* names[]={"SIGHTING","ORDER","REPORT","READINESS","UNDER FIRE","INJURY REPORT","FIRE REPORT","FRIENDLY","BLOCKED LANE","SQUAD REPORT","PLATOON ORDER","MOVEMENT BLOCKED","COVERING FIRE REPORT","TASK STATUS"};return names[int(k)];
}
void QueueReaction(const Soldier& s,PendingReaction reaction,float time,ReactionRuntime& rt) {
    reaction.recipient=s.id;reaction.receivedAt=time;reaction.readyAt=time+ReactionSeconds(s,reaction.kind);
    if(reaction.kind==ReactionKind::Order){auto order=reaction.order;order.receivedAt=time;TraceOrder(rt.diagnostics,s,order,time,"order_received");}
    rt.pending.push_back(reaction);
}
void ProcessReactions(Frame& f,ReactionRuntime& rt,std::vector<Event>& events) {
    // Older observations never overwrite newer ones when reaction times vary.
    size_t retained=0;
    for(size_t i=0;i<rt.pending.size();++i) {
        auto p=rt.pending[i];
        if(p.readyAt>f.time){rt.pending[retained++]=p;continue;}
        auto& s=f.soldiers[p.recipient];
        if(!s.Active())continue;
        if(p.kind==ReactionKind::PlatoonReport) {
            const auto& report=p.situation;
            if(report.squad<0||report.squad/SquadsPerTeam!=s.team||f.time-report.observedAt>15)continue;
            auto& old=s.platoonReports[report.squad%SquadsPerTeam];
            if(report.observedAt<=old.observedAt)continue;
            old=report;
            if(report.danger>0)RememberFireArea(s,{report.position,report.danger,report.observedAt});
            if(report.enemy>=0&&report.enemy<UnitCount&&report.contact.known&&f.time-report.contact.observedAt<=120&&report.contact.observedAt>s.reports[report.enemy].observedAt) {
                s.reports[report.enemy]=report.contact;s.reports[report.enemy].visible=false;s.reports[report.enemy].registeredAt=f.time;s.reports[report.enemy].reportSource=p.source;
            }
        } else if(p.kind==ReactionKind::PlatoonOrder) {
            if(p.directive.serial<=s.platoonOrder.serial||f.time>=p.directive.expiresAt)continue;
            ++s.knowledgeRevision;s.platoonOrder=p.directive;s.platoonOrder.receivedAt=p.receivedAt;s.platoonOrder.activatedAt=f.time;
            if(p.directive.enemy>=0&&p.directive.enemy<UnitCount&&p.directive.contact.known&&f.time-p.directive.contact.observedAt<=120&&p.directive.contact.observedAt>s.reports[p.directive.enemy].observedAt) {
                s.reports[p.directive.enemy]=p.directive.contact;s.reports[p.directive.enemy].visible=false;s.reports[p.directive.enemy].reportSource=p.source;
            }
            events.push_back({f.time,EventKind::Reaction,s.id,p.source,std::string(Name(s.id))+" accepts platoon order: "+PlatoonTaskName(s.platoonOrder.task)});
        } else if(p.kind==ReactionKind::Order) {
            if(p.order.serial<=s.assignment.serial)continue;
            if(s.assignment.id)SetTaskStatus(s,TaskStatus::Superseded,TaskCause::Replaced,f.time,rt.diagnostics);
            s.assignment=p.order;s.assignment.receivedAt=p.receivedAt;s.assignment.activatedAt=f.time;
            if(s.assignment.id)SetTaskStatus(s,TaskStatus::Received,TaskCause::None,f.time,rt.diagnostics);
            events.push_back({f.time,EventKind::Reaction,s.id,p.source,std::string(Name(s.id))+" acknowledges "+TaskName(s.assignment.task)});
        } else if(p.kind==ReactionKind::FriendlySight) {
            auto& ct=s.allies[p.enemy];if(p.receivedAt<ct.registeredAt)continue;
            if(p.contact.visible){ct=p.contact;s.allyVelocity[p.enemy]=p.velocity;}else ct.visible=false;
            ct.registeredAt=p.receivedAt;
        } else if(p.kind==ReactionKind::Sight) {
            auto& ct=s.contacts[p.enemy];
            if(p.receivedAt<ct.registeredAt)continue;
            bool fresh=!ct.known;
            if(p.contact.visible&&p.contact.observedAt>ct.clearedAt) {
                if(!ct.known||Distance(ct.position,p.contact.position)>6)++s.knowledgeRevision;
                float cleared=ct.clearedAt;ct=p.contact;ct.clearedAt=cleared;ct.known=true;
            }
            else ct.visible=false;
            // registeredAt is the timestamp of the raw stimulus, not the current world.
            ct.registeredAt=p.receivedAt;
            if(fresh&&ct.visible)events.push_back({f.time,EventKind::Contact,s.id,p.enemy,std::string(Name(s.id))+" recognises "+Name(p.enemy)});
        } else if(p.kind==ReactionKind::Report) {
            auto& ct=s.reports[p.enemy];
            if(f.time-std::max(p.contact.observedAt,p.contact.clearedAt)>120||
                (p.contact.observedAt<=ct.observedAt&&p.contact.clearedAt<=ct.clearedAt))continue;
            bool fresh=!ct.known;
            if(fresh||Distance(ct.position,p.contact.position)>6||p.contact.clearedAt>ct.clearedAt)++s.knowledgeRevision;
            float cleared=std::max(ct.clearedAt,p.contact.clearedAt);
            if(p.contact.observedAt>ct.observedAt)ct=p.contact;
            ct.clearedAt=cleared;ct.known=ct.observedAt>cleared;ct.visible=false;ct.registeredAt=f.time;ct.reportSource=p.source;
            if(fresh)events.push_back({f.time,EventKind::Report,p.source,s.id,std::string(Name(s.id))+" processes report about "+Name(p.enemy)});
        } else if(p.kind==ReactionKind::DeliveryReport) {
            if(f.time-p.delivery.observedAt<=(rt.recoveryFixture?10.f:6.f))RememberDelivery(s,p.delivery);
        } else if(p.kind==ReactionKind::TaskReport) {
            const auto& report=p.taskReceipt;
            if(report.soldier<0||report.soldier>=UnitCount||report.soldier/SquadSize!=s.squad||p.source!=report.soldier)continue;
            auto& old=s.taskReports[report.soldier%SquadSize];
            if(report.serial<old.serial||(report.serial==old.serial&&report.sequence<=old.sequence))continue;
            old=report;++s.knowledgeRevision;
            TraceTask(rt.diagnostics,s,report,f.time,"task_report_received");
        } else if(p.kind==ReactionKind::MovementReport) {
            const auto& report=p.failedMove;
            if(report.soldier<0||report.soldier>=UnitCount||report.soldier/SquadSize!=s.squad||p.source!=report.soldier||
                f.command[s.squad].leader!=s.id||f.time-report.observedAt>8)continue;
            auto& previous=s.movementReports[report.soldier%SquadSize];
            if(report.observedAt<=previous.observedAt)continue;
            bool fresh=previous.order!=report.order;previous=report;
            if(fresh)events.push_back({f.time,EventKind::Report,report.soldier,s.id,std::string(Name(s.id))+" receives advance blocked by fire: "+Name(report.soldier)});
        } else if(p.kind==ReactionKind::Ready) {
            if(p.receivedAt<rt.lastReadyReceived[s.id])continue;
            if(f.command[s.squad].leader==s.id&&f.command[s.squad].support==p.source) {
                rt.lastReadyReceived[s.id]=p.receivedAt;
                s.supportReadyAt=p.ready?f.time:-100;
                if(p.rounds>s.reportedSupportRounds)s.supportActivityAt=f.time;
                s.reportedSupportRounds=p.rounds;
                s.supportReportAt=f.time;s.reportedSupportPosition=p.position;s.reportedSupportAim=p.contact.position;
                s.supportContactAt=p.contact.observedAt;s.supportBlocked=p.blocked;
            }
        } else if(p.kind==ReactionKind::LaneReport) {
            if(p.subject<0||p.subject>=UnitCount||f.time-p.fireLane.observedAt>8)continue;
            auto& lane=s.blockedLanes[p.subject];
            if(p.fireLane.observedAt<=lane.observedAt)continue;
            bool fresh=f.time-lane.observedAt>8;lane=p.fireLane;
            if(fresh)events.push_back({f.time,EventKind::Report,p.subject,s.id,std::string(Name(s.id))+" receives blocked firing lane from "+Name(p.subject)});
        } else if(p.kind==ReactionKind::FireReport) {
            if(f.time-p.fireArea.observedAt<=18)RememberFireArea(s,p.fireArea);
        } else if(p.kind==ReactionKind::WoundReport) {
            if(p.subject<0||p.subject>=UnitCount||f.soldiers[p.subject].squad!=s.squad||s.knownWounded[p.subject])continue;
            s.knownWounded[p.subject]=true;
            events.push_back({f.time,EventKind::Report,p.source,s.id,std::string(Name(s.id))+" learns "+Name(p.subject)+" is wounded"});
        } else {
            // Damage itself is immediate; recognising danger and changing tactics takes time.
            if(p.receivedAt<rt.lastStressReceived[s.id])continue;
            rt.lastStressReceived[s.id]=p.receivedAt;
            if(p.suppression>s.understoodSuppression+0.08f||p.health<s.understoodHealth)
                RememberFireArea(s,{p.position,std::max(0.35f,p.suppression),p.receivedAt});
            if((s.understoodSuppression>.5f)!=(p.suppression>.5f)||(s.understoodHealth<55)!=(p.health<55))++s.knowledgeRevision;
            s.understoodHealth=std::min(s.understoodHealth,p.health);
            s.understoodSuppression=p.suppression;
        }
    }
    rt.pending.resize(retained);
    for(auto& s:f.soldiers) {s.pendingReactions=0;s.reactionUntil=0;}
    for(const auto& p:rt.pending) {
        auto& s=f.soldiers[p.recipient];if(!s.Active())continue;
        ++s.pendingReactions;
        if(s.reactionUntil==0||p.readyAt<s.reactionUntil) {s.reactionUntil=p.readyAt;s.reactingTo=p.kind;}
    }
    for(auto& s:f.soldiers)for(auto& ct:s.contacts)if(f.time-ct.observedAt>10){ct.known=false;ct.visible=false;}
}
}
