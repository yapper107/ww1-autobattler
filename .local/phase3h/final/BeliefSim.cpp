#include "BeliefSim.h"
#include "CommandSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
#include <sstream>
namespace army {
std::vector<RegionEstimate> BuildMentalMap(const Soldier& observer,float time){
    auto known=WithTracks(observer,time);std::vector<RegionEstimate> result;
    for(const auto& ct:known.contacts){
        if(!ct.known)continue;
        int x=int(std::floor(ct.position.x/BeliefCellSize)),y=int(std::floor(ct.position.y/BeliefCellSize));
        auto it=std::find_if(result.begin(),result.end(),[&](const auto& r){return r.x==x&&r.y==y;});
        if(it==result.end()){result.push_back({});it=result.end()-1;it->x=x;it->y=y;}
        float confidence=TrackConfidence(ct,time);
        ++it->observations;it->automaticWeapons+=ct.automaticWeapon;
        it->low+=confidence;it->high+=observer.cognition?1.f:1+(1-confidence)*2;
        it->uncertainty=std::max(it->uncertainty,TrackUncertainty(ct,time));
        it->confidence+=confidence;it->observedAt=std::max(it->observedAt,ct.observedAt);
    }
    for(auto& region:result){
        region.confidence/=region.observations;
        // Heuristic uncertainty band, not a guaranteed bound on the hidden force.
        // Partial observation leaves room for another element even with fresh sightings.
        region.unseen=std::max(1.f,region.observations*.25f);
        region.high+=region.unseen;
        float bias=observer.estimateBias*(observer.cognition?1-observer.officer.judgment*.8f:1.f);
        float judgment=.5f+.5f*std::clamp(bias,-1.f,1.f);
        region.estimate=region.low+(region.high-region.low)*judgment;
    }
    std::sort(result.begin(),result.end(),[](const auto& a,const auto& b){return a.x==b.x?a.y<b.y:a.x<b.x;});
    return result;
}
float BelievedStrength(const Soldier& observer,Vec3 region,float radius,float time){
    float strength=0;
    for(const auto& cell:BuildMentalMap(observer,time)){
        Vec3 centre{(cell.x+.5f)*BeliefCellSize,(cell.y+.5f)*BeliefCellSize};
        if(Distance(centre,region)<radius+BeliefCellSize*.707107f)
            strength+=cell.estimate+cell.automaticWeapons*1.5f;
    }
    return strength;
}
void ReceiveObservations(Soldier& recipient,const std::vector<ReportedContact>& observations,int relay,float time){
    for(const auto& evidence:observations){
        if(evidence.track<0||evidence.track>=UnitCount)continue;
        const auto& incoming=evidence.contact;auto& old=recipient.reports[evidence.track];
        if(incoming.observedAt>time||incoming.clearedAt>time||time-std::max(incoming.observedAt,incoming.clearedAt)>120)continue;
        if(incoming.observedAt<=old.observedAt&&incoming.clearedAt<=old.clearedAt)continue;
        float cleared=std::max(incoming.clearedAt,old.clearedAt);
        if(incoming.observedAt>old.observedAt)old=incoming;
        old.clearedAt=cleared;old.known=old.observedAt>cleared;old.visible=false;
        old.reportSource=relay;old.registeredAt=time;++recipient.knowledgeRevision;
    }
}
TaskStatus ReportedGoalStatus(const Soldier& leader,float time){
    const auto& intent=leader.platoonOrder.intent;
    if(!intent.id||time>=leader.platoonOrder.expiresAt)return TaskStatus::Executing;
    int completed=0,blocked=0;
    for(const auto& report:leader.taskReports){
        if(report.goalId!=intent.id||time-report.at>20)continue;
        const bool obstruction=report.cause==TaskCause::Unreachable||report.cause==TaskCause::Geometry||report.cause==TaskCause::Fire;
        if(report.active&&obstruction&&(report.status==TaskStatus::Blocked||report.status==TaskStatus::Failed))++blocked;
        if(report.status==TaskStatus::Done&&report.active&&Distance(report.position,intent.objective)<=intent.radius)++completed;
    }
    // A local hold receipt is never evidence that a distant objective was secured.
    if(blocked>=2)return TaskStatus::Blocked;
    return intent.purpose==GoalPurpose::Seize&&completed>=2?TaskStatus::Done:TaskStatus::Executing;
}
void TraceBeliefs(Diagnostics* d,const Soldier& observer,float time){
    if(!d||!d->options.enabled||!observer.directionalSight)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=observer.id;e.squad=observer.squad;
    e.kind="mental_map";e.position=observer.position;e.goal=observer.look;
    e.foundations=true;e.look=observer.look;e.estimateBias=observer.estimateBias;
    e.regions=BuildMentalMap(observer,time);e.intent=observer.platoonOrder.intent;
    std::ostringstream reason;reason<<"look="<<observer.look.x<<","<<observer.look.y<<" bias="<<observer.estimateBias;
    for(const auto& cell:e.regions)reason<<"; cell="<<cell.x<<","<<cell.y<<" observations="<<cell.observations<<" band="<<cell.low<<".."<<cell.high<<" estimate="<<cell.estimate<<" MG="<<cell.automaticWeapons<<" observed="<<cell.observedAt;
    e.reason=reason.str();d->entries.push_back(e);
}
}
