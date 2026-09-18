#include "RecoverySim.h"
#include "TaskSim.h"
#include "TacticalRouteSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
namespace army {
int RequiredCoveringRounds(float exposureSeconds){
    return std::max(3,int(std::ceil(std::max(0.f,exposureSeconds)*2)));
}
SupportSector AssaultSupportSector(const Soldier& leader,const SquadCommand& command,const Map& map,float time){
    SupportSector result;result.observedAt=time;result.route=command.route?command.route->id:0;
    result.lifted=command.drill.fireShifted;
    if(!command.route||!command.drill.selected)return result;
    auto knowledge=WithTracks(leader,time);
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
        if(!ct.known||time-ct.observedAt>10)continue;
        bool overlooks=false;
        for(int slot=0;slot<SquadSize;++slot)if(command.drill.movers[slot]){
            const auto& cover=command.drill.assaultSlots[slot];
            overlooks|=Distance(ct.position,cover.peek)<95&&
                ClearLine3D(map,ct.position+Vec3{0,0,1.5f},cover.peek+Vec3{0,0,1.5f});
        }
        if(overlooks){auto report=ct;report.visible=false;report.reportSource=leader.id;result.threats.push_back({id,report});}
    }
    return result;
}
int TrailingCoveringRounds(const Soldier& leader,Vec3 targetArea,float time,const std::vector<SupportThreat>* threats){
    const auto knowledge=WithTracks(leader,time);
    int rounds=0;
    for(const auto& delivery:leader.deliveries){
        if(delivery.shooter<0||delivery.shooter/(SquadSize*SquadsPerTeam)!=leader.team)continue;
        auto relevant=[&](Vec3 delivered){
            for(int id=0;id<UnitCount;++id){const auto& track=knowledge.contacts[id];
                if(threats&&std::none_of(threats->begin(),threats->end(),[&](const SupportThreat& threat){return threat.enemy==id;}))continue;
                if(track.known&&Distance(track.position,targetArea)<=12&&Distance(delivered,track.position)<=6)return true;
            }
            return false;
        };
        if(!delivery.history.empty()){
            for(const auto& round:delivery.history)if(round.at>=0&&round.at<=delivery.observedAt&&round.at<=time&&time-round.at<=10&&relevant(round.target))++rounds;
        }else if(relevant(delivery.target)){
            for(float at:delivery.times)if(at>=0&&at<=time&&time-at<=10)++rounds;
        }
    }
    return rounds;
}

static float Angle(Vec3 p,Vec3 support,Vec3 target){Vec3 a=p-target,b=support-target;return std::abs(std::atan2(a.x*b.y-a.y*b.x,a.x*b.x+a.y*b.y))*180/3.14159265f;}
static constexpr float AssaultAngle=55.f;
static float MinimumAngle(Vec3 peek,Vec3 support,Vec3 target){
    float angle=Angle(peek,support,target);
    for(Vec3 offset:{Vec3{6,0},Vec3{-6,0},Vec3{0,6},Vec3{0,-6}})angle=std::min(angle,Angle(peek,support,target+offset));
    return angle;
}
bool TacticalPairLaneClear(const Map& map,const CoverPosition& a,const CoverPosition& b,const std::vector<Vec3>& targets){
    auto clears=[&](const CoverPosition& shooter,const CoverPosition& partner){
        const Vec3 muzzle=shooter.peek+Vec3{0,0,1.5f};
        const float height=BodyHeight(partner.crouch?Stance::Crouched:Stance::Standing)*.75f;
        for(Vec3 target:targets){
            target=target+Vec3{0,0,1.4f};if(!ClearLine3D(map,muzzle,target))continue;
            Vec3 direction=target-muzzle;float lengthSquared=direction.x*direction.x+direction.y*direction.y+direction.z*direction.z;
            if(lengthSquared<.01f)continue;
            for(Vec3 point:{partner.shelter,partner.peek}){
                point=point+Vec3{0,0,height};Vec3 relative=point-muzzle;
                float along=(relative.x*direction.x+relative.y*direction.y+relative.z*direction.z)/lengthSquared;
                if(along<=0||along>=1)continue;
                if(Distance(muzzle+direction*along,point)<1.f)return false;
            }
        }
        return true;
    };
    return clears(a,b)&&clears(b,a);
}
std::vector<TacticalSlot> QueryTacticalPositions(const Soldier& leader,const std::vector<Soldier>& movers,const Map& map,const PositionQuery& q,float time,Diagnostics* d){
    std::vector<TacticalSlot> candidates,result;
    auto knowledge=WithTracks(leader,time);
    float fireRange=95;for(const auto& mover:movers)fireRange=std::min(fireRange,SightRange(mover));
    std::vector<CoverPosition> points;
    for(const auto& cover:CoverPositions(map)){
        points.push_back(cover);
        if(q.minAngle>0&&!cover.window)for(float x:{-3.f,-2.f,-1.f,0.f,1.f,2.f,3.f})for(float y:{-3.f,-2.f,-1.f,0.f,1.f,2.f,3.f})if(x!=0||y!=0){
            // The firing point may extend around a corner while its shelter
            // remains protected. Both endpoints and the connection are tested.
            auto peek=cover;peek.peek=cover.peek+Vec3{x,y};points.push_back(peek);
            if(cover.crouch){auto shifted=cover;shifted.shelter=shifted.shelter+Vec3{x,y};shifted.peek=shifted.shelter;points.push_back(shifted);}
            else {
                // Distinct soldiers need distinct shelters along the protected
                // wall face as well as distinct peeks around its corner.
                Vec3 tangent{1,0};for(const auto& obstacle:map.obstacles)if(obstacle.id==cover.source){if(std::abs(cover.shelter.x-obstacle.center.x)>obstacle.half.x)tangent={0,1};break;}
                for(float offset:{-3.f,-1.5f,1.5f,3.f}){auto wallSlot=peek;wallSlot.shelter=cover.shelter+tangent*offset;points.push_back(wallSlot);}
            }
        }
    }
    for(const auto& c:points){
        if(Distance(c.shelter,q.center)>q.radius)continue;
        float angle=q.minAngle>0?MinimumAngle(c.peek,q.support,q.target):Angle(c.peek,q.support,q.target);
        int targets=0,visibleTargets=0,samples=0,visibleSamples=0,protectedTracks=0,exposedPeekTracks=0;
        for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,q.target)<=12){
            ++targets;
            protectedTracks+=ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing);
            exposedPeekTracks+=ClearLine3D(map,ct.position+Vec3{0,0,1.5f},c.peek+Vec3{0,0,1.5f});
            if(Distance(c.peek,ct.position)<=fireRange&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},ct.position+Vec3{0,0,1.4f}))++visibleTargets;
            // A single remembered gun report describes an uncertain position,
            // not a point target that remains standing at the same coordinates.
            float radius=std::clamp(TrackUncertainty(ct,time),3.f,24.f);
            for(Vec3 offset:{Vec3{},Vec3{radius,0},Vec3{-radius,0},Vec3{0,radius},Vec3{0,-radius}}){
                Vec3 target=ct.position+offset;if(!Walkable(map,target))continue;++samples;
                if(Distance(c.peek,target)<=fireRange&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},target+Vec3{0,0,.6f}))++visibleSamples;
            }
        }
        if(!targets){protectedTracks=ProtectedAt(map,c.shelter,q.target,c.crouch?Stance::Crouched:Stance::Standing);exposedPeekTracks=ClearLine3D(map,q.target+Vec3{0,0,1.5f},c.peek+Vec3{0,0,1.5f});samples=1;visibleSamples=1;targets=1;visibleTargets=Distance(c.peek,q.target)<=fireRange&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},q.target+Vec3{0,0,1.4f});}
        const char* reason="accepted";
        if(!Walkable(map,c.shelter)||!Walkable(map,c.peek)||!ClearLine(map,c.shelter,c.peek,.46f))reason="non-executable cover pair";
        else if(q.minAngle>0&&Distance(c.peek,q.target)<15)reason="inside target defensive position";
        else if(q.minSupportDistance>0&&Distance(c.peek,q.support)<q.minSupportDistance)reason="too close to base of fire";
        else if(angle<q.minAngle)reason="insufficient firing angle";
        else if(q.firing&&visibleTargets*2<targets)reason="less than half of target position visible";
        else if(q.protectedPosition&&c.crouch&&protectedTracks*2<=targets)reason="crouch shelter lacks majority protection";
        else if(q.protectedPosition&&!ProtectedAt(map,c.shelter,q.target,c.crouch?Stance::Crouched:Stance::Standing))reason="cover faces away from target";
        else {
            for(const auto& ct:knowledge.contacts)if(ct.known&&ct.visible&&!ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing)){reason="exposed to observed threat";break;}
            if(std::string(reason)=="accepted")for(const auto& mover:movers)if(FindPath(map,mover.position,c.shelter).empty()){reason="mover cannot reach slot";break;}
        }
        if(d&&d->options.enabled){TraceEntry e;e.id=d->nextId++;e.parent=d->lastPlan[leader.squad];e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.kind="position_query";e.coverId=c.id;e.geometry=map.revision;e.goal=c.shelter;e.position=c.peek;e.cover=c.shelter;e.aim=angle;e.reason=std::string(reason)+"; protected="+std::to_string(protectedTracks)+"/"+std::to_string(targets)+"; peek exposed="+std::to_string(exposedPeekTracks)+"; angle="+std::to_string(angle)+"; visible="+std::to_string(visibleTargets)+"/"+std::to_string(targets)+"; uncertainty samples="+std::to_string(visibleSamples)+"/"+std::to_string(samples);d->entries.push_back(e);}
        if(std::string(reason)!="accepted")continue;
        float travel=0;for(const auto& s:movers)travel+=Distance(s.position,c.shelter)/std::max(size_t(1),movers.size());
        candidates.push_back({c,angle,travel+(q.minAngle>0?35.f*exposedPeekTracks/targets-35.f*protectedTracks/targets:0.f)+.2f*Distance(c.shelter,q.target)+Distance(c.shelter,c.peek)-20.f*visibleTargets/targets-(q.minAngle>0?30.f*visibleSamples/std::max(1,samples):0.f)});
    }
    // A nearby viable low shelter dominates an unprotected corner step-out.
    // Keep the set separate so erasing candidates cannot affect this decision.
    std::vector<Vec3> protectedCrouch;
    if(q.minAngle>0)for(const auto& c:candidates)if(c.cover.crouch)protectedCrouch.push_back(c.cover.peek);
    if(q.minAngle>0)candidates.erase(std::remove_if(candidates.begin(),candidates.end(),[&](const TacticalSlot& c){
        if(c.cover.crouch)return false;
        bool exposed=false;
        for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,q.target)<=12&&
            !ProtectedAt(map,c.cover.peek,ct.position,Stance::Standing))exposed=true;
        if(!exposed)return false;
        for(Vec3 low:protectedCrouch)if(Distance(low,c.cover.peek)<=10)return true;
        return false;
    }),candidates.end());
    std::stable_sort(candidates.begin(),candidates.end(),[](const auto& a,const auto& b){return a.score<b.score;});
    std::vector<Vec3> laneTargets;
    if(q.minAngle>0){
        for(Vec3 offset:{Vec3{},Vec3{6,0},Vec3{-6,0},Vec3{0,6},Vec3{0,-6}})if(Walkable(map,q.target+offset))laneTargets.push_back(q.target+offset);
        for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,q.target)<=12)laneTargets.push_back(ct.position);
    }
    float best=1e9f;
    for(const auto& anchor:candidates){
        std::vector<TacticalSlot> group{anchor};float score=anchor.score;
        for(const auto& c:candidates){
            if(int(group.size())>=q.count)break;
            bool fits=true;for(const auto& r:group)if(Distance(c.cover.shelter,r.cover.shelter)<q.spacing||Distance(c.cover.peek,r.cover.peek)<q.spacing||Distance(c.cover.shelter,r.cover.shelter)>14)fits=false;
            if(fits&&q.minAngle>0)for(const auto& r:group)if(!TacticalPairLaneClear(map,c.cover,r.cover,laneTargets)){
                fits=false;
                if(d&&d->options.enabled){TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.geometry=map.revision;e.kind="position_pair_rejected";e.position=c.cover.peek;e.goal=r.cover.peek;e.reason="assigned firing lane intersects partner shelter or peek at cover stance height";d->entries.push_back(e);}
                break;
            }
            if(fits){group.push_back(c);score+=c.score;}
        }
        if(int(group.size())>=q.count&&score<best){best=score;result=group;}
    }
    return result;
}
float CurrentStageExposure(const Soldier& leader,const Map& map,const TacticalRoute& route,int index,float time){
    if(index<0||index>=int(route.stages.size()))return 0;
    const auto& stage=route.stages[index];
    Vec3 from=stage.begin?route.points[stage.begin-1]:route.start;
    std::vector<Vec3> points(route.points.begin()+stage.begin,route.points.begin()+stage.end);
    TacticalRoutePlanner planner(map,WithTracks(leader,time),time,Doctrine::Balanced);
    float exposure=0;planner.Measure(from,points,&exposure);return exposure;
}
bool ReslotAssault(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& cmd,int target,Vec3 targetPosition,float time,Diagnostics* d){
    auto& g=cmd.drill;
    std::vector<Soldier> movers;Vec3 from{};
    for(const auto& s:friends)if(s.Active()&&g.movers[s.id%SquadSize]){movers.push_back(s);from=from+s.position;}
    if(movers.size()<2||!cmd.route)return false;
    // A centroid can lie inside the obstacle separating two valid shelters.
    // Start the continuation at an actual mover position.
    from=movers.front().position;
    const bool approaching=cmd.routeStage+1<int(cmd.route->stages.size());
    PositionQuery query;query.center=approaching?cmd.route->destination:from;query.radius=approaching?65.f:30.f;query.target=targetPosition;query.support=g.supportPosition;query.minAngle=AssaultAngle;query.minSupportDistance=15;query.count=int(movers.size());
    auto slots=QueryTacticalPositions(leader,movers,map,query,time,d);
    if(slots.size()!=movers.size())return false;
    Vec3 destination{},firingDestination{};
    for(const auto& slot:slots){destination=destination+slot.cover.shelter;firingDestination=firingDestination+slot.cover.peek;}
    destination=destination*(1.f/slots.size());firingDestination=firingDestination*(1.f/slots.size());
    TacticalRoutePlanner planner(map,WithTracks(leader,time),time,leader.team?config.emberDoctrine:config.doctrine);
    // Preserve the unfinished approach too: re-slot its final suffix, rather
    // than replacing every remaining stage with an unscreened direct trip.
    int amendedStage=approaching?int(cmd.route->stages.size())-1:cmd.routeStage;
    if(approaching){const auto& final=cmd.route->stages[amendedStage];from=final.begin?cmd.route->points[final.begin-1]:cmd.route->start;}
    auto suffix=planner.Evaluate(from,destination,4096);if(suffix.status!=RouteStatus::Complete)return false;
    auto amended=std::make_shared<TacticalRoute>(*cmd.route);
    size_t prefix=amendedStage<int(amended->stages.size())?amended->stages[amendedStage].begin:amended->points.size();
    amended->points.resize(prefix);amended->points.push_back(from);amended->points.insert(amended->points.end(),suffix.points.begin(),suffix.points.end());
    amended->stages.resize(amendedStage);
    amended->stages.push_back({prefix+1,amended->points.size(),destination,suffix.cost.travel,suffix.exposedSeconds});
    amended->destination=firingDestination;amended->evaluatedAt=time;amended->geometry=map.revision;
    amended->cost=planner.Measure(amended->start,amended->points,&amended->exposedSeconds);
    cmd.route=amended;if(!approaching)cmd.waypoint=destination;cmd.hasWaypoint=true;
    for(size_t i=0;i<movers.size();++i){int slot=movers[i].id%SquadSize;g.slots[slot]=slots[i].cover.shelter;g.assaultSlots[slot]=slots[i].cover;g.coverIds[slot]=slots[i].cover.id;}
    g.screenedStage=-1;g.screeningBlocked=false;g.target=target;g.targetPosition=targetPosition;if(!approaching){g.released=g.closeOccupation=g.fireShifted=false;g.occupationLead=-1;}g.node=DrillNode::Traverse;
    TraceProposal(d,leader,cmd,map,time,"route_reslotted","updated target: retain route identity and completed stages; replace only unfinished approach and assault slots");
    return true;
}
static void Edge(const Soldier& leader,SquadCommand& cmd,const Map& map,float time,Diagnostics* d,DrillNode next,const char* why){
    cmd.drill.node=next;cmd.planReason=why;
    cmd.phase=next==DrillNode::Search?SquadPhase::Search:next==DrillNode::EstablishFire?SquadPhase::EstablishFire:next==DrillNode::Traverse?SquadPhase::Bound:next==DrillNode::Withdraw?SquadPhase::Withdraw:SquadPhase::HoldSuppress;
    TraceProposal(d,leader,cmd,map,time,"drill_edge",why);
}
std::vector<PlannedOrder> UpdateRecoveryDrill(const Soldier& leader,const std::vector<Soldier>& friends,const Map& map,const Config& config,SquadCommand& cmd,float time,Diagnostics* d){
    auto& g=cmd.drill;std::vector<PlannedOrder> orders;auto knowledge=WithTracks(leader,time);
    std::vector<Soldier> active;for(const auto& s:friends)if(s.Active())active.push_back(s);
    if(active.empty())return orders;
    auto emit=[&](const Soldier& s,Task t,Vec3 p,bool route){TeamPlan plan;plan.targetEnemy=g.target;if(s.id==cmd.support){plan.liftFire=g.fireShifted;plan.liftedSector=g.targetPosition;}if(route)plan.route=cmd.route;PlannedOrder order{s.id,t,p,g.targetPosition,plan,false,{}};if(route&&g.released&&cmd.routeStage+1>=int(cmd.route->stages.size())&&Distance(p,g.slots[s.id%SquadSize])<.05f){order.hasSlot=true;order.slot=g.assaultSlots[s.id%SquadSize];}orders.push_back(order);};
    int target=-1;float priority=1e9f;
    for(int i=0;i<UnitCount;++i)if(knowledge.contacts[i].known){float score=Distance(leader.position,knowledge.contacts[i].position)-(knowledge.contacts[i].automaticWeapon?15:0);if(score<priority){priority=score;target=i;}}
    if(!g.initialized){g.initialized=true;g.geometry=map.revision;g.nextAssessment=0;for(const auto& s:active)g.stageSlots[s.id%SquadSize]=s.position+Vec3{leader.team?-18.f:18.f,0};}
    // Revalidate the purpose of occupied or pending assault slots when a new
    // report changes the target. Completion at an old point is not evidence
    // that the point still has a firing line. Only the leader's received
    // knowledge participates in this check.
    if(g.selected&&cmd.route&&g.knowledge!=leader.knowledgeRevision){
        g.knowledge=leader.knowledgeRevision;
        int tracked=g.target>=0&&knowledge.contacts[g.target].known?g.target:target;
        if(tracked>=0&&time-knowledge.contacts[tracked].observedAt>10){
            for(int id=0;id<UnitCount;++id)if(knowledge.contacts[id].known&&Distance(knowledge.contacts[id].position,g.targetPosition)<24&&
                knowledge.contacts[id].observedAt>knowledge.contacts[tracked].observedAt)tracked=id;
        }
        if(tracked>=0){
            const auto& contact=knowledge.contacts[tracked];
            if(time-contact.observedAt<10&&Distance(contact.position,g.targetPosition)>6){
                bool useful=true;
                for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]){
                    const auto& cover=g.assaultSlots[slot];
                    useful&=MinimumAngle(cover.peek,g.supportPosition,contact.position)>=AssaultAngle&&
                        ClearLine3D(map,cover.peek+Vec3{0,0,1.5f},contact.position+Vec3{0,0,1.1f})&&
                        ProtectedAt(map,cover.shelter,contact.position,cover.crouch?Stance::Crouched:Stance::Standing);
                }
                if(!useful){
                    if(!ReslotAssault(leader,active,map,config,cmd,tracked,contact.position,time,d)){
                        if(cmd.routeStage==0){
                            // A target-only update cannot erase a not-yet-completed
                            // first approach stage. Geometry and release screening
                            // remain independent and may still prevent execution.
                            TraceProposal(d,leader,cmd,map,time,"proposal_deferred","target update: retain first approach stage; no replacement assault slots yet");
                        }else{
                        TraceProposal(d,leader,cmd,map,time,"plan_cancelled","updated target has no reachable assault slot set near the current objective");
                        g.target=tracked;g.targetPosition=contact.position;
                        g.selected=g.released=g.fireShifted=false;g.opportunity=-1;
                        g.nextAssessment=time;cmd.hasWaypoint=false;
                        Edge(leader,cmd,map,time,d,DrillNode::EstablishFire,"no local re-slot available; reassess attack");
                        }
                    }
                }
            }
        }
    }
    // Fixture role allocation precedes tactical decisions. The gun squad keeps
    // the base of fire; only the rifle squad owns a maneuver route.
    if(leader.squad==0){
        if(!g.selected){for(const auto& s:active)g.stageSlots[s.id%SquadSize]=s.position;g.selected=true;}
        if(target>=0){g.target=target;g.targetPosition=knowledge.contacts[target].position;}
        if(target>=0&&time>=g.nextAssessment){
            g.nextAssessment=time+10;
            std::vector<Vec3> reserved;
            int shooters=0;
            for(const auto& s:active){
                Vec3& destination=g.stageSlots[s.id%SquadSize];
                bool useful=Distance(destination,g.targetPosition)<=SightRange(s)&&ProtectedAt(map,destination,g.targetPosition,Stance::Crouched)&&ClearLine3D(map,destination+Vec3{0,0,1.5f},g.targetPosition+Vec3{0,0,1.4f});
                if(useful){++shooters;reserved.push_back(destination);continue;}
                PositionQuery query;query.center=s.position;query.radius=25;query.target=g.targetPosition;query.count=1;
                auto slots=QueryTacticalPositions(leader,{s},map,query,time,d);
                bool assigned=false;
                for(const auto& slot:slots){bool occupied=false;for(Vec3 p:reserved)occupied|=Distance(p,slot.cover.shelter)<1.5f;
                    if(!occupied){destination=slot.cover.shelter;assigned=true;++shooters;break;}}
                if(!assigned){
                    bool safe=ProtectedAt(map,destination,g.targetPosition,Stance::Crouched);
                    if(!safe){float best=1e9f;for(const auto& cover:CoverPositions(map)){
                        float distance=Distance(s.position,cover.shelter);if(distance>25||distance>=best||!ProtectedAt(map,cover.shelter,g.targetPosition,cover.crouch?Stance::Crouched:Stance::Standing))continue;
                        bool occupied=false;for(Vec3 p:reserved)occupied|=Distance(p,cover.shelter)<1.5f;
                        if(!occupied&&!FindPath(map,s.position,cover.shelter).empty()){best=distance;destination=cover.shelter;}
                    }}
                }
                reserved.push_back(destination);
            }
            TraceProposal(d,leader,cmd,map,time,"support_assessed","protected firing slots within each weapon's range: "+std::to_string(shooters)+"; other members retain shelter and are not counted as covering fire");
        }
        cmd.phase=SquadPhase::HoldSuppress;
        for(const auto& s:active){const Vec3 destination=g.stageSlots[s.id%SquadSize];
            const bool useful=target>=0&&Distance(destination,g.targetPosition)<=SightRange(s)&&ClearLine3D(map,destination+Vec3{0,0,1.5f},g.targetPosition+Vec3{0,0,1.4f});
            emit(s,useful?(s.machineGun?Task::Overwatch:Task::BoundCover):Task::Hold,destination,false);
        }
        return orders;
    }
    if(g.node==DrillNode::Search){
        if(target>=0){g.target=target;g.targetPosition=knowledge.contacts[target].position;std::vector<Vec3> reservations;
            for(const auto& s:active){Vec3 shelter=s.position;float best=1e9f;
                for(const auto& cover:CoverPositions(map)){float distance=Distance(s.position,cover.shelter);if(distance>25||distance>=best||!ProtectedAt(map,cover.shelter,g.targetPosition,cover.crouch?Stance::Crouched:Stance::Standing))continue;
                    bool occupied=false;for(Vec3 p:reservations)if(Distance(p,cover.shelter)<1.5f)occupied=true;
                    if(!occupied&&!FindPath(map,s.position,cover.shelter).empty()){best=distance;shelter=cover.shelter;}
                }
                g.stageSlots[s.id%SquadSize]=shelter;reservations.push_back(shelter);
            }Edge(leader,cmd,map,time,d,DrillNode::EstablishFire,"contact report enables base-of-fire deployment");g.nextAssessment=0;}
        else {
            for(const auto& s:active){const auto& report=leader.taskReports[s.id%SquadSize];
                Vec3& p=g.stageSlots[s.id%SquadSize];
                if(report.id&&report.id==g.expected[s.id%SquadSize]&&report.status==TaskStatus::Done)p=s.position+Vec3{leader.team?-18.f:18.f,0};
                p.x=std::clamp(p.x,-map.halfWidth+3,map.halfWidth-3);emit(s,Task::BoundMove,p,false);
            }return orders;
        }
    }
    const FireDelivery* sharedSupport=nullptr;
    bool ownGun=false;for(const auto& s:active)ownGun|=s.machineGun;
    if(!ownGun)for(const auto& delivery:leader.deliveries)if(delivery.shooter>=0&&delivery.shooter/SquadSize!=leader.squad&&time-delivery.observedAt<10&&Distance(delivery.target,g.targetPosition)<12&&delivery.rounds>=3){
        if(!sharedSupport||delivery.observedAt>sharedSupport->observedAt)sharedSupport=&delivery;
    }
    if(sharedSupport&&cmd.support!=sharedSupport->shooter){
        cmd.support=sharedSupport->shooter;g.supportPosition=sharedSupport->origin;
        TraceProposal(d,leader,cmd,map,time,"support_updated","received shared support assigned in place; route and released tasks retained");
    }
    if(g.node==DrillNode::EstablishFire&&!g.selected&&time>=g.nextAssessment){
        g.nextAssessment=time+10;
        std::vector<Soldier> supports;for(const auto& s:active)if(s.id==cmd.support)supports.push_back(s);
        if(supports.empty())supports.push_back(active.back());
        PositionQuery sq;sq.center=leader.position;sq.target=g.targetPosition;sq.support=leader.position;sq.count=1;sq.radius=100;
        auto support=sharedSupport?std::vector<TacticalSlot>{}:QueryTacticalPositions(leader,supports,map,sq,time,d);
        if(sharedSupport){TacticalSlot slot;slot.cover.shelter=slot.cover.peek=sharedSupport->origin;support.push_back(slot);g.supportPosition=sharedSupport->origin;cmd.support=sharedSupport->shooter;}
        else {
            if(support.empty()){cmd.planReason="no protected support position with firing line";TraceProposal(d,leader,cmd,map,time,"proposal_deferred",cmd.planReason);return orders;}
            g.supportPosition=support[0].cover.shelter;cmd.support=supports[0].id;
        }
        std::vector<Soldier> movers;for(const auto& s:active)if(s.id!=cmd.support&&!s.machineGun&&!KnowsWounded(leader,s))movers.push_back(s);
        std::stable_sort(movers.begin(),movers.end(),[&](const Soldier& a,const Soldier& b){auto rank=[&](const Soldier& s){return s.id==leader.id?2:s.role==Role::Corporal?1:0;};return rank(a)<rank(b);});
        PositionQuery aq;aq.center=g.targetPosition;aq.target=g.targetPosition;aq.support=support[0].cover.peek;aq.minAngle=AssaultAngle;aq.minSupportDistance=15;aq.count=std::min(2,int(movers.size()));aq.radius=65;
        auto slots=QueryTacticalPositions(leader,movers,map,aq,time,d);
        if(slots.size()<2){cmd.planReason="attack unavailable: fewer than two protected assault firing slots";TraceProposal(d,leader,cmd,map,time,"proposal_deferred",cmd.planReason);
            for(const auto& s:active)emit(s,s.id==cmd.support?Task::BoundCover:Task::Hold,s.id==cmd.support?g.supportPosition:s.position,false);
            return orders;}
        Vec3 from=movers[0].position;TacticalRoutePlanner planner(map,knowledge,time,leader.team?config.emberDoctrine:config.doctrine);
        Vec3 destination{},firingDestination{};
        for(const auto& slot:slots){destination=destination+slot.cover.shelter;firingDestination=firingDestination+slot.cover.peek;}
        destination=destination*(1.f/slots.size());firingDestination=firingDestination*(1.f/slots.size());
        auto route=planner.Evaluate(from,destination,4096);
        // Form up behind cover before the final approach. A route to firing slots
        // alone does not provide a sheltered place to coordinate the assault.
        const CoverPosition* formUp=nullptr;float formScore=1e9f;
        for(const auto& cover:CoverPositions(map)){
            float distance=Distance(cover.shelter,destination);
            if(distance<12||distance>30||!ProtectedAt(map,cover.shelter,g.targetPosition,cover.crouch?Stance::Crouched:Stance::Standing)||
                ClearLine3D(map,cover.peek+Vec3{0,0,1.5f},g.targetPosition+Vec3{0,0,1.5f}))continue;
            float score=distance+.2f*Distance(from,cover.shelter);
            if(score<formScore&&!FindPath(map,from,cover.shelter).empty()&&!FindPath(map,cover.shelter,destination).empty()){formScore=score;formUp=&cover;}
        }
        size_t formUpEnd=0;
        if(formUp){auto first=planner.Evaluate(from,formUp->shelter,4096),last=planner.Evaluate(formUp->shelter,destination,4096);
            if(first.status==RouteStatus::Complete&&last.status==RouteStatus::Complete){route.points=first.points;formUpEnd=route.points.size();route.points.insert(route.points.end(),last.points.begin(),last.points.end());route.status=RouteStatus::Complete;route.cost=planner.Measure(from,route.points,&route.exposedSeconds);}
        }
        if(route.status!=RouteStatus::Complete)return orders;
        // Synchronize in screened ground, never at an arbitrary sample in a crossing.
        std::vector<RouteStage> stages;RouteStage accumulated;Vec3 previous=route.start;
        auto screened=[&](Vec3 p){for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(p,ct.position)<95&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,1.3f}))return false;return true;};
        bool previousScreen=screened(previous);
        for(size_t i=0;i<route.points.size();++i){Vec3 point=route.points[i];bool screen=screened(point);
            if(previousScreen&&!screen&&accumulated.end>accumulated.begin){stages.push_back(accumulated);accumulated={};accumulated.begin=i;}
            float exposure=0;auto cost=planner.Measure(previous,{point},&exposure);accumulated.end=i+1;accumulated.destination=point;accumulated.seconds+=cost.travel;accumulated.exposedSeconds+=exposure;
            if((!previousScreen&&screen)||i+1==formUpEnd){stages.push_back(accumulated);accumulated={};accumulated.begin=i+1;}
            previous=point;previousScreen=screen;
        }
        if(accumulated.end>accumulated.begin)stages.push_back(accumulated);
        size_t finalBegin=route.points.size()-1;
        while(finalBegin>0&&Distance(route.points[finalBegin-1],route.destination)<12)--finalBegin;
        for(size_t i=0;i<stages.size();++i)if(stages[i].begin<finalBegin&&finalBegin<stages[i].end){
            RouteStage final=stages[i];final.begin=finalBegin;final.seconds=0;final.exposedSeconds=0;
            Vec3 finalStart=route.points[finalBegin-1];std::vector<Vec3> finalPath(route.points.begin()+finalBegin,route.points.begin()+final.end);
            auto cost=planner.Measure(finalStart,finalPath,&final.exposedSeconds);final.seconds=cost.travel;
            stages[i].end=finalBegin;stages[i].destination=finalStart;stages[i].seconds-=final.seconds;stages[i].exposedSeconds=std::max(0.f,stages[i].exposedSeconds-final.exposedSeconds);
            stages.insert(stages.begin()+i+1,final);break;
        }
        route.stages=stages;
        // Record the firing objective after planning the physical approach to shelters.
        route.destination=firingDestination;
        route.id=uint64_t(leader.squad+1)*1000000000ull+uint64_t(++g.generation);route.owner=leader.id;route.plan=++cmd.planId;
        cmd.route=std::make_shared<TacticalRoute>(route);cmd.routeStage=0;cmd.hasWaypoint=true;cmd.waypoint=route.stages.empty()?destination:route.stages[0].destination;
        g.movers.fill(false);for(size_t i=0;i<slots.size();++i){int slot=movers[i].id%SquadSize;g.movers[slot]=true;g.slots[slot]=slots[i].cover.shelter;g.coverIds[slot]=slots[i].cover.id;g.assaultSlots[slot]=slots[i].cover;}
        g.finalQueryDone=false;g.screenedStage=-1;g.screeningBlocked=false;g.closeOccupation=false;g.occupationLead=-1;g.selected=true;g.geometry=map.revision;cmd.coveringReady=false;
        TraceProposal(d,leader,cmd,map,time,"proposal_accepted","attack selected: assault slots meet firing-line, protection, spacing and >=55 degree worst-sample query");
    }
    if(!g.selected)return orders;
    if(g.geometry!=map.revision){
        bool invalid=false;for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]&&!CoverExists(map,g.coverIds[slot]))invalid=true;
        g.geometry=map.revision;
        if(invalid){TraceProposal(d,leader,cmd,map,time,"plan_cancelled","observed geometry revision invalidates assigned assault cover");g.selected=g.released=g.fireShifted=false;g.node=DrillNode::EstablishFire;g.nextAssessment=time;cmd.hasWaypoint=false;return orders;}
    }
    // Vacated slots survive member loss; the task graph retains its objective.
    for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]){
        const auto& report=leader.taskReports[slot];
        // Unit availability outlives a particular assignment. A soldier can die
        // while a newer order is still in transit; the last received task is
        // then necessarily older than expected, but the casualty remains valid.
        if(!report.id||report.active||report.cause!=TaskCause::Casualty)continue;
        for(const auto& replacement:active)if(!g.movers[replacement.id%SquadSize]&&replacement.id!=cmd.support&&!replacement.machineGun&&!KnowsWounded(leader,replacement)){
            int next=replacement.id%SquadSize;g.movers[next]=true;g.slots[next]=g.slots[slot];g.coverIds[next]=g.coverIds[slot];g.assaultSlots[next]=g.assaultSlots[slot];g.movers[slot]=false;
            TraceProposal(d,leader,cmd,map,time,"slot_reassigned","received casualty status: surviving reserve inherits assault slot");break;
        }
    }
    // Status tables, not a distance timer, own stage completion. Interrupted tasks remain assigned.
    bool done=true,any=false;int failed=0,executing=0;
    for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]){any=true;const auto& r=leader.taskReports[slot];bool matching=r.id&&r.id==g.expected[slot]&&r.route==cmd.route->id&&r.active;
        if(cmd.routeStage+1==int(cmd.route->stages.size()))matching=matching&&Distance(r.goal,g.slots[slot])<.75f;
        done&=matching&&r.status==TaskStatus::Done;failed+=!r.active|| (matching&&r.status==TaskStatus::Failed);executing+=matching&&(r.status==TaskStatus::Executing||r.status==TaskStatus::Done);
    }
    int required=0;for(bool assigned:g.movers)required+=assigned;
    if(!g.fireShifted&&g.node==DrillNode::Traverse&&g.released&&cmd.routeStage+1>=int(cmd.route->stages.size())&&required>=2&&executing==required){
        g.fireShifted=true;TraceProposal(d,leader,cmd,map,time,"support_shift_ordered","final approach Executing receipts enable lifting fire from the assault track; other sectors remain covered");
    }
    if(!g.released&&(g.screenedStage!=cmd.routeStage||g.screenedKnowledge!=leader.knowledgeRevision||g.screenedGeometry!=map.revision)){
        g.screenedStage=cmd.routeStage;g.screenedKnowledge=leader.knowledgeRevision;g.screenedGeometry=map.revision;
        g.currentExposure=CurrentStageExposure(leader,map,*cmd.route,cmd.routeStage,time);
        bool newlyExposed=cmd.route->stages[cmd.routeStage].exposedSeconds<1&&g.currentExposure>=1;
        if(newlyExposed&&!g.screeningBlocked){
            g.screeningBlocked=true;
            TraceProposal(d,leader,cmd,map,time,"stage_screening_blocked","received track now overlooks the screened stage; hold unreleased movement and query local replacement slots");
            if(ReslotAssault(leader,active,map,config,cmd,g.target,g.targetPosition,time,d))return orders;
        }else if(!newlyExposed)g.screeningBlocked=false;
    }
    const auto& stage=cmd.route->stages[cmd.routeStage];
    const auto sector=AssaultSupportSector(leader,cmd,map,time);
    int rounds=TrailingCoveringRounds(leader,g.targetPosition,time,&sector.threats);
    const int requiredRounds=RequiredCoveringRounds(g.released?stage.exposedSeconds:g.currentExposure);
    cmd.coveringReady=rounds>=requiredRounds;
    const bool wasReleased=g.released;
    bool exposed=(g.released?stage.exposedSeconds:g.currentExposure)>=1.f;
    bool localOccupation=g.node==DrillNode::Traverse&&cmd.routeStage+1==int(cmd.route->stages.size())&&stage.seconds<=3&&g.currentExposure<1.5f;
    for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]){
        const auto& report=leader.taskReports[slot];
        localOccupation&=report.active&&report.id==g.expected[slot]&&report.status==TaskStatus::Done&&Distance(report.position,g.slots[slot])<=8;
    }
    if((g.node==DrillNode::EstablishFire||g.node==DrillNode::Traverse)&&!g.released){
        bool ready=!g.screeningBlocked&&(cmd.coveringReady||!exposed||localOccupation);
        if(localOccupation){g.closeOccupation=true;g.occupationLead=-1;for(int slot=0;slot<SquadSize;++slot)if(g.movers[slot]){g.occupationLead=slot;break;}}
        if(ready){g.released=true;cmd.planReason=localOccupation?"close occupation: form-up Done reports release the first mover; partner covers until arrival":exposed?"sliding covering fire: "+std::to_string(rounds)+" delivered rounds / "+std::to_string(requiredRounds)+" required over trailing 10 seconds":"protected lane: executable destinations prepared";TraceProposal(d,leader,cmd,map,time,"stage_released",cmd.planReason);}
    }
    if(g.node==DrillNode::EstablishFire&&g.released){
        Edge(leader,cmd,map,time,d,DrillNode::Traverse,cmd.coveringReady?"base of fire reports recent rounds delivered at selected track; route slots prepared":"screened approach released while base of fire prepares; no exposed crossing authorized");
    }
    if(g.node==DrillNode::Traverse&&wasReleased&&done&&any){
        if(cmd.routeStage+1<int(cmd.route->stages.size())){++cmd.routeStage;g.released=false;g.opportunity=-1;cmd.waypoint=cmd.route->stages[cmd.routeStage].destination;TraceProposal(d,leader,cmd,map,time,"route_stage_completed","all surviving released movers report Done");if(cmd.routeStage+1==int(cmd.route->stages.size())&&!g.finalQueryDone){
            g.finalQueryDone=true;
            ReslotAssault(leader,active,map,config,cmd,g.target,g.targetPosition,time,d);
        }}
        else {Edge(leader,cmd,map,time,d,DrillNode::Occupy,"final-stage Done reports enable occupy and engage");TraceProposal(d,leader,cmd,map,time,"plan_completed","assault positions occupied by surviving movers");cmd.hasWaypoint=false;}
    }
    if(failed){TraceProposal(d,leader,cmd,map,time,"drill_blocked","member reports task Failed; destination needs reassignment");}
    for(const auto& s:active){int slot=s.id%SquadSize;
        if(g.movers[slot]){
            bool final=cmd.routeStage+1>=int(cmd.route->stages.size());Vec3 destination=final?g.slots[slot]:cmd.waypoint;
            if(!final){ // Slots are selected once per stage from reachable local ground, never refreshed from the corporal's location.
                int rank=0;for(int i=0;i<slot;++i)rank+=g.movers[i];Vec3 offset{0,float(rank)*1.5f};
                if(Walkable(map,destination+offset)&&ClearLine(map,destination,destination+offset,.48f))destination=destination+offset;
            }
            if(g.node==DrillNode::EstablishFire)emit(s,Task::Hold,g.stageSlots[s.id%SquadSize],false);
            else if(!g.released)emit(s,Task::BoundMove,g.issuedSlots[slot],true);
            else {
                const auto& leadReport=leader.taskReports[std::max(0,g.occupationLead)];
                bool partnerReady=leadReport.status==TaskStatus::Done&&Distance(leadReport.goal,g.slots[std::max(0,g.occupationLead)])<.75f;
                if(final&&g.closeOccupation&&slot!=g.occupationLead&&!partnerReady)emit(s,Task::BoundCover,g.issuedSlots[slot],true);
                else emit(s,Task::BoundMove,destination,true);
            }
        }else if(s.id==cmd.support)emit(s,s.machineGun?Task::Overwatch:Task::BoundCover,g.supportPosition,false);
        else emit(s,Task::Hold,g.stageSlots[s.id%SquadSize],false);
    }
    return orders;
}
}
