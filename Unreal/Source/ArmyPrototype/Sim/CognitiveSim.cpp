#include "CognitiveSim.h"
#include "BeliefSim.h"
#include "PerceptionSim.h"
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <cmath>
namespace army {
const char* CognitiveMethodName(CognitiveMethod m){
    const char* names[]={"none","observe","supported advance","alternate approach","hold","withdraw"};return names[int(m)];
}
bool ReceivedUsefulSupport(const Soldier& leader,Vec3 sector,float time,int shooter){
    for(const auto& report:leader.deliveries){
        if((shooter>=0&&report.shooter!=shooter)||report.shooter<0||!report.supportWeapon||time-report.observedAt>6||report.observedAt>time||Distance(report.target,sector)>18)continue;
        if(shooter<0&&leader.supportBlocked)continue; // Legacy readiness has no source identity; it cannot veto another assigned gun.
        int recent=0;for(float at:report.times)if(at>=time-6&&at<=time)++recent;
        if(recent>=2)return true;
    }
    return false;
}
float RememberedRisk(const Soldier& leader,Vec3 position,float time){
    float value=0;const auto memory=WithTracks(leader,time);
    for(const auto& ct:memory.contacts)if(ct.known)
        value+=TrackConfidence(ct,time)*std::max(0.f,1-Distance(position,ct.position)/(18+TrackUncertainty(ct,time)))*(ct.automaticWeapon?2.f:1.f);
    return value;
}
bool ReceivedThreatSupport(const Soldier& leader,Vec3 sector,float time,int shooter,int threat){
    if(threat<0)return ReceivedUsefulSupport(leader,sector,time,shooter);
    for(const auto& report:leader.deliveries){
        if(report.shooter!=shooter||!report.supportWeapon||report.observedAt>time||time-report.observedAt>6)continue;
        // A nearby rifleman does not stand in for the gun covering this crossing.
        if(report.enemy!=threat&&Distance(report.target,sector)>4)continue;
        int recent=0;for(float at:report.times)recent+=at>=time-6&&at<=time;
        if(recent>=2)return true;
    }
    return false;
}
Vec3 SupportDeploymentSector(const AcceptedPlan& plan,const Soldier& leader,float time){
    if(plan.requestedThreat>=0&&plan.requestedThreat<UnitCount){
        const auto known=WithTracks(leader,time);const auto& contact=known.contacts[plan.requestedThreat];
        if(contact.known&&contact.observedAt<=time&&time-contact.observedAt<8)return contact.position;
    }
    return plan.sector;
}
namespace {
bool Moving(CognitiveMethod m){return m==CognitiveMethod::SupportedAdvance||m==CognitiveMethod::AlternateApproach||m==CognitiveMethod::Withdraw;}
bool LocalDelivery(const Soldier& leader,int shooter,int threat,Vec3 sector,float time,float since){
    for(const auto& report:leader.deliveries){
        if(report.shooter!=shooter||report.observedAt>time||report.observedAt<since||time-report.observedAt>6||
            (report.enemy!=threat&&Distance(report.target,sector)>4))continue;
        int rounds=0;for(float at:report.times)rounds+=at>=since&&at>=time-6&&at<=time;
        if(rounds>=2)return true;
    }
    return false;
}
bool FreshSourceFire(const Soldier& leader,int source,float time,float since){
    for(const auto& e:leader.deliveries)if(e.shooter==source&&e.observedAt>=since&&e.observedAt<=time&&time-e.observedAt<=6){
        int count=0;for(float at:e.times)count+=at>=since&&at>=time-6&&at<=time;if(count>=2)return true;
    }
    return false;
}
bool SourceAvailable(const AcceptedPlan& p,const Soldier& leader,int source,float time){
    if(source<0)return false;
    for(const auto& loss:p.supportFailures)if(loss.soldier==source&&
        (loss.cause==TaskCause::Casualty||!FreshSourceFire(leader,source,time,loss.observedAt)))return false;
    return true;
}
void RememberUnavailable(AcceptedPlan& p,int source,float observedAt,TaskCause cause){
    if(source<0)return;
    for(auto& loss:p.supportFailures)if(loss.soldier==source){
        if(loss.cause!=TaskCause::Casualty&&(cause==TaskCause::Casualty||observedAt>loss.observedAt))loss={source,observedAt,cause};
        return;
    }
    p.supportFailures.push_back({source,observedAt,cause}); // At most one entry per battle soldier.
}
bool RecentSupportLife(const AcceptedPlan& p,const Soldier& leader,float time){
    const auto& progress=leader.supportProgress;
    if(progress.shooter==p.support&&progress.observedAt<=time&&time-progress.observedAt<=10&&progress.status!=TaskStatus::Failed)return true;
    for(const auto& e:leader.deliveries)if(e.shooter==p.support&&e.observedAt<=time&&time-e.observedAt<=10)return true;
    return false;
}
bool StageNeedsSupport(const AcceptedPlan& p,const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,float time){
    // Final occupation is assessed separately. Only wholly screened transit
    // may proceed without fire; uncertainty and incoming-fire evidence remain
    // part of the same actor-owned route cost used during planning.
    if(!p.route||p.routeStage+1>=int(p.route->stages.size())){
        auto known=WithTracks(leader,time);for(const auto& ct:known.contacts)if(ct.known)return true;
        return FireDanger(leader,p.destination,time)>0;
    }
    auto knowledge=WithTracks(leader,time);bool knownDanger=false;
    for(const auto& ct:knowledge.contacts)knownDanger|=ct.known;
    for(const auto& member:squad)if(p.movers[member.id%SquadSize])knownDanger|=FireDanger(leader,member.position,time)>0;
    if(!knownDanger)return false;
    TacticalRoutePlanner planner(map,leader,time);bool members=false;
    for(const auto& member:squad)if(member.Active()&&p.movers[member.id%SquadSize]){
        members=true;auto path=FollowCorridor(map,*p.route,member.position,p.positions[member.id%SquadSize]);
        if(path.empty())return true;
        const auto cost=planner.Measure(member.position,path);
        if(cost.exposure>0||cost.fire>0)return true;
    }
    return !members;
}
uint64_t ThreatSignature(const Soldier& leader,float time){
    uint64_t key=0;auto memory=WithTracks(leader,time);
    for(int id=0;id<UnitCount;++id){const auto& ct=memory.contacts[id];if(ct.known)key=key*131+uint64_t((id+1)*31+int(ct.position.x/8)*7+int(ct.position.y/8)*11+ct.automaticWeapon);}
    return key;
}
void TracePlan(Diagnostics* d,const Soldier& leader,const AcceptedPlan& p,float time,const char* kind,const std::string& why){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.kind=kind;
    e.intent=p.intent;e.goal=p.destination;e.position=leader.position;e.plan=p.revision;e.routeId=p.route?p.route->id:0;e.routeStage=p.routeStage;
    e.reason=why;e.phase=CognitiveMethodName(p.method);e.goalStatus=int(p.stage);e.geometry=p.geometry;
    e.foundations=true;e.look=leader.look;e.estimateBias=leader.estimateBias;e.regions=BuildMentalMap(leader,time);
    e.deliveries.assign(leader.deliveries.begin(),leader.deliveries.end());
    e.supportProgress=leader.supportProgress;e.supportDeadline=p.reconsiderAt;e.support=p.support;e.supportSquad=p.supportSquad;e.supportDeployed=p.supportDeployed;e.supportUseful=p.supportUseful;e.attempts=p.attempts;e.sector=p.sector;
    e.stageDeadline=p.executionDeadline;e.supportThreat=p.supportThreat;
    e.injuries=p.injuries;e.scoutDeadline=p.scoutDeadline;e.prepareDeadline=p.prepareDeadline;e.supportFailures=p.supportFailures;
    e.localSupport=p.localSupport;e.localThreat=p.localThreat;e.localUseful=p.localUseful;e.localDeadline=p.localDeadline;e.localSector=p.localSector;e.localPosition=p.localPosition;
    for(const auto& area:leader.coverage)if(area.observer>=0)e.coverage.push_back(area);
    for(int slot=0;slot<SquadSize;++slot)if(p.movers[slot]){e.movers.push_back(leader.squad*SquadSize+slot);if(p.holders[slot])e.holders.push_back(leader.squad*SquadSize+slot);if(p.scouts[slot])e.scouts.push_back(leader.squad*SquadSize+slot);}
    auto memory=WithTracks(leader,time);for(int id=0;id<UnitCount;++id)if(memory.contacts[id].known)e.knowledge.push_back({id,leader.contacts[id].visible,memory.contacts[id]});
    d->lastPlan[leader.squad]=e.id;d->entries.push_back(e);
}
bool FailedHere(const AcceptedPlan& p,CognitiveMethod method,Vec3 objective,Vec3 destination,uint64_t geometry,uint64_t threats,bool useful){
    for(const auto& failure:p.attempts)if(failure.method==method&&Distance(failure.objective,objective)<6&&Distance(failure.destination,destination)<8&&failure.geometry==geometry&&(failure.cause==TaskCause::Support||failure.threats==threats)&&
        !(failure.cause==TaskCause::Support&&useful))return true;
    return false;
}
void Fail(AcceptedPlan& p,TaskCause cause,float time){
    p.stage=MethodStage::Blocked;p.failedMethods|=1<<int(p.method);p.failedDestination=p.destination;
    p.attempts.push_back({p.method,p.mission.objective,p.destination,p.geometry,p.threats,time,cause});
    if(p.attempts.size()>16)p.attempts.erase(p.attempts.begin());
}
bool View(const Map& map,const Soldier& s,Vec3 peek,Vec3 sector,float eye=1.7f,float aim=1.2f){
    return Distance(peek,sector)<SightRange(s)-1&&ClearLine3D(map,peek+Vec3{0,0,eye},sector+Vec3{0,0,aim});
}
float KnownAimHeight(const Soldier& leader,Vec3 sector,float time){
    float height=1.2f,nearest=8;const auto memory=WithTracks(leader,time);
    for(const auto& contact:memory.contacts)if(contact.known&&Distance(contact.position,sector)<nearest){
        nearest=Distance(contact.position,sector);height=contact.aimHeight-sector.z;
    }
    return height;
}
std::vector<CoverPosition> Viewpoints(const Soldier& leader,const Map& map,Vec3 sector,Vec3 near,float radius,float eye=1.7f,float aim=1.2f){
    std::vector<CoverPosition> choices;
    for(const auto& slot:CoverPositions(map))if(Distance(slot.peek,near)<radius&&View(map,leader,slot.peek,sector,eye,aim)&&
        Walkable(map,slot.peek)&&ClearLine(map,slot.shelter,slot.peek,.18f)&&!FindPath(map,leader.position,slot.shelter).empty())choices.push_back(slot);
    std::stable_sort(choices.begin(),choices.end(),[&](const auto& a,const auto& b){return Distance(a.peek,near)<Distance(b.peek,near);});
    return choices;
}
void Positions(AcceptedPlan& p,const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,float time,int changed=-1){
    const bool final=!p.route||p.routeStage+1>=int(p.route->stages.size());
    Vec3 target=p.route&&!p.route->stages.empty()?p.route->stages[p.routeStage].destination:p.destination;
    float aim=1.2f;auto memory=WithTracks(leader,time);float nearest=8;Vec3 positionSector=p.sector;
    if(final&&Moving(p.method)){
        float priority=0;
        for(const auto& ct:memory.contacts)if(ct.known&&time-ct.observedAt<8&&Distance(ct.position,p.destination)<18){
            float value=TrackConfidence(ct,time)*(ct.automaticWeapon?2.f:1.f)/(1+Distance(ct.position,p.destination));
            if(value>priority){priority=value;positionSector=ct.position;}
        }
    }
    for(const auto& ct:memory.contacts)if(ct.known&&Distance(ct.position,positionSector)<nearest){nearest=Distance(ct.position,positionSector);aim=ct.aimHeight-positionSector.z;}
    auto slots=final?Viewpoints(leader,map,positionSector,p.destination,p.method==CognitiveMethod::Observe?16.f:10.f,p.method==CognitiveMethod::Observe?1.7f:1.5f,aim):std::vector<CoverPosition>{};
    std::vector<Vec3> reserved;int offset=0;
    if(changed>=0)for(int index=0;index<SquadSize;++index)if(index!=changed&&p.movers[index])reserved.push_back(p.hasSlot[index]?p.slots[index].peek:p.positions[index]);
    for(const auto& s:squad){const int index=s.id%SquadSize;if(!p.movers[index])continue;
        if(changed>=0&&index!=changed)continue;
        p.hasSlot[index]=false;p.unavailable[index]=false;p.expected[index]=0;
        const CoverPosition* best=nullptr;float cost=1e9f;
        auto occupied=[&](Vec3 point){
            if(p.slotRetries[index]>0&&Distance(point,p.rejectedPositions[index])<1.5f)return true;
            for(const auto& ct:memory.contacts)if(ct.known&&time-ct.observedAt<8&&Distance(point,ct.position)<2)return true;
            return false;};
        for(const auto& slot:slots){bool free=!occupied(slot.shelter)&&!occupied(slot.peek);for(Vec3 used:reserved)if(Distance(used,slot.peek)<1.1f)free=false;
            // Final occupation needs a protected foothold against received threats,
            // not merely the nearest cover model facing the original sector.
            float exposure=0;
            for(const auto& ct:memory.contacts)if(ct.known&&time-ct.observedAt<8&&Distance(ct.position,slot.shelter)<100){
                if(!ProtectedAt(map,slot.shelter,ct.position,slot.crouch?Stance::Crouched:Stance::Standing)&&
                    ClearLine3D(map,{ct.position.x,ct.position.y,ct.aimHeight},slot.shelter+Vec3{0,0,slot.crouch?.95f:1.7f}))
                    exposure+=TrackConfidence(ct,time)*(ct.automaticWeapon?2.f:1.f);
            }
            float score=Distance(slot.peek,p.destination)+Distance(s.position,slot.shelter)*.05f+12*exposure;
            auto path=p.route?FollowFinalApproach(map,*p.route,s.position,slot.shelter):FindPath(map,s.position,slot.shelter);
            if(free&&score<cost&&!path.empty()&&ClearLine(map,slot.shelter,slot.peek,.48f)){cost=score;best=&slot;}}
        if(best){p.slots[index]=*best;p.positions[index]=best->shelter;p.hasSlot[index]=true;reserved.push_back(best->peek);}
        else if(p.method==CognitiveMethod::Observe&&View(map,s,s.position,p.sector)){p.positions[index]=p.holds[index]=s.position;reserved.push_back(s.position);}
        else {Vec3 desired=target+Vec3{float(offset/2)*-1.5f,float(offset%2)*2-1,0},resolved;
            bool found=ResolveOrderPosition(map,s.position,desired,resolved)&&!occupied(resolved);
            if(final&&p.route){
                found=found&&!FollowFinalApproach(map,*p.route,s.position,resolved).empty();
                if(!found)for(float radius:{2.f,4.f,6.f})for(Vec3 delta:{Vec3{-radius,0},Vec3{0,radius},Vec3{0,-radius},Vec3{radius,0}}){
                    Vec3 point=target+delta;bool free=!occupied(point);for(Vec3 used:reserved)free&=Distance(used,point)>=1.1f;
                    if(!found&&free&&Walkable(map,point)&&!FollowFinalApproach(map,*p.route,s.position,point).empty()){resolved=point;found=true;}
                }
            }
            // No invented occupied/blocked destination: retain this member until
            // command can report inability or assign another executable position.
            p.unavailable[index]=!found;p.positions[index]=found?resolved:s.position;reserved.push_back(p.positions[index]);}
        ++offset;
    }
}
struct Candidate {CognitiveMethod method;Vec3 destination;float score;std::shared_ptr<TacticalRoute> route;bool feasible;std::string reason;};
}
void UpdateCognitivePlan(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,SquadCommand& command,Diagnostics* diagnostics,float time){
    auto& p=command.accepted;const auto& order=leader.platoonOrder;
    bool newDirective=order.serial>p.directive&&time<order.expiresAt;
    auto holdMovers=[&](){for(const auto& member:squad)p.holds[member.id%SquadSize]=member.position;};
    const uint64_t threats=ThreatSignature(leader,time);
    auto trace=[&](const char* kind,const char* reason){p.reason=reason;TracePlan(diagnostics,leader,p,time,kind,reason);};
    auto exhaust=[&](const char* reason){if(!p.exhausted){p.exhausted=true;p.stage=MethodStage::Blocked;trace("method_exhausted",reason);}};
    if(newDirective&&p.intent.id&&order.intent.purpose==p.mission.purpose&&Distance(order.intent.objective,p.mission.objective)<1){
        p.directive=order.serial;p.mission.id=order.intent.id;p.intent.parent=order.intent.id;
        p.mission.expiresAt=std::min(p.mission.expiresAt,order.expiresAt);p.intent.expiresAt=p.mission.expiresAt;
        if(order.supportWithdrawn){
            RememberUnavailable(p,p.support,time,TaskCause::Casualty);
            p.support=SourceAvailable(p,leader,order.supportSoldier,time)?order.supportSoldier:-1;p.supportSquad=p.support>=0?order.supportSquad:-1;
            p.supportDeployed=p.supportUseful=false;p.awaitedSupportAssignment=0;p.supportWaitStarted=time;p.exhausted=false;
            if(p.support<0){Fail(p,TaskCause::Support,time);exhaust("higher command withdrew unavailable support; awaiting a revised mission");return;}
            holdMovers();p.stage=Moving(p.method)?MethodStage::Prepare:MethodStage::Blocked;
            if(p.prepareDeadline<=0)p.prepareDeadline=std::min(p.mission.expiresAt,time+60);
            p.reconsiderAt=std::min(p.prepareDeadline,time+30);
            trace("support_replaced_by_command","received support amendment retains objective and route; wait for the new source's actual delivery");
        }else if(order.supportSoldier>=0&&order.supportSoldier!=p.support&&SourceAvailable(p,leader,order.supportSoldier,time)){
            p.support=order.supportSoldier;p.supportSquad=order.supportSquad;
        }
        newDirective=false;trace("mission_retained","equivalent higher order retains execution, failure history and mission deadline");
    }
    if(p.intent.id&&!newDirective&&time>=p.mission.expiresAt){p.intent.parent=0;exhaust("mission deadline expired; waiting for fresh higher intent");return;}
    if(p.intent.id&&p.requiresSupport){
        auto received=WithTracks(leader,time);int selected=-1;float best=0;
        for(int id=0;id<UnitCount;++id){const auto& contact=received.contacts[id];
            if(!contact.known||time-contact.observedAt>=8||Distance(contact.position,p.sector)>=6)continue;
            const float value=TrackConfidence(contact,time)*(contact.automaticWeapon?4.f:1.f)/(1+Distance(contact.position,p.sector));
            if(value>best){best=value;selected=id;}
        }
        const bool oldKnown=p.supportThreat>=0&&received.contacts[p.supportThreat].known;
        if(selected>=0&&selected!=p.supportThreat&&(!oldKnown||
            (received.contacts[selected].automaticWeapon&&!received.contacts[p.supportThreat].automaticWeapon))){
            p.supportThreat=selected;
            trace("support_dependency_received","fresh evidence identifies the current threat in the retained support sector");
        }
    }
    if(p.stage==MethodStage::Prepare&&p.prepareDeadline<=0)p.prepareDeadline=std::min(p.mission.expiresAt,time+60);
    const bool wasUseful=p.supportUseful;
    p.supportUseful=ReceivedThreatSupport(leader,p.sector,time,p.support,p.supportThreat);
    p.supportDeployed=p.supportUseful;
    const auto& deployment=leader.supportProgress;
    if(p.route&&deployment.shooter==p.support&&deployment.route==p.route->id&&deployment.stage==p.routeStage&&
        deployment.observedAt<=time&&time-deployment.observedAt<=6&&(Distance(deployment.sector,p.sector)<=6||Distance(deployment.sector,SupportDeploymentSector(p,leader,time))<=6)&&
        (deployment.status==TaskStatus::Done||(deployment.status==TaskStatus::Executing&&deployment.cause==TaskCause::Arrived)))p.supportDeployed=true;
    for(const auto& receipt:leader.taskReports)if(receipt.soldier==p.support&&receipt.active&&time-receipt.at<10&&(receipt.cause==TaskCause::Arrived||receipt.status==TaskStatus::Done)&&receipt.execution.completion==Completion::Support)p.supportDeployed=true;
    if(p.support>=0&&deployment.shooter==p.support&&deployment.status==TaskStatus::Failed&&deployment.cause==TaskCause::Casualty){
        RememberUnavailable(p,p.support,deployment.statusAt,TaskCause::Casualty);p.support=-1;p.supportSquad=-1;p.supportUseful=p.supportDeployed=false;
        Fail(p,TaskCause::Support,time);exhaust("assigned support reported lost; request higher-command replacement");return;
    }
    bool supportRequestChanged=false;
    if(p.intent.id&&p.mission.purpose==GoalPurpose::Support&&leader.supportSector.shooter==p.support&&time-leader.supportSector.observedAt<8&&Distance(leader.supportSector.focus,p.sector)>=6){
        p.sector=leader.supportSector.focus;supportRequestChanged=true;
        trace("support_request_received","supporting officer receives the assigned maneuver's current threat sector");
    }
    if(p.intent.id&&!newDirective&&p.stage!=MethodStage::Complete&&p.support>=0&&p.support/SquadSize==leader.squad){
        int index=p.support%SquadSize;const auto& report=leader.taskReports[index];
        const Vec3 gunSector=SupportDeploymentSector(p,leader,time);
        if(Distance(gunSector,p.sector)>=6){
            const Vec3 peek=p.hasSlot[index]?p.slots[index].peek:p.positions[index];
            supportRequestChanged|=Distance(peek,gunSector)>100||!ClearLine3D(map,peek+Vec3{0,0,1.5f},gunSector+Vec3{0,0,KnownAimHeight(leader,gunSector,time)});
        }
        if(supportRequestChanged||(p.expected[index]&&report.id==p.expected[index]&&(report.status==TaskStatus::Failed||!report.active))){
            if(!supportRequestChanged&&!report.active){RememberUnavailable(p,p.support,report.at,TaskCause::Casualty);p.support=-1;Fail(p,TaskCause::Support,time);exhaust("assigned support lost; request higher-command replacement");return;}
            Vec3 old=p.hasSlot[index]?p.slots[index].peek:p.positions[index];
            bool recorded=false;for(const auto& failure:p.attempts)recorded|=failure.method==CognitiveMethod::Hold&&Distance(failure.destination,old)<1&&failure.geometry==map.revision;
            if(!supportRequestChanged&&!recorded)p.attempts.push_back({CognitiveMethod::Hold,p.mission.objective,old,map.revision,threats,time,TaskCause::Support});
            if(p.attempts.size()>16)p.attempts.erase(p.attempts.begin());
            const Soldier* gunner=nullptr;for(const auto& member:squad)if(member.id==p.support)gunner=&member;
            const CoverPosition* chosen=nullptr;std::vector<CoverPosition> choices;
            const float targetHeight=KnownAimHeight(leader,gunSector,time);
            if(gunner&&supportRequestChanged&&p.hasSlot[index]&&CoverExists(map,p.slots[index].id)){
                const auto& current=p.slots[index];
                if(Distance(current.peek,gunSector)<=100&&ProtectedAt(map,current.shelter,gunSector,current.crouch?Stance::Crouched:Stance::Standing)&&
                    (ClearLine3D(map,current.peek+Vec3{0,0,1.5f},gunSector+Vec3{0,0,targetHeight})||ClearLine3D(map,current.peek+Vec3{0,0,1.5f},gunSector+Vec3{0,0,1.5f})))chosen=&current;
            }
            if(gunner&&!chosen)choices=Viewpoints(*gunner,map,gunSector,gunner->position,2*SightRange(*gunner),1.5f,targetHeight);
            for(const auto& candidate:choices){
                bool failed=false;for(const auto& failure:p.attempts)failed|=failure.method==CognitiveMethod::Hold&&Distance(failure.destination,candidate.peek)<2&&failure.geometry==map.revision;
                if(!failed&&ProtectedAt(map,candidate.shelter,gunSector,candidate.crouch?Stance::Crouched:Stance::Standing)){chosen=&candidate;break;}
            }
            if(!chosen){Fail(p,TaskCause::Support,time);exhaust("no useful reachable support position remains; request revised mission");return;}
            p.slots[index]=*chosen;p.positions[index]=chosen->shelter;p.hasSlot[index]=true;++p.generations[index];p.expected[index]=0;
            for(const auto& member:squad)if(member.id!=p.support&&member.Active()&&!p.movers[member.id%SquadSize]&&(Distance(member.position,chosen->shelter)<1.2f||Distance(member.position,chosen->peek)<1.2f)){
                Vec3 away=member.position-gunSector,resolved;float length=std::max(1.f,Length(away));
                if(ResolveOrderPosition(map,member.position,member.position+away*(2/length),resolved))p.holds[member.id%SquadSize]=resolved;
            }
            if(p.mission.purpose==GoalPurpose::Support){p.reconsiderAt=std::min(p.mission.expiresAt,time+45);p.stageStarted=time;}
            trace("method_support_reposition","failed support position replaced by another reachable firing angle");
        }
    }
    // Final occupation has different threats from the original crossing. Use
    // received knowledge to update the dependency even while old-sector fire continues.
    if(p.route&&p.requiresSupport&&p.routeStage+1==int(p.route->stages.size())&&p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked){
        auto known=WithTracks(leader,time);int threat=-1;float best=0;
        for(int id=0;id<UnitCount;++id){const auto& ct=known.contacts[id];
            if(!ct.known||time-ct.observedAt>=8||Distance(ct.position,p.destination)>=18)continue;
            if(!ClearLine3D(map,{ct.position.x,ct.position.y,ct.aimHeight},p.destination+Vec3{0,0,1.5f}))continue;
            const float score=(ct.automaticWeapon?3.f:1.f)/(1+Distance(ct.position,p.destination))+(id==p.supportThreat?.1f:0.f);
            if(score>best){best=score;threat=id;}
        }
        p.requestedThreat=threat;
        // Ask for the new threat while retaining the working cover dependency.
        // Actual delivered fire acknowledges an executable handoff; a geometric
        // guess about the gun's ability must not strand the moving team.
        const bool gunCanCover=threat>=0&&ReceivedThreatSupport(leader,known.contacts[threat].position,time,p.support,threat);
        if(gunCanCover&&threat!=p.supportThreat&&Distance(known.contacts[threat].position,p.sector)>6){
            p.supportRetargeted=true;
            p.supportThreat=threat;p.sector=known.contacts[threat].position;p.supportUseful=ReceivedThreatSupport(leader,p.sector,time,p.support,threat);
            trace("method_support_sector_changed","fresh reported resistance covers final occupation; reassess relevant support");
        }
    }
    // Stale targeting information cannot be repaired by waiting for more fire.
    // Inspect a bounded, protected final viewpoint while the main body waits.
    if(p.route&&Moving(p.method)&&p.method!=CognitiveMethod::Withdraw&&p.routeStage+1==int(p.route->stages.size())&&
        p.stage==MethodStage::Prepare&&!p.supportUseful&&!p.scouted&&RecentSupportLife(p,leader,time)&&time-p.supportWaitStarted>=4){
        auto known=WithTracks(leader,time);bool fresh=false;
        for(const auto& ct:known.contacts)fresh|=ct.known&&time-ct.observedAt<8&&Distance(ct.position,p.sector)<8;
        if(!fresh){
            TacticalRoutePlanner planner(map,leader,time);int count=0;
            for(int chosen=0;chosen<2;++chosen){
                int selected=-1,view=-1;float best=1e9f;
                for(const auto& member:squad){const int i=member.id%SquadSize;
                    if(!member.Active()||member.role!=Role::Rifleman||KnowsWounded(leader,member)||!p.movers[i]||p.scouts[i])continue;
                    for(int j=0;j<SquadSize;++j){
                        if(!p.movers[j]||!p.hasSlot[j]||p.unavailable[j]||p.holders[j]||p.scouts[j])continue;
                        const auto& slot=p.slots[j];
                        if(Distance(member.position,slot.peek)>20||!ProtectedAt(map,slot.shelter,p.sector,slot.crouch?Stance::Crouched:Stance::Standing)||
                            !View(map,member,slot.peek,p.sector,1.7f,KnownAimHeight(leader,p.sector,time)))continue;
                        auto path=FollowFinalApproach(map,*p.route,member.position,slot.peek);if(path.empty())continue;
                        const auto cost=planner.Measure(member.position,path);
                        if(cost.fire>0||cost.Total()>=best)continue;
                        best=cost.Total();selected=i;view=j;
                    }
                }
                if(selected<0)break;
                const int i=selected,j=view;
                // A waiting member may own the best viewpoint. Reassign it
                // explicitly, then assess the remaining destinations afresh.
                if(i!=j){std::swap(p.positions[i],p.positions[j]);std::swap(p.slots[i],p.slots[j]);std::swap(p.hasSlot[i],p.hasSlot[j]);
                    std::swap(p.unavailable[i],p.unavailable[j]);p.expected[j]=0;++p.generations[j];}
                p.scouts[i]=true;p.expected[i]=0;++p.generations[i];++count;
            }
            if(count>0){p.scouted=true;p.scoutDeadline=std::min(p.reconsiderAt,time+20);
                trace("method_reconnaissance","support targeting evidence is stale; inspect nearby protected viewpoints before committing the main body");}
        }
    }
    for(int i=0;i<SquadSize;++i)if(p.scouts[i]&&p.stage!=MethodStage::Blocked&&p.stage!=MethodStage::Complete){
        const auto& receipt=leader.taskReports[i];
        const bool matching=p.expected[i]&&receipt.id==p.expected[i]&&receipt.execution.method==p.intent.id&&
            receipt.execution.stage==p.routeStage&&receipt.execution.generation==p.generations[i]&&receipt.execution.completion==Completion::Observe;
        if(matching&&receipt.active&&receipt.status==TaskStatus::Done){
            p.scouts[i]=false;p.expected[i]=0;++p.generations[i];
            trace("method_reconnaissance_received","new sight-line evidence received; issue a separate occupation assignment");
        }else if((matching&&(!receipt.active||receipt.status==TaskStatus::Failed))||time>=p.scoutDeadline){
            Fail(p,TaskCause::NoObservation,time);trace("method_stage","bounded final reconnaissance could not establish useful evidence");break;
        }
    }
    // An already effective forward rifleman can cover final occupation. The
    // original gun dependency stays separate; no arbitrary rifle fire satisfies it.
    if(p.route&&Moving(p.method)&&p.method!=CognitiveMethod::Withdraw&&p.routeStage+1==int(p.route->stages.size())&&
        p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked&&p.localSupport<0&&p.requestedThreat>=0){
        auto known=WithTracks(leader,time);const int threat=p.requestedThreat;const auto& target=known.contacts[threat];
        int mobile=0;for(const auto& s:squad)mobile+=p.movers[s.id%SquadSize]&&s.Active()&&!KnowsWounded(leader,s);
        if(mobile>p.requiredOccupants&&Distance(target.position,p.sector)>6&&!ReceivedThreatSupport(leader,target.position,time,p.support,threat)){
            for(const auto& s:squad){const int index=s.id%SquadSize;const auto& seen=leader.allies[s.id];
                if(!p.movers[index]||s.role!=Role::Rifleman||!s.Active()||KnowsWounded(leader,s)||p.holders[index]||
                    !LocalDelivery(leader,s.id,threat,target.position,time,time-6))continue;
                const FireDelivery* source=nullptr;
                for(const auto& delivery:leader.deliveries)if(delivery.shooter==s.id&&delivery.enemy==threat&&
                    delivery.observedAt<=time&&time-delivery.observedAt<=6&&(!source||delivery.observedAt>source->observedAt))source=&delivery;
                if(!source)continue;
                Vec3 position=source->origin;
                // The shooter's own transported report supplies a timestamped
                // firing position even while the officer looks elsewhere. A newer
                // friendly sighting can contradict that position; neither is omniscience.
                if(seen.known&&seen.observedAt>source->observedAt&&seen.observedAt<=time){
                    if(Distance(seen.position,position)>1.5f)continue;
                    position=seen.position;
                }
                if(Distance(position,p.destination)>20||!ProtectedAt(map,position,target.position,Stance::Crouched)||!Walkable(map,position))continue;
                p.localSupport=s.id;p.localThreat=threat;p.localSector=target.position;p.localPosition=position;p.localAssignedAt=time;
                p.localDeadline=std::min(p.mission.expiresAt,time+2*config.reportDelay+5);p.movers[index]=false;p.hasSlot[index]=false;
                p.positions[index]=position;p.expected[index]=0;++p.generations[index];
                trace("method_local_cover_assigned","forward rifleman has delivered relevant fire from observed cover; assign a separate local covering role");break;
            }
        }
    }
    if(p.localSupport>=0&&p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked&&
        ReceivedThreatSupport(leader,p.localSector,time,p.support,p.localThreat)){
        const int index=p.localSupport%SquadSize;p.holds[index]=p.localPosition;p.expected[index]=0;++p.generations[index];
        p.localSupport=p.localThreat=-1;p.localUseful=false;p.localDeadline=0;
        trace("method_local_cover_released","designated gun now covers the local threat; retire the redundant rifle role with a new assignment");
    }
    if(p.localSupport>=0&&p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked){
        const int index=p.localSupport%SquadSize;const auto& receipt=leader.taskReports[index];
        const bool matched=p.expected[index]&&receipt.id==p.expected[index]&&receipt.execution.method==p.intent.id&&
            receipt.execution.stage==p.routeStage&&receipt.execution.generation==p.generations[index]&&receipt.execution.rifleSupport;
        p.localUseful=matched&&receipt.active&&receipt.status==TaskStatus::Done&&Distance(receipt.position,p.localPosition)<1.5f&&
            LocalDelivery(leader,p.localSupport,p.localThreat,p.localSector,time,p.localAssignedAt);
        if((matched&&(!receipt.active||receipt.status==TaskStatus::Failed))||(!p.localUseful&&time>=p.localDeadline)){
            Fail(p,TaskCause::LocalSupport,time);trace("method_stage","local covering role failed to deliver current evidence before its bounded deadline");
        }else if(p.localUseful){p.localDeadline=std::min(p.mission.expiresAt,time+6);}
        p.supportUseful=p.supportUseful&&p.localUseful;
    }
    if(p.intent.id&&!newDirective&&Moving(p.method)&&p.method!=CognitiveMethod::Withdraw&&p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked&&p.route&&p.routeStage+1<int(p.route->stages.size())){
        const bool needs=StageNeedsSupport(p,leader,squad,map,time);
        if(!needs&&p.requiresSupport){
            p.requiresSupport=false;
            if(p.stage==MethodStage::Prepare){p.stage=MethodStage::Execute;if(p.executionDeadline==0)p.executionDeadline=std::min(p.mission.expiresAt,time+60);p.reconsiderAt=p.executionDeadline;}
            trace("method_protected_transit","known geometry screens this transit stage; keep fire requested for the next exposed stage");
        }else if(needs&&!p.requiresSupport){
            p.requiresSupport=true;holdMovers();p.stage=MethodStage::Prepare;p.supportSince=-1;p.supportWaitStarted=time;p.reconsiderAt=std::min(p.mission.expiresAt,time+30);
            trace("method_stage","received evidence exposes the transit stage; require useful support before continuing");
        }
    }
    bool reconsider=false;
    if(p.intent.id&&!newDirective&&Moving(p.method)&&p.method!=CognitiveMethod::Withdraw&&!p.requiresSupport&&StageNeedsSupport(p,leader,squad,map,time)){
        auto newlyKnown=WithTracks(leader,time);
        for(const auto& contact:newlyKnown.contacts)if(contact.known&&contact.observedAt>p.started&&
            Distance(contact.position,p.destination)<SightRange(leader)&&ClearLine3D(map,contact.position+Vec3{0,0,1.5f},p.destination+Vec3{0,0,1.5f})){
            p.requiresSupport=true;p.sector=contact.position;p.supportThreat=int(&contact-newlyKnown.contacts.data());holdMovers();p.stage=MethodStage::Prepare;
            p.supportSince=-1;p.supportWaitStarted=time;p.supportRetargeted=false;p.reconsiderAt=std::min(p.mission.expiresAt,time+30);
            trace("method_stage","newly recognized threat requires useful support before continuing");return;
        }
    }
    if(p.intent.id&&!newDirective&&p.stage!=MethodStage::Blocked&&p.stage!=MethodStage::Complete){
        int movers=0,arrived=0,blocked=0,interrupted=0;bool pointInterrupted=false,replaced=false;int observed=0;
        int vacant=-1;
        const auto currentKnowledge=WithTracks(leader,time);
        for(const auto& s:squad){int index=s.id%SquadSize;if(!p.movers[index])continue;
            const auto& r=leader.taskReports[index];
            const bool final=!p.route||p.routeStage+1==int(p.route->stages.size());
            const bool matching=r.active&&r.goalId==p.intent.id&&r.at>=p.stageStarted&&
                (!p.expected[index]||r.id==p.expected[index])&&r.execution.method==p.intent.id&&
                r.execution.stage==p.routeStage&&r.execution.generation==p.generations[index];
            const auto& seen=leader.allies[s.id];
            const bool visual=seen.known&&seen.observedAt>=r.at&&seen.observedAt<=time&&time-seen.observedAt<=4;
            const Vec3 at=visual?seen.position:r.position;const float evidenceAt=visual?seen.observedAt:r.at;
            if(final&&s.Active()&&KnowsWounded(leader,s)&&matching&&visual&&!p.holders[index]&&
                r.status==TaskStatus::Interrupted&&(r.cause==TaskCause::Shelter||r.cause==TaskCause::Reload)&&Distance(at,p.destination)<=p.mission.radius&&
                Distance(at,p.positions[index])>.75f&&Walkable(map,at)){
                bool useful=false,protectedPosition=true;
                for(const auto& ct:currentKnowledge.contacts)if(ct.known&&time-ct.observedAt<8){
                    useful|=Distance(at,ct.position)<SightRange(s)&&ClearLine3D(map,at+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight});
                    if(Distance(at,ct.position)<100)protectedPosition&=ProtectedAt(map,at,ct.position,Stance::Crouched);
                }
                if(useful&&protectedPosition&&(!p.route||!FollowFinalApproach(map,*p.route,at,at).empty())){
                    p.holders[index]=true;p.holderDeadline[index]=std::min(p.mission.expiresAt,time+2*config.reportDelay+3);
                    p.positions[index]=at;p.hasSlot[index]=false;p.expected[index]=0;++p.generations[index];
                    trace("method_foothold_adopted","wounded member has a recently observed protected firing position within the goal; request exact occupation receipt");
                    ++movers;continue;
                }
            }
            const bool pendingHolder=p.holders[index]&&(!matching||(r.status!=TaskStatus::Failed&&r.status!=TaskStatus::Superseded))&&time<=p.holderDeadline[index]&&s.Active()&&visual&&Distance(at,p.positions[index])<1.5f;
            const bool holding=final&&s.Active()&&matching&&(r.status==TaskStatus::Done||(visual&&r.status!=TaskStatus::Failed&&r.status!=TaskStatus::Superseded))&&r.execution.completion==Completion::Occupy&&
                time-evidenceAt<=4&&(Distance(at,p.positions[index])<.75f||(p.hasSlot[index]&&Distance(at,p.slots[index].peek)<.75f));
            // A wounded soldier already holding the assigned position need not be
            // sent on another move. Retain only a current, correlated foothold;
            // departure, incapacity, stale evidence and replacement invalidate it.
            // Injury and a new generation each get a bounded acknowledgment
            // window. Old-generation receipts cannot end or renew that window.
            bool continuing=false;
            if(s.Active()&&KnowsWounded(leader,s)&&!p.holders[index]){
                auto& injury=p.injuries[index];const float window=2*config.reportDelay+3;
                if(injury.deadline==0||injury.generation!=p.generations[index]){
                    injury={p.generations[index],std::min(p.mission.expiresAt,time+window),-1,time,time,-1};
                    trace("method_injury_reassessment","received injury or changed assignment starts a bounded capability acknowledgment window");
                }
                const bool current=matching&&(r.status==TaskStatus::Executing||r.status==TaskStatus::Received||r.status==TaskStatus::Interrupted);
                const bool shelter=current&&r.status==TaskStatus::Interrupted&&(r.cause==TaskCause::Shelter||r.cause==TaskCause::Passage);
                const float dt=std::max(0.f,time-injury.updatedAt);injury.updatedAt=time;
                if(shelter){
                    if(injury.pauseSince<0)injury.pauseSince=time;
                    injury.deadline=std::min(p.mission.expiresAt,injury.deadline+dt);
                    if(p.executionDeadline>0)injury.deadline=std::min(injury.deadline,p.executionDeadline);
                }else injury.pauseSince=-1;
                const bool reported=current&&r.remaining>=0&&r.at>injury.evidenceAt;
                const float observedAt=reported?r.at:evidenceAt;
                const float distance=reported?r.remaining:Distance(at,p.positions[index]);
                if(current&&(reported||(visual&&!injury.pathMetric))&&observedAt>injury.evidenceAt&&observedAt<=time&&time-observedAt<=2*config.reportDelay+2){
                    if(injury.remaining<0||(reported&&!injury.pathMetric)){injury.remaining=distance;injury.pathMetric=reported;}
                    else if(distance+.5f<injury.remaining){
                        injury.remaining=distance;injury.deadline=std::min(p.mission.expiresAt,time+window);
                    }
                    injury.evidenceAt=observedAt;
                }
                continuing=time<injury.deadline&&(!shelter||time-injury.pauseSince<20)&&
                    (!matching||(r.status!=TaskStatus::Failed&&r.status!=TaskStatus::Superseded&&r.active));
            }
            if((!s.Active()||(KnowsWounded(leader,s)&&!holding&&!pendingHolder&&!continuing))&&(!r.active||leader.knownWounded[s.id])){p.holds[index]=at;p.movers[index]=false;p.holders[index]=false;p.expected[index]=0;++p.generations[index];vacant=index;replaced=true;continue;}
            ++movers;
            if(p.route&&p.routeStage+1==int(p.route->stages.size())){
                const Vec3 assigned=p.hasSlot[index]?p.slots[index].peek:p.positions[index];
                bool occupied=false;
                for(const auto& ct:currentKnowledge.contacts)occupied|=ct.known&&time-ct.observedAt<8&&Distance(ct.position,assigned)<2;
                if(occupied&&!p.unavailable[index]){
                    p.rejectedPositions[index]=assigned;++p.generations[index];p.expected[index]=0;
                    if(p.slotRetries[index]<2){++p.slotRetries[index];Positions(p,leader,squad,map,time,index);
                        trace("method_slot_replaced","fresh evidence places an enemy in the assigned final position; bounded replacement retains the stage budget");}
                    else {p.unavailable[index]=true;
                        trace("method_slot_unavailable","occupied final positions exhausted the member's replacement budget; require command reassessment");}
                    continue;
                }
            }
            if(r.goalId!=p.intent.id||!r.active||r.at<p.stageStarted)continue;
            if(p.expected[index]&&(r.id!=p.expected[index]||r.execution.method!=p.intent.id||r.execution.stage!=p.routeStage||r.execution.generation!=p.generations[index]))continue;
            if(p.route&&p.routeStage+1==int(p.route->stages.size())&&r.cause==TaskCause::Unreachable&&
                (r.status==TaskStatus::Blocked||r.status==TaskStatus::Failed)&&time-r.at>=2&&p.slotRetries[index]<2){
                p.rejectedPositions[index]=p.hasSlot[index]?p.slots[index].peek:p.positions[index];++p.slotRetries[index];++p.generations[index];
                Positions(p,leader,squad,map,time,index);
                trace("method_slot_replaced","correlated blocked final slot replaced; other assignments and stage budget retained");continue;
            }
            bool temporary=r.status==TaskStatus::Interrupted&&(r.cause==TaskCause::Shelter||r.cause==TaskCause::Passage);
            interrupted+=temporary;if(movers==1)pointInterrupted=temporary;
            blocked+=r.status==TaskStatus::Blocked||r.status==TaskStatus::Failed;
            const bool contradicted=final&&visual&&Distance(at,p.positions[index])>=.75f&&(!p.hasSlot[index]||Distance(at,p.slots[index].peek)>=.75f);
            arrived+=r.status==TaskStatus::Done&&r.execution.completion==(final?Completion::Occupy:Completion::Transit)&&
                !contradicted&&(!final||!KnowsWounded(leader,s)||holding);
            observed+=r.status==TaskStatus::Done&&r.execution.completion==Completion::Observe;
        }
        if(replaced){
            int desired=p.method==CognitiveMethod::Observe?2:2;
            for(const auto& s:squad)if(movers<desired&&s.Active()&&!IsPlatoonStaff(s)&&!s.machineGun&&!p.movers[s.id%SquadSize]&&!KnowsWounded(leader,s)&&(p.method!=CognitiveMethod::Observe||s.role==Role::Rifleman)){
                int index=s.id%SquadSize;p.movers[index]=true;++movers;++p.generations[index];p.expected[index]=0;
                if(vacant>=0){p.positions[index]=p.positions[vacant];p.slots[index]=p.slots[vacant];p.hasSlot[index]=p.hasSlot[vacant];}
            }
            trace("method_roles_replaced","received loss changes affected roles; unaffected assignments and receipts retained");
        }
        // Occupation is a two-person foothold. Support gates movement, not evidence
        // that the required members already occupy the final assigned positions.
        if(Moving(p.method)&&(!p.route||p.routeStage+1>=int(p.route->stages.size()))&&movers>=p.requiredOccupants&&arrived>=p.requiredOccupants){
            p.stage=MethodStage::Complete;p.lastProgress=time;
            trace("plan_completed","two required members occupy final assigned positions; parent assessed separately");
            if(Distance(p.destination,p.mission.objective)>p.mission.radius){Fail(p,TaskCause::Arrived,time);trace("method_stage","alternate position occupied; parent objective still requires a viable approach");}
            return;
        }
        const bool pause=pointInterrupted||(movers>0&&interrupted>=(movers+1)/2)||leader.understoodSuppression>.7f;
        if(pause!=p.safetyOverride){p.safetyOverride=pause;if(pause)p.safetySince=time;else p.safetySince=-1;trace(pause?"method_safety_override":"method_resume",pause?"temporary shelter or passage; retain objective":"resume the retained assignments");}
        if(Moving(p.method)&&movers<p.requiredOccupants){Fail(p,TaskCause::InsufficientStrength,time);trace("method_stage","fewer capable members than the objective requires");}
        else if(p.executionDeadline>0&&time>=p.executionDeadline){Fail(p,TaskCause::Timeout,time);trace("method_stage","stage execution budget exhausted; support transitions cannot renew it");}
        else if(pause&&movers-interrupted<p.requiredOccupants&&time-p.safetySince>=20){Fail(p,TaskCause::Shelter,time);trace("method_stage","persistent safety interruption prevents execution");}
        else if(p.method==CognitiveMethod::Observe){
            bool learned=observed>0;
            if(learned){p.informationGained=true;p.inspectedGeometry=map.revision;p.inspectedThreats=threats;p.inspectedSector=p.sector;p.stage=MethodStage::Complete;p.lastProgress=time;trace("method_stage","assigned observer's completion evidence received; parent mission assessed separately");}
            else if(blocked>=std::max(1,movers)||time>=p.reconsiderAt){Fail(p,TaskCause::NoObservation,time);trace("method_stage","viewpoints yielded no usable observation");}
        }else if(p.stage==MethodStage::Prepare){
            if(p.prepareDeadline<=0)p.prepareDeadline=std::min(p.mission.expiresAt,time+60);
            const auto& progress=leader.supportProgress;
            const bool deploying=progress.status==TaskStatus::Received||progress.status==TaskStatus::Executing||progress.status==TaskStatus::Interrupted;
            if(!p.supportUseful&&deploying&&p.route&&progress.shooter==p.support&&progress.route==p.route->id&&
                progress.stage==p.routeStage&&(Distance(progress.sector,p.sector)<=6||Distance(progress.sector,SupportDeploymentSector(p,leader,time))<=6)&&progress.observedAt<=time&&time-progress.observedAt<=6&&
                progress.deadline>time&&progress.assignment&&progress.assignment!=p.awaitedSupportAssignment){
                p.awaitedSupportAssignment=progress.assignment;
                p.reconsiderAt=std::min(p.prepareDeadline,std::max(p.reconsiderAt,progress.deadline+config.reportDelay+2));
                trace("method_support_deploying","assigned gun reports bounded deployment; retain route, wait for actual useful fire");
            }

            if(p.supportUseful){if(p.supportSince<0)p.supportSince=time;
                if(time>=p.supportSince){p.stage=MethodStage::Execute;
                    if(p.executionDeadline==0)p.executionDeadline=std::min(p.mission.expiresAt,time+60);
                    p.reconsiderAt=p.executionDeadline;trace("method_stage","sustained useful support releases staged movement");}}
            else p.supportSince=-1;
            if((time>=p.reconsiderAt||time>=p.prepareDeadline)&&p.stage==MethodStage::Prepare){
                RememberUnavailable(p,p.support,time,TaskCause::Timeout);Fail(p,TaskCause::Support,time);
                trace("method_stage","support failed within the bounded preparation budget; require new delivery evidence before retrying this source");
            }
        }else if(Moving(p.method)){
            if(p.requiresSupport&&!p.supportUseful){holdMovers();p.stage=MethodStage::Prepare;p.supportSince=-1;p.supportWaitStarted=time;p.supportRetargeted=false;p.reconsiderAt=std::min(p.mission.expiresAt,time+20);trace("method_stage","support lost; retain route and prepare again");return;}
            if(p.route&&p.routeStage+1<int(p.route->stages.size())&&movers>=1&&arrived>=std::max(1,(movers+1)/2)){
                p.lastProgress=time;
                ++p.routeStage;p.prepareDeadline=0;p.injuries={};p.stageStarted=time;p.executionDeadline=p.reconsiderAt=std::min(p.mission.expiresAt,time+60);
                p.slotRetries={};p.holders={};p.holderDeadline={};p.scouts={};p.scouted=false;p.scoutDeadline=0;
                Positions(p,leader,squad,map,time);
                p.requiresSupport=p.method!=CognitiveMethod::Withdraw&&StageNeedsSupport(p,leader,squad,map,time);
                if(p.requiresSupport&&!p.supportUseful){holdMovers();p.stage=MethodStage::Prepare;p.supportSince=-1;p.supportWaitStarted=time;p.executionDeadline=0;p.reconsiderAt=std::min(p.mission.expiresAt,time+30);}
                trace("method_stage_advanced","current assignment arrivals advance one route stage");
            }else if(blocked>=2||time>=p.reconsiderAt){Fail(p,blocked?TaskCause::Unreachable:TaskCause::Timeout,time);trace("method_stage","execution cannot complete this approach");}
        }
        bool freshThreat=false;auto memory=WithTracks(leader,time);
        for(const auto& ct:memory.contacts)freshThreat|=ct.known&&ct.observedAt>p.started&&Distance(ct.position,p.destination)<12;
        const bool restoredSupport=!wasUseful&&p.supportUseful&&p.method==CognitiveMethod::AlternateApproach&&
            std::any_of(p.attempts.begin(),p.attempts.end(),[&](const FailedAttempt& failure){return failure.cause==TaskCause::Support&&failure.method==CognitiveMethod::SupportedAdvance&&Distance(failure.objective,p.mission.objective)<6;});
        reconsider=restoredSupport||(freshThreat&&threats!=p.threats&&time>=p.committedUntil&&RememberedRisk(leader,p.destination,time)>p.riskAtCommit+.15f);
        if(reconsider)trace("method_reconsidered",restoredSupport?"restored useful support makes the parent approach eligible again":"new threat changes the committed approach");
        if(p.stage!=MethodStage::Complete&&p.stage!=MethodStage::Blocked&&!reconsider)return;
    }
    if(!newDirective&&p.intent.id&&p.stage==MethodStage::Complete&&!(p.method==CognitiveMethod::Observe&&p.mission.purpose!=GoalPurpose::Observe))return;
    if(p.exhausted&&p.geometry==map.revision&&p.threats==threats){
        bool supportChanged=false;for(const auto& failure:p.attempts)supportChanged|=failure.cause==TaskCause::Support&&p.supportUseful&&!wasUseful;
        for(const auto& loss:p.supportFailures)if(loss.cause!=TaskCause::Casualty&&FreshSourceFire(leader,loss.soldier,time,loss.observedAt))supportChanged=true;
        bool sameGoal=!newDirective||(order.intent.purpose==p.mission.purpose&&Distance(order.intent.objective,p.mission.objective)<6);
        if(sameGoal&&!supportChanged){if(newDirective)p.directive=order.serial;return;}
    }
    GoalIntent mission=newDirective?order.intent:p.mission;
    if(!mission.id&&!p.intent.id)mission={0,0,Distance(leader.position,command.mission)<SightRange(leader)?GoalPurpose::Observe:GoalPurpose::Seize,command.mission,8,time+120};
    if(newDirective&&!mission.id)mission={order.serial,0,GoalPurpose::Seize,order.position,8,order.expiresAt};
    if(newDirective){
        mission.expiresAt=order.expiresAt;
        if(p.intent.id&&mission.purpose==p.mission.purpose&&Distance(mission.objective,p.mission.objective)<1)mission.expiresAt=std::min(mission.expiresAt,p.mission.expiresAt);
    }
    if(time>=mission.expiresAt){p.directive=order.serial;p.mission=mission;p.intent.expiresAt=mission.expiresAt;p.intent.parent=0;exhaust("equivalent reissue cannot extend an expired mission");return;}
    const Vec3 objective=mission.objective;
    Vec3 sector=newDirective?order.sector:p.intent.id?p.sector:command.mission;
    auto memory=WithTracks(leader,time);float newest=-100,bestThreat=-100;bool enemy=false;int sectorThreat=-1;
    // Weapon importance is bounded: an old gun report cannot forever displace
    // fresh evidence of resistance on the current approach.
    for(int id=0;id<UnitCount;++id){const auto& ct=memory.contacts[id];if(!ct.known)continue;
        const float priority=ct.observedAt+(ct.automaticWeapon?3.f:0.f);
        if(priority>bestThreat){bestThreat=priority;newest=ct.observedAt;sector=ct.position;sectorThreat=id;enemy=true;}}
    if(mission.purpose==GoalPurpose::Observe)sector=mission.objective;
    bool informationFresh=enemy&&time-newest<8;
    for(const auto& e:leader.coverage)informationFresh|=time-e.observedAt<30&&CoverageSamples(e.samples)>=5&&Distance(e.sector,sector)<8;
    int mobile=0,support=newDirective?order.supportSoldier:p.support;bool ownGun=false;
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)&&!KnowsWounded(leader,s)){++mobile;if(s.machineGun){support=s.id;ownGun=true;}}
    if(!SourceAvailable(p,leader,support,time))support=-1;
    bool useful=ReceivedUsefulSupport(leader,sector,time);
    if(support<0)for(const auto& delivery:leader.deliveries)if(delivery.supportWeapon&&time-delivery.observedAt<6&&SourceAvailable(p,leader,delivery.shooter,time)){support=delivery.shooter;break;}
    const float ratio=(enemy?BelievedStrength(leader,sector,24,time):0)/std::max(1,mobile),caution=1-leader.officer.risk;
    std::vector<Candidate> choices;
    choices.push_back({CognitiveMethod::Hold,leader.position,.1f,{},true,"retain protected position"});
    auto views=Viewpoints(leader,map,sector,leader.position,65);
    if(View(map,leader,leader.position,sector)){CoverPosition here;here.shelter=here.peek=leader.position;here.crouch=false;views.insert(views.begin(),here);}
    for(size_t i=0;i<std::min(size_t(8),views.size());++i){const auto& view=views[i];
        bool failed=FailedHere(p,CognitiveMethod::Observe,objective,view.peek,map.revision,threats,useful);
        const bool inspected=p.informationGained&&p.inspectedGeometry==map.revision&&p.inspectedThreats==threats&&Distance(p.inspectedSector,sector)<8&&Distance(p.mission.objective,objective)<6;
        choices.push_back({CognitiveMethod::Observe,view.peek,mission.purpose==GoalPurpose::Observe?10.f:informationFresh?.05f:.8f-Distance(view.shelter,leader.position)*.003f,{},!failed&&!inspected,inspected?"same sector already inspected; no changed evidence or geometry":"reachable viewpoint with range and unblocked sight lines"});
    }
    TacticalRoutePlanner planner(map,leader,time,leader.team?config.emberDoctrine:config.doctrine);
    auto routeCandidate=[&](CognitiveMethod method,Vec3 target,float reward){
        if(FailedHere(p,method,objective,target,map.revision,threats,useful))return;
        auto route=std::make_shared<TacticalRoute>(planner.Evaluate(leader.position,target));
        // Protected transit does not require a radio round trip at every
        // navigation sample. Preserve exposed crossings and final occupation.
        std::vector<RouteStage> stages;
        for(size_t index=0;index<route->stages.size();++index){const auto& stage=route->stages[index];
            if(index+1<route->stages.size()&&!stages.empty()&&stage.exposedSeconds<.01f&&stages.back().exposedSeconds<.01f&&stages.back().seconds+stage.seconds<=10){
                auto& previous=stages.back();previous.end=stage.end;previous.destination=stage.destination;previous.seconds+=stage.seconds;previous.exposedSeconds+=stage.exposedSeconds;
            }else stages.push_back(stage);
        }
        route->stages=std::move(stages);
        int available=mobile;
        const bool retained=!newDirective&&reconsider&&p.stage!=MethodStage::Blocked&&method==p.method&&Distance(target,p.destination)<1;
        if(retained){
            available=0;for(const auto& member:squad)available+=member.Active()&&p.movers[member.id%SquadSize]&&!p.unavailable[member.id%SquadSize];
        }
        bool valid=route->status==RouteStatus::Complete&&!route->points.empty()&&available>=2;
        if(method!=CognitiveMethod::Withdraw&&enemy&&!ownGun&&support<0)valid=false;
        const float effectiveRatio=retained?(enemy?BelievedStrength(leader,sector,24,time):0)/std::max(1,available):ratio;
        float score=reward-std::min(1.f,route->cost.Total()/250)*.4f-caution*effectiveRatio*.3f-RememberedRisk(leader,target,time)*caution*.1f;
        choices.push_back({method,target,score,route,valid,"route, available movers and assigned support assessed from local knowledge"});
    };
    if(mission.purpose!=GoalPurpose::Observe&&mission.purpose!=GoalPurpose::Support){
        routeCandidate(CognitiveMethod::SupportedAdvance,objective,1.5f);
        auto alternatives=Viewpoints(leader,map,sector,objective,30);
        int checked=0;for(const auto& slot:alternatives){if(Distance(slot.peek,objective)<8)continue;routeCandidate(CognitiveMethod::AlternateApproach,slot.peek,1.25f);if(++checked==6)break;}
    }
    if(mission.purpose==GoalPurpose::Support)choices[0].score=10;
    if(mission.purpose==GoalPurpose::Withdraw)routeCandidate(CognitiveMethod::Withdraw,objective,10);
    auto best=choices.begin();for(auto it=choices.begin();it!=choices.end();++it){
        if(!newDirective&&it->method!=p.method)it->score-=.25f*(1-leader.officer.adaptability);
        AcceptedPlan candidate=p;candidate.method=it->method;candidate.destination=it->destination;
        TracePlan(diagnostics,leader,candidate,time,"method_candidate",std::string(it->feasible?"eligible ":"rejected ")+it->reason+" score="+std::to_string(it->score));
        if(it->feasible&&it->score>best->score)best=it;
    }
    if(!newDirective&&reconsider&&p.stage!=MethodStage::Blocked&&best->method==p.method&&Distance(best->destination,p.destination)<1){
        p.threats=threats;p.knowledge=leader.knowledgeRevision;p.riskAtCommit=RememberedRisk(leader,p.destination,time);
        p.committedUntil=time+4+(1-leader.officer.adaptability)*16;
        trace("method_revalidated","new evidence assessed; the same approach remains best, so retain execution and receipts");return;
    }
    const bool impossible=best->method==CognitiveMethod::Hold&&mission.purpose!=GoalPurpose::Support;
    auto supportFailures=p.supportFailures;auto attempts=p.attempts;bool informationGained=p.informationGained&&Distance(p.mission.objective,mission.objective)<6;int revision=p.revision+1;
    const auto inspectedGeometry=p.inspectedGeometry,inspectedThreats=p.inspectedThreats;const Vec3 inspectedSector=p.inspectedSector;
    p={};p.supportFailures=std::move(supportFailures);p.informationGained=informationGained;p.inspectedGeometry=inspectedGeometry;p.inspectedThreats=inspectedThreats;p.inspectedSector=inspectedSector;p.mission=mission;p.attempts=std::move(attempts);p.revision=revision;p.directive=order.serial;p.geometry=map.revision;p.threats=threats;
    p.method=best->method;p.destination=best->destination;p.sector=sector;p.route=best->route;p.support=support;p.supportSquad=support<0?-1:support/SquadSize;
    // Preserve the identity whose evidence selected this sector. Re-discovering
    // it by proximity can silently bind a rifleman sharing the gun emplacement.
    p.supportThreat=sectorThreat;
    p.intent={1000000+leader.squad*10000+revision,mission.id,p.method==CognitiveMethod::Observe?GoalPurpose::Observe:mission.purpose,p.method==CognitiveMethod::Observe?sector:objective,8,mission.expiresAt};
    p.started=p.stageStarted=p.lastProgress=time;p.committedUntil=time+4+(1-leader.officer.adaptability)*16;
    p.requiresSupport=enemy&&Moving(p.method)&&p.method!=CognitiveMethod::Withdraw&&StageNeedsSupport(p,leader,squad,map,time);
    p.stage=Moving(p.method)&&p.requiresSupport?MethodStage::Prepare:MethodStage::Execute;p.supportWaitStarted=p.stage==MethodStage::Prepare?time:-1;p.prepareDeadline=p.stage==MethodStage::Prepare?std::min(mission.expiresAt,time+60):0;
    p.reconsiderAt=std::min(mission.expiresAt,time+(p.stage==MethodStage::Prepare?30.f:60.f));
    p.riskAtCommit=RememberedRisk(leader,p.destination,time);p.knowledge=leader.knowledgeRevision;
    int observers=0;
    for(const auto& s:squad){int index=s.id%SquadSize;p.positions[index]=p.holds[index]=s.position;
        const bool eligible=s.Active()&&!IsPlatoonStaff(s)&&!s.machineGun&&!KnowsWounded(leader,s);
        if(eligible&&Moving(p.method))p.movers[index]=true;
        if(eligible&&p.method==CognitiveMethod::Observe&&s.role==Role::Rifleman&&observers<2){p.movers[index]=true;++observers;}
    }
    if(best->route){best->route->id=uint64_t(leader.squad+1)*100000+revision;best->route->plan=revision;}
    Positions(p,leader,squad,map,time);
    for(const auto& gunner:squad)if(gunner.Active()&&gunner.machineGun){
        auto supports=Viewpoints(gunner,map,sector,gunner.position,65,1.5f,KnownAimHeight(leader,sector,time));float bestDistance=1e9f;
        for(const auto& slot:supports)if(ProtectedAt(map,slot.shelter,sector,slot.crouch?Stance::Crouched:Stance::Standing)){
            float distance=Distance(gunner.position,slot.shelter);if(distance>=bestDistance)continue;
            bestDistance=distance;p.positions[gunner.id%SquadSize]=slot.shelter;p.slots[gunner.id%SquadSize]=slot;p.hasSlot[gunner.id%SquadSize]=true;
        }
    }
    command.planId=revision;
    TracePlan(diagnostics,leader,p,time,"method_accepted",std::string(CognitiveMethodName(p.method))+": "+best->reason);
    if(best->route){if(diagnostics&&diagnostics->options.enabled)diagnostics->routes.push_back(best->route);trace("proposal_accepted","accepted route with explicit support and execution requirements");}
    if(impossible||(p.method==CognitiveMethod::Observe&&observers==0))exhaust("no remaining executable method for the current evidence and objective");
}
std::vector<PlannedOrder> CognitiveOrders(const Soldier& leader,const std::vector<Soldier>& squad,const SquadCommand& command,float time){
    std::vector<PlannedOrder> orders;const auto& p=command.accepted;
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)){
        const int index=s.id%SquadSize;
        const bool localCover=s.id==p.localSupport&&p.stage!=MethodStage::Blocked;
        bool move=p.movers[index]&&p.stage!=MethodStage::Blocked;
        bool released=p.stage==MethodStage::Execute||p.stage==MethodStage::Complete;
        const bool final=!p.route||p.routeStage+1>=int(p.route->stages.size());
        TeamPlan team;team.serial=p.revision*100+p.routeStage+(p.stage==MethodStage::Prepare?50:0);team.route=move?p.route:nullptr;team.moving=p.routeStage;team.released=move&&released;
        Task task=move?(p.method==CognitiveMethod::Withdraw?Task::PullBack:Task::BoundMove):(s.machineGun?Task::Overwatch:Task::Hold);
        Completion completion=move?(p.method==CognitiveMethod::Observe?Completion::Observe:final?Completion::Occupy:Completion::Transit):s.machineGun?Completion::Support:Completion::Occupy;
        const bool slot=(move||s.machineGun)&&p.hasSlot[index];
        Vec3 position=move||s.machineGun?p.positions[index]:p.holds[index];
        ExecutionContract execution{completion,p.intent.id,p.routeStage,p.generations[index],move&&!released?0.f:p.reconsiderAt,move&&!released};
        execution.unavailable=move&&p.unavailable[index];
        if(move&&p.scouts[index]){execution.completion=Completion::Observe;execution.paused=false;execution.deadline=p.scoutDeadline;team.released=true;}
        Vec3 sector=s.id==p.support?SupportDeploymentSector(p,leader,time):p.sector;
        if(localCover){task=Task::BoundCover;position=p.localPosition;sector=p.localSector;execution.completion=Completion::Support;
            execution.rifleSupport=true;execution.supportThreat=p.localThreat;execution.deadline=p.mission.expiresAt;}
        orders.push_back({s.id,task,position,sector,team,slot,p.slots[index],execution});
    }
    return orders;
}
}

namespace army {
void MakeCognitiveEncounter(const Config& config,int variant,Map& map,Frame& frame){
    frame=InitialFrame(config);map={};map.halfWidth=90;map.halfHeight=85;
    if(variant==43){
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=7&&s.id!=8&&s.id!=10&&s.id!=11&&s.id!=12&&s.id!=33){s.health=0;s.action=Action::Killed;}
        map.obstacles={{{-58,0},{.6f,4},false,true,1.3f},{{-28,8},{.6f,4},false,true,1.3f},{{32,15},{.6f,4},false,true,1.3f},{{52,25},{.6f,4},false,true,1.3f}};PrepareGeometry(map);
        frame.soldiers[0].position={-64,-6};frame.soldiers[7].position={-60,0};
        frame.soldiers[8].position={20,20};frame.soldiers[10].position={18,22};frame.soldiers[11].position={18,24};frame.soldiers[12].position={58,32};
        frame.soldiers[32].position={30,15};frame.soldiers[33].position={48,25};
        frame.soldiers[33].machineGun=true;frame.soldiers[33].role=Role::MachineGunner;
        for(int id:{33}){frame.soldiers[id].health=10000;frame.soldiers[id].reloadUntil=600;}
        for(auto& s:frame.soldiers)s.goal=s.position;
        for(int squad:{0,1}){auto& p=frame.command[squad].accepted;auto& leader=frame.soldiers[squad*SquadSize];
            p.revision=1;p.directive=9000+squad;p.support=7;p.supportSquad=0;p.supportThreat=32;p.sector={30,15};p.geometry=map.revision;
            p.reconsiderAt=45;p.committedUntil=20;p.requiredOccupants=2;p.requiresSupport=squad==1;
            p.method=squad?CognitiveMethod::SupportedAdvance:CognitiveMethod::Hold;p.stage=squad?MethodStage::Prepare:MethodStage::Execute;
            p.destination=squad?Vec3{41,25}:frame.soldiers[7].position;
            p.mission={9000+squad,0,squad?GoalPurpose::Seize:GoalPurpose::Support,p.destination,8,80};p.intent={9010+squad,9000+squad,p.mission.purpose,p.destination,8,80};
            for(const auto& member:frame.soldiers)if(member.squad==squad)p.positions[member.id%SquadSize]=p.holds[member.id%SquadSize]=member.position;
            if(!squad){auto choices=Viewpoints(frame.soldiers[7],map,p.sector,frame.soldiers[7].position,15);
                if(!choices.empty()){p.hasSlot[7]=true;p.slots[7]=choices.front();p.positions[7]=choices.front().shelter;}}
            else {auto route=std::make_shared<TacticalRoute>();route->id=900;route->geometry=map.revision;route->start=leader.position;route->destination=p.destination;
                route->points={p.destination};route->stages={{0,1,p.destination,20,0}};p.route=route;
                for(int index:{2,3}){p.movers[index]=true;p.positions[index]=p.destination+Vec3{0,float(index-2)*2};}}
            auto& order=leader.platoonOrder;order.serial=p.directive;order.intent=p.mission;order.task=squad?PlatoonTask::FlankNorth:PlatoonTask::Support;
            order.position=p.destination;order.sector=p.sector;order.expiresAt=80;order.supportSoldier=7;order.supportSquad=0;
            frame.command[squad].mission=p.destination;
        }
        frame.platoon[0].nextPlanAt=80;return;
    }
    if(variant>=37&&variant<=39){
        // Production projectile casualty, received by the supporting leader and
        // relayed to a different squad. Variant 38 protects the living source;
        // variant 39 provides a second reported gun for a platoon amendment.
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=7&&s.id!=8&&s.id!=10&&s.id!=11&&s.id!=32&&
            !(variant==39&&(s.id==6||s.id==16||s.id==23))){s.health=0;s.action=Action::Killed;}
        map.obstacles={{{-20,15},{1,12},false,false,4},{{-34,-10},{1,4},false,false,4}};
        if(variant==38)map.obstacles.push_back({{-28,0},{.6f,4},false,false,4});
        if(variant==39)map.obstacles.push_back({{-34,12},{1,5},false,false,4});
        PrepareGeometry(map);
        frame.soldiers[0].position={-36,-10};frame.soldiers[7].position={-30,0};
        frame.soldiers[7].health=1;frame.soldiers[7].reloadUntil=600;
        frame.soldiers[8].position={-30,20};frame.soldiers[10].position={-34,22};frame.soldiers[11].position={-32,24};
        frame.soldiers[32].position={-15,0};frame.soldiers[32].health=10000;
        if(variant==39){frame.soldiers[6].position={-38,14};frame.soldiers[16].position={-38,12};
            frame.soldiers[23].position={-45,-3};frame.soldiers[23].health=10000;frame.soldiers[23].reloadUntil=20;
            frame.soldiers[23].machineGun=true;frame.soldiers[23].role=Role::MachineGunner;}
        for(auto& s:frame.soldiers)s.goal=s.position;
        for(int squad=0;squad<(variant==39?3:2);++squad){
            auto& p=frame.command[squad].accepted;auto& leader=frame.soldiers[squad*SquadSize];
            p.revision=1;p.directive=9000+squad;p.support=squad==2?23:7;p.supportSquad=squad==2?2:0;p.supportThreat=32;p.sector={-15,0};
            p.geometry=map.revision;p.reconsiderAt=40;p.requiredOccupants=2;p.requiresSupport=squad==1;
            p.method=squad==1?CognitiveMethod::SupportedAdvance:CognitiveMethod::Hold;p.stage=squad==1?MethodStage::Prepare:MethodStage::Execute;
            p.destination=squad==1?Vec3{-10,20}:frame.soldiers[p.support].position;
            p.mission={9000+squad,0,squad==1?GoalPurpose::Seize:GoalPurpose::Support,p.destination,8,80};
            p.intent={9010+squad,9000+squad,p.mission.purpose,p.destination,8,80};
            for(const auto& s:frame.soldiers)if(s.squad==squad)p.positions[s.id%SquadSize]=p.holds[s.id%SquadSize]=s.position;
            if(squad==1){auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->id=900;route->start=leader.position;
                route->destination=p.destination;route->points={p.destination};route->stages={{0,1,p.destination,20,0}};p.route=route;
                for(int index:{0,2,3}){p.movers[index]=true;p.positions[index]=p.destination+Vec3{0,float(index)*2};}}
            auto& order=leader.platoonOrder;order.serial=p.directive;order.intent=p.mission;order.task=squad==1?PlatoonTask::FlankNorth:PlatoonTask::Support;
            order.position=p.destination;order.sector=p.sector;order.expiresAt=80;order.supportSoldier=p.support;order.supportSquad=p.supportSquad;
            frame.command[squad].mission=p.destination;
        }
        frame.platoon[0].nextPlanAt=80;return;
    }
    if(variant==34||variant==35){
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=2&&s.id!=3&&s.id!=7&&s.id!=32){s.health=0;s.action=Action::Killed;}
        map.obstacles={{{18,0},{1,variant==34?3.f:12.f},false,false,4}};PrepareGeometry(map);
        frame.soldiers[0].position={8,0};frame.soldiers[2].position={8,-1};frame.soldiers[3].position={8,1};
        frame.soldiers[7].position={-25,0};frame.soldiers[7].reloadUntil=600;
        frame.soldiers[32].position={35,0};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
        for(auto& s:frame.soldiers)s.goal=s.position;
        auto& p=frame.command[0].accepted;p.revision=1;p.directive=9000;p.method=CognitiveMethod::SupportedAdvance;p.stage=MethodStage::Prepare;
        p.support=7;p.supportSquad=0;p.supportThreat=32;p.sector={35,0};p.requiresSupport=true;p.supportWaitStarted=0;
        p.geometry=map.revision;p.reconsiderAt=35;p.destination={16.4f,0};
        auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->id=900;route->start={8,0};route->destination=p.destination;
        route->points={p.destination};route->stages={{0,1,p.destination,7,0}};p.route=route;
        for(const auto& s:frame.soldiers)if(s.squad==0)p.positions[s.id%SquadSize]=p.holds[s.id%SquadSize]=s.position;
        int member=2;for(const auto& slot:CoverPositions(map))if(std::abs(slot.peek.x-16.4f)<.1f&&member<=3){
            p.movers[member]=true;p.hasSlot[member]=true;p.slots[member]=slot;p.positions[member]=slot.shelter;++member;}
        p.mission={9000,0,GoalPurpose::Seize,p.destination,8,40};p.intent={9001,9000,GoalPurpose::Seize,p.destination,8,40};
        auto& leader=frame.soldiers[0];leader.reports[32]={true,false,{35,0},-10};
        leader.platoonOrder.serial=9000;leader.platoonOrder.intent=p.mission;leader.platoonOrder.task=PlatoonTask::FlankNorth;
        leader.platoonOrder.position=p.destination;leader.platoonOrder.expiresAt=40;frame.command[0].mission=p.destination;frame.platoon[0].nextPlanAt=40;return;
    }
    if(variant==32||variant==33){
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=1&&s.id!=2&&s.id!=3&&s.id!=4&&s.id!=7&&s.id!=32&&s.id!=33){s.health=0;s.action=Action::Killed;}
        map.obstacles={{{18,25},{1,3},false,true,1.3f},{{-52,-15},{.6f,4},false,true,1.3f}};PrepareGeometry(map);
        frame.soldiers[0].position={10,17};frame.soldiers[1].position={5,20};frame.soldiers[2].position={16.4f,25};
        frame.soldiers[3].position={3,25};frame.soldiers[4].position={2,28};frame.soldiers[7].position={-53.2f,-15};
        frame.soldiers[32].position={30,-15};frame.soldiers[32].machineGun=true;frame.soldiers[32].role=Role::MachineGunner;
        frame.soldiers[33].position={40,25};
        for(int id:{32,33}){frame.soldiers[id].health=10000;frame.soldiers[id].reloadUntil=600;}
        if(variant==33)frame.soldiers[2].reloadUntil=600;
        for(auto& s:frame.soldiers)s.goal=s.position;
        auto& p=frame.command[0].accepted;p.revision=1;p.directive=9000;p.method=CognitiveMethod::SupportedAdvance;p.stage=MethodStage::Prepare;
        p.support=7;p.supportSquad=0;p.supportThreat=32;p.sector={30,-15};p.requiresSupport=true;p.supportWaitStarted=0;
        p.geometry=map.revision;p.reconsiderAt=40;p.destination={25,25};
        auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->id=900;route->start={5,20};route->destination=p.destination;
        route->points={p.destination};route->stages={{0,1,p.destination,7,0}};p.route=route;
        for(const auto& s:frame.soldiers)if(s.squad==0)p.positions[s.id%SquadSize]=p.holds[s.id%SquadSize]=s.position;
        for(int id:{1,2,3,4}){p.movers[id]=true;if(id!=2)p.positions[id]={25,float(id)*2+20};}
        p.mission={9000,0,GoalPurpose::Seize,p.destination,8,40};p.intent={9001,9000,GoalPurpose::Seize,p.destination,8,40};
        auto& leader=frame.soldiers[0];leader.platoonOrder.serial=9000;leader.platoonOrder.intent=p.mission;leader.platoonOrder.task=PlatoonTask::FlankNorth;
        leader.platoonOrder.position=p.destination;leader.platoonOrder.expiresAt=40;frame.command[0].mission=p.destination;frame.platoon[0].nextPlanAt=40;return;
    }
    if(variant==31){
        for(auto& s:frame.soldiers)if(s.id!=0&&(s.id<2||s.id>5)&&s.id!=32){s.health=0;s.action=Action::Killed;}
        PrepareGeometry(map);frame.soldiers[0].position={-20,-15};frame.soldiers[2].position={0,0};
        for(int id:{3,4,5})frame.soldiers[id].position={-20,float(id-3)*2-10};
        frame.soldiers[32].position={25,10};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
        for(auto& s:frame.soldiers)s.goal=s.position;
        auto& p=frame.command[0].accepted;p.revision=1;p.directive=9000;p.method=CognitiveMethod::Withdraw;p.stage=MethodStage::Execute;
        p.geometry=map.revision;p.reconsiderAt=p.executionDeadline=40;p.destination={-8,-12};
        auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->id=900;route->start={-20,-10};route->destination=p.destination;
        route->points={{0,0},p.destination};route->stages={{0,1,{0,0},7,0},{1,2,p.destination,5,0}};p.route=route;
        for(const auto& s:frame.soldiers)if(s.squad==0)p.holds[s.id%SquadSize]=s.position;
        for(int id:{2,3,4,5}){p.movers[id]=true;p.positions[id]={float((id-2)/2)*-1.5f,float((id-2)%2)*2};}
        p.sector={25,10};p.mission={9000,0,GoalPurpose::Withdraw,p.destination,8,40};p.intent={9001,9000,GoalPurpose::Withdraw,p.destination,8,40};
        auto& leader=frame.soldiers[0];leader.platoonOrder.serial=9000;leader.platoonOrder.intent=p.mission;leader.platoonOrder.task=PlatoonTask::Withdraw;
        leader.platoonOrder.position=p.destination;leader.platoonOrder.expiresAt=40;frame.command[0].mission=p.destination;frame.platoon[0].nextPlanAt=40;return;
    }
    if(variant==24||variant==25){
        if(variant==24)map.obstacles={{{0,0},{40,1.5f},false,false,3.5f}};
        PrepareGeometry(map);
        for(auto& member:frame.soldiers)if(member.id>3&&member.id!=7&&member.id!=32){member.health=0;member.action=Action::Killed;}
        for(int id=0;id<=3;++id)frame.soldiers[id].position={-20.f-2*id,-10};
        frame.soldiers[7].position={-25,15};frame.soldiers[7].reloadUntil=600;
        frame.soldiers[32].position={30,15};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
        for(auto& member:frame.soldiers)member.goal=member.position;
        auto& p=frame.command[0].accepted;p.revision=1;p.directive=9000;p.support=7;p.supportSquad=0;p.supportThreat=32;p.sector={30,15};
        p.geometry=map.revision;p.reconsiderAt=45;p.requiredOccupants=2;p.requiresSupport=true;p.method=CognitiveMethod::SupportedAdvance;p.stage=MethodStage::Prepare;p.destination={55,15};
        p.mission={9000,0,GoalPurpose::Seize,p.destination,8,60};p.intent={9001,9000,GoalPurpose::Seize,p.destination,8,60};
        auto route=std::make_shared<TacticalRoute>();route->id=900;route->geometry=map.revision;route->start={-20,-10};route->destination=p.destination;route->points={{20,-10},{42,-10},{45,5},p.destination};route->stages={{0,1,{20,-10},13,0},{1,4,p.destination,15,5}};p.route=route;
        for(const auto& member:frame.soldiers)if(member.squad==0){int index=member.id%SquadSize;p.positions[index]=p.holds[index]=member.position;if(index<=3){p.movers[index]=true;p.positions[index]={20.f-index*1.5f,-10.f};}}
        auto& order=frame.soldiers[0].platoonOrder;order.serial=9000;order.intent=p.mission;order.position=p.destination;order.sector=p.sector;order.expiresAt=60;order.supportSoldier=7;order.supportSquad=0;
        frame.command[0].mission=p.destination;frame.platoon[0].nextPlanAt=60;return;
    }
    if(variant==20||variant==21||variant==23||variant==27||variant==36){
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=7&&s.id!=8&&s.id!=10&&s.id!=32&&!((variant==23||variant==27||variant==36)&&s.id==33)){s.health=0;s.action=Action::Killed;}
        if(variant==23||variant==27||variant==36)map.obstacles={{{35,0},{.6f,4},false,true,1.3f}};
        PrepareGeometry(map);
        frame.soldiers[0].position={-62,-6};frame.soldiers[7].position={-60,0};
        frame.soldiers[8].position={32,variant==36?-2.f:-10.f};frame.soldiers[10].position={34,variant==20?0.f:24.f};
        frame.soldiers[32].position={38,0};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
        if(variant==23||variant==27||variant==36){frame.soldiers[32].machineGun=variant==23;frame.soldiers[32].role=variant==23?Role::MachineGunner:Role::Rifleman;frame.soldiers[33].position={38,-15};frame.soldiers[33].health=10000;frame.soldiers[33].reloadUntil=600;}
        for(auto& s:frame.soldiers)s.goal=s.position;
        for(int squad:{0,1}){
            auto& leader=frame.soldiers[squad*SquadSize];auto& p=frame.command[squad].accepted;
            p.revision=1;p.directive=9000;p.support=7;p.supportSquad=0;p.supportThreat=32;p.sector={38,0};
            p.geometry=map.revision;p.reconsiderAt=60;p.requiredOccupants=1;
            p.method=squad?CognitiveMethod::SupportedAdvance:CognitiveMethod::Hold;
            p.stage=squad?MethodStage::Complete:MethodStage::Execute;p.requiresSupport=squad==1;
            p.destination=squad?frame.soldiers[10].position:frame.soldiers[7].position;
            p.mission={9000,0,squad?GoalPurpose::Seize:GoalPurpose::Support,p.destination,8,60};p.intent=p.mission;p.intent.id=9001+squad;p.intent.parent=9000;
            for(const auto& s:frame.soldiers)if(s.squad==squad)p.positions[s.id%SquadSize]=p.holds[s.id%SquadSize]=s.position;
            if(squad){p.movers[2]=true;auto route=std::make_shared<TacticalRoute>();route->id=901;route->geometry=map.revision;route->start={24,0};route->destination=p.destination;route->points={p.destination};route->stages={{0,0,p.destination,4,0}};p.route=route;}
            leader.platoonOrder.serial=9000;leader.platoonOrder.intent=p.mission;leader.platoonOrder.position=p.destination;leader.platoonOrder.sector=p.sector;leader.platoonOrder.expiresAt=60;
            leader.platoonOrder.task=squad?PlatoonTask::FlankNorth:PlatoonTask::Support;
            frame.command[squad].mission=p.destination;
        }
        frame.platoon[0].leader=0;frame.platoon[0].nextPlanAt=60;return;
    }
    if(variant==18||variant==19||variant==26||variant==28||variant==29||variant==30||variant==40||variant==41||variant==42){
        const bool connector=variant==19||variant==40||variant==41||variant==42;
        // Isolate physical recovery/final connectors with a pre-battle accepted
        // withdrawal. The durable passive enemy still uses ordinary sensing.
        for(auto& s:frame.soldiers)if(s.id!=0&&s.id!=2&&s.id!=32&&!((variant==29||variant==30)&&s.id==3)){s.health=0;s.action=Action::Killed;}
        map.obstacles={{{!connector?0.f:9.f,0},{!connector?1.f:2.f,5},false,variant==26||variant==30,(variant==26||variant==30)?1.3f:4.f}};PrepareGeometry(map);
        if(variant==42){map.obstacles.push_back({{-20,0},{1,80},false,false,4});PrepareGeometry(map);}
        frame.soldiers[32].position={60,20};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
        auto& leader=frame.soldiers[0];leader.position=variant==42?Vec3{-30,0}:Vec3{-12,-10};leader.goal=leader.position;
        auto& member=frame.soldiers[2];member.position=!connector?Vec3{-4,10}:Vec3{0,-10};member.goal=member.position;
        if(variant==42)member.position=member.goal={6,0};
        if(variant==40||variant==41||variant==42){member.health=40;if(variant==41)member.reloadUntil=600;}
        auto& plan=frame.command[0].accepted;plan.revision=1;plan.directive=9000;
        plan.method=CognitiveMethod::Withdraw;plan.stage=MethodStage::Execute;plan.movers[2]=true;plan.requiredOccupants=1;
        plan.geometry=map.revision;plan.reconsiderAt=plan.executionDeadline=40;
        for(const auto& s:frame.soldiers)if(s.squad==0)plan.holds[s.id%SquadSize]=s.position;
        if(!connector){
            frame.soldiers[32].position=variant==26?Vec3{-20,20}:Vec3{20,0};
            for(const auto& slot:CoverPositions(map))if(slot.shelter.x<0&&slot.shelter.y>0&&
                (variant==30||(variant==26?ClearLine3D(map,slot.peek+Vec3{0,0,.72f},frame.soldiers[32].position+Vec3{0,0,1.5f}):slot.peek.y>slot.shelter.y))){
                plan.slots[2]=slot;plan.hasSlot[2]=true;plan.positions[2]=slot.shelter;plan.destination=slot.peek;break;}
            member.suppression=member.understoodSuppression=.7f;
        }else{
            auto route=std::make_shared<TacticalRoute>();route->geometry=map.revision;route->id=900;
            route->start=member.position;route->destination={6,0};route->points={{6,-10},{6,0}};
            route->stages={{0,1,route->destination,8,0}};route->status=RouteStatus::Complete;
            plan.route=route;plan.destination=route->destination;plan.positions[2]={12.5f,0};
        }
        plan.mission={9000,0,GoalPurpose::Withdraw,plan.destination,8,40};plan.intent={9001,9000,GoalPurpose::Withdraw,plan.destination,8,40};
        if(variant==29||variant==30){
            member.position=plan.slots[2].shelter;member.goal=member.position;member.health=40;
            member.suppression=member.understoodSuppression=0;
            frame.soldiers[3].position={-15,-20};frame.soldiers[3].goal=frame.soldiers[3].position;
            plan.movers[3]=true;plan.positions[3]=plan.slots[2].shelter+Vec3{-2,-2};plan.requiredOccupants=2;
        }
        if(variant==30){
            member.reloadUntil=10;
            for(const auto& slot:CoverPositions(map))if(slot.shelter.x>0&&slot.shelter.y>0){
                plan.slots[2]=slot;plan.positions[2]=slot.shelter;break;
            }
        }
        if(variant==28){
            member.position=plan.slots[2].peek+Vec3{0,2};member.goal=member.position;member.suppression=member.understoodSuppression=0;
            plan.method=CognitiveMethod::SupportedAdvance;plan.stage=MethodStage::Prepare;plan.requiresSupport=true;plan.support=7;plan.supportThreat=32;
            plan.sector=frame.soldiers[32].position;plan.supportWaitStarted=0;
            plan.mission.purpose=plan.intent.purpose=GoalPurpose::Seize;
        }
        leader.platoonOrder.serial=9000;leader.platoonOrder.intent=plan.mission;leader.platoonOrder.task=PlatoonTask::Withdraw;
        leader.platoonOrder.position=plan.destination;leader.platoonOrder.expiresAt=40;
        frame.command[0].mission=plan.destination;frame.platoon[0].nextPlanAt=40;
        frame.soldiers[32].goal=frame.soldiers[32].position;return;
    }
    // Variant 10 moves this obstacle across the lane at t=2 via ReplaceObstacle.
    map.obstacles={{{80,-60},{1,2},false,false,4}};PrepareGeometry(map);
    for(auto& s:frame.soldiers){
        if(s.squad!=0&&s.id!=32&&!(variant==17&&(s.id==8||s.id==15))){s.health=0;s.action=Action::Killed;continue;}
        s.position=s.team?Vec3{70,60}:Vec3{-18.f-float(s.id/4)*2,float(s.id%4)*1.5f-3};
        if(variant==9){s.reloadUntil=600;if(s.team)s.position={35,0};} // Transport fixture keeps both sides alive; production sight/report transport remains active.
        if(variant==9&&(s.id==5||s.id==6))s.position={-65,30};
        s.goal=s.position;
    }
    if(variant>=11){
        map.obstacles.clear();
        Vec3 sector=variant==12?Vec3{85,0}:Vec3{35,0};
        frame.soldiers[32].position=sector;
        if(variant<=14)for(auto& member:frame.soldiers)if(member.id!=2&&member.id!=3)member.reloadUntil=600; // Recon fixtures isolate sensing from shooting; support is tested separately.
        if(variant==11)map.obstacles={{{0,0},{1,7},false,false,4},{{-4,13},{.6f,3},false,true}};
        if(variant==12)map.obstacles={{{24,10},{.6f,3},false,true}};
        if(variant==13)frame.soldiers[32].position={75,75};
        if(variant==14)map.obstacles={{{0,0},{1,90},false,false,4}};
        if(variant>=15){
            map.obstacles={{{-12,7},{.6f,4},false,true},{{22,-10},{.6f,4},false,true},{{37,0},{.6f,4},false,true}};
            frame.soldiers[32].position={38,0};
            frame.soldiers[7].position={-15,7};
            if(variant==16)frame.soldiers[7].reloadUntil=600;
        }
        if(variant==17){
            map.obstacles.push_back({{-27,18},{1,35},false,false,4});
            frame.soldiers[7].machineGun=false;frame.soldiers[7].role=Role::Rifleman;
            frame.soldiers[15].machineGun=true;frame.soldiers[15].role=Role::MachineGunner;
            frame.soldiers[15].position={-45,30};frame.soldiers[8].position={-45,33};
            frame.soldiers[15].goal=frame.soldiers[15].position;frame.soldiers[8].goal=frame.soldiers[8].position;
            // A durable passive target isolates coordination from early elimination.
            frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;
            auto& support=frame.soldiers[8].platoonOrder;
            support.serial=9000;support.issuer=5;support.task=PlatoonTask::Support;support.position=frame.soldiers[15].position;
            support.sector=sector;support.expiresAt=110;support.supportSoldier=15;support.supportSquad=1;
            support.intent={9001,0,GoalPurpose::Support,support.position,8,110};
        }
        if(variant==22){frame.soldiers[32].position={23.2f,-10};frame.soldiers[32].health=10000;frame.soldiers[32].reloadUntil=600;}
        PrepareGeometry(map);
        frame.soldiers[32].goal=frame.soldiers[32].position;
        auto& intent=frame.soldiers[0].platoonOrder;
        intent.serial=9000;intent.issuer=5;intent.task=variant<=14?PlatoonTask::Observe:PlatoonTask::FlankNorth;
        intent.position=variant<=14?frame.soldiers[0].position:variant==22?Vec3{23.2f,-10}:Vec3{22,-10};intent.sector=sector;
        intent.issuedAt=0;intent.expiresAt=110;intent.supportSoldier=variant==17?15:7;intent.supportSquad=variant==17?1:0;
        intent.intent={9000,0,variant<=14?GoalPurpose::Observe:GoalPurpose::Seize,variant<=14?sector:intent.position,8,110};
        if(variant==22){intent.task=PlatoonTask::Withdraw;intent.intent.purpose=GoalPurpose::Withdraw;frame.soldiers[7].reloadUntil=600;}
        frame.command[0].mission=intent.intent.objective;frame.platoon[0].nextPlanAt=110;
        return;
    }
    auto& leader=frame.soldiers[0];auto& order=leader.platoonOrder;
    order.serial=9000;order.issuer=5;order.task=PlatoonTask::FlankNorth;
    order.position={22,0};order.sector={35,0};order.issuedAt=0;order.expiresAt=100;
    order.intent={9000,0,GoalPurpose::Seize,order.position,8,100};order.hasAlternative=true;
    order.alternativeTask=PlatoonTask::Observe;order.alternativePosition=leader.position;
    frame.command[0].mission=order.position;
    frame.platoon[0].nextPlanAt=95; // Pre-battle order; only failure feedback should wake command early.
}
}
