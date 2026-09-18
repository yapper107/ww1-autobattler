#include "DrillSim.h"
#include "PositionSim.h"
#include "TacticalRouteSim.h"
#include "BeliefSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
namespace army {
namespace {
constexpr float Pi=3.14159265f;
Vec3 Direction(Vec3 v){v.z=0;float n=Length(v);return n>.01f?v*(1/n):Vec3{1,0};}
Vec3 Centre(const std::vector<Soldier>& members,const DrillPlan& p,int element){Vec3 sum{};int n=0;for(const auto& s:members)if(element<0||p.elements[s.id%8]==element){sum=sum+s.position;++n;}return n?sum*(1.f/n):p.center;}
void ActionTrace(const Soldier& leader,const DrillPlan& p,Diagnostics* d,float time,const char* kind,const std::string& reason){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.kind=kind;e.reason=reason;e.plan=p.instance;e.routeStage=p.generation;e.position=p.center;e.goal=p.action.objective;e.sector=p.sector;e.intent=p.intent;e.execution.method=p.instance;e.execution.generation=p.generation;e.execution.stage=int(p.stage);d->entries.push_back(e);
}
void Stage(const Soldier& l,DrillPlan& p,Diagnostics* d,float t,DrillStage stage,const std::string& why){p.stage=stage;p.lastProgress=t;ActionTrace(l,p,d,t,"drill_stage_advanced",why);}
void Accept(const Soldier& l,DrillPlan& p,BattleDrill kind,Diagnostics* d,float t,const char* why){
    p.action={};p.action.active=true;p.action.acceptedAt=t;p.action.objective=p.sector;p.action.base=p.center;
    p.kind=kind;++p.instance;p.started=t;p.blocked=false;p.exhausted=false;p.localRetries=0;p.noProgressBlocked=false;p.retreat=false;p.deadline=0;p.arrivalCheckPending=false;
    p.intent.id=100000+l.squad*1000+p.instance;p.intent.objective=p.action.objective;
    p.intent.purpose=kind==BattleDrill::Observe?GoalPurpose::Observe:kind==BattleDrill::BreakContact||kind==BattleDrill::Withdraw?GoalPurpose::Withdraw:kind==BattleDrill::SupportByFire||kind==BattleDrill::Occupy?GoalPurpose::Support:GoalPurpose::Seize;
    ActionTrace(l,p,d,t,"drill_accepted",std::string(why)+((kind==BattleDrill::SupportByFire||kind==BattleDrill::SquadAttack)?"; area = deployment lane UNION objective disc radius 60 m, clipped to map":""));
}
std::vector<Soldier> Element(const std::vector<Soldier>& members,const DrillPlan& p,int el,int buddy=-1){
    std::vector<Soldier> group;int rank=0;for(const auto& s:members)if(el<0||p.elements[s.id%8]==el){if(buddy<0||(rank/2)%2==buddy)group.push_back(s);++rank;}return group;
}
bool Safe(const Map& map,Vec3 at,Vec3 threat){return ProtectedAt(map,at,threat,Stance::Crouched)||!ClearLine3D(map,at+Vec3{0,0,1.3f},threat+Vec3{0,0,1.7f});}
float Angle(Vec3 a,Vec3 b,Vec3 target){a=Direction(a-target);b=Direction(b-target);return std::acos(std::clamp(a.x*b.x+a.y*b.y,-1.f,1.f))*180/Pi;}
// Only an officer's remembered contacts enter this test. Bound exposure uses the
// retained planner geometry, never observer shots or the other team's state.
bool Covered(const Map& map,const Soldier& knowledge,const TacticalRoute& route){
    if(route.points.empty())return false;
    Vec3 previous=route.start;float exposed=0,total=0,run=0,longest=0;
    for(Vec3 end:route.points){float length=Distance(previous,end);int samples=std::max(1,int(std::ceil(length)));
        for(int k=1;k<=samples;++k){Vec3 at=previous+(end-previous)*(float(k)/samples);bool seen=false;
            for(const auto& ct:knowledge.contacts)if(ct.known)seen|=!Safe(map,at,ct.position);
            float distance=length/samples;total+=distance;if(seen){run+=distance;exposed+=distance;longest=std::max(longest,run);}else run=0;
        }previous=end;
    }return total>0&&exposed<=total*.4f&&longest<=10.f;
}
std::shared_ptr<TacticalRoute> Flank(const Soldier& l,const Soldier& knowledge,const std::vector<Soldier>& members,const Map& map,const Config& config,DrillPlan& p,Diagnostics* d,float time,bool alternate){
    auto group=Element(members,p,1);if(group.empty())return {};
    Vec3 base=p.radioSupportSquad>=0?p.radioSupportPosition:Centre(members,p,0);float best=1e9f;std::shared_ptr<TacticalRoute> chosen;
    TacticalRoutePlanner planner(map,knowledge,time,l.team?config.emberDoctrine:config.doctrine,Stance::Crouched);
    GroupPositionQuery q;q.center=p.center;q.target=p.action.objective;q.support=base;
    q.areaMin=p.areaMin;q.areaMax=p.areaMax;q.areaDiscCenter=q.target;q.areaDiscRadius=p.platoonArea?0.f:60.f;
    q.radius=45;q.minTargetDistance=20;q.maxTargetDistance=45;q.minAngle=40;q.maxAngle=60;q.angleProbe=0;
    q.coherenceRadius=160;q.groupCap=90;q.protectedPosition=true;q.maxFallbacks=256;
    for(const auto& member:group)q.anchors[member.id%8]=q.target;
    if(p.platoonArea&&p.acceptedDirective.areaRouteRadius>0){q.areaRoute=p.acceptedDirective.corridor;q.areaRouteRadius=25;q.areaDiscCenter=p.acceptedDirective.areaDiscCenter;q.areaDiscRadius=60;}
    auto positions=QueryPositions(l,group,map,q,time,d);
    for(size_t n=0;n<positions.size();++n){
        if(!positions[n].valid)continue;
        auto candidates=positions[n].fallbacks;candidates.push_back(positions[n].primary);
        for(const auto& slot:candidates){
            Vec3 goal=slot.cover.shelter;
            if(p.radioSupportSquad>=0){
                const Vec3 axis=Direction(p.action.objective-base),start=p.center-p.action.objective,finish=goal-p.action.objective;
                const float ownSide=axis.x*start.y-axis.y*start.x,goalSide=axis.x*finish.y-axis.y*finish.x;
                if(std::abs(ownSide)>3&&ownSide*goalSide<0)continue;
            }
            if(alternate&&Distance(goal,p.action.assault)<8)continue;
            auto candidate=planner.Evaluate(group[n].position,goal);
            if(!Covered(map,knowledge,candidate)){
                ActionTrace(l,p,d,time,"drill_candidate","flank rejected: exposure exceeds 40 percent or 10 m continuous; points="+std::to_string(candidate.points.size()));continue;
            }
            bool inside=true;for(Vec3 point:candidate.points)inside&=Walkable(map,point)&&
                InOperationArea(point,q.areaMin,q.areaMax,q.areaRoute,q.areaRouteRadius,q.areaDiscCenter,q.areaDiscRadius);
            if(!inside)continue;
            // Every manoeuvre member must be able to join this accepted route.
            for(const auto& member:group)inside&=!FindPath(map,member.position,goal).empty();
            if(!inside)continue;
            float cost=candidate.cost.Total();if(cost<best){best=cost;chosen=std::make_shared<TacticalRoute>(candidate);}
        }
    }
    if(chosen){chosen->id=800000000ULL+uint64_t(l.squad)*1000000+uint64_t(p.instance)*1000+p.action.alternates;chosen->owner=l.id;chosen->plan=p.instance;p.action.assault=chosen->destination;p.action.base=base;p.action.angle=Angle(base,chosen->destination,p.action.objective);}
    return chosen;
}
bool BuddyLine(const Soldier& s,const Map& map,const DrillPlan& p){
    const auto& a=s.assignment;Vec3 at=a.hasSlot?a.slot.peek:s.position;
    return Distance(at,p.action.objective)<=SightRange(s)&&
        ClearLine3D(map,at+Vec3{0,0,1.5f},p.action.objective+Vec3{0,0,1.7f});
}
bool FreshObjective(const Soldier& l,const DrillPlan& p,float time){
    const auto knowledge=WithTracks(l,time);
    for(const auto& ct:knowledge.contacts)if(ct.known&&ct.observedAt<=time&&
        time-ct.observedAt<=6&&Distance(ct.position,p.action.objective)<12)return true;
    return false;
}
bool BuddyCovering(const Soldier& l,const std::vector<Soldier>& members,const Map& map,const DrillPlan& p,float time){
    if(!p.action.lifted||p.action.coveringBound)return false;
    const auto covering=Element(members,p,1,1-p.action.buddy);bool ready=false;
    // One stationary man with a line covers the pair. Position/assignment are
    // friendly knowledge; a Support execution timer is not a readiness test.
    for(const auto& s:covering){
        const int n=s.id%SquadSize;const auto& a=s.assignment;
        const float distance=a.hasSlot?std::min(Distance(s.position,a.slot.shelter),Distance(s.position,a.slot.peek)):Distance(s.position,a.position);
        ready|=!p.movers[n]&&!a.execution.paused&&distance<=2&&
            (a.task==Task::BoundCover||a.task==Task::Overwatch)&&BuddyLine(s,map,p);
    }
    if(!ready)return false;
    if(!FreshObjective(l,p,time))return true;
    int recent=0;
    for(const auto& delivery:l.deliveries)if(delivery.observedAt<=time&&
        std::any_of(covering.begin(),covering.end(),[&](const Soldier& s){return s.id==delivery.shooter;})&&Distance(delivery.target,p.action.objective)<12){
        for(float at:delivery.times)recent+=at>=p.action.phaseLineAt&&at<=time&&time-at<=6;
    }
    return recent>=2;
}
bool RemainingSector(const Soldier& l,const DrillPlan& p,float time,Vec3& sector){
    auto knowledge=WithTracks(l,time);float nearest=1e9f;bool found=false;
    sector=p.action.objective+Direction(p.action.objective-p.action.base)*30;
    for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,p.action.objective)>12&&Distance(ct.position,p.action.objective)<nearest){
        nearest=Distance(ct.position,p.action.objective);sector=ct.position;found=true;
    }
    return found;
}
// Every order has one recipient, one bounded path and a real position query.
// A support pause edits permission on the retained contract instead of calling this.
int Assign(const Soldier& l,const std::vector<Soldier>& members,const std::vector<Soldier>& requestedGroup,const Map& map,DrillPlan& p,Vec3 goal,bool cover,Task task,Completion completion,bool support,bool rush,Diagnostics* d,float time,bool reposition=false){
    auto group=requestedGroup;
    if(group.empty())return 0;
    if(support)std::stable_sort(group.begin(),group.end(),[](const Soldier& a,const Soldier& b){return a.machineGun>b.machineGun;});
    ++p.generation;p.waiting.fill(false);p.arrivals.fill(false);p.arrivalConsumed=false;p.arrivalQuorumAt=-1;p.movers.fill(false);p.slotWaiting.fill(false);
    GroupPositionQuery q;q.center=p.center;q.target=p.stage==DrillStage::Consolidate?p.sector:p.action.objective;q.areaMin=p.areaMin;q.areaMax=p.areaMax;q.areaDiscCenter=p.action.objective;q.areaDiscRadius=!p.platoonArea&&(p.kind==BattleDrill::SupportByFire||p.kind==BattleDrill::SquadAttack)?60.f:0.f;q.coherenceRadius=160;q.groupCap=40;q.radius=cover?25:3;q.formation=!cover;q.protectedPosition=cover&&completion!=Completion::Observe;q.firing=completion==Completion::Observe;q.anchorWeight=3;q.coverWeight=cover?12:0;
    if(support&&p.kind==BattleDrill::SupportByFire){q.firing=true;q.radius=60;q.firingSearch=true;q.protectedPosition=false;q.preferCover=true;}
    if(rush){q.formation=true;q.preferCover=true;q.safeEndpoint=true;q.guardObjective=true;q.radius=3;q.maxPathLength=15.f;}
    if(reposition){q.formation=true;q.preferCover=true;q.protectedPosition=false;q.firing=true;
        q.safeEndpoint=true;q.radius=15;q.maxPathLength=15;}
    const bool closePermission=p.stage==DrillStage::Assault&&BuddyCovering(l,members,map,p,time);
    if(closePermission){q.supportedObjective=p.action.objective;q.supportedAssaultRadius=18;q.inspectSupportedObjective=!FreshObjective(l,p,time);}
    const bool finalBound=rush&&p.stage==DrillStage::Assault&&Distance(goal,p.action.objective)<.01f;
    if(finalBound||p.stage==DrillStage::Consolidate){
        q.formation=false;q.preferCover=false;q.protectedPosition=RemainingSector(l,p,time,q.target);
        q.radius=finalBound?8.f:12.f;q.boundCenter=p.action.objective;q.boundRadius=12;
        if(finalBound){
            // Occupy certifies the shelter: a sprint deliberately crouches there
            // rather than walking to the peek required by a transit receipt.
            completion=Completion::Occupy;
            ActionTrace(l,p,d,time,"drill_candidate","final bound: objective cover slots oriented on remaining known threats");
        }
    }
    q.corridor=(p.stage==DrillStage::AttackMove||p.stage==DrillStage::AssaultLine)?p.action.route:nullptr;
    Vec3 direction=Direction(p.action.objective-goal),side{-direction.y,direction.x};
    for(const auto& s:members)if(std::none_of(group.begin(),group.end(),[&](const Soldier& a){return a.id==s.id;})){
        CoverPosition c=p.slots[s.id%8];if(!p.hasSlot[s.id%8])c.shelter=c.peek=p.positions[s.id%8];q.reserved.push_back({s.id,c});
    }
    int rank=0;for(const auto& s:group){Vec3 at=reposition?s.position:cover?(support?s.position:goal):goal+side*(5.f*(rank-(group.size()-1)*.5f));
        if(rush){auto path=FindPath(map,s.position,at);float remaining=15;Vec3 start=s.position;
            for(Vec3 next:path){float length=Distance(start,next);if(length>=remaining){at=start+Direction(next-start)*remaining;break;}remaining-=length;start=next;at=next;}
        }
        q.anchors[s.id%8]=at;++rank;
    }
    if(p.platoonArea&&p.acceptedDirective.areaRouteRadius>0){q.areaRoute=p.acceptedDirective.corridor;q.areaRouteRadius=25;q.areaDiscCenter=p.acceptedDirective.areaDiscCenter;q.areaDiscRadius=60;}
    auto allocated=QueryPositions(l,group,map,q,time,d);int valid=0;
    // Entering support changes the firing contract, not ownership of a valid
    // stationary slot. Current friendly firing lanes cannot evict its occupant.
    if(support)for(size_t k=0;k<group.size();++k){int n=group[k].id%8;
        if(p.hasSlot[n]&&p.slotGeometry[n]==map.revision&&ProtectedAt(map,p.slots[n].shelter,p.action.objective,Stance::Crouched)&&
           ClearLine3D(map,p.slots[n].peek+Vec3{0,0,1.5f},p.action.objective+Vec3{0,0,1.7f})){
            allocated[k].valid=true;allocated[k].primary.cover=p.slots[n];
        }
    }
    for(size_t k=0;k<group.size();++k){const auto& s=group[k];int n=s.id%8;const auto& result=allocated[k];
        Vec3 at=result.valid?result.primary.cover.shelter:s.position;auto path=FindPath(map,s.position,at);float length=0;Vec3 prior=s.position;for(Vec3 step:path){length+=Distance(prior,step);prior=step;}
        bool executable=result.valid&&!path.empty()&&(!rush||length<=15.f);
        if(support&&executable)executable&=Distance(result.primary.cover.peek,p.action.objective)<=std::min(100.f,SightRange(s))&&ClearLine3D(map,result.primary.cover.peek+Vec3{0,0,1.5f},p.action.objective+Vec3{0,0,1.7f});
        if(rush&&Distance(at,p.action.objective)>18)executable&=Safe(map,at,p.action.objective);
        if(rush&&Distance(at,p.action.objective)<=18)executable&=closePermission;
        if(p.stage==DrillStage::Retire&&!support){float bound=Distance(Centre(group,p,-1),at);executable&=(bound>=25||(p.kind==BattleDrill::Withdraw&&Distance(at,p.action.rally)<=12))&&bound<=50;}
        if(!executable)at=s.position;else ++valid;
        p.positions[n]=at;p.hasSlot[n]=executable&&(result.primary.cover.id!=0||(support&&q.firingSearch));if(p.hasSlot[n]){p.slots[n]=result.primary.cover;p.slotGeometry[n]=map.revision;}
        auto route=std::make_shared<TacticalRoute>();route->start=s.position;route->destination=at;route->geometry=map.revision;route->owner=l.id;route->plan=p.instance;route->id=810000000ULL+l.squad*1000000ULL+p.generation*16+n;route->points=executable?path:std::vector<Vec3>{s.position};p.memberRoutes[n]=route;
        p.issue[n]=true;p.expected[n]=0;p.orderMethods[n]=p.instance;p.orderGenerations[n]=p.generation;p.waiting[n]=executable;p.movers[n]=executable&&Distance(s.position,at)>.75f;
        p.action.tasks[n]=task;p.action.completions[n]=completion;p.action.supportOrders[n]=support;p.action.rushOrders[n]=rush;p.action.pausedOrders[n]=false;p.action.liftOrders[n]=false;
    }
    p.deadline=0;p.stageElapsed=0;p.clockAt=time;
    return valid;
}
bool SupportPositionReady(const std::vector<Soldier>& members,const Map& map,const DrillPlan& p){
    bool gun=false;int rifles=0;
    for(const auto& member:members){int n=member.id%8;
        if(p.elements[n]!=0||!p.hasSlot[n]||!member.assignment.hasSlot||
           member.assignment.execution.method!=p.instance||member.assignment.execution.paused)continue;
        const auto& slot=member.assignment.slot;
        const bool held=std::min(Distance(member.position,slot.shelter),Distance(member.position,slot.peek))<=2;
        const bool line=Distance(slot.peek,p.action.objective)<=std::min(100.f,SightRange(member))&&
            ClearLine3D(map,slot.peek+Vec3{0,0,1.5f},p.action.objective+Vec3{0,0,1.5f});
        if(held&&line){if(member.machineGun)gun=true;else ++rifles;}
    }
    return gun||rifles>=2;
}
void BindSupportThreat(const Soldier& leader,const Soldier& knowledge,const std::vector<Soldier>& members,DrillPlan& p,Diagnostics* d,float time){
    if(!p.action.active||p.kind!=BattleDrill::SupportByFire||p.action.lifted)return;
    if(p.action.boundSupportThreat>=0&&knowledge.contacts[p.action.boundSupportThreat].known&&
       Distance(knowledge.contacts[p.action.boundSupportThreat].position,p.action.objective)<18)return;
    int threat=-1;float nearest=18;
    for(int id=0;id<UnitCount;++id){const auto& contact=knowledge.contacts[id];
        const float distance=Distance(contact.position,p.action.objective);
        if(contact.known&&contact.observedAt<=time&&distance<nearest){nearest=distance;threat=id;}
    }
    if(threat<0||threat==p.action.boundSupportThreat)return;
    p.action.boundSupportThreat=threat;p.target=threat;p.sector=p.action.objective;
    for(const auto& member:members)if(p.elements[member.id%8]==0&&p.action.supportOrders[member.id%8])p.issue[member.id%8]=true;
    ActionTrace(leader,p,d,time,"support_threat_bound","retained support sector binds newly known contact "+std::to_string(threat)+"; stage and generation retained");
}
void SupportEvidence(const Soldier& l,DrillPlan& p,Diagnostics* d,float time){
    bool useful=false;float newest=-100;
    for(const auto& e:l.deliveries)if(e.shooter>=0&&((e.shooter/8==l.squad&&p.elements[e.shooter%8]==0)||(l.platoonOrder.hasArea&&e.shooter==l.platoonOrder.supportSoldier)||(p.radioSupportSquad>=0&&e.shooter/8==p.radioSupportSquad))&&Distance(e.target,p.action.objective)<=12&&e.observedAt<=time){
        int count=0;for(float at:e.times)if(at>=p.action.acceptedAt&&time-at<=6&&at<=time){++count;newest=std::max(newest,at);}
        useful|=count>=(e.supportWeapon?2:3);
    }
    // Establishment needs a useful volley. Once established, a real delivered
    // round refreshes the loss clock even while that volley ages out or reloads.
    // Keep the original observation time: relaying old evidence cannot renew it.
    if(useful||p.action.established)p.action.lastEvidence=std::max(p.action.lastEvidence,newest);
    if(useful&&!p.action.established&&(p.radioSupportSquad>=0||p.action.supportPositionReady)){p.action.established=p.action.everEstablished=true;if(p.action.attack)p.action.cause=TaskCause::None;ActionTrace(l,p,d,time,"drill_stage_advanced","support established: element delivered fire on threat area");}
    if(p.action.established&&time-p.action.lastEvidence>=8){p.action.established=false;p.action.lostAt=time;p.action.cause=TaskCause::Support;ActionTrace(l,p,d,time,"drill_stage_advanced","support lost: eight seconds without element delivery evidence");}
}
void Pause(const Soldier& l,const std::vector<Soldier>& members,const Map& map,DrillPlan& p,Diagnostics* d,float time,bool pause){
    if(p.action.paused==pause)return;
    p.action.paused=pause;
    std::vector<ReservedPosition> reserved;
    for(const auto& s:members)if(p.elements[s.id%8]!=1||!p.action.rushOrders[s.id%8]){
        CoverPosition slot;slot.shelter=slot.peek=s.position;reserved.push_back({s.id,slot});
    }
    for(const auto& s:members){int n=s.id%8;if(p.elements[n]!=1||!p.action.rushOrders[n])continue;
        p.action.pausedOrders[n]=pause;p.issue[n]=true;
        if(pause){
            p.action.resumeMovers[n]=p.movers[n];
            GroupPositionQuery q;q.center=p.center;q.target=p.action.objective;q.areaMin=p.areaMin;q.areaMax=p.areaMax;
            q.areaDiscCenter=p.action.objective;q.areaDiscRadius=60;q.coherenceRadius=160;q.radius=15;
            q.boundCenter=s.position;q.boundRadius=15;q.maxPathLength=15;q.corridor=p.action.route;q.groupCap=40;
            q.protectedPosition=true;q.anchors[n]=s.position;q.anchorWeight=1;q.travelWeight=q.coverWeight=q.lineWeight=0;q.reserved=reserved;
            if(p.platoonArea&&p.acceptedDirective.areaRouteRadius>0){q.areaRoute=p.acceptedDirective.corridor;q.areaRouteRadius=25;q.areaDiscCenter=p.acceptedDirective.areaDiscCenter;q.areaDiscRadius=60;}
            auto slots=QueryPositions(l,{s},map,q,time,d);p.action.pauseHasSlot[n]=slots.front().valid;
            if(slots.front().valid){
                p.action.pauseSlots[n]=slots.front().primary.cover;reserved.push_back({s.id,p.action.pauseSlots[n]});
                p.movers[n]=Distance(s.position,p.action.pauseSlots[n].shelter)>.75f;
                ActionTrace(l,p,d,time,"drill_safety_override","pause member "+std::to_string(s.id)+": nearest protected slot within 15 m; retain method and generation");
            }else{
                p.movers[n]=false;
                ActionTrace(l,p,d,time,"drill_safety_override","pause exposed: member "+std::to_string(s.id)+" has no protected slot within 15 m; hold in place");
            }
        }else{p.movers[n]=p.action.resumeMovers[n];p.action.pauseHasSlot[n]=false;}
    }
    ActionTrace(l,p,d,time,pause?"drill_safety_override":"drill_resume",pause?"support lost: retain instance, generation and protected rush endpoint":"fresh support evidence: resume retained rush contracts");
    ActionTrace(l,p,d,time,"drill_stage_advanced",pause?"support permission paused":"support permission resumed");
}
void Fail(const Soldier& l,DrillPlan& p,Diagnostics* d,float time,TaskCause cause,const char* reason){
    p.blocked=true;p.exhausted=true;p.lastRejection=reason;p.action.cause=cause;p.deadline=0;p.movers.fill(false);
    if(p.kind==BattleDrill::SquadAttack){
        p.action.active=false;p.action.closureFallback=true;p.noProgressBlocked=false;p.exhausted=false;
        Stage(l,p,d,time,DrillStage::Reorganise,std::string(reason)+"; report cause, Reorganise then supported closure");
    }else Stage(l,p,d,time,DrillStage::SupportHold,reason);
}
bool AllocatedSupport(const std::vector<Soldier>& members,const DrillPlan& p){
    bool gun=false;int rifles=0;
    for(const auto& s:members)if(p.elements[s.id%8]==0&&p.hasSlot[s.id%8]){
        if(s.machineGun)gun=true;else ++rifles;
    }
    return gun||rifles>=2;
}
void RecoverSupport(const Soldier& l,const std::vector<Soldier>& members,const Map& map,DrillPlan& p,Diagnostics* d,float time){
    if(p.kind!=BattleDrill::SupportByFire||!p.action.active||p.action.lifted||p.action.supportSearchExhausted)return;
    // Search once at acceptance; a later failed delivery can change the solution
    // once, without turning a support contract into a periodic reallocation.
    if(!AllocatedSupport(members,p)){
        p.action.supportSearchExhausted=true;p.action.established=false;
        Fail(l,p,d,time,TaskCause::Unreachable,"support_position_exhausted: no reachable gun or two rifle firing slots within 60 m");return;
    }
    if(!p.action.everEstablished||p.action.established||p.action.supportSearchTried)return;
    p.action.supportSearchTried=true;
    ActionTrace(l,p,d,time,"support_reposition","delivery lost: one bounded firing-position recovery search within 60 m");
    Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
    if(!AllocatedSupport(members,p)){
        p.action.supportSearchExhausted=true;
        Fail(l,p,d,time,TaskCause::Unreachable,"support_position_exhausted: recovery found no reachable gun or two rifle firing slots within 60 m");
    }
}
bool RadioCurrent(const Soldier& leader,const SquadBroadcast& message){
    for(const auto& later:leader.squadRadio)if(later.squad==message.squad&&later.kind==SquadBroadcastKind::Done&&later.sentAt>message.sentAt&&Distance(later.objective,message.objective)<40)return false;
    return true;
}
void AreaFirePermission(const Soldier& l,const Soldier& knowledge,const std::vector<Soldier>& members,DrillPlan& p,Diagnostics* d,float time){
    bool assault=p.action.attack&&!p.action.completed;
    for(const auto& message:l.squadRadio)if(message.kind==SquadBroadcastKind::Assaulting&&
        message.squad!=l.squad&&RadioCurrent(l,message)&&Distance(message.objective,p.action.objective)<=12)assault=true;
    // Recent observations from own sensing or received reports are the squad's
    // evidence of a visible target; no other soldier's enemy memory is read.
    bool visible=false;for(const auto& ct:knowledge.contacts)visible|=ct.known&&time-ct.observedAt<1&&Distance(ct.position,p.action.objective)<=12;
    bool permission=p.radioFixing&&assault&&!visible&&!p.action.lifted&&p.action.active&&
        (p.kind==BattleDrill::SupportByFire||p.kind==BattleDrill::SquadAttack);
    if(permission==p.action.areaFireOrdered)return;
    p.action.areaFireOrdered=permission;
    for(const auto& member:members)if(p.elements[member.id%8]==0)p.issue[member.id%8]=true;
    ActionTrace(l,p,d,time,"support_area_fire",permission?"Fixing and received/own assault: sustained last-known-area fire until phase line":"area-fire permission ends: visible target, phase line or assault completion");
}
bool CanVolunteer(const Soldier& leader,bool assault){
    if(leader.leaderEffects&&!leader.initiativeAllowed){
        const auto& order=leader.platoonOrder;
        if(!order.intent.id || (assault ? order.enemy<0||order.intent.purpose!=GoalPurpose::Seize : order.task!=PlatoonTask::HelpSquad))return false;
    }
    const auto kind=OrganisationKind(leader.organisation);
    if(!assault)return kind!=OrganisationKind::Rush||leader.platoonOrder.task==PlatoonTask::HelpSquad;
    return !Organisation(kind).requiresPlatoonOrder||leader.platoonOrder.task==PlatoonTask::FightHere||
        (leader.platoonOrder.intent.id&&leader.platoonOrder.intent.purpose==GoalPurpose::Seize);
}
void CommitAssault(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p){
    for(const auto& member:members){int n=member.id%SquadSize;
        p.action.assaultRoster[n]=p.elements[n]==1;
        p.action.baseRoster[n]=p.elements[n]==0&&!KnowsWounded(leader,member);
    }
}
bool AnsweredCaller(const DrillPlan& p,const SquadBroadcast& fixing,float time){
    for(const auto& call:p.broadcasts)if(call.kind==SquadBroadcastKind::NeedSupport&&
        time-call.sentAt<=60&&Distance(call.objective,fixing.objective)<40)return true;
    return false;
}
bool RadioAction(const Soldier& l,const Soldier& knowledge,const std::vector<Soldier>& members,const Map& map,
                 const Config& config,DrillPlan& p,Diagnostics* d,float time){
    const SquadBroadcast* fixing=nullptr;const SquadBroadcast* need=nullptr;const SquadBroadcast* lead=nullptr;
    for(const auto& message:l.squadRadio){
        if(!RadioCurrent(l,message))continue;
        if(message.kind==SquadBroadcastKind::Assaulting&&Distance(message.objective,p.action.objective)<40&&
            (!lead||message.sentAt<lead->sentAt||(message.sentAt==lead->sentAt&&message.squad<lead->squad)))lead=&message;
        if(message.squad==l.squad)continue;
        if(message.kind==SquadBroadcastKind::Fixing&&time-message.sentAt<60&&(!fixing||message.sentAt<fixing->sentAt))fixing=&message;
        if(message.kind==SquadBroadcastKind::NeedSupport&&time-message.sentAt<60&&Distance(p.center,message.position)<=100&&(!need||Distance(p.center,message.position)<Distance(p.center,need->position)))need=&message;
    }
    if(lead)p.radioLeadSquad=lead->squad;
    int laneRevision=0;for(const auto& message:l.squadRadio)if(message.squad!=l.squad&&
        (message.kind==SquadBroadcastKind::Assaulting||message.kind==SquadBroadcastKind::PhaseLine||message.kind==SquadBroadcastKind::Done))laneRevision+=message.serial;
    if(laneRevision!=p.radioLaneRevision){p.radioLaneRevision=laneRevision;for(const auto& member:members)p.issue[member.id%8]=true;}
    for(const auto& message:l.squadRadio)if(message.kind==SquadBroadcastKind::PhaseLine&&message.squad!=l.squad&&
        message.squad==p.radioLeadSquad&&RadioCurrent(l,message)&&Distance(message.objective,p.action.objective)<40&&
        !p.action.lifted&&(p.kind==BattleDrill::SupportByFire||p.action.closureFallback)){
        p.action.lifted=true;
        for(const auto& member:members){int n=member.id%8;if(p.elements[n]==0){p.issue[n]=true;p.action.liftOrders[n]=true;}}
        ActionTrace(l,p,d,time,"radio_lift","first assault announcer's received phase line: lift original sector via member orders");
        return true;
    }
    if(p.kind==BattleDrill::BreakContact||p.kind==BattleDrill::Withdraw)return false;
    const bool compatible=l.platoonOrder.task==PlatoonTask::None||l.platoonOrder.task==PlatoonTask::FightHere||l.platoonOrder.task==PlatoonTask::HelpSquad;
    if(!compatible)return false;
    auto consumed=[&](const SquadBroadcast& message)->int&{return p.radioConsumed[int(message.kind)][message.sender];};
    const bool answered=fixing&&fixing->serial>consumed(*fixing)&&AnsweredCaller(p,*fixing,time)&&CanVolunteer(l,true);
    if(!answered&&need&&need->serial>consumed(*need)&&CanVolunteer(l,false)&&
        (p.target<0||Distance(p.sector,need->objective)<40)&&p.kind!=BattleDrill::SquadAttack){
        consumed(*need)=need->serial;p.target=need->enemy;p.sector=need->objective;
        Accept(l,p,BattleDrill::SupportByFire,d,time,"radio NeedSupport: volunteer support by fire within 100 m");
        p.action.objective=need->objective;p.action.helping=true;
        Stage(l,p,d,time,DrillStage::SupportPrepare,"help: occupy protected slots covering neighbour's group");
        Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
        return true;
    }
    if(!fixing||fixing->serial<=consumed(*fixing)||!CanVolunteer(l,true)||p.kind==BattleDrill::SquadAttack||
       (p.target>=0&&Distance(p.sector,fixing->objective)>=40)||(p.effectiveFire&&!answered))return false;
    consumed(*fixing)=fixing->serial;
    auto candidate=p;candidate.radioSupportSquad=fixing->squad;candidate.radioSupportPosition=fixing->position;
    candidate.action.objective=fixing->objective;
    auto route=Flank(l,knowledge,members,map,config,candidate,d,time,false);
    if(!route){
        ActionTrace(l,p,d,time,"radio_no_route","received Fixing; no covered own-side route: retain supported fire and movement");
        if(answered&&!(p.action.helping&&p.exhausted)){
            p.radioSupportSquad=fixing->squad;p.radioSupportPosition=fixing->position;
            p.target=fixing->enemy;p.sector=fixing->objective;p.destination=fixing->objective;
            p.action.objective=fixing->objective;p.action.active=false;p.action.closureFallback=true;
            p.action.cause=TaskCause::Support;p.blocked=false;p.exhausted=false;p.noProgressBlocked=false;
            Stage(l,p,d,time,DrillStage::Reorganise,"answered caller: no covered flank; Reorganise then supported fire and movement");
            return true;
        }
        return false;
    }
    p.radioSupportSquad=fixing->squad;p.radioSupportPosition=fixing->position;p.target=fixing->enemy;p.sector=fixing->objective;
    Accept(l,p,BattleDrill::SquadAttack,d,time,lead?"radio opportunity: join existing assault from own side":"radio opportunity: covered route from own side");
    p.action.attack=true;p.action.route=route;p.action.assault=route->destination;p.action.base=fixing->position;
    p.action.angle=Angle(fixing->position,route->destination,p.action.objective);p.action.initialStrength=int(members.size());CommitAssault(l,members,p);
    Stage(l,p,d,time,DrillStage::SupportPrepare,"radio assault committed: wait for delivered support evidence");
    Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
    return true;
}

bool Rush(const Soldier& l,const std::vector<Soldier>& members,const Map& map,DrillPlan& p,Diagnostics* d,float time){
    auto group=Element(members,p,1,p.action.buddy);if(group.empty())return false;
    Vec3 from=Centre(group,p,-1);Vec3 target=p.action.assault;
    if(p.action.routeStep<p.action.route->points.size())target=p.action.route->points[p.action.routeStep];
    Stage(l,p,d,time,DrillStage::AttackMove,"support established: next buddy rush, at most five seconds");
    int valid=Assign(l,members,group,map,p,target,false,Task::BoundMove,Completion::Transit,false,true,d,time);
    if(!valid){Fail(l,p,d,time,TaskCause::Unreachable,"Blocked: no executable protected five-second rush");return false;}
    (void)from;return true;
}
void CoverBuddy(const Soldier& l,const std::vector<Soldier>& members,DrillPlan& p,Diagnostics* d,float time){
    p.action.coveringAttempted=false;
    // Keep the other pair's accepted positions. Only its firing contract changes;
    // the base of fire remains lifted and element membership stays frozen.
    for(const auto& s:Element(members,p,1,1-p.action.buddy)){int n=s.id%8;
        p.issue[n]=true;p.movers[n]=false;p.action.tasks[n]=Task::BoundCover;
        p.action.completions[n]=Completion::Support;p.action.supportOrders[n]=true;
        p.action.rushOrders[n]=false;p.action.pausedOrders[n]=false;
    }
    ActionTrace(l,p,d,time,"drill_stage_advanced","assault buddy holds accepted endpoint and covers the other pair on objective");
}
void BeginRetire(const Soldier& l,const std::vector<Soldier>& members,const Map& map,DrillPlan& p,Diagnostics* d,float time,bool withdraw,const char* evidence=nullptr){
    Vec3 rally=withdraw?l.platoonOrder.intent.objective:p.center-Direction(p.sector-p.center)*80;
    Accept(l,p,withdraw?BattleDrill::Withdraw:BattleDrill::BreakContact,d,time,withdraw?"Withdraw to received rally":evidence?evidence:"BreakContact: believed ratio at least two without superiority");
    p.action.rally=rally;p.action.objective=p.sector;p.retreat=true;p.movingElement=1;
    Stage(l,p,d,time,DrillStage::Retire,"rearward bound: one stationary suppressing element");
    Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
    Vec3 start=Centre(members,p,1),goal=start+Direction(rally-start)*std::min(30.f,Distance(rally,start));
    Assign(l,members,Element(members,p,1),map,p,goal,false,Task::PullBack,Completion::Occupy,false,false,d,time);
}
}
#ifdef ARMY_TEST_CONTROLS
bool TestRadioAction(const Soldier& leader,const Soldier& knowledge,const std::vector<Soldier>& members,const Map& map,const Config& config,DrillPlan& plan,Diagnostics* diagnostics,float time){
    return RadioAction(leader,knowledge,members,map,config,plan,diagnostics,time);
}
#endif
bool BeginContactAction(const Soldier& l,const Soldier& knowledge,const std::vector<Soldier>& members,const Map& map,const Config& config,DrillPlan& p,Diagnostics* d,float time){
    bool incoming=p.effectiveFire||l.understoodSuppression>.3f;
    for(const auto& s:members)incoming|=s.suppression>.3f;
    for(const auto& fire:l.fireAreas)incoming|=time-fire.observedAt<6&&fire.intensity>.3f;
    bool protectedSlot=false;for(const auto& s:members){int n=s.id%8;protectedSlot|=p.hasSlot[n]&&ProtectedAt(map,p.slots[n].shelter,p.sector,Stance::Crouched);}
    if(incoming&&!protectedSlot){
        p.effectiveFire=true; // Immediate emergency overrides ordinary assessment hysteresis.
        ActionTrace(l,p,d,time,"drill_stage","BreakContact: effective incoming fire with zero protected slots");
        BeginRetire(l,members,map,p,d,time,false);
        ActionTrace(l,p,d,time,"drill_stage","rearward bound: emergency takes precedence over attack or fallback");
        return true;
    }
    if(p.target<0||p.strength[0]<2)return false;
    if(p.retreat&&p.effectiveFire){BeginRetire(l,members,map,p,d,time,false);return true;}
    // A contact requiring deliberate fire and manoeuvre, not quiet route travel.
    if(p.superiority||Distance(p.center,p.sector)>100)return false;
    Accept(l,p,BattleDrill::SupportByFire,d,time,"SupportByFire: contact assessment deploys gun group");
    p.action.initialStrength=int(members.size());p.action.base=Centre(members,p,0);
    for(int id=0;id<UnitCount;++id)p.action.threats[id]=knowledge.contacts[id].known;
    p.action.route=(!CanVolunteer(l,true)||l.platoonOrder.fireMovement)?std::shared_ptr<TacticalRoute>{}:Flank(l,knowledge,members,map,config,p,d,time,false);p.action.attack=bool(p.action.route);
    if(p.action.attack){CommitAssault(l,members,p);p.kind=BattleDrill::SquadAttack;ActionTrace(l,p,d,time,"drill_candidate","SquadAttack: covered flank sector 40-60 degrees, 20-45 m");}
    if(!p.action.attack){
        Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
        p.action.active=false;p.action.closureFallback=true;p.action.cause=TaskCause::Support;p.closeAfterCover=true;
        p.movingElement=1;
        ActionTrace(l,p,d,time,"drill_stage_advanced","no covered route: report upward and continue supported bounding closure");
        return false; // Existing committed movement stages own the bounds.
    }
    Stage(l,p,d,time,DrillStage::SupportPrepare,"prepare element support; assault permission withheld pending delivered rounds");
    int slots=Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
    for(const auto& s:members)if(p.elements[s.id%8]==1){int n=s.id%8;p.action.tasks[n]=Task::Overwatch;p.action.completions[n]=Completion::Occupy;}
    if(slots<2)Fail(l,p,d,time,TaskCause::Support,"Blocked/Support: fewer than two protected firing positions");
    return true;
}
bool UpdateSquadAction(const Soldier& l,const Soldier& knowledge,const std::vector<Soldier>& members,const Map& map,const Config& config,DrillPlan& p,Diagnostics* d,float time,bool arrived,bool below,bool directive){
    const bool withdrawing=directive&&l.platoonOrder.intent.purpose==GoalPurpose::Withdraw;
    const float enemy=BelievedStrength(l,p.sector,100,time);p.believedEnemy=enemy;
    int recentLosses=0;for(float at:p.lossTimes)recentLosses+=at>0&&time-at<=20;
    if(withdrawing&&p.action.active&&(p.kind==BattleDrill::BreakContact||p.kind==BattleDrill::Withdraw)){
        // A higher withdrawal extends the current retirement; it does not cancel
        // the bound, reset its receipts, or restart the element sequence.
        p.kind=BattleDrill::Withdraw;p.action.rally=l.platoonOrder.intent.objective;
        ActionTrace(l,p,d,time,"drill_stage_advanced","received Withdraw: retain retirement bound and receipts; extend rally");
    }
    const bool ratioAssessed=p.kind==BattleDrill::ReactToContact&&(p.assessed||time>=p.assessmentAt);
    if((withdrawing&&p.kind!=BattleDrill::Withdraw)||(!p.action.active&&p.target>=0&&((ratioAssessed&&enemy>=2*std::max(int(members.size()),l.platoonOrder.taskNode?l.platoonOrder.committedStrength:0))||recentLosses>=3)&&!p.superiority)){
        BeginRetire(l,members,map,p,d,time,withdrawing);return true;
    }
    if(p.kind==BattleDrill::SquadAttack&&p.action.active&&below){
        p.action.cause=TaskCause::InsufficientStrength;p.blocked=true;p.exhausted=true;
        p.lastRejection="frozen element below minStrength";p.action.active=false;p.movers.fill(false);
        Stage(l,p,d,time,DrillStage::Reorganise,"InsufficientStrength: frozen element failed; Reorganise before retirement assessment");return true;
    }
    if(p.kind==BattleDrill::SquadAttack&&p.action.active){
        bool casualty=false,baseLoss=false;int baseBefore=0,baseNow=0;
        for(int n=0;n<SquadSize;++n){
            casualty|=p.action.assaultRoster[n]&&p.lossTimes[n]>p.action.acceptedAt;
            if(p.action.baseRoster[n]){++baseBefore;for(const auto& member:members)
                if(member.id%SquadSize==n&&!KnowsWounded(l,member))++baseNow;}
        }
        baseLoss=p.radioSupportSquad<0&&baseBefore>=2&&baseNow<2;
        // Expected-support delay and sustained pressure are both measured after commitment.
        if(p.effectiveFire&&!p.superiority&&time>=p.action.acceptedAt+config.reportDelay+8){
            if(p.action.assaultFireSince<0)p.action.assaultFireSince=time;
        }else p.action.assaultFireSince=-1;
        const bool sustained=p.action.assaultFireSince>=0&&time-p.action.assaultFireSince>=15;
        if(casualty||baseLoss||sustained){
            const char* reason=casualty?"new assault-element casualty":baseLoss?"new loss of own base of fire":"effective fire without superiority for 15 s after expected support";
            BeginRetire(l,members,map,p,d,time,false,reason);
            ActionTrace(l,p,d,time,"assault_break_evidence",reason);return true;
        }
    }
    BindSupportThreat(l,knowledge,members,p,d,time);
    p.action.supportPositionReady=SupportPositionReady(members,map,p);
    if(RadioAction(l,knowledge,members,map,config,p,d,time))return true;
    if(directive&&l.platoonOrder.liftFire){
        p.action.lifted=true;
        for(const auto& s:members){int n=s.id%8;p.issue[n]=true;p.action.liftOrders[n]=true;}
        ActionTrace(l,p,d,time,"drill_stage_advanced","received platoon phase-line/fire-lane amendment: lift original area; shift to remaining known threats");
        return true;
    }
    if(directive&&l.platoonOrder.task==PlatoonTask::HelpSquad&&Distance(p.center,l.platoonOrder.intent.objective)>90){
        p.action.active=false;p.helpApproach=true;p.helpObjective=l.platoonOrder.intent.objective;
        p.destination=l.platoonOrder.position;
        ActionTrace(l,p,d,time,"drill_stage_advanced","HelpSquad outside weapon range: approach neighbour before allocating firing slots");
        return false;
    }
    if(p.helpApproach){
        if(Distance(p.center,p.helpObjective)>85)return false;
        p.helpApproach=false;p.sector=p.helpObjective;
        Accept(l,p,BattleDrill::SupportByFire,d,time,"HelpSquad arrived within support range");p.action.objective=p.helpObjective;p.action.helping=true;
        Stage(l,p,d,time,DrillStage::SupportPrepare,"help approach complete: allocate protected slots with a line");
        Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
        return true;
    }
    if(directive&&l.platoonOrder.intent.purpose==GoalPurpose::Support&&(l.platoonOrder.task==PlatoonTask::Support||l.platoonOrder.task==PlatoonTask::HelpSquad)){
        p.sector=l.platoonOrder.intent.objective;
        Accept(l,p,BattleDrill::SupportByFire,d,time,"SupportByFire: received threat-area order");p.action.objective=l.platoonOrder.intent.objective;p.action.helping=l.platoonOrder.task==PlatoonTask::HelpSquad;
        Stage(l,p,d,time,DrillStage::SupportPrepare,"occupy protected firing positions; wait for element delivered rounds");
        Assign(l,members,Element(members,p,0),map,p,p.center,true,Task::BoundCover,Completion::Support,true,false,d,time);
        if(!AllocatedSupport(members,p)){p.action.supportSearchExhausted=true;Fail(l,p,d,time,TaskCause::Support,"support_position_exhausted: no reachable gun or two rifle firing slots within 60 m");}
        return true;
    }
    if(directive&&(l.platoonOrder.intent.purpose==GoalPurpose::Observe||l.platoonOrder.intent.purpose==GoalPurpose::Support)){
        const bool observe=l.platoonOrder.intent.purpose==GoalPurpose::Observe;
        Accept(l,p,observe?BattleDrill::Observe:BattleDrill::Occupy,d,time,observe?"Observe received area":"Occupy received area and sectors");p.action.objective=l.platoonOrder.intent.objective;
        Stage(l,p,d,time,observe?DrillStage::Observation:DrillStage::Occupation,observe?"move to viewpoint and sample fresh sight lines":"occupy mutually supporting slots until superseded");
        Assign(l,members,members,map,p,p.action.objective,true,Task::Overwatch,observe?Completion::Observe:Completion::Occupy,false,false,d,time);return true;
    }
    if(!p.action.active)return false;
    if(below){p.action.cause=TaskCause::InsufficientStrength;p.blocked=true;p.exhausted=true;p.lastRejection="frozen element below minStrength";p.action.active=false;p.movers.fill(false);Stage(l,p,d,time,DrillStage::Reorganise,"InsufficientStrength: frozen element failed; Reorganise before new drill");return true;}
    if(directive&&l.platoonOrder.intent.purpose==GoalPurpose::Seize){
        if(p.kind==BattleDrill::SquadAttack&&Distance(l.platoonOrder.intent.objective,p.action.objective)<=40)
            ActionTrace(l,p,d,time,"assault_intent_retained","same group intent: committed assault retains stage and generation");
        else {p.action.active=false;return false;}
    }
    SupportEvidence(l,p,d,time);
    RecoverSupport(l,members,map,p,d,time);
    if(p.stage==DrillStage::Occupation)return true;
    if(p.stage==DrillStage::Observation){
        bool observed=false;for(const auto& s:members){const auto& r=l.taskReports[s.id%8];observed|=r.id==p.expected[s.id%8]&&r.execution.method==p.instance&&r.status==TaskStatus::Done;}
        if(observed){p.action.completed=true;p.action.active=false;Stage(l,p,d,time,DrillStage::Reorganise,"Observe complete: matching fresh sight/clearance receipt");}
        else if(time-p.action.acceptedAt>=45){p.action.cause=TaskCause::NoObservation;Fail(l,p,d,time,TaskCause::NoObservation,"Observe timeout: nothing learned; report upward");}
        return true;
    }
    if(p.stage==DrillStage::Retire){
        bool close=false;for(const auto& ct:knowledge.contacts)close|=ct.known&&Distance(p.center,ct.position)<100&&time-ct.observedAt<6;
        if(close)p.action.clearSince=-1;else if(p.action.clearSince<0)p.action.clearSince=time;
        if(Distance(p.center,p.action.rally)<12||(p.kind==BattleDrill::BreakContact&&p.action.clearSince>=0&&time-p.action.clearSince>=20)){
            p.action.completed=true;p.retreat=false;p.kind=BattleDrill::Occupy;Stage(l,p,d,time,DrillStage::Occupation,"contact broken or rally reached: Occupy and report strength");Assign(l,members,members,map,p,p.action.rally,true,Task::Overwatch,Completion::Occupy,false,false,d,time);
        }else if(arrived){
            Stage(l,p,d,time,DrillStage::Retire,"arrived rearward element takes stationary suppressing slots");
            Assign(l,members,Element(members,p,p.movingElement),map,p,Centre(members,p,p.movingElement),true,Task::BoundCover,Completion::Support,true,false,d,time);
            p.movingElement=1-p.movingElement;Vec3 start=Centre(members,p,p.movingElement),goal=start+Direction(p.action.rally-start)*std::min(30.f,Distance(p.action.rally,start));Stage(l,p,d,time,DrillStage::Retire,"matching receipt: alternate 30 m rearward bound");Assign(l,members,Element(members,p,p.movingElement),map,p,goal,false,Task::PullBack,Completion::Occupy,false,false,d,time);}return true;
    }
    if(p.blocked)return true;
    if(p.stage==DrillStage::SupportPrepare||p.stage==DrillStage::SupportHold){
        if(p.action.established&&p.action.attack){p.action.routeStep=0;p.action.buddy=0;Rush(l,members,map,p,d,time);}
        else if(p.stage==DrillStage::SupportPrepare&&p.action.established)Stage(l,p,d,time,DrillStage::SupportHold,"established base of fire; hold and report no covered assault route");
        return true;
    }
    if(p.stage==DrillStage::AttackMove){
        for(const auto& s:members){int n=s.id%8;const auto& r=l.taskReports[n];
            if(p.waiting[n]&&r.id==p.expected[n]&&r.execution.method==p.orderMethods[n]&&r.status==TaskStatus::Failed){
                Pause(l,members,map,p,d,time,true);Fail(l,p,d,time,r.cause,"Blocked: received failed rush; no unchanged retry");return true;
            }
        }
        bool intrusion=false;
        for(int id=0;id<UnitCount;++id)if(knowledge.contacts[id].known&&!p.action.threats[id]){p.action.threats[id]=true;intrusion|=p.action.route&&CorridorDistance(*p.action.route,knowledge.contacts[id].position)<12;}
        if(intrusion){
            if(p.action.alternates>=1){Fail(l,p,d,time,TaskCause::Support,"Blocked: alternate route allowance exhausted");return true;}
            ++p.action.alternates;auto route=Flank(l,knowledge,members,map,config,p,d,time,true);
            ActionTrace(l,p,d,time,"drill_candidate","fresh threat inside corridor: single alternate route evaluation");
            if(!route){Fail(l,p,d,time,TaskCause::Support,"Blocked: no covered alternate corridor");return true;}
            p.action.route=route;p.action.routeStep=0;p.action.buddy=0;Rush(l,members,map,p,d,time);return true;
        }
        if(!p.action.established){Pause(l,members,map,p,d,time,true);if(time-p.action.lastEvidence>30)Fail(l,p,d,time,TaskCause::Support,"Blocked: support lost beyond 30 s recovery allowance");return true;}
        Pause(l,members,map,p,d,time,false);
        if(arrived){
            // The received arrival advances the moving buddy along the route;
            // the next pair follows from its own side. Do not require all four
            // to occupy the same waypoint before releasing the leading pair.
            Vec3 waypoint=p.action.route->points[std::min(p.action.routeStep,p.action.route->points.size()-1)];
            bool atWaypoint=true;for(const auto& s:Element(members,p,1,p.action.buddy))atWaypoint&=Distance(s.position,waypoint)<8;
            if(atWaypoint)++p.action.routeStep;
            p.action.buddy=1-p.action.buddy;
            if(p.action.routeStep>=p.action.route->points.size()){
                Stage(l,p,d,time,DrillStage::AssaultLine,"matching arrivals at flank: form assault line at five metre intervals");
                Assign(l,members,Element(members,p,1),map,p,p.action.assault,false,Task::BoundMove,Completion::Occupy,false,false,d,time);
            }else Rush(l,members,map,p,d,time);
        }
        return true;
    }
    if(p.stage==DrillStage::AssaultLine&&arrived){
        p.action.phaseLineAt=time;p.action.lifted=true;p.action.buddy=0;
        Stage(l,p,d,time,DrillStage::Assault,"phase-line receipt: lift base fire before objective crossing");
        for(const auto& s:members)if(p.elements[s.id%8]==0){int n=s.id%8;p.issue[n]=true;p.action.liftOrders[n]=true;}
        CoverBuddy(l,members,p,d,time);
        // The assault begins only after the lift order has traversed transport.
        return true;
    }
    if(p.stage==DrillStage::Assault){
        for(const auto& member:members){const int n=member.id%8;const auto& receipt=l.taskReports[n];
            if(!p.waiting[n]||receipt.id!=p.expected[n]||receipt.execution.method!=p.orderMethods[n]||receipt.status!=TaskStatus::Failed)continue;
            const bool progressed=p.memberRoutes[n]&&Distance(receipt.position,p.memberRoutes[n]->start)>3;
            if(receipt.cause==TaskCause::Timeout&&progressed&&!p.action.assaultRushRecovered){
                p.action.assaultRushRecovered=true;p.action.completed=false;p.waiting[n]=false;
                ActionTrace(l,p,d,time,"drill_stage_advanced","received timed-out assault rush after progress: one shorter remaining bound, retain drill");
            }else {Fail(l,p,d,time,receipt.cause,"Blocked: failed final assault rush; report and resume closure");return true;}
        }
        if(time-p.action.phaseLineAt<config.reportDelay+1)return true;
        if(p.action.coveringBound){
            if(arrived){p.action.coveringBound=false;CoverBuddy(l,members,p,d,time);p.action.coveringAttempted=true;
                ActionTrace(l,p,d,time,"drill_stage_advanced","covering bound arrival receipt: stationary overwatch may release assault");}
            return true;
        }
        if(!p.action.completed){
            auto buddy=Element(members,p,1,p.action.buddy);Vec3 start=Centre(buddy,p,-1);Vec3 goal=start+Direction(p.action.objective-start)*std::min(15.f,Distance(start,p.action.objective));
            if(Distance(goal,p.action.objective)<18){
                if(!BuddyCovering(l,members,map,p,time)){
                    Pause(l,members,map,p,d,time,true);p.action.cause=TaskCause::Support;
                    const auto cover=Element(members,p,1,1-p.action.buddy);bool line=false;
                    for(const auto& s:cover)line|=BuddyLine(s,map,p);
                    if(!line&&!p.action.coveringAttempted){
                        p.action.coveringAttempted=true;
                        const int slots=Assign(l,members,cover,map,p,Centre(cover,p,-1),true,Task::BoundMove,Completion::Occupy,false,false,d,time,true);
                        p.action.coveringBound=slots>0;
                        ActionTrace(l,p,d,time,"drill_stage_advanced",slots?"neither buddy has a line: one covering bound; assault waits for arrival receipt":"Blocked/Support: covering bound has no reachable firing slot");
                    }
                    return true;
                }
                Pause(l,members,map,p,d,time,false);
            }
            Stage(l,p,d,time,DrillStage::Assault,FreshObjective(l,p,time)?"fresh objective contact: delivered buddy fire permits short assault bound":"no fresh objective contact: stationary buddy overwatch permits short assault bound");
            if(!Assign(l,members,buddy,map,p,goal,false,Task::BoundMove,Completion::Transit,false,true,d,time)){
                Fail(l,p,d,time,TaskCause::Unreachable,"Blocked: no executable final assault rush");return true;
            }
            p.action.completed=true;return true;
        }
        if(arrived){
            bool live=false;for(const auto& ct:knowledge.contacts)live|=ct.known&&Distance(ct.position,p.action.objective)<12;
            int occupied=0,required=0;for(const auto& s:members)if(p.elements[s.id%8]==1){++required;const auto& r=l.taskReports[s.id%8];occupied+=r.id==p.expected[s.id%8]&&r.execution.method==p.instance&&r.status==TaskStatus::Done&&Distance(r.position,p.action.objective)<=12;}
            if(occupied*2>=required&&!live){
                RemainingSector(l,p,time,p.sector);
                Stage(l,p,d,time,DrillStage::Consolidate,"objective receipts and no known enemy: consolidate on remaining threats");Assign(l,members,members,map,p,p.action.objective,true,Task::Overwatch,Completion::Occupy,false,false,d,time);}
            else {p.action.buddy=1-p.action.buddy;p.action.completed=false;CoverBuddy(l,members,p,d,time);}
        }return true;
    }
    if(p.stage==DrillStage::Consolidate&&arrived){p.completedAssaultLineAt=p.action.phaseLineAt;p.action.active=false;Stage(l,p,d,time,DrillStage::Reorganise,"consolidation receipts: Reorganise once at completion");}
    return true;
}
void UpdateSquadBroadcasts(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p,Diagnostics* diagnostics,float time,bool below){
    const auto knowledge=WithTracks(leader,time);
    Vec3 objective=p.kind==BattleDrill::SquadAttack||p.action.active||p.action.closureFallback?p.action.objective:p.sector;
    if(Distance(objective,p.radioObjective)>40){p.radioFixing=false;p.radioNeed=false;p.radioObjective=objective;}
    auto send=[&](SquadBroadcastKind kind){
        SquadBroadcast message;message.serial=(leader.squad+1)*1000000+(++p.radioSequence);
        message.sender=leader.id;message.squad=leader.squad;message.kind=kind;message.sentAt=time;
        message.position=p.center;message.objective=objective;message.enemy=p.target;
        if(p.target>=0)message.contact=knowledge.contacts[p.target];
        const Vec3 axis=Direction(objective-p.radioSupportPosition),side=p.center-objective;
        message.side=(axis.x*side.y-axis.y*side.x)>=0?1:-1;
        if(kind==SquadBroadcastKind::PhaseLine)message.position=p.action.assault;
        p.broadcasts.push_back(message);
        const char* names[]={"Fixing","Assaulting","NeedSupport","PhaseLine","Done"};
        ActionTrace(leader,p,diagnostics,time,"radio_broadcast",names[int(kind)]);
    };
    bool useful=false;
    for(const auto& delivery:leader.deliveries)if(delivery.shooter>=0&&delivery.shooter/8==leader.squad&&
        p.elements[delivery.shooter%8]==0&&Distance(delivery.target,objective)<18){
        int count=0;for(float at:delivery.times)count+=at<=time&&time-at<=6;
        useful|=count>=(delivery.supportWeapon?2:3);
    }
    if(useful&&p.action.supportPositionReady&&!p.radioFixing&&p.target>=0){p.radioFixing=true;send(SquadBroadcastKind::Fixing);}
    if(p.kind==BattleDrill::SquadAttack&&p.action.attack&&p.instance!=p.radioAttackInstance){p.radioAttackInstance=p.instance;send(SquadBroadcastKind::Assaulting);}
    if(p.effectiveFire&&!p.superiority){if(p.radioFireSince<0)p.radioFireSince=time;}else p.radioFireSince=-1;
    const bool need=below||(p.radioFireSince>=0&&time-p.radioFireSince>=15);
    if(need&&!p.radioNeed){p.radioNeed=true;send(SquadBroadcastKind::NeedSupport);}
    if(!need)p.radioNeed=false;
    if(p.action.phaseLineAt>p.radioPhaseAt){p.radioPhaseAt=p.action.phaseLineAt;send(SquadBroadcastKind::PhaseLine);}
    if(p.completedAssaultLineAt>p.radioDoneAt){p.radioDoneAt=p.completedAssaultLineAt;send(SquadBroadcastKind::Done);}
    AreaFirePermission(leader,knowledge,members,p,diagnostics,time);
}

}
