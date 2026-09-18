#include "DrillSim.h"
#include "PositionSim.h"
#include "TacticalRouteSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
namespace army {
const SquadOrganisation& Organisation(OrganisationKind kind){
    static const std::array<SquadOrganisation,4> data{{
        {"Gun-centric",{{{"gun group",Role::Sergeant,2},{"rifle group",Role::Corporal,2}}},5,AttritionRule::GunNest,true,.5f,1,false},
        {"Section",{{{"gun group",Role::Sergeant,2},{"rifle group",Role::Corporal,3}}},5,AttritionRule::HaltAndMerge,true,.5f,3,true},
        {"Teams",{{{"first team",Role::Sergeant,2},{"second team",Role::Corporal,2}}},5,AttritionRule::SingleElement,true,.5f,2,false},
        {"Rush",{{{"assault group",Role::Sergeant,2},{"reserve",Role::Corporal,0}}},3,AttritionRule::SingleElement,true,2,5,true}
    }};return data[int(kind)];
}
std::array<int,SquadSize> AssignElements(const std::vector<Soldier>& members,OrganisationKind kind){
    std::array<int,SquadSize> result;result.fill(-1);int counts[2]={};
    for(const auto& s:members)if(s.Active()&&!IsPlatoonStaff(s)&&(s.role==Role::Sergeant||s.role==Role::Corporal||s.machineGun)){
        int e=s.role==Role::Corporal&&kind!=OrganisationKind::Rush?1:0;result[s.id%SquadSize]=e;++counts[e];
    }
    for(const auto& s:members)if(s.Active()&&!IsPlatoonStaff(s)&&result[s.id%SquadSize]<0){
        int e=kind==OrganisationKind::Rush?0:counts[0]<3?0:counts[1]<=counts[0]?1:0;
        result[s.id%SquadSize]=e;++counts[e];
    }return result;
}
static void Trace(Diagnostics* d,const Soldier& leader,const DrillPlan& p,float time,const char* kind,const std::string& reason,int subject=-1,Vec3 position={}){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.kind=kind;e.reason=reason;e.plan=p.instance;e.routeStage=p.generation;e.goal=p.destination;e.sector=p.sector;e.position=position;e.taskSubject=subject;e.intent=p.intent;e.execution.method=p.instance;e.execution.stage=int(p.stage);e.execution.generation=p.generation;d->entries.push_back(e);
}
static Vec3 Unit(Vec3 p){p.z=0;float n=Length(p);return n>.01f?p*(1/n):Vec3{1,0};}
static std::vector<Soldier> SquadView(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p,float time){
    std::vector<Soldier> result;
    for(const auto& member:members){const int index=member.id%SquadSize;auto& v=p.members[index];
        // Initial deployment orders are legal. Later updates require own observation or a received report.
        if(!p.initialized){v={true,member.position,member.health,member.suppression,time,member.role,member.machineGun};}
        if(member.id==leader.id){v={true,leader.position,leader.understoodHealth,leader.understoodSuppression,time,leader.role,leader.machineGun};}
        const auto& sight=leader.allies[member.id];
        if(sight.known&&sight.observedAt>v.observedAt){v.position=sight.position;v.health=member.health;v.suppression=member.suppression;v.observedAt=sight.observedAt;v.role=member.role;v.machineGun=member.machineGun;}
        const auto& report=leader.taskReports[index];
        if(report.soldier==member.id&&report.at>v.observedAt){v.position=report.position;v.observedAt=report.at;if(!report.active)v.health=0;}
        if(!v.known)continue;
        Soldier s;s.id=member.id;s.squad=leader.squad;s.team=leader.team;s.position=v.position;s.health=v.health;s.suppression=v.suppression;s.role=v.role;s.machineGun=v.machineGun;s.assignment=member.assignment;
        result.push_back(s);
    }return result;
}
static Vec3 Mean(const std::vector<Soldier>& members,int element,const DrillPlan& p){Vec3 sum{};int count=0;for(const auto& s:members)if(s.Active()&&(element<0||p.elements[s.id%SquadSize]==element)){sum=sum+s.position;++count;}return count?sum*(1.f/count):p.center;}
static Vec3 Sweep(const Soldier& leader,const Map& map,DrillPlan& p){
    const float sign=leader.team?-1.f:1.f;const float fractions[]={-.55f,-.15f,.35f,.75f,.35f,-.35f};
    Vec3 target{map.halfWidth*fractions[p.leg%6]*sign,p.deployment.y,p.deployment.z};
    while(p.leg%6<3&&p.center.x*sign>target.x*sign+8){++p.leg;target.x=map.halfWidth*fractions[p.leg%6]*sign;}
    return target;
}
static bool Mouth(const Map& map,Vec3 from,Vec3 direction){
    Vec3 to=from+direction*30;return !ClearLine(map,from+Vec3{0,10},to+Vec3{0,10},.5f)||!ClearLine(map,from+Vec3{0,-10},to+Vec3{0,-10},.5f);
}
// Receipt evidence belongs to the accepted order, not to the latest heartbeat.
static bool LatchArrival(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p,float time){
    if(p.arrivalConsumed)return false;
    int required=0,arrived=0;
    for(const auto& s:members){const int n=s.id%SquadSize;if(!p.waiting[n])continue;++required;
        const auto& r=leader.taskReports[n];
        if(p.expected[n]&&r.id==p.expected[n]&&r.execution.method==p.orderMethods[n]&&
           r.execution.generation==p.orderGenerations[n]&&r.status==TaskStatus::Done)p.arrivals[n]=true;
        arrived+=p.arrivals[n];
    }
    if(required&&arrived*2>=required&&p.arrivalQuorumAt<0)p.arrivalQuorumAt=time;
    if(required&&(arrived==required||(p.arrivalQuorumAt>=0&&time-p.arrivalQuorumAt>=3))){p.arrivalConsumed=true;return true;}
    return false;
}
static bool Hysteresis(bool value,bool& candidate,float& since,bool& state,float delay,float time){
    if(value!=candidate){candidate=value;since=time;}
    if(state!=candidate&&time-since>=delay){state=candidate;return true;}return false;
}
static std::array<int,2> Strength(const std::vector<Soldier>& members,const DrillPlan& p){
    std::array<int,2> result{};for(const auto& s:members)if(p.elements[s.id%SquadSize]>=0)++result[p.elements[s.id%SquadSize]];return result;
}
static void Reorganise(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p,Diagnostics* d,float time,const char* trigger){
    p.elements=AssignElements(members,OrganisationKind::Section);p.strength=Strength(members,p);
    Trace(d,leader,p,time,"drill_stage_advanced",std::string("Reorganise: ")+trigger);
    for(const auto& s:members)Trace(d,leader,p,time,"element_assigned","Reorganise element "+std::to_string(p.elements[s.id%SquadSize]),s.id,s.position);
}
static void Accept(const Soldier& leader,DrillPlan& p,BattleDrill kind,Diagnostics* d,float time){
    if(p.kind==kind&&p.instance)return;
    p.kind=kind;p.arrivalCheckPending=false;++p.instance;p.started=time;p.assessed=false;p.closeAfterCover=false;p.retreat=false;p.closing=false;
    p.intent={100000+leader.squad*1000+p.instance,p.intent.parent,GoalPurpose::Seize,p.destination,10,0};
    Trace(d,leader,p,time,"drill_accepted",kind==BattleDrill::ReactToContact?"ReactToContact: cover and return fire":"MoveTactically");
}
static bool InvalidSlot(const Soldier& knowledge,const Map& map,const DrillPlan& p,int n,float time){
    if(!p.hasSlot[n])return false;
    if(p.slotGeometry[n]!=map.revision)return true;
    for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(p.slots[n].peek,ct.position)<TrackUncertainty(ct,time)+2)return true;
    return false;
}
// Called only on a transition. Retained element orders/slots are not reconstructed.
static void IssueStage(const Soldier& leader,const Soldier& knowledge,const std::vector<Soldier>& members,
    const Map& map,const Config& config,const std::vector<Vec3>& approaches,DrillPlan& p,
    const std::array<bool,SquadSize>& selected,Diagnostics* d,float time,bool repair=false){
    ++p.generation;p.blocked=false;p.exhausted=false;
    if(!repair){p.waiting.fill(false);p.arrivals.fill(false);p.arrivalQuorumAt=-1;p.arrivalConsumed=false;p.movers.fill(false);p.slotWaiting.fill(false);}
    const bool coverStage=p.stage==DrillStage::ContactCover||p.stage==DrillStage::BoundSetup||p.stage==DrillStage::BoundCover;
    Vec3 direction=Unit(p.destination-p.center);if(coverStage&&p.target>=0)direction=Unit(p.sector-p.center);
    Vec3 left{-direction.y,direction.x};p.interval=!p.forceColumn&&ClearLine(map,p.center-left*12,p.center+left*12,.5f)?10.f:4.f;
    std::vector<ReservedPosition> reserved;
    for(Vec3 at:approaches){CoverPosition c;c.shelter=c.peek=at;reserved.push_back({-1,c});}
    for(const auto& s:members)if(!selected[s.id%SquadSize]){
        const int n=s.id%SquadSize;CoverPosition c=p.slots[n];if(!p.hasSlot[n])c.shelter=c.peek=p.positions[n];reserved.push_back({s.id,c});
    }
    float longest=0;int protectedCount=0;
    for(int element=0;element<2;++element){
        std::vector<Soldier> group;for(const auto& s:members)if(p.elements[s.id%SquadSize]==element&&selected[s.id%SquadSize])group.push_back(s);if(group.empty())continue;
        Vec3 origin=Mean(members,element,p),overwatch=Mean(members,1-element,p);
        Vec3 segment=origin;
        if(!coverStage&&!repair){
            const float length=p.technique==MovementTechnique::Traveling?24.f:p.technique==MovementTechnique::BoundingOverwatch?24.f:40.f;
            const Vec3 start=p.technique==MovementTechnique::Traveling?p.center:origin;
            segment=start+Unit(p.destination-start)*std::min(length,Distance(start,p.destination));
            if(p.retreat)segment=origin-Unit(p.sector-origin)*30;
            if(p.technique==MovementTechnique::BoundingOverwatch&&Distance(segment,overwatch)>24)segment=overwatch+Unit(segment-overwatch)*24;
        }
        Vec3 resolved=origin;ResolveOrderPosition(map,origin,segment,resolved);
        TacticalRoutePlanner planner(map,knowledge,time,leader.team?config.emberDoctrine:config.doctrine,Stance::Crouched);
        auto route=std::make_shared<TacticalRoute>(planner.Evaluate(origin,resolved));
        if(p.platoonArea&&leader.platoonOrder.corridor&&!coverStage&&!repair&&!p.retreat){
            const auto& corridor=*leader.platoonOrder.corridor;
            Vec3 before=corridor.start,projection=before;float best=1e9f;size_t segmentIndex=0;
            for(size_t n=0;n<corridor.points.size();++n){Vec3 delta=corridor.points[n]-before;float length2=delta.x*delta.x+delta.y*delta.y+delta.z*delta.z;
                Vec3 rel=origin-before;float fraction=length2>0?std::clamp((rel.x*delta.x+rel.y*delta.y+rel.z*delta.z)/length2,0.f,1.f):0;
                Vec3 point=before+delta*fraction;float distance=Distance(origin,point);
                if(distance<best){best=distance;projection=point;segmentIndex=n;}before=corridor.points[n];
            }
            Vec3 next=projection;float remaining=24;
            for(size_t n=segmentIndex;n<corridor.points.size();++n){Vec3 end=corridor.points[n];float length=Distance(next,end);
                if(length>=remaining){next=next+Unit(end-next)*remaining;break;}remaining-=length;next=end;
            }
            if(p.technique==MovementTechnique::BoundingOverwatch&&Distance(next,overwatch)>24)next=overwatch+Unit(next-overwatch)*24;
            if(ResolveOrderPosition(map,origin,next,resolved)){*route=corridor;route->start=origin;route->destination=resolved;route->points=FollowCorridor(map,corridor,origin,resolved);}

        }
        // A geometric element centre is not necessarily a navigable start. Keep
        // the accepted corridor, or build from a real known member position.
        if(route->points.empty()){
            for(const auto& member:group){
                Vec3 endpoint=segment;
                if(!ResolveOrderPosition(map,member.position,segment,endpoint))continue;
                auto candidate=planner.Evaluate(member.position,endpoint);
                if(!candidate.points.empty()){*route=std::move(candidate);resolved=route->destination;break;}
            }
        }
        if(route->points.empty()&&p.routes[element]&&p.routes[element]->geometry==map.revision&&!p.routes[element]->points.empty())*route=*p.routes[element];
        if(route->points.empty()){
            p.blocked=true;p.lastRejection="no executable element corridor";
            Trace(d,leader,p,time,"drill_recovering","recovering: no executable element corridor; retry column before exhaustion");
            continue;
        }
        route->id=700000000ULL+uint64_t(leader.squad)*1000000+uint64_t(p.instance)*1000+p.generation*2+element;route->owner=leader.id;route->plan=p.instance;p.routes[element]=route;
        GroupPositionQuery query;query.center=p.center;query.target=p.sector;query.areaMin=p.areaMin;query.areaMax=p.areaMax;query.coherenceRadius=90;query.groupCap=35;query.corridor=route;query.radius=25;query.reserved=reserved;
        if(p.platoonArea&&leader.platoonOrder.areaRouteRadius>0){query.areaRoute=leader.platoonOrder.corridor;query.areaRouteRadius=25;query.areaDiscCenter=leader.platoonOrder.areaDiscCenter;query.areaDiscRadius=60;}
        const bool protectedBound=p.action.closureFallback&&!coverStage&&!repair&&p.effectiveFire&&!p.superiority;
        query.formation=!coverStage&&!repair&&!protectedBound;query.protectedPosition=coverStage||repair||protectedBound;
        if(p.action.closureFallback&&!p.platoonArea){query.areaDiscCenter=p.action.objective;query.areaDiscRadius=60;}
        query.firing=query.protectedPosition&&element==0&&p.target>=0&&Distance(origin,p.sector)<SightRange(group.front());
        if(p.stage==DrillStage::BoundSetup){query.target=p.center+direction*40;query.firing=element==0;}
        if(p.stage==DrillStage::Bound&&p.technique==MovementTechnique::BoundingOverwatch){query.boundCenter=overwatch;query.boundRadius=35;}
        query.anchorWeight=query.formation?3.f:1.f;query.coverWeight=query.formation?0.f:12.f;query.lineWeight=query.formation?0.f:20.f;
        Vec3 averageOffset{};
        if(p.interval==10){for(size_t rank=1;rank<group.size();++rank)averageOffset=averageOffset+direction*(-7.f*((rank+1)/2))+left*((rank%2?1.f:-1.f)*7.f*((rank+1)/2));averageOffset=averageOffset*(1.f/group.size());}
        int rank=0;for(const auto& s:group){Vec3 offset{};
            if(p.interval==4)offset=direction*(-4.f*(rank+(p.technique==MovementTechnique::Traveling&&element==1?p.strength[0]:0)));
            else if(rank>0)offset=direction*(-7.f*((rank+1)/2))+left*((rank%2?1.f:-1.f)*7.f*((rank+1)/2));
            // Two wedges 18m apart along the route. The former diagonal overlap
            // made four of eight nearest-neighbour intervals only 5.1m.
            if(p.interval==10)offset=offset-averageOffset+(p.technique==MovementTechnique::Traveling?direction*(element==0?9.f:-9.f):Vec3{});
            query.anchors[s.id%SquadSize]=coverStage||repair?s.position:resolved+offset;++rank;
        }
        auto allocated=QueryPositions(leader,group,map,query,time,d);
        if(protectedBound)for(size_t n=0;n<allocated.size();++n){auto& a=allocated[n];
            Vec3 delta=a.primary.cover.shelter-group[n].position;
            if(a.valid&&delta.x*direction.x+delta.y*direction.y<3)a.valid=false;
        }
        if(protectedBound&&std::none_of(allocated.begin(),allocated.end(),[](const MemberPositions& a){return a.valid;})){
            p.movers.fill(false);p.deadline=0;p.stage=DrillStage::ContactHold;
            Trace(d,leader,p,time,"drill_stage_advanced","effective incoming fire without superiority; no protected bound: hold existing cover");
            continue;
        }
        bool needsColumn=false;
        if(query.formation)for(size_t n=0;n<allocated.size();++n)if(!allocated[n].valid){
            const Vec3 ahead=group[n].position-p.center;
            const bool coherenceWait=ahead.x*direction.x+ahead.y*direction.y>0&&Distance(query.anchors[group[n].id%SquadSize],p.center)>query.coherenceRadius;
            needsColumn|=!coherenceWait;
        }
        if(query.formation&&(needsColumn||std::none_of(allocated.begin(),allocated.end(),[](const MemberPositions& r){return r.valid;}))){
            // Empty wedges contract on the accepted route, retaining all hard checks.
            p.interval=4;int columnRank=0;
            for(const auto& s:group){
                float remaining=std::max(0.f,Distance(route->start,route->destination)-4.f*columnRank++);Vec3 at=route->start;
                for(Vec3 next:route->points){const float length=Distance(at,next);if(remaining<=length){at=at+Unit(next-at)*remaining;break;}remaining-=length;at=next;}
                query.anchors[s.id%SquadSize]=at;
            }
            allocated=QueryPositions(leader,group,map,query,time,d);
            Trace(d,leader,p,time,"drill_stage_advanced","unavailable formation slots: contract to column on accepted route");
        }
        for(size_t n=0;n<allocated.size();++n){const auto& s=group[n];const auto& result=allocated[n];const int slot=s.id%SquadSize;
            p.positions[slot]=result.valid?result.primary.cover.shelter:s.position;p.hasSlot[slot]=result.valid&&result.primary.cover.id!=0;
            if(p.hasSlot[slot]){p.slots[slot]=result.primary.cover;p.slotGeometry[slot]=map.revision;++protectedCount;}
            p.movers[slot]=result.valid&&Distance(s.position,p.positions[slot])>.75f;
            if(result.valid)reserved.push_back({s.id,result.primary.cover});
            auto memberRoute=std::make_shared<TacticalRoute>(*route);memberRoute->id=route->id*16+slot;memberRoute->start=s.position;memberRoute->destination=p.positions[slot];
            memberRoute->points=FindPath(map,s.position,p.positions[slot]);memberRoute->stages.clear();
            float pathLength=0;Vec3 prior=s.position;bool inside=!memberRoute->points.empty();
            for(Vec3 point:memberRoute->points){pathLength+=Distance(prior,point);prior=point;inside&=CorridorDistance(*route,point)<=query.groupCap&&InOperationArea(point,p.areaMin,p.areaMax,query.areaRoute,query.areaRouteRadius,query.areaDiscCenter,query.areaDiscRadius);}
            if(!inside){p.positions[slot]=s.position;p.hasSlot[slot]=false;p.movers[slot]=false;memberRoute->destination=s.position;memberRoute->points={s.position};}
            memberRoute->stages.push_back({0,memberRoute->points.size(),memberRoute->destination,pathLength/1.89f,0});p.memberRoutes[slot]=memberRoute;
            p.slotWaiting[slot]=query.formation&&!result.valid&&
                (s.position.x-p.center.x)*direction.x+(s.position.y-p.center.y)*direction.y>0&&
                Distance(query.anchors[slot],p.center)>query.coherenceRadius;
            if(query.formation&&(!result.valid||!inside)&&!p.slotWaiting[slot]){
                p.blocked=true;p.lastRejection="column position unavailable";
                Trace(d,leader,p,time,"drill_recovering","recovering: column position unavailable; retain moving members and retry after arrival",s.id,s.position);
            }
            p.issue[slot]=true;p.waiting[slot]=result.valid&&inside;p.arrivals[slot]=false;p.expected[slot]=0;
            p.orderMethods[slot]=p.instance;p.orderGenerations[slot]=p.generation;longest=std::max(longest,pathLength);
            Trace(d,leader,p,time,"formation_slot",std::string(p.interval==4?"column interval 4 m":"wedge interval 10 m")+(result.valid?"; allocated":p.slotWaiting[slot]?"; ahead of centre, anchor outside coherence: wait":"; unavailable position"),s.id,p.positions[slot]);
        }
    }
    if(!repair)p.arrivalCheckPending=false;
    p.support=-1;for(const auto& s:members)if(p.elements[s.id%SquadSize]==0&&p.hasSlot[s.id%SquadSize]){p.support=s.id;break;}
    if(!repair){
        p.stageElapsed=0;p.clockAt=time;
        p.deadline=std::any_of(p.movers.begin(),p.movers.end(),[](bool moving){return moving;})?longest/1.89f+2*config.reportDelay+6:0;
    }
    if(p.stage==DrillStage::ContactCover&&p.effectiveFire&&protectedCount==0){p.retreat=true;Trace(d,leader,p,time,"drill_stage","BreakContact emergency response: no local protected slots; alternate rearward bounds");}
    p.intent.expiresAt=config.maxSeconds;
}
static std::array<bool,SquadSize> SelectMembers(const std::vector<Soldier>& members,const DrillPlan& p,int element=-1){
    std::array<bool,SquadSize> selected{};for(const auto& s:members)if(element<0||p.elements[s.id%SquadSize]==element)selected[s.id%SquadSize]=true;return selected;
}
static void SetTechnique(const Soldier& leader,DrillPlan& p,MovementTechnique technique,Diagnostics* d,float time){
    const bool changed=technique!=p.technique||p.stage==DrillStage::None;p.technique=technique;
    if(changed)Trace(d,leader,p,time,"technique_selected",technique==MovementTechnique::Traveling?"traveling":technique==MovementTechnique::TravelingOverwatch?"traveling overwatch":"bounding overwatch");
}
static void Advance(const Soldier& leader,DrillPlan& p,DrillStage stage,Diagnostics* d,float time,const std::string& trigger){
    p.stage=stage;p.lastProgress=time;Trace(d,leader,p,time,"drill_stage_advanced",trigger);
}
static bool ProgressClock(const Soldier& leader,const std::vector<Soldier>& members,DrillPlan& p,float time){
    bool movers=false,eligible=false;
    for(const auto& s:members){const int n=s.id%SquadSize;
        if(!p.movers[n]||p.arrivals[n])continue;
        movers=true;const auto& r=leader.taskReports[n];
        const bool matching=p.expected[n]&&r.id==p.expected[n]&&r.execution.method==p.orderMethods[n]&&r.execution.generation==p.orderGenerations[n];
        const bool shelter=matching&&r.status==TaskStatus::Interrupted&&r.cause==TaskCause::Shelter;
        eligible|=!shelter&&!p.slotWaiting[n]&&p.stage!=DrillStage::ContactHold;
    }
    p.paused=!eligible;
    if(!movers)p.deadline=0;
    else if(eligible)p.stageElapsed+=std::max(0.f,time-p.clockAt);
    p.clockAt=time;
    return p.deadline>0&&p.stageElapsed>=p.deadline;
}
void UpdateDrillPlan(const Soldier& observedLeader,const std::vector<Soldier>& actual,const Map& map,const Config& config,const std::vector<Vec3>& approaches,const std::vector<int>& claimed,SquadCommand& cmd,Diagnostics* d,float time){
    (void)claimed;Soldier leader=observedLeader;auto& p=cmd.battleDrill;p.issue.fill(false);const auto entryStage=p.stage;const int entryGeneration=p.generation;
    auto members=SquadView(leader,actual,p,time);const bool deployment=!p.initialized;
    for(const auto& member:members){int n=member.id%SquadSize;if(!deployment&&p.memberWasActive[n]&&!member.Active())p.lossTimes[n]=time;p.memberWasActive[n]=member.Active();}
    if(deployment){auto roster=members;for(auto& s:roster)s.health=100;p.elements=AssignElements(roster,OrganisationKind::Section);}
    members.erase(std::remove_if(members.begin(),members.end(),[](const Soldier& s){return !s.Active()||IsPlatoonStaff(s);}),members.end());if(members.empty())return;
    p.center=Mean(members,-1,p);
    if(deployment){p.deployment=p.center;p.initialized=true;p.contactLastKnown.fill(-100);p.strength=Strength(members,p);
        p.areaMin={-map.halfWidth+2,std::max(-map.halfHeight+2,p.deployment.y-24)};p.areaMax={map.halfWidth-2,std::min(map.halfHeight-2,p.deployment.y+24)};
        p.destination=config.family!=ScenarioFamily::None?cmd.mission:Sweep(leader,map,p);
        for(const auto& s:members)Trace(d,leader,p,time,"element_assigned","deployment element "+std::to_string(p.elements[s.id%SquadSize]),s.id,s.position);
    }
    const auto knowledge=WithTracks(leader,time);int target=-1;float nearest=1e9f;bool freshContact=false;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
        if(ct.known){p.contactLastKnown[id]=time;const float distance=Distance(p.center,ct.position);
            if(distance<nearest){nearest=distance;target=id;}
            if(distance<100&&!p.contactInside[id]){freshContact=true;p.contactInside[id]=true;}
        }else if(time-p.contactLastKnown[id]>10)p.contactInside[id]=false;
    }
    bool lost=false;if(p.target>=0&&!knowledge.contacts[p.target].known){if(p.contactLostAt<0)p.contactLostAt=time;lost=time-p.contactLostAt>10;}else p.contactLostAt=-1;
    bool effective=leader.understoodSuppression>.3f;for(const auto& s:members)effective|=s.suppression>.3f;
    for(const auto& area:leader.fireAreas)effective|=time-area.observedAt<6&&area.intensity>.3f;
    int rounds=0;bool gun=false;for(const auto& r:leader.deliveries)if(r.shooter>=0&&r.shooter/SquadSize==leader.squad&&r.observedAt<=time&&time-r.observedAt<=6&&target>=0&&(r.enemy==target||Distance(r.target,knowledge.contacts[target].position)<18)){
        int recent=0;for(float at:r.times)recent+=at>=time-6&&at<=time;rounds+=recent;gun|=r.supportWeapon&&recent>=2;
    }
    const bool fireChange=Hysteresis(effective,p.fireCandidate,p.fireCandidateAt,p.effectiveFire,6,time);
    const bool superiorityChange=Hysteresis(gun&&rounds>=3,p.superiorityCandidate,p.superiorityCandidateAt,p.superiority,8,time);
    const bool arrived=LatchArrival(leader,members,p,time);
    const auto& higher=observedLeader.platoonOrder;
    const bool pending=higher.serial>cmd.platoonOrderSerial&&time<higher.expiresAt;
    const bool same=p.acceptedDirective.intent.id&&higher.intent.id==p.acceptedDirective.intent.id;
    const bool sameSupport=p.action.active&&p.kind==BattleDrill::SupportByFire&&
        p.acceptedDirective.intent.purpose==GoalPurpose::Support&&higher.intent.purpose==GoalPurpose::Support&&
        p.acceptedDirective.issuer==higher.issuer&&Distance(p.action.objective,higher.intent.objective)<=1&&
        time<p.directiveUntil;
    const bool retiring=p.action.active&&(p.kind==BattleDrill::BreakContact||p.kind==BattleDrill::Withdraw);
    const bool boundary=(p.blocked&&p.exhausted)||p.directiveBoundary||arrived||p.stage==DrillStage::Reorganise||p.action.completed;
    const bool received=pending&&(same||sameSupport||(higher.task==PlatoonTask::Withdraw||higher.task==PlatoonTask::RetreatThere)||(!retiring&&(p.kind==BattleDrill::MoveTactically||boundary)));
    const bool nextLeg=same&&(higher.task==PlatoonTask::Advance||(higher.task==PlatoonTask::FightHere&&higher.enemy<0))&&Distance(higher.position,p.acceptedDirective.position)>1;
    const bool directive=received&&!sameSupport&&(!same||nextLeg||p.platoonLift!=higher.liftFire);
    const bool expired=!received&&p.acceptedDirective.intent.id&&time>=p.directiveUntil;
    if(received){
        if(sameSupport){p.intent.parent=higher.intent.id;Trace(d,leader,p,time,"support_directive_retained","same sender and threat sector: renew intent without re-accepting support");}
        cmd.platoonOrderSerial=higher.serial;p.directiveUntil=higher.expiresAt;p.acceptedDirective=higher;
        if(directive)p.destination=higher.taskNode?higher.position:higher.intent.objective;
        if(higher.hasArea){p.areaMin=higher.areaMin;p.areaMax=higher.areaMax;p.platoonArea=true;p.platoonTaskNode=higher.taskNode;}
        if(!higher.hasArea&&directive){
            p.platoonArea=false;p.platoonTaskNode=0;
            p.areaMin={-map.halfWidth+2,std::max(-map.halfHeight+2,p.deployment.y-24)};
            p.areaMax={map.halfWidth-2,std::min(map.halfHeight-2,p.deployment.y+24)};
        }
        p.platoonLift=higher.liftFire;
    }
    // Only the accepted order is visible to stage policy; a pending receipt cannot leak its area or objective.
    leader.platoonOrder=p.acceptedDirective;
    if(expired){p.platoonArea=false;p.platoonTaskNode=0;p.platoonLift=false;p.acceptedDirective={};
        if(!retiring){p.action={};p.kind=BattleDrill::None;}
        p.areaMin={std::max(-map.halfWidth+2,p.center.x-60),std::max(-map.halfHeight+2,p.center.y-18)};
        p.areaMax={std::min(map.halfWidth-2,p.center.x+60),std::min(map.halfHeight-2,p.center.y+18)};
        if(!retiring)p.destination=p.center+Vec3{leader.team?-35.f:35.f,0};
        Trace(d,leader,p,time,"drill_stage_advanced","platoon directive expired: squad-autonomous drills in local area");
    }
    const auto strength=Strength(members,p);bool below=false;
    for(int el=0;el<2;++el)below|=p.strength[el]>=Organisation(OrganisationKind::Section).elements[el].minStrength&&strength[el]<Organisation(OrganisationKind::Section).elements[el].minStrength;
    p.strength=strength;
    if(arrived&&p.stage==DrillStage::ContactCover)p.coverComplete=true;
    bool deadline=ProgressClock(leader,members,p,time);
    if(p.arrivalCheckPending){
        bool answered=true;
        for(const auto& s:members){int n=s.id%SquadSize;if(!p.waiting[n]||p.arrivals[n])continue;
            const auto& receipt=leader.taskReports[n];
            answered&=receipt.id==p.expected[n]&&receipt.execution.generation==p.orderGenerations[n]&&
                receipt.execution.arrivalCheck&&(receipt.status==TaskStatus::Done||receipt.status==TaskStatus::Failed);
        }
        deadline=answered;
    }else if(deadline&&p.kind==BattleDrill::MoveTactically&&!arrived){
        p.arrivalCheckPending=true;
        for(const auto& s:members){int n=s.id%SquadSize;if(p.waiting[n]&&!p.arrivals[n])p.issue[n]=true;}
        Trace(d,leader,p,time,"drill_stage_advanced","movement clock expired: request actual-position arrival certification; retain stage and generation");
        return;
    }
    const bool noMovers=std::none_of(p.movers.begin(),p.movers.end(),[](bool moving){return moving;});
    if(p.stalledExpiries&&Distance(p.center,p.expiryPosition)>6){p.stalledExpiries=0;p.noProgressBlocked=false;}
    if(!p.effectiveFire)p.retreat=false;
    std::array<bool,SquadSize> invalid{};bool repair=false;
    for(const auto& s:members){const int n=s.id%SquadSize;invalid[n]=InvalidSlot(knowledge,map,p,n,time);repair|=invalid[n];}
    const bool reassess=freshContact||lost||fireChange||superiorityChange||directive||expired;
    auto issue=[&](const std::array<bool,SquadSize>& who,bool fixing=false){IssueStage(leader,knowledge,members,map,config,approaches,p,who,d,time,fixing);};
    auto beginMove=[&](const std::string& why,bool close){
        Accept(leader,p,BattleDrill::MoveTactically,d,time);p.closing=close;p.blocked=false;
        auto technique=leader.platoonOrder.fireMovement||close||(target>=0&&nearest<100)||p.effectiveFire?MovementTechnique::BoundingOverwatch:
            (target>=0&&nearest<=150)||Mouth(map,p.center,Unit(p.destination-p.center))?MovementTechnique::TravelingOverwatch:MovementTechnique::Traveling;
        SetTechnique(leader,p,technique,d,time);
        if(technique==MovementTechnique::Traveling){Advance(leader,p,DrillStage::Travel,d,time,why);issue(SelectMembers(members,p));}
        else if(p.coverComplete){Advance(leader,p,DrillStage::Bound,d,time,why);issue(SelectMembers(members,p,p.movingElement));}
        else {Advance(leader,p,DrillStage::BoundSetup,d,time,why);issue(SelectMembers(members,p));}
    };
    auto contact=[&](const std::string& why){
        Accept(leader,p,BattleDrill::ReactToContact,d,time);p.assessed=false;p.coverComplete=false;p.closing=false;p.blocked=false;p.retreat=false;p.assessmentAt=time+3/StatScale(leader.stats.Get(Stat::Wisdom))+leader.reactionBase;
        SetTechnique(leader,p,MovementTechnique::BoundingOverwatch,d,time);Advance(leader,p,DrillStage::ContactCover,d,time,why);issue(SelectMembers(members,p));
    };
    std::string trigger;
    if(deployment)trigger="deployment";else if(freshContact)trigger="new contact inside 100 m";else if(lost)trigger="current contact unknown for 10 s";
    else if(fireChange)trigger=p.effectiveFire?"effective incoming fire began (6 s hysteresis)":"effective incoming fire ended (6 s hysteresis)";
    else if(superiorityChange)trigger=p.superiority?"superiority established (8 s hysteresis)":"superiority lost (8 s hysteresis)";
    else if(directive)trigger="received platoon directive";
    if(deployment||reassess){p.target=target;p.sector=target>=0?knowledge.contacts[target].position:p.center+Vec3{leader.team?-60.f:60.f,0};}
    auto expire=[&](){
        p.exhausted=false;p.deadline=0;p.arrivalCheckPending=false;
        p.attempts.push_back({CognitiveMethod::None,p.intent.objective,p.destination,map.revision,leader.knowledgeRevision,time,TaskCause::Timeout});
        if(!p.stalledExpiries||Distance(p.center,p.expiryPosition)>6){p.stalledExpiries=1;p.expiryPosition=p.center;}else ++p.stalledExpiries;
        if(p.stalledExpiries>=2||p.forceColumn){
            p.blocked=true;p.exhausted=true;p.lastRejection="movement budget exhausted after column recovery";p.noProgressBlocked=true;p.movers.fill(false);
            Trace(d,leader,p,time,"drill_blocked",p.lastRejection);
            Advance(leader,p,DrillStage::ContactHold,d,time,p.stalledExpiries>=2?"no progress: two expiries within 6 m; Blocked upward, retain orders":"no progress: column budget expired; Blocked upward, retain orders");
        }else{
            // First failure changes the method. It never re-accepts the same drill.
            p.blocked=true;p.lastRejection="eligible movement budget expired; recovering in column";p.forceColumn=true;p.coverComplete=true;p.kind=BattleDrill::MoveTactically;
            Advance(leader,p,DrillStage::Bound,d,time,"no progress: eligible movement budget expired; contract to column");
            issue(SelectMembers(members,p,p.movingElement));
        }
    };
    if(UpdateSquadAction(leader,knowledge,members,map,config,p,d,time,arrived,below,directive)){
        // Advanced committed drills own their transitions and received evidence.
    }else if(below){
        p.blocked=true;p.exhausted=true;p.lastRejection="element below minStrength";p.deadline=0;Advance(leader,p,DrillStage::Reorganise,d,time,"minStrength crossed: drill failed; Reorganise next tick");
        Trace(d,leader,p,time,"drill_stage","Blocked/Support: element below minStrength");
    }else if(p.stage==DrillStage::Reorganise&&p.action.completed&&p.platoonArea&&
             (p.acceptedDirective.task==PlatoonTask::Advance||p.acceptedDirective.task==PlatoonTask::FightHere)&&!directive&&!expired&&target<0){
        // Keep Done available to ordinary report transport until the next leg is received.
        p.deadline=0;
    }else if(p.stage==DrillStage::Reorganise){
        const bool resumeClosure=p.action.closureFallback;const auto failure=p.action.cause;const auto objective=p.action.objective;
        Reorganise(leader,members,p,d,time,"completed/failed drill");p.kind=BattleDrill::None;p.blocked=false;p.exhausted=false;p.localRetries=0;p.coverComplete=false;p.forceColumn=false;p.action={};
        if(resumeClosure){
            p.action.closureFallback=true;p.action.cause=failure;p.action.objective=objective;p.movingElement=1;
            beginMove("Reorganise complete: blocked attack resumes supported closure",true);
        }else if(target>=0&&nearest<100)contact("Reorganise complete: known contact");else beginMove("Reorganise complete",false);
    }else if(p.blocked&&!p.exhausted&&noMovers&&!p.action.active){
        if(p.localRetries++<1){p.forceColumn=true;Advance(leader,p,p.stage,d,time,"recovering: retry accepted element corridor in column");issue(SelectMembers(members,p,p.movingElement));}
        else {p.exhausted=true;p.noProgressBlocked=true;p.deadline=0;Trace(d,leader,p,time,"drill_blocked","Blocked: local route/column remedies exhausted; "+p.lastRejection);}
    }else if(p.noProgressBlocked&&!directive&&!freshContact&&!fireChange){
        // A timeout is consumed once. A heartbeat or superiority report cannot
        // restart the same failed route; await a material task/contact change.
    }else if(deployment||reassess){
        p.noProgressBlocked=false;
        if((freshContact||(fireChange&&p.effectiveFire))&&((target>=0&&nearest<100)||p.effectiveFire))contact(trigger);
        else if(p.stage==DrillStage::ContactCover){
            // Assessment reads the new knowledge once; accepted cover orders remain.
            Trace(d,leader,p,time,"drill_stage_advanced",trigger+"; retain contact cover stage");
        }else if((target>=0&&nearest<100)&&p.effectiveFire&&!p.superiority&&nearest<=70){
            if(p.stage!=DrillStage::ContactHold)contact(trigger);
            else Trace(d,leader,p,time,"drill_stage_advanced",trigger+"; retain held slots");
        }else beginMove(trigger,target>=0&&nearest<100);
    }else if(p.stage==DrillStage::ContactCover){
        if(arrived)p.coverComplete=true;
        if(!p.assessed&&time>=p.assessmentAt){
            p.assessed=true;p.blocked=p.strength[0]<Organisation(OrganisationKind::Section).elements[0].minStrength;
            if(p.blocked){p.exhausted=true;p.lastRejection="gun group below minStrength; request support";}
            p.closeAfterCover=!p.blocked&&(nearest>70||p.superiority||!p.effectiveFire);
            Trace(d,leader,p,time,"drill_stage_advanced","contact assessment complete (3 s plus reaction)");
            Trace(d,leader,p,time,"drill_stage",p.blocked?"Blocked/Support: gun group below minStrength; request platoon support":"assessment: gun group supports; rifle group covers or closes");
        }
        if(p.assessed&&(p.coverComplete||noMovers)){
            if(BeginContactAction(leader,knowledge,members,map,config,p,d,time)){
                // Support, covered attack or emergency withdrawal accepted.
            }else if(p.retreat&&p.effectiveFire){p.kind=BattleDrill::MoveTactically;p.closing=false;Advance(leader,p,DrillStage::Bound,d,time,"contact assessment: BreakContact emergency rearward bound");issue(SelectMembers(members,p,p.movingElement));Trace(d,leader,p,time,"drill_stage","rearward bound with other element covering");}
            else if(p.closeAfterCover){p.coverComplete=true;beginMove("contact cover complete: assessment resumes closure",true);}
            else {p.movers.fill(false);p.deadline=0;Advance(leader,p,DrillStage::ContactHold,d,time,"assessment holds occupied cover; no replacement orders");}
        }else if(deadline)expire();
    }else if((arrived||(noMovers&&(p.stage==DrillStage::BoundSetup||p.stage==DrillStage::BoundCover)))&&(p.stage==DrillStage::Travel||p.stage==DrillStage::Bound||p.stage==DrillStage::BoundSetup||p.stage==DrillStage::BoundCover)){
        p.localRetries=0;
        if(p.stage==DrillStage::Bound&&!p.retreat){
            Advance(leader,p,DrillStage::BoundCover,d,time,"matching received arrivals: moving element takes halted cover");
            issue(SelectMembers(members,p,p.movingElement));
        }else{
        if(p.stage==DrillStage::BoundSetup)p.coverComplete=true;
        else if(Distance(p.center,p.destination)<(p.platoonArea?p.acceptedDirective.intent.radius:18.f)){
            ++p.leg;if(p.platoonArea){
                p.action.completed=true;
                if((p.acceptedDirective.task==PlatoonTask::FlankNorth||p.acceptedDirective.task==PlatoonTask::FlankSouth)&&p.action.phaseLineAt<0){
                    p.action.phaseLineAt=time;p.action.objective=p.acceptedDirective.sector;p.action.assault=p.center;
                    Trace(d,leader,p,time,"drill_stage_advanced","matching flank arrivals inside directive radius: phase-line report to platoon");
                }
            }else p.destination=Sweep(leader,map,p);p.deadline=0;Advance(leader,p,DrillStage::Reorganise,d,time,"matching received arrivals: deployment leg complete");
        }else if(p.stage==DrillStage::Bound||p.stage==DrillStage::BoundCover)p.movingElement=1-p.movingElement;
        if(p.stage==DrillStage::Travel)beginMove("matching received arrivals: traveling stage complete",p.closing);
        else if(p.stage!=DrillStage::Reorganise){Advance(leader,p,p.technique==MovementTechnique::Traveling?DrillStage::Travel:DrillStage::Bound,d,time,"matching received arrivals: quorum latched, grace complete");issue(SelectMembers(members,p,p.technique==MovementTechnique::Traveling?-1:p.movingElement));}
        }
    }else if(deadline){
        expire();
    }else if(repair){
        Trace(d,leader,p,time,"drill_stage_advanced","slot invalidated by geometry or known threat uncertainty");issue(invalid,true);
    }
    cmd.engaged=target>=0&&nearest<100;cmd.advancing=p.stage!=DrillStage::ContactHold;cmd.searching=!cmd.engaged;
    cmd.mission=p.destination;cmd.hasWaypoint=true;cmd.waypoint=p.destination;cmd.planId=p.intent.id;cmd.phase=p.kind==BattleDrill::ReactToContact?SquadPhase::EstablishFire:SquadPhase::Bound;
    cmd.planReason=p.kind==BattleDrill::ReactToContact?"committed contact stage":"committed movement stage";
    if(directive)p.intent.parent=leader.platoonOrder.intent.id;
    p.directiveBoundary=p.stage!=entryStage||p.generation!=entryGeneration;
    p.intent.objective=p.action.active?p.action.objective:p.destination;p.intent.expiresAt=config.maxSeconds;
    UpdateSquadBroadcasts(leader,members,p,d,time,below);
}
std::vector<PlannedOrder> DrillOrders(const Soldier& leader,const std::vector<Soldier>& squad,const SquadCommand& cmd,float){
    const auto& p=cmd.battleDrill;std::vector<PlannedOrder> out;
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)&&p.issue[s.id%SquadSize]&&p.elements[s.id%SquadSize]>=0){const int n=s.id%SquadSize;
        PlannedOrder o{};o.recipient=s.id;o.task=p.retreat?Task::PullBack:p.stage==DrillStage::Travel?Task::BoundMove:Task::Overwatch;
        o.position=p.positions[n];o.sector=p.sector;o.hasSlot=p.hasSlot[n];o.slot=p.slots[n];o.teamPlan.route=p.memberRoutes[n];o.teamPlan.targetEnemy=p.target;o.teamPlan.released=p.movers[n];
        o.execution.completion=p.stage==DrillStage::Travel?Completion::Transit:Completion::Occupy;o.execution.method=p.orderMethods[n];o.execution.generation=p.orderGenerations[n];o.execution.stage=p.leg;o.execution.arrivalCheck=p.arrivalCheckPending&&p.waiting[n]&&!p.arrivals[n];o.execution.deadline=0; // Squad progress clock owns expiry, including shelter pauses.
        if(p.action.closureFallback&&!p.movers[n]&&p.elements[n]==0){
            o.task=Task::BoundCover;o.execution.completion=Completion::Support;o.execution.rifleSupport=true;o.execution.supportThreat=p.target;
        }
        if(p.action.active){
            o.task=p.action.tasks[n];o.execution.completion=p.action.completions[n];
            o.execution.paused=p.action.pausedOrders[n];
            if(o.execution.paused){o.hasSlot=p.action.pauseHasSlot[n];if(o.hasSlot)o.slot=p.action.pauseSlots[n];o.teamPlan.route=p.action.route;}o.execution.rifleSupport=p.action.supportOrders[n];o.execution.supportThreat=p.target;
            o.execution.rushSeconds=p.action.rushOrders[n]?5.f:0.f;
            o.teamPlan.liftFire=p.action.liftOrders[n];o.teamPlan.liftedSector=p.action.objective;
        }
        if(p.action.lifted&&p.action.closureFallback&&p.elements[n]==0){o.teamPlan.liftFire=true;o.teamPlan.liftedSector=p.action.objective;}
        if(p.elements[n]==0&&p.action.areaFireOrdered&&!p.action.lifted){
            o.teamPlan.assaultAreaFire=true;o.teamPlan.assaultFireArea=p.action.objective;
            o.teamPlan.assaultFireEnemy=p.action.boundSupportThreat>=0?p.action.boundSupportThreat:p.target;
        }
        if(p.platoonLift){o.teamPlan.liftFire=true;o.teamPlan.liftedSector=p.acceptedDirective.assaultLane.target;}
        for(const auto& message:leader.squadRadio)if(message.squad!=leader.squad&&
            (message.kind==SquadBroadcastKind::Assaulting||message.kind==SquadBroadcastKind::PhaseLine)){
            bool current=true;for(const auto& other:leader.squadRadio)if(other.squad==message.squad&&other.sentAt>message.sentAt&&
                (other.kind==SquadBroadcastKind::Done||other.kind==SquadBroadcastKind::PhaseLine))current=false;
            if(current)o.teamPlan.friendlyAssaultLanes.push_back({message.position,message.objective,.06f,message.sentAt});
        }
        out.push_back(o);
    }return out;
}

}
