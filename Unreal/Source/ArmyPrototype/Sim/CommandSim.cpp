#include "CommandSim.h"
#include "TacticalRouteSim.h"
#include "CognitiveSim.h"
#include "DrillSim.h"
#include "PerceptionSim.h"
#include "BeliefSim.h"
#include "TaskSim.h"
#include "RecoverySim.h"
#include "CoordinationSim.h"
#include "TrafficSim.h"
#include "FireMovementSim.h"
#include "ManeuverSim.h"
#include "PlanSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <sstream>

namespace army {
bool ResolveOrderPosition(const Map& map,Vec3 from,Vec3 requested,Vec3& resolved) {
    const auto passages=BuildingPassages(map);
    auto suitable=[&](Vec3 p){if(!Walkable(map,p))return false;for(const auto& passage:passages)if(InsidePassage(passage,p))return false;return true;};
    if(suitable(requested)&&!FindPath(map,from,requested).empty()){resolved=requested;return true;}
    float score=1e9f;
    for(int y=-8;y<=8;++y)for(int x=-8;x<=8;++x) {
        Vec3 p=requested+Vec3{float(x),float(y)};
        const float value=Distance(p,requested)+Distance(p,from)*0.02f;
        if(value>=score||!suitable(p)||FindPath(map,from,p).empty())continue;
        score=value;resolved=p;
    }
    return score<1e8f;
}
const char* RoleName(Role r) {
    const char* names[]={"SQUAD SERGEANT","CORPORAL / ASSISTANT","RIFLEMAN","MACHINE GUNNER","LIEUTENANT","PLATOON SERGEANT"};return names[int(r)];
}
const char* TaskName(Task t) {
    const char* names[]={"AWAITING ORDERS","OVERWATCH","ADVANCE","HOLD","REGROUP","WOUNDED SUPPORT","CLEAR FIRING LANE","FLANK","PULL BACK","BOUND / MOVE","BOUND / COVER","WINDOW TEAM"};return names[int(t)];
}
static bool InsideLane(const FireLane& lane,Vec3 p) {
    Vec3 delta=lane.target-lane.origin;delta.z=0;float length=Length(delta);if(length<0.5f)return false;
    Vec3 direction=delta*(1/length),offset=p-lane.origin;
    float along=offset.x*direction.x+offset.y*direction.y;
    float height=lane.origin.z+1.5f+(lane.target.z-lane.origin.z)*along/length;
    if(height<p.z-0.4f||height>p.z+2.25f)return false;
    return along>0&&along<length+20&&std::abs(offset.x*direction.y-offset.y*direction.x)<1.2f+along*lane.spread;
}
bool InReportedFireLane(const Soldier& commander,int soldier,Vec3 p,float time) {
    for(int shooter=0;shooter<UnitCount;++shooter)if(shooter!=soldier&&time-commander.blockedLanes[shooter].observedAt<=8&&InsideLane(commander.blockedLanes[shooter],p))return true;
    return false;
}
Vec3 ClearReportedFireLane(const Soldier& commander,const Soldier& soldier,Vec3 desired,const Map& map,float time) {
    // Keep a clearing move only while there is still a lane to clear: orders take a second to arrive, and
    // re-issuing it to a man already out of the lane alternated with his real order every cycle.
    if(soldier.assignment.task==Task::ClearLane&&time-soldier.assignment.activatedAt<8&&Distance(soldier.position,soldier.assignment.position)>0.7f&&
        (InReportedFireLane(commander,soldier.id,soldier.position,time)||InReportedFireLane(commander,soldier.id,desired,time))&&
        !FindPath(map,soldier.position,soldier.assignment.position).empty()&&
        !InReportedFireLane(commander,soldier.id,soldier.assignment.position,time))return soldier.assignment.position;
    Vec3 base=InReportedFireLane(commander,soldier.id,soldier.position,time)?soldier.position:desired;
    if(!InReportedFireLane(commander,soldier.id,base,time))return desired;
    float score=1e9f;Vec3 best=desired;
    for(int shooter=0;shooter<UnitCount;++shooter) {
        const auto& lane=commander.blockedLanes[shooter];
        if(shooter==soldier.id||time-lane.observedAt>8||!InsideLane(lane,base))continue;
        Vec3 d=lane.target-lane.origin;float length=Length(d);if(length<0.5f)continue;d=d*(1/length);
        Vec3 lateral{-d.y,d.x};
        for(float side:{-1.f,1.f})for(float step:{3.f,6.f,10.f,15.f}) {
            Vec3 p=base+lateral*(side*step);
            if(!Walkable(map,p)||InReportedFireLane(commander,soldier.id,p,time))continue;
            float value=Distance(soldier.position,p)+Distance(desired,p)*0.2f;
            if(value<score&&!FindPath(map,soldier.position,p).empty()){score=value;best=p;}
        }
    }
    return best;
}
bool KnowsWounded(const Soldier& commander,const Soldier& soldier) {
    return soldier.Active()&&(commander.id==soldier.id?commander.understoodHealth<55:commander.knownWounded[soldier.id]);
}
// Plan 018 gen18b: the user's rule ("he should have passed his command to his second in
// command... and so on and so forth"). A wounded former leader gets no followers of his own;
// he is treated like any other wounded man by whatever assigns him a task.
const Soldier* RifleGroupLeader(const Soldier& officer,const std::vector<Soldier>& squad,int support) {
    for(const auto& s:squad)if(s.Active()&&s.role==Role::Corporal&&s.id!=officer.id&&!KnowsWounded(officer,s))return &s;
    for(const auto& s:squad)if(s.Active()&&s.id!=officer.id&&s.id!=support&&!IsPlatoonStaff(s)&&!KnowsWounded(officer,s))return &s;
    return nullptr;
}
Vec3 RearPosition(const Soldier& commander,const Soldier& soldier,const std::vector<Soldier>& squad,
    const Map& map,float time,const std::vector<Vec3>& reserved) {
    const float sign=commander.team?-1.f:1.f;
    float front=-1e9f;bool healthy=false;
    for(const auto& s:squad)if(s.Active()&&!KnowsWounded(commander,s)){front=std::max(front,sign*s.position.x);healthy=true;}
    if(!healthy)for(const auto& s:squad)if(s.Active())front=std::max(front,sign*s.position.x);
    const auto knowledge=WithReports(commander,time);
    Vec3 sector=commander.position+Vec3{sign*40,0};float recent=-100;
    for(const auto& ct:knowledge.contacts)if(ct.known&&ct.observedAt>recent){sector=ct.position;recent=ct.observedAt;}
    auto occupied=[&](Vec3 p) {
        if(InReportedFireLane(commander,soldier.id,p,time))return true;
        for(Vec3 r:reserved)if(Distance(r,p)<2.5f)return true;
        for(const auto& s:squad)if(s.Active()&&s.id!=soldier.id&&s.assignment.task==Task::RearGuard&&Distance(s.assignment.position,p)<2.5f)return true;
        for(int i=0;i<UnitCount;++i)if(i!=soldier.id&&commander.allies[i].known&&time-commander.allies[i].observedAt<2&&Distance(commander.allies[i].position,p)<2.2f)return true;
        return false;
    };
    auto firing=[&](Vec3 p) {
        for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(p,ct.position)<90&&ClearLine3D(map,{p.x,p.y,p.z+1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))return true;
        return recent<0&&Distance(p,sector)<90&&ClearLine3D(map,{p.x,p.y,p.z+1.5f},{sector.x,sector.y,sector.z+1.5f});
    };
    // Injury changes the soldier's role, not their ability to contribute. Keep a
    // useful position, and permit closing distance when old rear cover has no shot.
    if(sign*soldier.position.x<=front+2&&firing(soldier.position)&&!occupied(soldier.position)&&ProtectedAt(map,soldier.position,sector,Stance::Crouched))return soldier.position;
    Vec3 best=soldier.position;float bestScore=1e9f;
    // Optimisation (plan 024 round 4). The scan below keeps the reachable candidate with the least
    // score, the earliest in catalogue order on a tie (a strict "<" against a falling best), or none
    // under 1e9. The same winner is found by visiting candidates in order of a lower bound of their
    // score: the score without the +55 and +20 penalties, which only raise it (float addition and
    // subtraction of a constant are monotone), with the -4 and -3 applied as in the scan. Once the
    // bound exceeds the best score no later candidate can win, so the line, cover and path tests of
    // the rest are skipped. A candidate is path-tested only when it would beat the current best,
    // exactly as the scan tests it. Scores are computed with the scan's own operations and order.
    const auto& covers=CoverPositions(map);
    struct Bounded{float bound;uint32_t index;};
    static thread_local std::vector<Bounded> order;order.clear();
    for(size_t i=0;i<covers.size();++i) {
        const auto& cover=covers[i];Vec3 p=cover.shelter;
        if(sign*p.x>front+(healthy?0.f:4.f)||Distance(p,soldier.position)>40)continue;
        float bound=Distance(p,soldier.position)*0.45f+std::abs(sign*p.x-(front-6))*0.7f+Distance(p,sector)*0.15f;
        if(soldier.assignment.task==Task::RearGuard&&Distance(p,soldier.assignment.position)<1)bound-=4;
        if(cover.window)bound-=3;
        if(!(bound<bestScore))continue;               // never below the initial 1e9 (or NaN): cannot win
        order.push_back({bound,uint32_t(i)});
    }
    std::sort(order.begin(),order.end(),[](const Bounded& a,const Bounded& b){return a.bound<b.bound||(a.bound==b.bound&&a.index<b.index);});
    bool found=false;uint32_t bestIndex=0;
    for(const auto& candidate:order) {
        if(candidate.bound>bestScore)break;
        const auto& cover=covers[candidate.index];Vec3 p=cover.shelter;
        if(!Walkable(map,p)||occupied(p))continue;
        bool canFire=firing(cover.peek);
        float score=Distance(p,soldier.position)*0.45f+std::abs(sign*p.x-(front-6))*0.7f+Distance(p,sector)*0.15f;
        if(!canFire)score+=55;
        if(!ProtectedAt(map,p,sector,CoverStance(cover)))score+=20;
        if(soldier.assignment.task==Task::RearGuard&&Distance(p,soldier.assignment.position)<1)score-=4;
        if(cover.window)score-=3;
        const bool beats=score<bestScore||(found&&score==bestScore&&candidate.index<bestIndex);
        if(beats&&!FindPath(map,soldier.position,p).empty()){bestScore=score;best=p;bestIndex=candidate.index;found=true;}
    }
    // Never gather wounded at an arbitrary rear rally point. Stay and fight if
    // the current firing position is more useful than a blind replacement.
    if(firing(soldier.position)&&bestScore>=55)return soldier.position;
    return best;
}
float TrackConfidence(const Contact& c,float time) {
    if(c.observedAt<=c.clearedAt)return 0;
    float age=std::max(0.f,time-c.observedAt);
    if(c.passedAt>=c.observedAt)age+=3*std::max(0.f,time-c.passedAt);
    return std::max(0.f,1-age/120.f);
}
float TrackUncertainty(const Contact& c,float time){return std::min(24.f,1.f+std::max(0.f,time-c.observedAt)*.35f);}
Soldier WithTracks(const Soldier& s,float time) {
    Soldier result=s;
    for(int i=0;i<UnitCount;++i){
        Contact ct=s.contacts[i];const auto& report=s.reports[i];
        if(report.observedAt>ct.observedAt){ct=report;ct.visible=false;}
        ct.clearedAt=std::max(s.contacts[i].clearedAt,report.clearedAt);
        ct.known=TrackConfidence(ct,time)>.15f;
        result.contacts[i]=ct;
    }
    return result;
}
void ObserveEmptyTracks(Soldier& s,const Map& map,float time) {
    // Negative evidence is local visibility of the entire uncertainty patch,
    // including low silhouettes. No query of the hidden enemy roster.
    for(int id=0;id<UnitCount;++id) {
        auto& ct=s.contacts[id].observedAt>=s.reports[id].observedAt?s.contacts[id]:s.reports[id];
        if(TrackConfidence(ct,time)<=.15f||time-ct.observedAt<4)continue;
        float sign=s.team?-1.f:1.f;
        if(sign*(s.position.x-ct.position.x)>8&&ct.passedAt<0)ct.passedAt=time;
        const float radius=TrackUncertainty(ct,time);
        bool empty=Distance(s.position,ct.position)+radius<SightRange(s);
        Vec3 eye=s.position+Vec3{0,0,Posture(s.stance).eye};
        for(Vec3 delta:{Vec3{},Vec3{radius,0},Vec3{-radius,0},Vec3{0,radius},Vec3{0,-radius}})
            empty=empty&&InVisualField(s,ct.position+delta,SightRange(s))&&ClearLine3D(map,eye,ct.position+delta+Vec3{0,0,.55f});
        for(const auto& seen:s.contacts)if(seen.visible&&time-seen.observedAt<2&&Distance(seen.position,ct.position)<radius+2)empty=false;
        if(!empty)ct.emptySince=-1;
        else if(ct.emptySince<0)ct.emptySince=time;
        else if(time-ct.emptySince>=3){ct.clearedAt=time;ct.known=ct.visible=false;++s.knowledgeRevision;}
    }
}
bool KnowsAnyFallen(const Soldier& s){for(int i=0;i<UnitCount;++i)if(KnowsFallen(s,i))return true;return false;}
Soldier WithoutFallen(const Soldier& s){
    Soldier living=s;
    for(int i=0;i<UnitCount;++i)if(KnowsFallen(s,i)){living.contacts[i]=Contact{};living.reports[i]=Contact{};}
    return living;
}
void RetireFallenRequests(const Soldier& leader,SquadCommand& cmd,float time,Diagnostics* diagnostics){
    if(CoverRequestLive(cmd.coverRequest,time)&&KnowsFallen(leader,cmd.coverRequest.enemy)){
        TraceCoverRequest(diagnostics,leader,cmd,time,"retired");cmd.coverRequest.until=-100;}
    if(CoverRequestLive(cmd.platoonCover,time)&&KnowsFallen(leader,cmd.platoonCover.enemy))cmd.platoonCover.until=-100;
}
Soldier WithReports(const Soldier& s,float time) {
    Soldier known=s;
    for(int i=0;i<UnitCount;++i) {
        const auto& report=s.reports[i];
        if(report.known&&time-report.observedAt<=10&&(!known.contacts[i].known||report.observedAt>known.contacts[i].observedAt)) {
            known.contacts[i]=report;known.contacts[i].visible=false;
        }
    }
    return known;
}
void UpdateSearchMission(const Soldier& officer,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,SquadCommand& cmd,float time) {
    const Soldier* point=RifleGroupLeader(officer,squad,cmd.support);
    if(!point)point=&officer;
    // Plan 023 B (3.4, user ruling 1): "the group should go to them". When enough of his men hold
    // real forward positions and the way up is not one a known enemy watches, the group's next
    // objective is laid out from THEM and not from the leader, so that his own destination comes
    // up with theirs instead of his lead compounding.
    const Vec3 head=cmd.stations.comeUp?cmd.stations.forwardCentre:point->position;
    auto setMission=[&](Vec3 target) {
        if(cmd.teamPlan.bounding&&Distance(target,cmd.mission)>5){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}
        cmd.mission=target;
    };
    if(cmd.hasWaypoint){setMission(cmd.waypoint);return;}
    // Plan 023 E (section 11, the user's ruling): an attached squad's objective is its HOST's, not
    // one of its own. As a base of fire it takes the ground the host is fighting from, outside the
    // stand-off of the enemy the commander named; as support (and merged, E3) it follows one
    // objective behind the host's rifle group, staffBehind back along the line to that enemy, which
    // is where the platoon sergeant stands (3.9).
    if(!config.foundations&&(cmd.attachedTo>=0||cmd.mergedInto>=0)) {
        Vec3 anchor=cmd.attachPosition;
        Vec3 back=anchor-cmd.attachSector;back.z=0;const float length=Length(back);
        if(!cmd.attachBaseOfFire&&cmd.mergedInto<0&&length>.5f)anchor=anchor+back*(GroupConstants.staffBehind/length);
        // A base of fire is a FIRING position covering the host's objective, from the one allocator
        // (the gun's own kind: crouch cover, protected from every enemy the leader knows, bearing on
        // the one the commander named, outside the stand-off). Holding the host's ground without a
        // line is not a base of fire: it is a squad standing behind a wall.
        Vec3 firing{};
        if(cmd.attachBaseOfFire&&GroupStation(officer,*point,StationKind::Support,anchor,cmd.attachSector,{},map,time,firing,GroupConstants.standOff))anchor=firing;
        anchor=StandOffPoint(officer,anchor,GroupConstants.standOff,time);
        Vec3 resolved=point->position;ResolveOrderPosition(map,point->position,anchor,resolved);setMission(resolved);return;
    }
    // Plan 023 E (section 11): a squad that has withdrawn holds the fall-back it was given for as
    // long as it still knows the enemy it left, instead of resuming an open sweep from wherever the
    // pull-back happened to stop. Going quiet releases it: there is nothing left to hold against.
    if(!config.foundations&&cmd.fallbackAt>=0) {
        if(cmd.searching)cmd.fallbackAt=-1;
        else if(cmd.ableRiflemen<GroupConstants.shatteredRiflemen)
            {Vec3 resolved=point->position;ResolveOrderPosition(map,point->position,cmd.fallback,resolved);setMission(resolved);return;}
    }
    if(cmd.engaged){
        // Finish a released short crossing before settling into the firefight.
        if(!(cmd.teamPlan.bounding&&cmd.teamPlan.released))setMission(head);
        return;
    }
    const auto knowledge=WithTracks(officer,time);
    const Contact* contact=nullptr;float nearest=1e9f;
    for(const auto& ct:knowledge.contacts)if(ct.known&&time-ct.observedAt<=120) {
        float distance=Distance(point->position,ct.position);
        if(distance<nearest){nearest=distance;contact=&ct;}
    }
    Vec3 requested;
    const Vec3 defended=config.staticDefence.attackerObjectives[officer.squad%SquadsPerTeam];
    const bool staticObjective=config.staticDefence.layout!=DefenceLayout::None&&officer.team==0&&
        Distance(point->position,defended)>8;
    if(contact) {
        // Approach a reported contact to rifle range, never order an assault through it.
        requested=head+(contact->position-head)*(std::max(0.f,Distance(head,contact->position)-32.f)/std::max(0.01f,Distance(head,contact->position)));
        requested.z=head.z;
    } else if(staticObjective) {
        // A static-defence attack has a pre-battle objective of its own; take it
        // instead of sweeping map sectors. Arrival resumes the ordinary sweep.
        requested=defended;
    } else {
        // Search mapped sectors without consulting enemy bodies. Each squad starts
        // in its own lane and continues beyond the old map centre when contact is lost.
        const float sign=officer.team?-1.f:1.f;
        auto sector=[&]() {
            const float xs[]={-80,-20,45,110,45,-50};
            int lane=(officer.squad%SquadsPerTeam+cmd.searchLeg/6)%SquadsPerTeam;
            float laneSign=sign;
            if(config.spawnLanes&&config.battlefield) {
                const auto& spawn=config.battlefield->positions;const size_t base=size_t(officer.team)*TeamSize;
                laneSign=spawn[base].y<spawn[base+size_t((SquadsPerTeam-1)*SquadSize)].y?1.f:-1.f;
            }
            float y=SquadLane(lane)*laneSign;
            if(officer.team==0&&config.approach!=Approach::Center&&cmd.searchLeg<2)
                y=(config.approach==Approach::North?-1.f:1.f)*(52+12*(officer.squad%SquadsPerTeam));
            return Vec3{xs[cmd.searchLeg%6]*sign,y};
        };
        // On the outward sweep, do not return to a sector already passed
        // while fighting. Later legs still sweep back through other lanes.
        while(cmd.searchLeg%6<3&&point->position.x*sign>sector().x*sign+8)++cmd.searchLeg;
        requested=sector();Vec3 reachable;
        if(ResolveOrderPosition(map,point->position,requested,reachable)&&Distance(point->position,reachable)<8) {
            cmd.searchLeg=(cmd.searchLeg+1)%24;requested=sector();
        }
    }
    Vec3 resolved=point->position;
    ResolveOrderPosition(map,point->position,requested,resolved);setMission(resolved);
}
CoverRequest* GunCoverRequest(const Config& config,SquadCommand& command,float time) {
    // Plan 031 D: the drill's gun answers the drill's payload (only ever live with Config::fireAndMovement).
    if(command.fm.governsGun&&CoverRequestLive(command.fm.payload,time))return &command.fm.payload;
    if(CoverRequestLive(command.coverRequest,time))return &command.coverRequest;
    if(config.coverPlatoon&&!config.foundations&&!config.recoveryFixture&&CoverRequestLive(command.platoonCover,time))return &command.platoonCover;
    return nullptr;
}
void RefreshPlatoonCover(const Soldier& officer,const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics) {
    auto& pc=command.platoonCover;
    if(!config.coverPlatoon||config.foundations||config.recoveryFixture)return;
    const auto& order=officer.platoonOrder;
    const bool aimed=command.platoonTask==PlatoonTask::Support&&time<command.platoonUntil&&order.serial==command.platoonOrderSerial&&
        order.task==PlatoonTask::Support&&order.coverMover>=0&&order.enemy>=0&&order.enemy<UnitCount;
    if(!aimed){pc.until=-100;return;}
    // His own track of the named enemy when it is fresher than the commander's: never anyone else's.
    const auto known=WithTracks(officer,time);
    Contact track=order.contact;
    if(known.contacts[order.enemy].known&&known.contacts[order.enemy].observedAt>track.observedAt)track=known.contacts[order.enemy];
    if(!track.known||time-track.observedAt>CoverSupplyConstants.platoonPayloadAge){pc.until=-100;return;}
    const bool fresh=pc.serial!=order.serial||pc.enemy!=order.enemy;
    if(fresh){pc=CoverRequest{};pc.serial=order.serial;pc.startedAt=time;}
    pc.enemy=order.enemy;pc.contact=track;pc.contact.visible=false;pc.requester=order.coverMover;pc.gate="platoon";
    pc.from=order.coverFrom;pc.to=order.coverTo;
    pc.until=std::min(order.expiresAt,track.observedAt+CoverSupplyConstants.platoonPayloadAge);
    if(!pc.crossing)pc.crossing=std::make_shared<const std::vector<Vec3>>(std::vector<Vec3>{order.coverFrom,order.coverTo});
    if(fresh&&diagnostics&&diagnostics->options.enabled){std::ostringstream o;o<<std::setprecision(6)<<",\"request\":"<<pc.serial<<",\"enemy\":"<<pc.enemy
        <<",\"mover_leader\":"<<order.coverMover<<",\"line\":"<<order.coverLine<<",\"contact_age\":"<<(time-track.observedAt)<<",\"gun\":"<<command.support;
        TraceCoverSupply(diagnostics,officer,command,time,"cover_platoon_payload","start",o.str());}
}
// Plan 030 M-S5 (Config::coverUpperStations): an upper-floor window of an ARMYMAP 2 map at this place (its firing point).
static bool UpperWindow(const Map& map,Vec3 p){
    for(const auto& w:map.windows)if(w.window&&w.shelter.z>1.f&&Distance(w.peek,p)<.1f)return true;
    return false;
}
// Plan 030 M-S5 (Config::coverUpperStations): the gun's station at an upper-floor window of the squad's own building
// (the one its window team holds, else the one the gun stands in): within `range` of him, not a window-team place nor
// taken, its firing point bearing on the request's threat, protected from it and from every enemy the leader knows
// within 80 m, reached by a covered way; nearest first. Leader's knowledge (`leader` is his WithTracks view) only.
static bool UpperGunStation(const Soldier& leader,const Soldier& gun,const SquadCommand& command,const CoverRequest& request,const Map& map,
    const std::vector<Vec3>& taken,float range,float time,Vec3& place){
    int building=command.building>=0&&command.building<int(map.buildings.size())?command.building:-1;
    if(building<0)for(size_t b=0;b<map.buildings.size();++b){const auto& h=map.buildings[b];
        if(std::abs(gun.position.x-h.center.x)<h.half.x&&std::abs(gun.position.y-h.center.y)<h.half.y){building=int(b);break;}}
    if(building<0)return false;
    const Building& house=map.buildings[size_t(building)];const Contact& track=request.contact;
    struct Candidate{float travel;Vec3 at;};std::vector<Candidate> candidates;
    for(const auto& w:map.windows) {
        if(!w.window||w.shelter.z<=1.f||std::abs(w.shelter.x-house.center.x)>=house.half.x||std::abs(w.shelter.y-house.center.y)>=house.half.y)continue;
        const float travel=Distance(w.peek,gun.position);if(travel>range)continue;
        bool occupied=false;for(Vec3 p:taken)if(Distance(p,w.peek)<GroupConstants.haltSpacing)occupied=true;
        for(int i=0;i<2;++i)if(command.teamPlan.windowTeam[i]>=0&&Distance(command.teamPlan.windows[i],w.peek)<2.2f)occupied=true;
        if(occupied||Distance(w.peek,track.position)>GroupConstants.stationRange||
            !ClearLine3D(map,w.peek+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight}))continue;
        const Stance posture=CoverStance(w);
        bool safe=ProtectedAt(map,w.shelter,track.position,posture);
        for(const auto& ct:leader.contacts)if(safe&&ct.known&&Distance(ct.position,w.shelter)<80&&!ProtectedAt(map,w.shelter,ct.position,posture))safe=false;
        if(safe)candidates.push_back({travel,w.peek});
    }
    std::stable_sort(candidates.begin(),candidates.end(),[](const Candidate& a,const Candidate& b){return a.travel<b.travel;});
    Soldier walker=leader;walker.position=gun.position;walker.machineGun=true;walker.understoodHealth=100;
    for(const auto& c:candidates)if(CoveredWay(walker,map,gun.position,c.at,range*2,Caution().revealedSeconds,time)){place=c.at;return true;}
    return false;
}
std::vector<PlannedOrder> PlanSquad(const Soldier& officer,const std::vector<Soldier>& friends,
    const Map& map,const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics) {
    if(config.drills)return DrillOrders(officer,friends,command,time);
    if(config.cognition)return CognitiveOrders(officer,friends,command,time);
    std::vector<PlannedOrder> orders;
    if(config.foundations&&command.platoonTask==PlatoonTask::Observe){
        for(const auto& unit:friends)if(unit.Active()&&!IsPlatoonStaff(unit))
            orders.push_back({unit.id,Task::Hold,unit.position,officer.platoonOrder.sector,{},false,{}});
        return orders;
    }
    const Soldier leader=WithTracks(officer,time);
    bool freshContact=false,healthyMember=false;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<=120)freshContact=true;
    for(const auto& unit:friends)if(unit.Active()&&!IsPlatoonStaff(unit)&&!KnowsWounded(leader,unit))healthyMember=true;
    std::vector<Vec3> rearReservations;
    auto assign=[&](const Soldier& s,Task task,Vec3 position,Vec3 sector) {
        if(KnowsWounded(officer,s)) {
            task=Task::RearGuard;position=RearPosition(officer,s,friends,map,time,rearReservations);
            // A squad made entirely of wounded survivors still searches when quiet.
            // It travels in short steps, favoring separated shelter near each step.
            if(!healthyMember&&!freshContact&&command.advancing) {
                Vec3 delta=command.mission-s.position;float distance=Length(delta);
                Vec3 step=s.position+delta*(std::min(8.f,distance)/std::max(0.01f,distance));
                float best=1e9f;
                for(const auto& cover:CoverPositions(map)) {
                    if(cover.window||Distance(cover.shelter,step)>8||Distance(cover.shelter,s.position)>14||
                        Distance(cover.shelter,command.mission)>distance-3)continue;
                    bool occupied=InReportedFireLane(officer,s.id,cover.shelter,time);
                    for(Vec3 p:rearReservations)if(Distance(p,cover.shelter)<2.5f)occupied=true;
                    float score=Distance(step,cover.shelter);
                    if(!occupied&&score<best&&!FindPath(map,s.position,cover.shelter).empty()){best=score;position=cover.shelter;}
                }
                if(best==1e9f)ResolveOrderPosition(map,s.position,step,position);
            }
            rearReservations.push_back(position);
        }
        else {
            Vec3 clear=ClearReportedFireLane(officer,s,position,map,time);
            if(Distance(clear,position)>0.5f){position=clear;task=Task::ClearLane;}
        }
        orders.push_back({s.id,task,position,sector,{},false,{}});
    };
    const int base=officer.squad*SquadSize;
    const float sign=officer.team?-1.f:1.f;
    Vec3 sector=command.mission;
    float recent=-100;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<=120&&ct.observedAt>recent) {sector=ct.position;recent=ct.observedAt;}
    // Before any contact report, cover the next approach rather than demanding
    // an impossible firing line all the way through the screened battlefield.
    if(recent<time-10)sector={std::clamp(officer.position.x+sign*40,-map.halfWidth+2,map.halfWidth-2),officer.position.y,0};
    // Plan 023 E (section 11): a squad holding its fall-back keeps watching the enemy it withdrew
    // from. Nothing clears its contacts: they age out (the shared confidence rule) because the
    // cover it withdrew behind is exactly what stops anyone refreshing them, and a squad with a
    // blind sector faces the way it happens to be standing.
    if(recent<time-10&&(command.attachedTo>=0||command.mergedInto>=0))sector=command.attachSector;
    else if(recent<time-10&&command.fallbackAt>=0)sector=command.fallbackSector;
    const Soldier* support=nullptr;
    for(const auto& s:friends)if(s.Active()&&s.id==command.support)support=&s;
    const Soldier* nco=RifleGroupLeader(officer,friends,command.support);
    // Plan 018 gen18b: the corporal himself, whether or not he still leads. A superseded one
    // (known wounded, still alive) is not dropped from the plan; assign() below folds him into
    // RearGuard the same way any other wounded man is handled, instead of the successor's own
    // order silently covering for two men.
    const Soldier* corporal=nullptr;
    for(const auto& s:friends)if(s.Active()&&s.role==Role::Corporal&&s.id!=officer.id)corporal=&s;
    Vec3 anchor=officer.position;
    // Plan 031 Stage D (Config::fireAndMovement; governsGun is never set otherwise): the drill places the gun. His station
    // is the one UpdateFireMovement chose for the leg (bearing on its threats, kept while it bears, no protection from
    // every known enemy demanded, no must-move flag); his order carries the leg threats as its sector payload, the
    // drill's marker (gun = himself) and, when he is displacing, leave to sprint.
    if(support&&command.fm.governsGun&&command.fm.gun==support->id&&!KnowsWounded(officer,*support)) {
        auto& st=command.stations;const int gunSlot=support->id%SquadSize;
        st.station[gunSlot]=command.fm.station;st.held[gunSlot]=true;st.issued[gunSlot]=0;st.supportStationFor=support->id;
        anchor=command.fm.station;
        const bool payload=CoverRequestLive(command.fm.payload,time);
        assign(*support,Task::Overwatch,command.fm.station,payload?command.fm.payload.contact.position:sector);
        // A station in a reported fire lane is moved aside (ClearLane): the place he is sent to is still his station.
        auto& order=orders.back();
        if(order.task==Task::Overwatch||order.task==Task::ClearLane){order.fire=payload;order.fm.gun=support->id;order.fm.leg=command.fm.leg;order.fm.displace=command.fm.displacing;}
    }
    else if(support) {
        Vec3 assaultCentre{};int assaultCount=0;
        for(const auto& s:friends)if(s.Active()&&s.id!=officer.id&&s.id!=support->id&&!KnowsWounded(officer,s)){assaultCentre=assaultCentre+s.position;++assaultCount;}
        if(assaultCount)assaultCentre=assaultCentre*(1.f/assaultCount);else assaultCentre=officer.position;
        float score=1e9f;bool found=false;
        // Plan 023 D1 (3.9): the gun's own station. With an enemy known he is given a FIRING
        // position by the one allocator: within supportRange of the rifle group, protected from
        // every enemy the leader knows, bearing on the one he tracks, no nearer him than the
        // group's own lead station, and at an angle off the group's line onto him whenever the
        // ground offers one. It is chosen once and kept while it still bears and the group is still
        // within reach of it: a gun that is moving is a gun that is silent. The old search stays
        // behind it for what it does not cover (no fresh contact: he comes up with the group).
        auto& st=command.stations;const int gunSlot=support->id%SquadSize;
        // Plan 028 Stage 1 (Config::coverRequests): with the leader's covering request live the gun's
        // sector and payload are its threat. He keeps a station that has no line onto it for gunNoLine s
        // (a gun that moves is a gun that is silent) and is then re-stationed onto it; a station searched
        // for any other reason also prefers it.
        // Plan 028 Stage 4 (Config::coverPlatoon): with no request of his own, a squad given the platoon's
        // aimed Support directive answers that one.
        if(config.coverPlatoon&&!config.foundations&&!config.recoveryFixture)RefreshPlatoonCover(officer,config,command,time,diagnostics);
        CoverRequest* live=nullptr;
        if(config.coverRequests&&!config.foundations&&CoverRequestLive(command.coverRequest,time))live=&command.coverRequest;
        else if(config.coverPlatoon&&!config.foundations&&!config.recoveryFixture&&CoverRequestLive(command.platoonCover,time))live=&command.platoonCover;
        CoverRequest unused;
        auto& request=live?*live:unused;
        const bool gunRequest=live&&!KnowsWounded(officer,*support);
        // Plan 028 Stage 4 (Config::coverGunAim): he is re-aimed at once instead of after gunNoLine s.
        const bool gunAim=config.coverGunAim&&!config.foundations&&!config.recoveryFixture&&gunRequest;
        bool lineLost=false;
        if(gunRequest) {
            const bool line=st.held[gunSlot]&&st.supportStationFor==support->id&&BearsOnTrack(map,st.station[gunSlot],request.contact);
            if(line)request.gunNoLineSince=-1;else if(request.gunNoLineSince<0)request.gunNoLineSince=time;
            lineLost=!gunAim&&request.gunNoLineSince>=0&&time-request.gunNoLineSince>=CoverRequestConstants.gunNoLine;
        }
        if(recent>=time-10&&!KnowsWounded(officer,*support)) {
            float leadRange=Distance(sector,nco?nco->position:assaultCentre);
            std::vector<Vec3> stationsTaken;
            for(int j=2;j<SquadSize;++j)if(st.held[j]&&st.issued[j]==st.serial) {
                leadRange=std::min(leadRange,Distance(sector,st.station[j]));stationsTaken.push_back(st.station[j]);
            }
            // Plan 028 Stage 4 (Config::coverGunAim, Jordan's "finish the supply side"): with no line onto
            // the request's threat from his station, and not credited by the leader's own delivery reports
            // with fire on it, the gun is given at once a station that bears on it by the one allocator:
            // within gunAimRange of him, off the crossing, reached by a covered way. None found: he keeps
            // his station and fires on what he sees. Leader's knowledge only; a gun moves at most every
            // gunAimCooldown s.
            bool aimed=false;Vec3 aimPlace{};
            // A gun that can already reach the threat with a clear line (his weapon's 100 m) is not moved.
            const bool reaches=st.held[gunSlot]&&st.supportStationFor==support->id&&Distance(st.station[gunSlot],request.contact.position)<=CoverSupplyConstants.gunReach&&
                ClearLine3D(map,st.station[gunSlot]+Vec3{0,0,1.5f},{request.contact.position.x,request.contact.position.y,request.contact.aimHeight});
            if(gunAim&&request.gunNoLineSince>=0&&!reaches&&time>=command.gunAimAt+CoverSupplyConstants.gunAimCooldown) {
                bool credited=false;
                for(const auto& e:officer.deliveries)if(e.shooter==support->id&&e.observedAt<=time&&time-e.observedAt<=CoverSupplyConstants.creditWindow&&
                    (e.enemy==request.enemy||Distance(e.target,request.contact.position)<6))credited=true;
                if(!credited) {
                    Soldier walker=leader;walker.position=support->position;walker.machineGun=true;walker.understoodHealth=100;
                    float revealed=0;
                    StationFilter filter;
                    // Plan 030 M-S5 (Config::coverStationRadius): the search radius; 25 is gunAimRange, unchanged.
                    const float aimRange=config.coverStationRadius;
                    filter.accept=[&](const CoverPosition& c){return Distance(c.shelter,support->position)<=aimRange&&
                        (!request.crossing||OffCrossing(*request.crossing,support->position,c.shelter));};
                    filter.reach=[&](Vec3 p){return CoveredWay(walker,map,support->position,p,aimRange*1.5f,Caution().revealedSeconds,time,&revealed);};
                    aimed=GroupStation(officer,*support,StationKind::Support,assaultCentre,sector,stationsTaken,map,time,aimPlace,GroupConstants.standOff,leadRange,request.enemy,&filter);
                    // Plan 030 M-S5 (Config::coverUpperStations, ARMYMAP 2 maps): none on the ground, the gun may take an
                    // upper-floor window of the squad's own building (the one its window team holds, else the one the
                    // gun stands in) within that radius, not a window-team place, bearing on the threat, protected
                    // from it and from every enemy the leader knows near it, reached by a covered way. Nearest first.
                    if(!aimed&&config.coverUpperStations&&map.importedBuildings)aimed=UpperGunStation(leader,*support,command,request,map,stationsTaken,aimRange,time,aimPlace);
                    if(aimed&&(!command.supportNeedsMove||Distance(aimPlace,command.supportMoveFrom)>6)) {
                        command.gunAimAt=time;
                        if(diagnostics&&diagnostics->options.enabled){std::ostringstream o;o<<std::setprecision(6)<<",\"request\":"<<request.serial<<",\"enemy\":"<<request.enemy
                            <<",\"gate\":\""<<request.gate<<"\",\"gun\":"<<support->id<<",\"travel\":"<<Distance(aimPlace,support->position)
                            <<",\"from\":["<<support->position.x<<','<<support->position.y<<','<<support->position.z<<"],\"to\":["<<aimPlace.x<<','<<aimPlace.y<<','<<aimPlace.z<<"]";
                            if(config.coverUpperStations)o<<",\"upper\":"<<UpperWindow(map,aimPlace); // plan 030 M-S5
                            TraceCoverSupply(diagnostics,officer,command,time,"cover_gun_aim","restation",o.str());}
                    } else aimed=false;
                    if(!aimed&&!request.gunAimReported&&diagnostics&&diagnostics->options.enabled){std::ostringstream o;o<<std::setprecision(6)<<",\"request\":"<<request.serial
                        <<",\"enemy\":"<<request.enemy<<",\"gate\":\""<<request.gate<<"\",\"gun\":"<<support->id;
                        TraceCoverSupply(diagnostics,officer,command,time,"cover_gun_aim","no_station",o.str());}
                    if(!aimed)request.gunAimReported=true;
                }
            }
            // Plan 030 M-S5 (Config::coverUpperStations): an upper-floor window he was sent to is kept while it bears
            // on the live request's threat (the general station tests are for ground cover).
            const bool upperKeep=config.coverUpperStations&&gunAim&&map.importedBuildings&&st.held[gunSlot]&&st.supportStationFor==support->id&&
                !command.supportNeedsMove&&UpperWindow(map,st.station[gunSlot])&&BearsOnTrack(map,st.station[gunSlot],request.contact);
            // Plan 031 D (Config::fireAndMovement for this team): outside the drill's legs the gun keeps the station he holds
            // or is on his way to while it bears on an enemy the leader knows and the group is within leash of it; protection
            // from every known enemy is not demanded and the must-move flag does not move him (W-1: re-sited at every plan,
            // he spent 39% of his time walking and never reached half his stations).
            const bool drillKeep=FireAndMovement(config,officer.team)&&st.held[gunSlot]&&st.supportStationFor==support->id&&
                Distance(st.station[gunSlot],assaultCentre)<=FireMovementConstants.leash&&StationBears(officer,map,st.station[gunSlot],time);
            const bool keep=upperKeep||drillKeep||(st.held[gunSlot]&&st.supportStationFor==support->id&&!command.supportNeedsMove&&
                Distance(st.station[gunSlot],assaultCentre)<=GroupConstants.supportRange&&
                StationBears(officer,map,st.station[gunSlot],time)&&StationCovered(officer,map,st.station[gunSlot],time)&&!lineLost);
            Vec3 place=aimed?aimPlace:st.station[gunSlot];
            if((aimed||keep||GroupStation(officer,*support,StationKind::Support,assaultCentre,sector,stationsTaken,map,time,place,GroupConstants.standOff,leadRange,gunRequest?request.enemy:-1))&&
                (!command.supportNeedsMove||Distance(place,command.supportMoveFrom)>6)) {
                st.station[gunSlot]=place;st.held[gunSlot]=true;st.issued[gunSlot]=0;st.supportStationFor=support->id;
                anchor=place;found=true;
            }
        }
        const bool stationed=found;
        const bool keepGun=!stationed&&!command.supportNeedsMove&&recent>=time-10&&command.supportUseful&&!leader.supportBlocked&&
            time-leader.supportReadyAt<5&&support->assignment.task==Task::Overwatch&&
            Distance(support->position,support->assignment.position)<2;
        if(keepGun){anchor=support->assignment.position;score=-1e9f;found=true;}
        for(const auto& cover:CoverPositions(map))if(!stationed&&!keepGun&&cover.crouch) {
                Vec3 p=cover.shelter;
                // Plan 023 B: a gun that has been left behind is searched from his GROUP instead of
                // from himself. With a 55 m leash on his own position only, a group that really
                // moves loses him for good (at the fight 69 % to 47 % once stage B pushed deeper);
                // widening it only once he is that far back leaves his ordinary placing alone.
                const bool leftBehind=Distance(support->position,assaultCentre)>55;
                if((recent<time-10&&Distance(p,assaultCentre)>18)||(Distance(p,support->position)>55&&!(leftBehind&&Distance(p,assaultCentre)<=55))||std::abs(p.y-assaultCentre.y)>28||sign*p.x>sign*assaultCentre.x+(command.engaged?8.f:24.f)||!Walkable(map,p)||!ProtectedAt(map,p,sector,Stance::Crouched)||
                    !ClearLine3D(map,{p.x,p.y,p.z+1.5f},{sector.x,sector.y,sector.z+1.65f}))continue;
                bool safe=true;
                for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<=120&&!ProtectedAt(map,p,ct.position,Stance::Crouched))safe=false;
                if(!safe)continue;
                if(command.supportNeedsMove&&Distance(p,command.supportMoveFrom)<6)continue;
                float value=(cover.window?-4.f:0.f)+Distance(p,support->position)+Distance(p,sector)*0.35f;
                value+=(1-SupportCoverage(map,p,command.teamPlan.bounding?command.teamPlan.target:command.mission,leader,time))*24;
                if(command.supportNeedsMove)value+=Distance(p,assaultCentre)*0.8f;
                if(recent>=time-10&&support->assignment.task==Task::Overwatch&&Distance(p,support->assignment.position)<1)value-=12;
                if(recent<time-10)value+=Distance(p,assaultCentre)*2;
                if(value<score&&!FindPath(map,support->position,p).empty()) {score=value;anchor=p;found=true;}
        }
        if(!found&&command.advancing&&recent<time-10) {
            Vec3 follow=support->position;ResolveOrderPosition(map,support->position,assaultCentre+Vec3{-sign*6,3},follow);
            assign(*support,Task::Rally,follow,sector);
        } else {
            assign(*support,found?Task::Overwatch:Task::Hold,found?anchor:support->position,gunRequest?request.contact.position:sector);
            orders.back().fire=gunRequest&&(orders.back().task==Task::Overwatch||orders.back().task==Task::Hold);
        }
    }
    Vec3 assembly={anchor.x+sign*2,anchor.y+(anchor.y>0?-4.f:4.f)};
    if(!Walkable(map,assembly))assembly=officer.position;
    const bool supporting=command.platoonTask==PlatoonTask::Support&&time<command.platoonUntil&&recent>=time-10;
    Task task=command.advancing&&!command.engaged&&!supporting?Task::Advance:Task::Hold;
    Vec3 destination=command.advancing?command.mission:assembly;
    // Plan 031 D: an advance in contact goes a leg at a time (UpdateFireMovement cut it; never set otherwise).
    if(task==Task::Advance&&command.fm.kind==FmKind::Advance)destination=command.fm.to;
    // Plan 023 B (3.4): in contact the group goes to the advantage its forward men hold, the
    // leader with it; generation 19 moved only the riflemen's anchor and the corporal pushed
    // on into a machine gun alone.
    if(command.engaged||supporting)destination=command.stations.comeUp?command.stations.forwardCentre:nco?nco->position:officer.position;
    // Plan 023 E: the fall-back is a place to hold, not a march objective the squad has already
    // reached: kind Hold, so the allocator gives each man a firing position where the ground bears
    // and leaves him where he stands where it does not.
    if(command.fallbackAt>=0&&command.ableRiflemen<GroupConstants.shatteredRiflemen&&
        !command.hasWaypoint&&!command.engaged&&!supporting){task=Task::Hold;destination=command.mission;}
    // Plan 023 E: attached, the squad's place is its host's and it goes there. The platoon Support
    // task it is given would otherwise hold it exactly where it was left standing.
    if((command.attachedTo>=0||command.mergedInto>=0)&&command.advancing&&!command.hasWaypoint&&!command.engaged)
        {task=Task::Advance;destination=command.mission;}
    if(command.hasWaypoint&&command.movementBlock.reason==MoveBlock::None) {
        destination=command.waypoint;
        task=command.maneuver==Maneuver::PullBack?Task::PullBack:command.maneuver==Maneuver::Press?Task::Flank:Task::Flank;
        if(command.maneuver==Maneuver::PullBack&&support&&!KnowsWounded(officer,*support)&&
            (!command.supportUseful||support->understoodSuppression>0.52f||Distance(officer.position,destination)<10||time-command.planStarted>12))
            for(auto& order:orders)if(order.recipient==support->id){order.task=Task::PullBack;order.position=destination+Vec3{-sign*5,3};}
    }
    if(command.movementBlock.reason!=MoveBlock::None){task=Task::Hold;destination=nco?nco->position:officer.position;}
    // Plan 023 C (3.6, the middle option, behind config.orderPace): one derivation. The objective
    // his men's stations belong to is fixed HERE, as the leader is given it, instead of being read
    // back off his order two message hops and a relay cycle later. He does not stand and wait, and
    // he does not run ahead: he steps off AT ONCE at leadSlowPace and takes the full pace only once
    // his men are with him (half his able riflemen within leadCloseDistance along the axis, or
    // leadSlowSeconds passed); if his lead over the group's centre grows past leadMaxLead he drops
    // back to the slow pace until it closes. The user's later ruling that shared code may carry a
    // pace replaced the plan's own named fallback here (a short leg that never let him outrun his
    // group at all): measurement never got the chance to prefer it, since the real pace was
    // authorised before this stage was built. Off, this whole derivation is skipped and the
    // objective is read back off his order every cycle exactly as stage B2 did, which is what
    // --no-order-pace needs to reproduce it bit for bit.
    float pace=1.f;
    if(nco&&config.orderPace&&!config.foundations&&!command.stations.bound) {
        auto& st=command.stations;
        const StationKind kind=task==Task::Hold?StationKind::Hold:StationKind::Halt;
        // A group that is holding in contact has not been given anywhere to go: its objective is
        // the place its leader was ORDERED to, which stands still, and not the ground he happens
        // to be standing on, which drifts and would re-lay the group's stations as he shuffles.
        const Vec3 fixed=kind==StationKind::Hold&&nco->assignment.task!=Task::None?nco->assignment.position:destination;
        if(st.kind!=kind||Distance(st.objective,fixed)>GroupConstants.anchorMove) {
            st.kind=kind;st.objective=fixed;++st.serial;st.objectiveAt=time;
        }
        Vec3 mean{};int count=0;
        for(const auto& s:friends)if(s.Active()&&!IsPlatoonStaff(s)&&s.id!=officer.id&&s.id!=nco->id&&
            (!support||s.id!=support->id)&&!KnowsWounded(officer,s)){mean=mean+s.position;++count;}
        if(count) {
            const Vec3 centre=mean*(1.f/count);
            const GroupAxis axis=MakeGroupAxis(officer,centre,destination,sector,time);
            int closed=0;
            for(const auto& s:friends)if(s.Active()&&!IsPlatoonStaff(s)&&s.id!=officer.id&&s.id!=nco->id&&
                (!support||s.id!=support->id)&&!KnowsWounded(officer,s))
                closed+=std::abs(AxisProgress(axis,s.position)-AxisProgress(axis,nco->position))<=GroupConstants.leadCloseDistance;
            const bool closedUp=closed*2>=count||(st.objectiveAt>=0&&time-st.objectiveAt>=GroupConstants.leadSlowSeconds);
            // His OWN lead over the group, not his ordered destination's: an advance order always
            // points well past leadMaxLead (that is what "advance" means), so measuring the goal
            // here made every fresh leg start slow and mostly stay slow, tripling close time on
            // some maps for no behavioural reason the plan asked for. What "grows during a move"
            // means is where he actually stands now.
            const float ahead=AxisProgress(axis,nco->position)-AxisProgress(axis,centre);
            if(!closedUp||ahead>GroupConstants.leadMaxLead)pace=GroupConstants.leadSlowPace;
        }
    }
    if(nco) {
        Task ownTask=task;Vec3 ownPosition=destination;
        if(command.teamPlan.bounding){auto order=TeamOrder(*nco,command.teamPlan,sector);ownTask=order.action==Action::Advance?Task::BoundMove:Task::BoundCover;ownPosition=order.goal;}
        assign(*nco,ownTask,ownPosition,sector);
        orders.back().teamPlan=command.teamPlan;orders.back().pace=pace;
        orders.back().fm=FmGroupMarker(command); // plan 031 D: the group's leg, relayed to the men's move orders (none when off)
    }
    // Only the "someone else can still lead" case needs this: with no leader at all, the
    // corporal is folded into the ordinary sergeant-led fallback below like everyone else.
    if(nco&&corporal&&corporal->id!=nco->id)assign(*corporal,task,destination,sector);
    // Plan 023 A (3.8): with nobody left in the rifle group to lead it, the squad's own officer
    // leads it, through the same station record and the same allocator as the relay (which now
    // runs from him as well); the grid offset is only the last resort when the ground offers
    // nothing. Without it these men had no call-up rule at all.
    std::vector<Vec3> haltTaken{destination};
    if((!nco||KnowsWounded(officer,*nco))&&command.mergedInto<0)for(const auto& s:friends)if(s.Active()&&s.id!=officer.id&&(!nco||s.id!=nco->id)&&(!support||s.id!=support->id))
        {const int slot=s.id%SquadSize;const auto& st=command.stations;
        if(InWindowTeam(command.teamPlan,s.id)){auto window=TeamOrder(s,command.teamPlan,sector);assign(s,Task::Window,window.goal,sector);}
        // A running bound still owns the destination, so each man keeps the station fixed for him there.
        else if(st.bound&&st.held[slot]&&task!=Task::Hold)assign(s,task,st.station[slot],sector);
        else {Vec3 place;
            const bool halted=st.kind==StationKind::Halt&&st.held[slot]&&st.issued[slot]==st.serial&&!(task==Task::Hold&&command.engaged);
            if(halted){haltTaken.push_back(st.station[slot]);assign(s,task,st.station[slot],sector);}
            else if(!(task==Task::Hold&&command.engaged)&&GroupStation(officer,s,StationKind::Halt,destination,sector,haltTaken,map,time,place,GroupConstants.standOff)){haltTaken.push_back(place);assign(s,task,place,sector);}
            else assign(s,task,task==Task::Hold&&command.engaged?s.position:destination+Vec3{0,float(s.id-base-4)*1.2f},sector);}}
    // The officer follows behind the assault group while the NCO executes the advance.
    Vec3 rear=command.hasWaypoint&&command.maneuver==Maneuver::PullBack?destination+Vec3{-sign*7,-3}:
        command.advancing&&nco?nco->position+Vec3{-sign*5,3}:assembly+Vec3{-sign*3,0};
    if(command.advancing&&!nco&&!command.engaged)rear=destination;
    if(!Walkable(map,rear))rear=officer.position;
    // Plan 031 D: the leader moves with his group under the drill as his men do (none when off).
    if(command.advancing&&!nco&&!command.engaged){assign(officer,task,rear,sector);orders.back().fm=FmGroupMarker(command);return orders;}
    assign(officer,command.hasWaypoint&&command.maneuver==Maneuver::PullBack?Task::PullBack:Task::Hold,rear,sector);
    orders.back().fm=FmGroupMarker(command);
    return orders;
}
void UpdateCommands(Frame& f,const Map& map,const Config& config,CommandRuntime& rt,std::vector<Event>& events) {
    auto log=[&](EventKind kind,int actor,int target,const std::string& text){events.push_back({f.time,kind,actor,target,text});};
    // Communication transport may inspect active friendly endpoints; tactical policies
    // below never receive authoritative enemy state.
    for(int team=0;team<SquadCount;++team) {
        auto& cmd=f.command[team];int base=team*SquadSize;
        if(cmd.leader>=0&&!f.soldiers[cmd.leader].Active()) {
            log(EventKind::Succession,cmd.leader,-1,std::string(Name(cmd.leader))+" down: squad continues existing orders");
            cmd.leader=-1;cmd.disruptedUntil=f.time+3;
        }
        if(cmd.leader<0&&f.time>=cmd.disruptedUntil) {
            for(int i=base+1;i<base+SquadSize;++i)if(f.soldiers[i].Active()&&!IsPlatoonStaff(f.soldiers[i])) {cmd.leader=i;break;}
            if(cmd.leader>=0) {
                log(EventKind::Succession,cmd.leader,-1,std::string(Name(cmd.leader))+" assumes squad command");
                rt.nextPlan[team]=0;f.soldiers[cmd.leader].regrouping=false;f.soldiers[cmd.leader].supportReadyAt=-100;
                f.soldiers[cmd.leader].supportActivityAt=-100;f.soldiers[cmd.leader].reportedSupportRounds=0;f.soldiers[cmd.leader].supportReportAt=-100;f.soldiers[cmd.leader].supportContactAt=-100;f.soldiers[cmd.leader].supportBlocked=false;
                rt.progress[team]={};
            }
        }
        if(cmd.support<0||cmd.support==cmd.leader||!f.soldiers[cmd.support].Active()) {
            cmd.support=-1;
            for(int i=base+SquadSize-1;i>base;--i)if(f.soldiers[i].Active()&&i!=cmd.leader&&f.soldiers[i].role!=Role::Corporal&&!IsPlatoonStaff(f.soldiers[i])){cmd.support=i;break;}
            rt.nextPlan[team]=0;
            if(cmd.leader>=0){f.soldiers[cmd.leader].supportReadyAt=-100;f.soldiers[cmd.leader].supportActivityAt=-100;f.soldiers[cmd.leader].reportedSupportRounds=0;f.soldiers[cmd.leader].supportReportAt=-100;f.soldiers[cmd.leader].supportContactAt=-100;f.soldiers[cmd.leader].supportBlocked=false;}
            cmd.supportNeedsMove=false;
        }
    }
    for(size_t i=0;i<rt.messages.size();) {
        const auto message=rt.messages[i];
        if(message.arrives>f.time){++i;continue;}
        rt.messages.erase(rt.messages.begin()+i);
        auto& recipient=f.soldiers[message.recipient];const auto& sender=f.soldiers[message.sender];
        if(!recipient.Active()||(!sender.Active()&&message.kind!=CommandMessage::Kind::TaskStatus)||sender.team!=recipient.team||(sender.squad!=recipient.squad&&message.kind!=CommandMessage::Kind::Lane&&message.kind!=CommandMessage::Kind::Delivery&&message.kind!=CommandMessage::Kind::SupportSector&&message.kind!=CommandMessage::Kind::SupportProgress))continue;
        if(message.kind==CommandMessage::Kind::Order) {
            const auto& cmd=f.command[recipient.squad];
            bool authorised=(IsPlatoonStaff(recipient)&&IsPlatoonStaff(sender))||sender.id==cmd.leader;
            // Plan 018 gen18b: a relay order is authorised from whoever currently leads the
            // rifle group (the corporal, or his recursive successor once known wounded), not
            // from the corporal's role alone, checked live since the message was queued.
            if(!authorised&&cmd.leader>=0&&sender.squad==recipient.squad&&sender.id!=recipient.id) {
                std::vector<Soldier> squad;for(const auto& s:f.soldiers)if(s.squad==sender.squad&&!IsPlatoonStaff(s))squad.push_back(s);
                const Soldier* rifleLeader=RifleGroupLeader(f.soldiers[cmd.leader],squad,cmd.support);
                authorised=rifleLeader&&rifleLeader->id==sender.id;
            }
            // Plan 023 E3 (the user's merge ruling): the host squad's leader, and whoever leads its
            // rifle group, may place the men of a squad merged into his. That is what a merge is:
            // the joining squad keeps its identity for reports and succession, its men obey him.
            if(!authorised&&cmd.mergedInto==sender.squad&&cmd.mergedInto>=0&&f.command[sender.squad].leader>=0) {
                const auto& host=f.command[sender.squad];
                std::vector<Soldier> hostSquad;for(const auto& s:f.soldiers)if(s.squad==sender.squad&&!IsPlatoonStaff(s))hostSquad.push_back(s);
                const Soldier* lead=RifleGroupLeader(f.soldiers[host.leader],hostSquad,host.support);
                authorised=sender.id==host.leader||(lead&&lead->id==sender.id);
            }
            if(!authorised||message.assignment.serial<=recipient.assignment.serial)continue;
            PendingReaction reaction;reaction.kind=ReactionKind::Order;reaction.source=sender.id;reaction.order=message.assignment;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
            log(EventKind::OrderReceived,sender.id,recipient.id,std::string(Name(recipient.id))+" hears "+TaskName(message.assignment.task)+" from "+Name(sender.id));
        } else if(message.kind==CommandMessage::Kind::SupportSector) {
            if((!config.recoveryFixture&&!TypedController(config))||sender.team!=recipient.team||sender.id!=f.command[sender.squad].leader||
                (TypedController(config)?(CommandSupport(f.command[sender.squad],true)!=recipient.id&&
                    (CommandSupport(f.command[sender.squad],true)<0||f.command[CommandSupport(f.command[sender.squad],true)/SquadSize].leader!=recipient.id)):f.command[sender.squad].support!=recipient.id))continue;
            PendingReaction reaction;reaction.kind=ReactionKind::SupportSector;reaction.source=sender.id;reaction.supportSector=message.supportSector;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::SupportProgress) {
            const auto& progress=message.supportProgress;
            const bool ownerLoss=progress.status==TaskStatus::Failed&&progress.cause==TaskCause::Casualty&&
                progress.shooter>=0&&progress.shooter<UnitCount&&progress.shooter/SquadSize==sender.squad&&
                sender.id==f.command[sender.squad].leader;
            if(!config.cognition||recipient.id!=f.command[recipient.squad].leader||
                progress.shooter!=f.command[recipient.squad].accepted.support||
                (!ownerLoss&&(sender.id!=progress.shooter)))continue;
            PendingReaction reaction;reaction.kind=ReactionKind::SupportProgress;reaction.source=sender.id;reaction.supportProgress=message.supportProgress;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Contact) {
            auto& report=recipient.reports[message.enemy];
            if(f.time-std::max(message.contact.observedAt,message.contact.clearedAt)>120||
                (message.contact.observedAt<=report.observedAt&&message.contact.clearedAt<=report.clearedAt))continue;
            PendingReaction reaction;reaction.kind=ReactionKind::Report;reaction.source=sender.id;reaction.enemy=message.enemy;reaction.contact=message.contact;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Lane) {
            PendingReaction reaction;reaction.kind=ReactionKind::LaneReport;reaction.source=sender.id;reaction.subject=message.subject;reaction.fireLane=message.fireLane;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Delivery) {
            PendingReaction reaction;reaction.kind=ReactionKind::DeliveryReport;reaction.source=sender.id;reaction.delivery=message.delivery;QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::TaskStatus) {
            PendingReaction reaction;reaction.kind=ReactionKind::TaskReport;reaction.source=sender.id;reaction.taskReceipt=message.taskReceipt;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Movement) {
            PendingReaction reaction;reaction.kind=ReactionKind::MovementReport;reaction.source=sender.id;reaction.failedMove=message.failedMove;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Fire) {
            PendingReaction reaction;reaction.kind=ReactionKind::FireReport;reaction.source=sender.id;reaction.fireArea=message.fireArea;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.kind==CommandMessage::Kind::Wound) {
            if(message.subject<0||message.subject>=UnitCount||recipient.knownWounded[message.subject])continue;
            PendingReaction reaction;reaction.kind=ReactionKind::WoundReport;reaction.source=sender.id;reaction.subject=message.subject;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        } else if(message.sender==f.command[recipient.squad].support&&recipient.id==f.command[recipient.squad].leader) {
            PendingReaction reaction;reaction.kind=ReactionKind::Ready;reaction.source=sender.id;reaction.ready=message.ready;
            reaction.rounds=message.rounds;reaction.position=message.supportPosition;reaction.contact=message.contact;reaction.blocked=message.blocked;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
        }
    }
    ProcessReactions(f,rt.reactions,events);
    rt.platoon.geometryViews=rt.geometryViews;rt.platoon.fixedDefender=rt.fixedDefender;UpdatePlatoon(f,map,config,rt.platoon,rt.reactions,events);
    // Plan 028 Stage 1: a covering-fire payload is re-sent to a man only for a new enemy, a contact at
    // least newerContact s newer, or a live request his copy would otherwise outlive, and at most once
    // per resendSeconds (the order-rate guards). An order sent for any other reason carries it anyway.
    // Plan 030 M-S7 P4 (Config::coverSector): a tasked man's enemy is his own sector threat; the gun's payload is also
    // due when its share of the sector has changed or holds a track newerContact s newer than the one it was sent.
    auto sectorChanged=[&](int recipient,const CoverRequest& request) {
        if(!request.gunSector||recipient!=f.command[f.soldiers[recipient].squad].support)return false;
        const auto& had=rt.lastSent[recipient].fireSector;
        if(!had||had->size()!=request.gunSector->size())return true;
        for(size_t k=0;k<had->size();++k){const auto& a=(*had)[k];const auto& b=(*request.gunSector)[k];
            if(a.enemy!=b.enemy||b.contact.observedAt-a.contact.observedAt>=CoverRequestConstants.newerContact)return true;}
        return false;
    };
    auto payloadDue=[&](int recipient,const CoverRequest& request) {
        const auto& last=rt.lastSent[recipient];const int slot=recipient%SquadSize;
        const bool changed=last.fireEnemy!=RequestEnemy(request,slot)||RequestTrack(request,slot).observedAt-last.fireContact.observedAt>=CoverRequestConstants.newerContact||sectorChanged(recipient,request)||
            (last.fireUntil-f.time<CoverRequestConstants.resendSeconds&&request.until>last.fireUntil+.5f);
        return changed&&f.time-rt.payloadAt[recipient]>=CoverRequestConstants.resendSeconds;
    };
    auto send=[&](int sender,int recipient,Task task,Vec3 position,Vec3 sector,const TeamPlan& plan=TeamPlan{},const CoverPosition* slot=nullptr,ExecutionContract execution=ExecutionContract{},float pace=1.f,
        const CoverRequest* fire=nullptr,bool fireDue=false,const FireMovementOrder& drill=FireMovementOrder{}) {
        const bool recovery=(config.recoveryFixture||config.foundations)&&f.soldiers[recipient].team!=rt.fixedDefender;
        GoalIntent intent;
        if(config.foundations){
            const auto& issuer=f.soldiers[sender];
            if(issuer.platoonOrder.intent.id&&f.time<issuer.platoonOrder.expiresAt)intent=issuer.platoonOrder.intent;
            else if(issuer.assignment.intent.id&&f.time<issuer.assignment.intent.expiresAt)intent=issuer.assignment.intent;
        }
        if(config.cognition){const auto& accepted=f.command[f.soldiers[sender].squad].accepted;intent=f.time<accepted.intent.expiresAt?accepted.intent:GoalIntent{};}
        if(config.drills){const auto& plan=f.command[f.soldiers[sender].squad].battleDrill;intent=plan.intent;}
        const Vec3 requested=position;
        const bool drillPauseAmendment=config.drills&&rt.lastSent[recipient].drillInstance>0&&rt.lastSent[recipient].execution.paused!=execution.paused;
        const bool retainedTask=recovery&&rt.lastSent[recipient].intent.id==intent.id&&rt.lastSent[recipient].execution.method==execution.method&&rt.lastSent[recipient].execution.stage==execution.stage&&rt.lastSent[recipient].execution.generation==execution.generation&&rt.lastSent[recipient].execution.completion==execution.completion&&rt.lastSent[recipient].execution.unavailable==execution.unavailable&&rt.lastSent[recipient].execution.rifleSupport==execution.rifleSupport&&rt.lastSent[recipient].execution.supportThreat==execution.supportThreat&&EquivalentTask(rt.lastSent[recipient],task,position,sector,plan.targetEnemy)&&rt.lastSent[recipient].teamPlan.liftFire==plan.liftFire&&rt.lastSent[recipient].teamPlan.assaultAreaFire==plan.assaultAreaFire&&(drillPauseAmendment||(rt.lastSent[recipient].hasSlot==(slot!=nullptr)&&
            (!slot||(rt.lastSent[recipient].slot.id==slot->id&&Distance(rt.lastSent[recipient].slot.shelter,slot->shelter)<.05f&&Distance(rt.lastSent[recipient].slot.peek,slot->peek)<.05f))));
        if(retainedTask&&rt.lastSent[recipient].execution.paused==execution.paused&&rt.lastSent[recipient].execution.arrivalCheck==execution.arrivalCheck)return;
        const Map& orderMap=recovery&&rt.geometryViews?(*rt.geometryViews)[sender]:map;
        if(!ResolveOrderPosition(orderMap,f.soldiers[recipient].position,requested,position)) {
            log(EventKind::Decision,sender,recipient,std::string(Name(sender))+": no reachable waypoint for "+Name(recipient));return;
        }
        auto& last=rt.lastSent[recipient];
        const auto& unit=f.soldiers[recipient];
        // Finish a short movement commitment before refreshing a moving formation
        // anchor. Emergency withdrawals and lane clearance can still interrupt.
        // Plan 023 C: a pace change is part of the order's identity too (last.pace==pace), or the
        // leader's slow start/full pace transition would never reach him once his destination
        // stopped moving: both dedupe checks below would just keep silently discarding it.
        if(!fireDue&&!recovery&&last.issuer==sender&&last.task==task&&last.teamPlan.serial==plan.serial&&last.pace==pace&&SameFireMovementOrder(last.fm,drill)&&
            task!=Task::PullBack&&task!=Task::ClearLane&&f.time-last.issuedAt<8&&
            unit.understoodSuppression<0.52f&&Distance(unit.position,last.position)>1.5f&&
            Distance(last.position,position)>2&&!FindPath(map,unit.position,last.position).empty())return;
        if(!fireDue&&!recovery&&last.issuer==sender&&last.task==task&&Distance(last.position,position)<2&&Distance(last.sector,sector)<6&&last.teamPlan.serial==plan.serial&&last.pace==pace&&
            SameFireMovementOrder(last.fm,drill))return; // plan 031 D: the drill's marker is part of the order (never set when off)
        Assignment order;
        if(config.drills){const auto& p=f.command[f.soldiers[sender].squad].battleDrill;order.drillInstance=p.instance;order.element=p.elements[recipient%SquadSize];order.baseOfFire=order.element>=0&&!p.movers[recipient%SquadSize];order.areaMin=p.areaMin;order.areaMax=p.areaMax;order.areaRoute=p.platoonArea?p.acceptedDirective.corridor:nullptr;order.areaRouteRadius=p.platoonArea?p.acceptedDirective.areaRouteRadius:0;order.areaDiscCenter=p.action.objective;order.areaDiscRadius=(!p.platoonArea&&(p.kind==BattleDrill::SupportByFire||p.kind==BattleDrill::SquadAttack||p.action.closureFallback))?60.f:0.f;if(p.platoonArea&&p.acceptedDirective.areaRouteRadius>0){order.areaDiscCenter=p.acceptedDirective.areaDiscCenter;order.areaDiscRadius=60;}}
        order.execution=execution;order.intent=intent;order.geometry=orderMap.revision;order.target=plan.targetEnemy;order.task=task;order.issuer=sender;order.serial=rt.nextSerial++;
        order.position=position;order.sector=sector;order.pace=pace;order.fm=drill;if(slot){order.hasSlot=true;order.slot=*slot;}if(recovery){order.id=TypedController(config)&&retainedTask?last.id:uint64_t(order.serial);order.statusAt=f.time;}order.teamPlan=plan;order.issuedAt=f.time;
        if(fire&&CoverRequestLive(*fire,f.time)){const int fireSlot=recipient%SquadSize;
            order.fireEnemy=RequestEnemy(*fire,fireSlot);order.fireContact=RequestTrack(*fire,fireSlot);order.fireUntil=fire->until;
            // Plan 030 M-S7 P4 (Config::coverSector): the squad's gun is sent its share of the sector.
            if(fire->gunSector&&recipient==f.command[f.soldiers[recipient].squad].support)order.fireSector=fire->gunSector;
            order.fireRequester=fire->requester;order.fireFriendlies=fire->friendlies;order.fireShift=fire->shift[recipient%SquadSize]&&Distance(position,fire->shiftTo[recipient%SquadSize])<1.f;rt.payloadAt[recipient]=f.time;}
        last=order;
        TraceOrder(rt.diagnostics,f.soldiers[recipient],order,f.time,"order_issued");
        log(EventKind::OrderIssued,sender,recipient,std::string(Name(sender))+" orders "+Name(recipient)+": "+TaskName(task));
        if(Distance(requested,position)>0.1f)log(EventKind::Decision,sender,recipient,std::string(Name(sender))+": adjusts blocked waypoint for "+Name(recipient));
        if(sender==recipient) {
            PendingReaction reaction;reaction.kind=ReactionKind::Order;reaction.order=order;reaction.source=sender;
            QueueReaction(f.soldiers[recipient],reaction,f.time,rt.reactions);return;
        }
        CommandMessage message;message.sender=sender;message.recipient=recipient;message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,f.soldiers[sender]);message.assignment=order;
        rt.messages.push_back(message);
    };
    // A gun reports its own live assignment in response to a received request.
    // Deployment reports never count as delivered fire and retain the task deadline.
    if(config.cognition)for(const auto& gun:f.soldiers){
        const auto& request=gun.supportSector;const auto& task=gun.assignment;
        if(!gun.Active()||request.shooter!=gun.id||request.requester<0||!request.route||
            f.time-request.observedAt>8||task.execution.completion!=Completion::Support||!task.id||
            Distance(task.sector,request.focus)>6||f.time<rt.nextSupportProgress[gun.id])continue;
        rt.nextSupportProgress[gun.id]=f.time+1;
        CommandMessage message;message.kind=CommandMessage::Kind::SupportProgress;message.sender=gun.id;message.recipient=request.requester;
        message.arrives=f.time+ReportDelay(config.reportDelay,gun);auto& report=message.supportProgress;
        report.shooter=gun.id;report.assignment=task.id;report.route=request.route;report.stage=request.stage;
        report.position=gun.position;report.sector=task.sector;report.observedAt=f.time;report.statusAt=task.statusAt;
        report.deadline=task.execution.deadline;report.status=task.status;report.cause=task.cause;
        rt.messages.push_back(message);
    }
    // Relay received casualty evidence through the living support squad leader.
    // The casualty timestamp remains the original receipt time, even on retries.
    if(config.cognition)for(int squad=0;squad<SquadCount;++squad){
        const int id=f.command[squad].leader;if(id<0)continue;const auto& leader=f.soldiers[id];const auto& request=leader.supportSector;
        if(!leader.Active()||request.shooter<0||request.shooter/SquadSize!=squad||request.requester<0||!request.route||
            f.time-request.observedAt>8||f.time<rt.nextSupportProgress[id])continue;
        const auto& receipt=leader.taskReports[request.shooter%SquadSize];
        if(receipt.soldier!=request.shooter||receipt.active||receipt.status!=TaskStatus::Failed||receipt.cause!=TaskCause::Casualty)continue;
        rt.nextSupportProgress[id]=f.time+1;
        CommandMessage message;message.kind=CommandMessage::Kind::SupportProgress;message.sender=id;message.recipient=request.requester;message.arrives=f.time+ReportDelay(config.reportDelay,leader);
        auto& report=message.supportProgress;report.shooter=request.shooter;report.assignment=receipt.id;report.route=request.route;report.stage=request.stage;
        report.position=receipt.position;report.sector=request.focus;report.observedAt=report.statusAt=receipt.at;report.status=TaskStatus::Failed;report.cause=TaskCause::Casualty;
        rt.messages.push_back(message);
    }
    // Attached command staff follow their host squad, fight and seek cover, but
    // are not included in its assault formation or subordinate command chain.
    // Plan 023 D2 (3.9, the user's ruling of 21 September: "the platoon officer fights with the
    // leading squad"): a legacy attacking platoon's staff hold stations like anybody else. The
    // OFFICER takes one in the rifle group of the leading squad (the platoon's mover, else the
    // squad its main effort is with, else his own host squad), from the same allocator, at that
    // group's stand-off and never nearer the enemy he knows than the group's own lead station; he
    // takes the same fire as any rifleman there. The platoon SERGEANT keeps the rear, staffBehind
    // behind the group's rear station along its axis, in cover the enemy cannot look into. Each is
    // allocated once and moves only when the group's objective (or the leading squad) changes; the
    // covered path is the shared movement code's, and an order he holds is never re-sent. The typed
    // controllers and the static defenders keep the 4 s offset loop exactly as it was.
    for(auto& s:f.soldiers)if(s.Active()&&IsPlatoonStaff(s)&&f.time>=rt.nextNco[s.id]) {
        const bool ownStation=!TypedController(config)&&!config.foundations&&!config.recoveryFixture&&s.team!=rt.fixedDefender;
        rt.nextNco[s.id]=f.time+(ownStation?2.f:4.f);
        if(!ownStation) {
            Vec3 anchor{};int count=0;
            for(const auto& ally:f.soldiers)if(ally.Active()&&ally.squad==s.squad&&!IsPlatoonStaff(ally)){anchor=anchor+ally.position;++count;}
            if(count){anchor=anchor*(1.f/count);Vec3 pos=anchor+Vec3{s.team?7.f:-7.f,s.role==Role::Lieutenant?-3.f:3.f};
                send(s.id,s.id,Task::Hold,pos,anchor+Vec3{s.team?-30.f:30.f,0});}
            continue;
        }
        const auto& platoon=f.platoon[s.team];
        auto leads=[&](int squad){return squad>=s.team*SquadsPerTeam&&squad<(s.team+1)*SquadsPerTeam&&f.command[squad].leader>=0;};
        const int lead=leads(platoon.flankSquad)?platoon.flankSquad:leads(platoon.mainEffortSquad)?platoon.mainEffortSquad:
            leads(platoon.supportSquad)?platoon.supportSquad:s.squad;
        const auto& host=f.command[lead];const auto& group=host.stations;
        Vec3 mean{};int count=0;
        for(const auto& ally:f.soldiers)if(ally.Active()&&ally.squad==lead&&!IsPlatoonStaff(ally)&&ally.id!=host.leader&&ally.id!=host.support){mean=mean+ally.position;++count;}
        if(!count)continue;
        const Vec3 centre=mean*(1.f/count);
        const Vec3 objective=group.serial&&Distance(group.objective,centre)<GroupConstants.axisRange?group.objective:centre;
        // His own picture and nothing else: what he has seen himself and the reports he was sent.
        const auto known=WithTracks(s,f.time);
        const Contact* near=nullptr;float range=1e9f;
        for(const auto& ct:known.contacts)if(ct.known&&Distance(ct.position,centre)<range){range=Distance(ct.position,centre);near=&ct;}
        const Vec3 sector=near?near->position:platoon.plans?platoon.sector:centre+Vec3{s.team?-30.f:30.f,0};
        const GroupAxis axis=MakeGroupAxis(s,centre,objective,sector,f.time);
        // The group's own line: its lead station is as far forward as the officer goes, its rear
        // station is what the platoon sergeant keeps behind.
        float leadRange=near?Distance(near->position,objective):0;
        Vec3 rear=objective;float rearProgress=AxisProgress(axis,objective);
        std::vector<Vec3> taken;
        for(int slot=2;slot<SquadSize;++slot) {
            const int id=lead*SquadSize+slot;
            if(!group.held[slot]||id==host.support||IsPlatoonStaff(f.soldiers[id]))continue;
            taken.push_back(group.station[slot]);
            if(near)leadRange=std::min(leadRange,Distance(near->position,group.station[slot]));
            const float progress=AxisProgress(axis,group.station[slot]);
            if(progress<rearProgress){rearProgress=progress;rear=group.station[slot];}
        }
        auto& record=f.command[s.squad].stations;
        const int slot=s.id%SquadSize,index=s.role==Role::Lieutenant?0:1;
        const bool officer=index==0;
        // A halt station at the group's objective whatever kind the group's own are: a bound's
        // geometry would seat the officer inside the riflemen's own slots, and a hold's is searched
        // around the man himself, which is how the staff came to stand in the back in the first place.
        const Vec3 anchor=officer?objective:rear-axis.direction*GroupConstants.staffBehind;
        // A new objective whose station comes out the same is the same station (3.5): while the
        // place he holds still belongs to the group's objective he keeps it and is not re-ordered,
        // so an advance that creeps forward in five-metre steps does not walk him with it.
        bool held=record.held[slot]&&record.staffLead[index]==lead&&
            (record.staffSerial[index]==group.serial||Distance(record.station[slot],anchor)<=GroupConstants.haltRadius);
        // A place he has reached and that an enemy now overlooks is given up, as a rifleman's is;
        // one he is still walking to is not re-picked under him (3.1: re-seating is where the
        // lineage's wounds come from, and a staff order in flight is worth more than a better place).
        if(held&&officer&&Distance(s.position,record.station[slot])<BoundConstants.slotArrival&&
            !StationCovered(s,map,record.station[slot],f.time))held=false;
        if(held)record.staffSerial[index]=group.serial;
        if(!held) {
            Vec3 place=anchor;
            if(!GroupStation(s,s,officer?StationKind::Halt:StationKind::Staff,anchor,sector,taken,map,f.time,place,
                officer?std::max(GroupConstants.standOff,group.standOffFloor):0.f,officer?leadRange:0.f)&&
                !ResolveOrderPosition(map,s.position,anchor,place))continue;
            record.station[slot]=place;record.held[slot]=true;record.issued[slot]=0;
            record.staffLead[index]=lead;record.staffSerial[index]=group.serial;
        }
        const Vec3 place=record.station[slot];
        const Task task=Distance(s.position,place)>.5f?Task::Advance:Task::Hold;
        const auto& sent=rt.lastSent[s.id];
        if(sent.issuer!=s.id||sent.task!=task||Distance(sent.position,place)>1.f||Distance(sent.sector,sector)>GroupConstants.sectorChange)
            send(s.id,s.id,task,place,sector);
    }
    // Useful-fire dependencies need prompt change reports, independently of the
    // periodic situation summary. Every hop still pays transport and reaction delay.
    // Plan 028 Stage 2a (Config::coverReports): Legacy uses this 0.5 s channel too, in place of the 2 s
    // relay below, with its own MessageDelay per hop and a direct reply to the man who asked for the fire.
    const bool legacyReports=config.coverReports&&!TypedController(config)&&!config.foundations&&!config.recoveryFixture;
    if(TypedController(config)||legacyReports)for(const auto& s:f.soldiers)if(s.Active()&&!IsPlatoonStaff(s)&&f.time>=rt.nextDeliveryReport[s.id]){
        rt.nextDeliveryReport[s.id]=f.time+.5f;
        const auto& cmd=f.command[s.squad];const int nco=s.squad*SquadSize+1;
        const int parent=(s.id==nco||s.id==cmd.support||(config.cognition&&s.id==cmd.accepted.localSupport)||!f.soldiers[nco].Active()||cmd.leader==nco)?cmd.leader:nco;
        for(const auto& evidence:s.deliveries)if(evidence.shooter>=0&&evidence.shooter<UnitCount&&f.time-evidence.observedAt<6){
            auto& sent=rt.sentTargetDeliveryAt[(uint64_t(s.id)*UnitCount+evidence.shooter)*(UnitCount+1)+uint64_t(evidence.enemy+1)];
            if(evidence.observedAt<=sent)continue;
            auto relay=[&](int receiver){if(receiver<0||receiver==s.id||!f.soldiers[receiver].Active())return;
                CommandMessage message;message.kind=CommandMessage::Kind::Delivery;message.sender=s.id;message.recipient=receiver;message.arrives=f.time+ReportDelay(legacyReports?MessageDelay:config.reportDelay,s);message.delivery=evidence;rt.messages.push_back(message);};
            if(s.id==cmd.leader){relay(nco);for(int other=0;other<SquadCount;++other)if(other!=s.squad&&other/SquadsPerTeam==s.team)relay(f.command[other].leader);}
            else relay(parent);
            // Reply to the maneuver's explicit request over the same delayed
            // channel as deployment status. Preserve the projectile timestamp.
            const auto& request=s.supportSector;
            if(evidence.shooter==s.id&&request.shooter==s.id&&request.requester>=0&&
                f.time-request.observedAt<=8&&request.requester!=parent&&(Distance(evidence.target,request.focus)<18||
                    std::any_of(request.threats.begin(),request.threats.end(),[&](const SupportThreat& t){return t.enemy==evidence.enemy;})))relay(request.requester);
            // Plan 028 Stage 2a: a Legacy shooter answering a covering payload reports his own rounds on
            // its threat straight to the leader who asked, as well as up his own chain.
            if(legacyReports&&evidence.shooter==s.id&&FirePayloadLive(s,f.time)&&s.assignment.fireRequester!=parent&&
                (evidence.enemy==s.assignment.fireEnemy||Distance(evidence.target,s.assignment.fireContact.position)<18||
                 (s.assignment.fireSector&&std::any_of(s.assignment.fireSector->begin(),s.assignment.fireSector->end(),[&](const SupportThreat& t){return t.enemy==evidence.enemy;}))))relay(s.assignment.fireRequester);
            sent=evidence.observedAt;
        }
    }
    for(auto& s:f.soldiers)if(s.Active()&&!IsPlatoonStaff(s)&&f.time>=rt.nextReport[s.id]) {
        rt.nextReport[s.id]=f.time+2;
        auto& cmd=f.command[s.squad];int nco=s.squad*SquadSize+1;
        int parent=(s.id==nco||s.id==cmd.support||(config.cognition&&s.id==cmd.accepted.localSupport)||!f.soldiers[nco].Active()||cmd.leader==nco)?cmd.leader:nco;
        if(!config.recoveryFixture&&!config.foundations&&cmd.leader>=0&&s.id!=cmd.leader&&
            (s.assignment.task==Task::Advance||s.assignment.task==Task::Flank||s.assignment.task==Task::BoundMove)&&
            (s.reason==Reason::EmergencyCover||s.reason==Reason::ProtectedHold||s.reason==Reason::Suppressed||s.reason==Reason::Prone)&&
            Distance(s.position,s.assignment.position)>3) {
            CommandMessage message;message.kind=CommandMessage::Kind::Movement;message.sender=s.id;message.recipient=cmd.leader;
            message.failedMove={s.id,s.assignment.serial,s.assignment.position,f.time};message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);rt.messages.push_back(message);
        }
        if(s.blockedSeconds>=1&&(s.holdingFire||f.time-s.lastBlockedAt<4))
            s.blockedLanes[s.id]={s.position,s.aimPoint,ShotSpread(s),f.time};
        auto relayLanes=[&](int receiver) {
            if(receiver<0||receiver==s.id||!f.soldiers[receiver].Active())return;
            for(int shooter=0;shooter<UnitCount;++shooter) {
                const auto& lane=s.blockedLanes[shooter];
                if(f.time-lane.observedAt>8||lane.observedAt<=f.soldiers[receiver].blockedLanes[shooter].observedAt)continue;
                CommandMessage message;message.kind=CommandMessage::Kind::Lane;message.sender=s.id;message.recipient=receiver;
                message.subject=shooter;message.fireLane=lane;message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);rt.messages.push_back(message);
            }
        };
        if(s.id==cmd.leader) {
            relayLanes(nco);
            for(int other=0;other<SquadCount;++other)if(other!=s.squad&&other/SquadsPerTeam==s.team)relayLanes(f.command[other].leader);
        } else relayLanes(parent);
        auto relayFire=[&](int receiver){if(receiver<0||receiver==s.id)return;for(const auto& e:s.deliveries)if(e.shooter>=0&&f.time-e.observedAt<(config.recoveryFixture?10.f:6.f)){CommandMessage m;m.kind=CommandMessage::Kind::Delivery;m.sender=s.id;m.recipient=receiver;m.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);m.delivery=e;rt.messages.push_back(m);}};
        if(!TypedController(config)&&!legacyReports){if(s.id==cmd.leader){relayFire(nco);for(int other=0;other<SquadCount;++other)if(other!=s.squad&&other/SquadsPerTeam==s.team)relayFire(f.command[other].leader);}
        else relayFire(parent);}
        if(s.id==cmd.leader||parent<0||parent==s.id)continue;
        for(const auto& area:s.fireAreas)if(area.intensity>0&&f.time-area.observedAt<=18) {
            CommandMessage message;message.kind=CommandMessage::Kind::Fire;message.sender=s.id;message.recipient=parent;
            message.fireArea=area;message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);rt.messages.push_back(message);
        }
        for(const auto& friendUnit:f.soldiers)if(friendUnit.squad==s.squad&&KnowsWounded(s,friendUnit)&&!f.soldiers[parent].knownWounded[friendUnit.id]) {
            CommandMessage message;message.kind=CommandMessage::Kind::Wound;message.sender=s.id;message.recipient=parent;
            message.subject=friendUnit.id;message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);rt.messages.push_back(message);
        }
        const auto knowledge=WithTracks(s,f.time);
        for(int enemy=0;enemy<UnitCount;++enemy) {
            const auto& ct=knowledge.contacts[enemy];
            if((!ct.known&&ct.clearedAt<=-100)||f.time-std::max(ct.observedAt,ct.clearedAt)>120)continue;
            CommandMessage message;message.kind=CommandMessage::Kind::Contact;message.sender=s.id;message.recipient=parent;
            message.enemy=enemy;message.contact=ct;message.contact.visible=false;message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);rt.messages.push_back(message);
        }
        if(s.id==cmd.support&&cmd.leader>=0) {
            CommandMessage message;message.kind=CommandMessage::Kind::Ready;message.sender=s.id;message.recipient=cmd.leader;
            message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,s);
            // Local shelter/peek corrections can move a deployed gun away from its
            // original coordinate. Report actual deployment; the officer verifies the angle.
            message.ready=(s.assignment.task==Task::Overwatch||s.assignment.task==Task::RearGuard||s.assignment.task==Task::Hold)&&
                (s.action==Action::Fire||s.action==Action::Hold)&&s.waitingPassage<0&&s.suppression<0.72f;
            message.rounds=s.rounds;message.blocked=s.holdingFire||(s.blockedSeconds>=1&&f.time-s.lastBlockedAt<4);message.supportPosition=s.position;
            for(const auto& ct:knowledge.contacts)if(ct.known&&ct.observedAt>message.contact.observedAt)message.contact=ct;
            rt.messages.push_back(message);
        }
    }
    for(int team=0;team<SquadCount;++team) {
        auto& cmd=f.command[team];
        cmd.supportReady=cmd.leader>=0&&f.time-f.soldiers[cmd.leader].supportReadyAt<4;
        if(cmd.leader<0)continue;
        const Map& knownMap=rt.geometryViews?(*rt.geometryViews)[cmd.leader]:map;
        if(team/SquadsPerTeam!=rt.fixedDefender&&!cmd.advancing&&(cmd.supportReady||f.time-rt.startedAt[team]>28)) {
            cmd.advancing=true;rt.nextPlan[team]=0;
            log(EventKind::OrderIssued,cmd.leader,-1,std::string(Name(cmd.leader))+(cmd.supportReady?": overwatch ready, rifle group advance":": support delayed, rifle group advance cautiously"));
        }
        if(config.recoveryFixture&&team/SquadsPerTeam!=rt.fixedDefender){
            std::vector<Soldier> friends;for(const auto& s:f.soldiers)if(s.squad==team&&!IsPlatoonStaff(s))friends.push_back(s);
            for(const auto& order:UpdateRecoveryDrill(f.soldiers[cmd.leader],friends,knownMap,config,cmd,f.time,rt.diagnostics)){
                send(cmd.leader,order.recipient,order.task,order.position,order.sector,order.teamPlan,order.hasSlot?&order.slot:nullptr);
                cmd.drill.expected[order.recipient%SquadSize]=rt.lastSent[order.recipient].id;
                cmd.drill.issuedSlots[order.recipient%SquadSize]=rt.lastSent[order.recipient].position;
            }
            if(cmd.drill.selected&&cmd.route&&cmd.support>=0&&f.time>=rt.nextSupportSector[team]){
                rt.nextSupportSector[team]=f.time+2;
                CommandMessage message;message.kind=CommandMessage::Kind::SupportSector;message.sender=cmd.leader;message.recipient=cmd.support;
                message.arrives=f.time+ReportDelay(TypedController(config)?config.reportDelay:MessageDelay,f.soldiers[cmd.leader]);message.supportSector=AssaultSupportSector(f.soldiers[cmd.leader],cmd,knownMap,f.time);
                rt.messages.push_back(message);
                TraceProposal(rt.diagnostics,f.soldiers[cmd.leader],cmd,knownMap,f.time,"support_sector_sent",std::string(message.supportSector.lifted?"lift sector: ":"prioritize threats overlooking assault slots: ")+std::to_string(message.supportSector.threats.size())+" known tracks");
            }
            continue; // This controller owns destinations; no legacy maneuver or corporal formation refresh.
        }
        const bool changedKnowledge=rt.plannedKnowledge[team]!=f.soldiers[cmd.leader].knowledgeRevision;
        uint64_t taskRevision=0;
        if(TypedController(config)){const auto& officer=f.soldiers[cmd.leader];
            for(const auto& receipt:officer.taskReports){
                // Positional progress informs an injury capability check, but is
                // not a new completion or failure. Do not let ordinary movement
                // heartbeats postpone the regular execution assessment cadence.
                const bool capability=receipt.soldier>=0&&receipt.soldier<UnitCount&&KnowsWounded(officer,f.soldiers[receipt.soldier]);
                taskRevision=taskRevision*131+receipt.serial*31+int(receipt.status)*17+int(receipt.cause)*7+(capability?receipt.sequence:0);
            }
        }
        const bool changedTask=TypedController(config)&&taskRevision!=rt.plannedTasks[team];
        const auto& receivedDirective=f.soldiers[cmd.leader].platoonOrder;
        const bool changedFireControl=config.drills&&receivedDirective.serial>cmd.platoonOrderSerial&&f.time<receivedDirective.expiresAt&&
            (receivedDirective.liftFire!=cmd.battleDrill.platoonLift||(receivedDirective.liftFire&&Distance(receivedDirective.assaultLane.target,cmd.battleDrill.acceptedDirective.assaultLane.target)>.01f));
        bool lateralLift=false;
        if(config.drills&&!cmd.battleDrill.action.lifted)for(const auto& radio:f.soldiers[cmd.leader].squadRadio)
            lateralLift|=radio.kind==SquadBroadcastKind::PhaseLine&&radio.squad==cmd.battleDrill.radioLeadSquad&&
                Distance(radio.objective,cmd.battleDrill.action.objective)<40;
        // A received safety permission wakes the squad; it still traverses the
        // normal member-order transport and reaction pipeline.
        if(changedFireControl||lateralLift||f.time+(TypedController(config)?.001f:0.f)>=rt.nextPlan[team]||(changedKnowledge&&f.time-rt.lastPlanAt[team]>=1)||(changedTask&&f.time-rt.lastPlanAt[team]>=.25f)) {
            rt.plannedTasks[team]=taskRevision;
            rt.lastPlanAt[team]=f.time;rt.plannedKnowledge[team]=f.soldiers[cmd.leader].knowledgeRevision;
            rt.nextPlan[team]=f.time+(TypedController(config)?1.f:cmd.opportunitySince>=0?1.f:cmd.hasWaypoint||cmd.fm.kind!=FmKind::None?2.f:8.f);
            if(team/SquadsPerTeam==rt.fixedDefender){
                cmd.advancing=false;cmd.hasWaypoint=false;cmd.teamPlan={};cmd.phase=SquadPhase::HoldSuppress;
                for(const auto& s:f.soldiers)if(s.squad==team&&s.Active()&&!IsPlatoonStaff(s))send(cmd.leader,s.id,s.machineGun?Task::Overwatch:Task::Hold,s.position,s.position+Vec3{-30,0});
                continue;
            }
            std::vector<Soldier> friends;
            for(const auto& s:f.soldiers)if(s.squad==team&&!IsPlatoonStaff(s))friends.push_back(s);
            std::vector<Vec3> approaches;
            for(int other=0;other<SquadCount;++other)if(other!=team&&other/SquadsPerTeam==team/SquadsPerTeam&&f.command[other].hasWaypoint)approaches.push_back(f.command[other].waypoint);
            std::vector<int> claimed;
            for(int other=0;other<SquadCount;++other)if(other!=team&&other/SquadsPerTeam==team/SquadsPerTeam&&f.command[other].building>=0)claimed.push_back(f.command[other].building);
            UpdateSquadPlan(f.soldiers[cmd.leader],friends,knownMap,config,approaches,claimed,cmd,rt.progress[team],rt.diagnostics,f.time);
            // Plan 028 Stage 0: truth (obs_*) for the covering_check rows this plan just wrote. Diagnostics only.
            if(rt.diagnostics&&rt.diagnostics->options.enabled)TraceCoveringTruth(rt.diagnostics,f,map,team,cmd.support);
            rt.nextPlan[team]=f.time+(TypedController(config)?1.f:cmd.opportunitySince>=0?1.f:cmd.hasWaypoint||cmd.fm.kind!=FmKind::None?2.f:8.f);
            for(const auto& order:PlanSquad(f.soldiers[cmd.leader],friends,knownMap,config,cmd,f.time,rt.diagnostics)){
                const CoverRequest* fire=order.fire?GunCoverRequest(config,cmd,f.time):nullptr;
                send(cmd.leader,order.recipient,order.task,order.position,order.sector,order.teamPlan,order.hasSlot?&order.slot:nullptr,order.execution,order.pace,
                    fire,fire&&payloadDue(order.recipient,*fire),order.fm);
                if(config.drills)cmd.battleDrill.expected[order.recipient%SquadSize]=rt.lastSent[order.recipient].id;
                if(config.cognition)cmd.accepted.expected[order.recipient%SquadSize]=rt.lastSent[order.recipient].id;
            }
        }
        if(config.cognition&&(cmd.accepted.requiresSupport||cmd.accepted.method==CognitiveMethod::SupportedAdvance||cmd.accepted.method==CognitiveMethod::AlternateApproach)&&cmd.accepted.support>=0&&f.time>=rt.nextSupportSector[team]){
            rt.nextSupportSector[team]=f.time+1;
            CommandMessage message;message.kind=CommandMessage::Kind::SupportSector;message.sender=cmd.leader;message.recipient=cmd.accepted.support;
            message.arrives=f.time+ReportDelay(config.reportDelay,f.soldiers[cmd.leader]);message.supportSector.requester=cmd.leader;message.supportSector.stage=cmd.accepted.routeStage;message.supportSector.shooter=cmd.accepted.support;message.supportSector.focus=SupportDeploymentSector(cmd.accepted,f.soldiers[cmd.leader],f.time);message.supportSector.route=cmd.accepted.route?cmd.accepted.route->id:0;message.supportSector.observedAt=f.time;
            auto knowledge=WithTracks(f.soldiers[cmd.leader],f.time);
            for(int id=0;id<UnitCount;++id)if(knowledge.contacts[id].known&&
                (id==cmd.accepted.requestedThreat||id==cmd.accepted.supportThreat||Distance(knowledge.contacts[id].position,cmd.accepted.sector)<(cmd.accepted.supportThreat>=0?4.f:18.f)))message.supportSector.threats.push_back({id,knowledge.contacts[id]});
            // The leader communicates friendly formation state and accepted intent.
            // The gun receives this after transport; it never reads the moving squad.
            for(const auto& member:f.soldiers)if(member.squad==team&&member.Active()&&(cmd.accepted.movers[member.id%SquadSize]||member.id==cmd.accepted.localSupport)){
                int index=member.id%SquadSize;
                message.supportSector.friendlies.push_back({member.id,member.position,member.id==cmd.accepted.localSupport?cmd.accepted.localPosition:cmd.accepted.hasSlot[index]?cmd.accepted.slots[index].peek:cmd.accepted.positions[index],f.time});
            }
            rt.messages.push_back(message);
            int supportLeader=f.command[cmd.accepted.support/SquadSize].leader;
            if(supportLeader>=0&&supportLeader!=cmd.leader&&supportLeader!=cmd.accepted.support){message.recipient=supportLeader;rt.messages.push_back(message);}
        }
        // Foundations goals are assigned to every member by PlanSquad. The old
        // periodic corporal formation writer must not replace those destinations.
        if(config.foundations)continue;
        // The static defenders are placed by the fixed-defender branch above and by nothing else:
        // they hold their authored slot and never manoeuvre. The relay below is the rifle group's,
        // and its firing-position search used to reach them too (the shared clamp then threw the
        // order away, but a defender could still be sent shelter-to-peek by it).
        if(team/SquadsPerTeam==rt.fixedDefender)continue;
        std::vector<Soldier> squad;std::vector<Vec3> rearReservations;
        for(const auto& s:f.soldiers)if(s.squad==team&&!IsPlatoonStaff(s))squad.push_back(s);
        // Plan 018 gen18b: this relay used to be fixed to the corporal's own slot, so a wounded
        // corporal who had not yet been ordered to the rear kept steering the rest of the rifle
        // group toward him (the regroup mean, the lagging test, the halt anchor) all the way
        // there. It now runs from whoever currently leads the rifle group.
        // Plan 023 A (3.8): the relay never goes dark. It runs from whoever leads the rifle group
        // and, when nobody in it can lead any more, from the squad's own officer, through the same
        // record and the same allocator as PlanSquad's fallback: one code path, no grid with no
        // call-up rule behind it.
        const Soldier* ncoPtr=RifleGroupLeader(f.soldiers[cmd.leader],squad,cmd.support);
        const int own=ncoPtr?ncoPtr->id:cmd.leader;
        // Plan 023 E3: a merged squad's men are placed by the HOST's rifle group leader, out of
        // THEIR own station record (one record per squad, so no slot is ever claimed twice) and
        // with the host's stations already taken. Their own leader does not place them; the cadence
        // stays this squad's own, so the host's relay cycle is not consumed twice.
        int nco=own;std::vector<Vec3> hostTaken;
        const int mergeHost=cmd.mergedInto;
        if(mergeHost>=0&&mergeHost/SquadsPerTeam==team/SquadsPerTeam&&f.command[mergeHost].leader>=0) {
            const auto& host=f.command[mergeHost];
            std::vector<Soldier> hostSquad;for(const auto& s:f.soldiers)if(s.squad==mergeHost&&!IsPlatoonStaff(s))hostSquad.push_back(s);
            const Soldier* lead=RifleGroupLeader(f.soldiers[host.leader],hostSquad,host.support);
            if(lead){nco=lead->id;for(int j=0;j<SquadSize;++j)if(host.stations.held[j])hostTaken.push_back(host.stations.station[j]);}
        }
        auto& sergeant=f.soldiers[nco];
        const Soldier& woundRef=nco==own?sergeant:f.soldiers[cmd.leader];
        if(sergeant.assignment.task==Task::None||f.time<rt.nextNco[own])continue;
        rt.nextNco[own]=f.time+2;
        if(sergeant.assignment.task==Task::RearGuard){sergeant.regrouping=false;continue;}
        Vec3 mean{};int count=0;
        for(int i=team*SquadSize+2;i<(team+1)*SquadSize;++i)if(i!=cmd.support&&i!=nco&&f.soldiers[i].Active()&&!IsPlatoonStaff(f.soldiers[i])&&!KnowsWounded(woundRef,f.soldiers[i])&&!InWindowTeam(sergeant.assignment.teamPlan,i)) {mean=mean+f.soldiers[i].position;++count;}
        // The corporal leading a leader-ordered manoeuvre (Flank/PullBack/BoundMove) is the point of
        // the advance, not the formation anchor; forcing him to Hold on his own committed order so he
        // can "regroup" with stragglers he cannot help move just stalls the manoeuvre forever.
        const bool committedManeuver=sergeant.assignment.task==Task::Flank||sergeant.assignment.task==Task::PullBack||sergeant.assignment.task==Task::BoundMove;
        const Vec3 centre=count?mean*(1.f/count):sergeant.position;
        // Plan 023 A (3.1): the group's objective, and its identity. A running bound owns its
        // destination; a group holding in contact fights where it stands; anything else is a halt
        // on the place the leader was ORDERED to, never on the leader as he walks. The stations
        // are laid out once per objective and the objective changes only when it really has.
        auto& st=cmd.stations;
        // A running bound owns its destination (plan 021 A) whatever the switch. Otherwise, with
        // config.orderPace on, the kind and the objective are the plan's own, fixed when the
        // leader was given his order (3.6): the relay issues them, it does not re-derive them from
        // the order he happens to be carrying. Off, or before PlanSquad has ever fixed one
        // (objectiveAt still unset: a squad whose planning is held off, as some mechanism fixtures
        // do to isolate the relay), this reproduces stage B2's own continuous re-derivation from
        // the leader's live order exactly, which --no-order-pace needs and a bare relay still works
        // without one plan cycle ever having run.
        const bool bootstrap=!config.orderPace||st.objectiveAt<0;
        StationKind kind;Vec3 objective;
        if(st.bound){kind=cmd.hasWaypoint||sergeant.assignment.task!=Task::Hold?StationKind::Bound:StationKind::Hold;objective=st.objective;}
        else if(!bootstrap){kind=st.kind;objective=st.objective;}
        else {kind=sergeant.assignment.task==Task::Hold?StationKind::Hold:StationKind::Halt;objective=sergeant.assignment.position;}
        if(st.kind!=kind||(!st.bound&&bootstrap&&Distance(st.objective,objective)>GroupConstants.anchorMove)){st.kind=kind;st.objective=objective;++st.serial;}
        // Plan 023 B (3.2): the axis, and where the group's line lies along it. The rear-most
        // station is what a man can be behind; the lead station (the leader's own ordered place
        // until stage C gives him one of his own) is what he can be ahead of.
        const GroupAxis axis=MakeGroupAxis(sergeant,centre,objective,sergeant.assignment.sector,f.time);
        // The line is the objective's own neighbourhood: a station a man has taken up away from it
        // (a hold where he fights, a place won in front) is not what the rest of the group is
        // measured against, or the man farthest back would define "behind" as where he stands.
        float rear=AxisProgress(axis,objective),lead=AxisProgress(axis,sergeant.assignment.position);
        for(int j=0;j<SquadSize;++j)if(st.held[j]&&st.issued[j]==st.serial&&Distance(st.station[j],objective)<=GroupConstants.haltRadius){
            const float p=AxisProgress(axis,st.station[j]);rear=std::min(rear,p);lead=std::max(lead,p);}
        // The leader waits for men who are BEHIND him on the axis, not for men who are merely far
        // away: a group that has pushed past him is not a group to regroup with (stage A round 1).
        sergeant.regrouping=!committedManeuver&&!sergeant.assignment.teamPlan.bounding&&count>0&&
            AxisProgress(axis,centre)<AxisProgress(axis,sergeant.position)-GroupConstants.behindMargin;
        // Plan 023 C (3.7, user ruling 2, behind config.orderPace): when the group leaves a
        // position in contact, at most coverPair men whose ground bears on an enemy it knows stay
        // and fire on him; they follow when the group has arrived or after coverPairSeconds.
        // Nobody stays without a line of fire, and while they cover the call-up of 3.3 leaves them
        // alone. The pair is the two nearest the enemy they can see, by roster slot on a tie: no
        // draw is made. Off, leaving is never true, so nobody is ever picked to cover, which is
        // what --no-order-pace needs to reproduce stage B2 exactly.
        // Plan 028 Stage 1 (Config::coverRequests): the squad's live covering request and who it tasked.
        const auto& request=cmd.coverRequest;
        const bool requestLive=config.coverRequests&&!config.recoveryFixture&&CoverRequestLive(request,f.time);
        if(st.serial!=st.coverSerial) {
            const bool leaving=config.orderPace&&st.coverSerial&&cmd.engaged&&kind!=StationKind::Hold;
            const bool tasked=config.orderPace&&st.coverSerial&&kind!=StationKind::Hold&&requestLive;
            st.coverSerial=st.serial;st.covering.fill(false);st.coverUntil=-1;
            // Plan 028 Stage 1: while a covering request is live the men it tasked (stationary, already
            // bearing on its threat) are the pair, set against that threat; the rest of the rule is unchanged.
            int requested=0;
            if(tasked)for(int i=team*SquadSize+2;i<(team+1)*SquadSize&&requested<GroupConstants.coverPair;++i) {
                const int slot=i%SquadSize;const auto& man=f.soldiers[i];
                if(!request.tasked[slot]||i==cmd.support||i==nco||!man.Active()||IsPlatoonStaff(man)||KnowsWounded(woundRef,man))continue;
                st.covering[slot]=true;st.coverSector[slot]=RequestTrack(request,slot).position;st.coverUntil=f.time+GroupConstants.coverPairSeconds;++requested;
            }
            if(leaving&&!requested) {
                std::array<float,SquadSize> rank{};rank.fill(1e9f);
                for(int i=team*SquadSize+2;i<(team+1)*SquadSize;++i) {
                    const int slot=i%SquadSize;const auto& man=f.soldiers[i];
                    if(i==cmd.support||i==nco||!man.Active()||IsPlatoonStaff(man)||KnowsWounded(woundRef,man))continue;
                    if(!st.held[slot]||Distance(man.position,st.station[slot])>BoundConstants.slotArrival)continue;
                    if(!StationBears(sergeant,(rt.geometryViews?(*rt.geometryViews)[nco]:map),man.position,f.time))continue;
                    float nearest=1e9f;const auto known=WithTracks(sergeant,f.time);
                    for(const auto& ct:known.contacts)if(ct.known&&Distance(ct.position,man.position)<nearest){nearest=Distance(ct.position,man.position);st.coverSector[slot]=ct.position;}
                    rank[slot]=nearest;
                }
                for(int taken=0;taken<GroupConstants.coverPair;++taken) {
                    int best=-1;
                    for(int slot=0;slot<SquadSize;++slot)if(rank[slot]<1e9f&&(best<0||rank[slot]<rank[best]))best=slot;
                    if(best<0)break;
                    st.covering[best]=true;rank[best]=1e9f;st.coverUntil=f.time+GroupConstants.coverPairSeconds;
                }
            }
        }
        Vec3 forwardSum{};int forwardCount=0;
        // Plan 023 B2: what the relay may not send a man inside of this cycle. The forward men's
        // own range is the floor: the group extends the line beside and behind them, never past.
        const float standOff=std::max(GroupConstants.standOff,st.standOffFloor);
        for(int i=team*SquadSize+2;i<(team+1)*SquadSize;++i)if(i!=cmd.support&&i!=nco&&f.soldiers[i].Active()&&!IsPlatoonStaff(f.soldiers[i])) {
            if(KnowsWounded(woundRef,f.soldiers[i])) {
                Vec3 rearPlace=RearPosition(woundRef,f.soldiers[i],squad,rt.geometryViews?(*rt.geometryViews)[nco]:map,f.time,rearReservations);rearReservations.push_back(rearPlace);
                // Plan 031 D: a man going to the rear waits for the gun too (the leader's marker; none when off).
                send(nco,i,Task::RearGuard,rearPlace,sergeant.assignment.sector,TeamPlan{},nullptr,ExecutionContract{},1.f,nullptr,false,FmGroupMarker(cmd));continue;
            }
            const auto& directive=sergeant.assignment.teamPlan;
            if(InWindowTeam(directive,i)||directive.bounding) {
                auto order=TeamOrder(f.soldiers[i],directive,sergeant.assignment.sector);
                Task childTask=InWindowTeam(directive,i)?Task::Window:order.action==Action::Advance?Task::BoundMove:Task::BoundCover;
                Vec3 clear=ClearReportedFireLane(sergeant,f.soldiers[i],order.goal,rt.geometryViews?(*rt.geometryViews)[nco]:map,f.time);
                const Task sent=Distance(clear,order.goal)>0.5f?Task::ClearLane:childTask;
                // Plan 028 Stage 1: a ready BoundCover man, or a tasked one holding a window, answers the request.
                const int slot=i%SquadSize;
                const bool fires=requestLive&&((sent==Task::BoundCover&&(request.boundCover[slot]||request.tasked[slot]))||(sent==Task::Window&&request.tasked[slot]));
                // Plan 031 D: the group's orders carry its leg or hold spell, as the leader planned it (the relay reads his plan,
                // as it reads his covering request); none when off.
                const FireMovementOrder leg=FmGatedTask(childTask)?FmGroupMarker(cmd):FireMovementOrder{};
                send(nco,i,sent,clear,sergeant.assignment.sector,directive,nullptr,ExecutionContract{},1.f,fires?&request:nullptr,fires&&payloadDue(i,request),leg);continue;
            }
            const Map& relayMap=rt.geometryViews?(*rt.geometryViews)[nco]:map;
            const auto& man=f.soldiers[i];const int slot=i%SquadSize;
            // Plan 023 B (3.2/3.3): where he stands along the group's axis, and whether he has
            // anything to do. Idle is the plan's: no shot of his own, no fire solution, not under
            // effective fire. Raw distance to the leader is gone from the relay.
            const float progress=AxisProgress(axis,man.position);
            const bool behind=progress<rear-GroupConstants.behindMargin;
            const bool ahead=progress>lead+GroupConstants.aheadMargin;
            const bool idle=f.time-man.lastShotAt>GroupConstants.callUpSeconds&&
                man.understoodSuppression<BoundConstants.stragglerSuppression&&
                SelectFireSolution(man,relayMap,f.time).enemy<0;
            // Plan 023 C (3.7): the covering pair holds what it has and keeps firing until the
            // group is in or the ten seconds are up; then it takes its place at the new objective.
            // Plan 028 Stage 4 (Config::coverShift): a covering man shifted for the request covers from the
            // place he was shifted to, not from wherever he stands on the way there.
            const bool shiftCover=requestLive&&config.coverShift&&request.shift[slot];
            const Vec3 coverPlace=shiftCover?request.shiftTo[slot]:man.position;
            if(st.covering[slot]) {
                const bool arrived=AxisProgress(axis,centre)>=AxisProgress(axis,objective)-GroupConstants.aheadMargin;
                if(f.time>=st.coverUntil||arrived||!StationBears(sergeant,relayMap,coverPlace,f.time)){st.covering[slot]=false;st.issued[slot]=0;}
                else {st.station[slot]=coverPlace;st.held[slot]=true;st.issued[slot]=st.serial;st.behindSince[slot]=-1;}
            }
            // Plan 023 A (3.1): a station is given up only for the plan's reasons. When it goes,
            // he is given another AT ONCE: stage A left him standing on ground it had just judged
            // exposed (long exposed spells 0.47 to 1.53 a battle), which is where its extra losses
            // came from: the same fire, but finishing off men who had nowhere to be.
            if(st.held[slot]&&st.issued[slot]==st.serial&&!StationValid(sergeant,man,squad,relayMap,st,slot,f.time)){st.held[slot]=false;st.issued[slot]=0;}
            // Plan 021 A4 / 023 A: a station of a group in contact is a fighting position only
            // while it bears on an enemy the squad knows. A man who is firing or under fire is
            // never uprooted for it: he is fighting where he is.
            const bool fighting=man.machineGun||man.understoodSuppression>GroupConstants.holdSuppression||
                f.time-man.lastShotAt<GroupConstants.firedSeconds;
            // Plan 028 Stage 4 (Config::coverShift): the place he was shifted to is kept for this objective (its
            // cover bears from its edge, which a point test from the shelter does not see).
            const bool stickyShift=config.coverShift&&st.held[slot]&&st.issued[slot]==st.serial&&st.shiftSerial[slot]==st.serial&&
                Distance(st.station[slot],st.shiftPlace[slot])<.1f;
            if(kind==StationKind::Hold&&st.held[slot]&&!fighting&&!stickyShift&&
                !StationBears(sergeant,relayMap,st.station[slot],f.time)){st.held[slot]=false;st.issued[slot]=0;}
            // Plan 023 B (3.3): a man who is AHEAD keeps what he has won, if it is a real position:
            // forward on the axis, protected from the enemy the group knows, and bearing on him
            // (generation 17: under a careless rule none of nine "forward holders" had a line).
            // Ahead with no line, he is given the nearest bearing place around HIM, never sent back.
            st.forward[slot]=false;
            // Only ground he is actually standing on becomes his station: a walking man's place
            // is not a position, and following him with it would issue an order a cycle.
            if(ahead&&man.action!=Action::Advance) {
                const bool bears=StationBears(sergeant,relayMap,man.position,f.time);
                const bool covered=StationCovered(sergeant,relayMap,man.position,f.time);
                if(bears&&(covered||fighting)) {
                    st.station[slot]=man.position;st.held[slot]=true;st.issued[slot]=st.serial;
                    st.forward[slot]=bears&&covered;
                } else if(!fighting&&st.issued[slot]!=st.serial) {
                    std::vector<Vec3> taken=hostTaken;
                    for(int j=0;j<SquadSize;++j)if(j!=slot&&st.held[j]&&st.issued[j]==st.serial)taken.push_back(st.station[j]);
                    Vec3 place{};
                    if(GroupStation(sergeant,man,StationKind::Hold,man.position,sergeant.assignment.sector,taken,relayMap,f.time,place,standOff)) {
                        st.station[slot]=place;st.held[slot]=true;st.issued[slot]=st.serial;
                    }
                }
            }
            // Plan 028 Stage 4 (Config::coverShift): a rifleman the leader shifted to a covered place with a
            // line onto the request's threat holds that place as his station while the request lives.
            const bool shifted=shiftCover&&!st.covering[slot];
            if(shifted){st.station[slot]=request.shiftTo[slot];st.held[slot]=true;st.issued[slot]=st.serial;st.forward[slot]=false;
                if(st.shiftSerial[slot]!=st.serial||Distance(st.shiftPlace[slot],request.shiftTo[slot])>.1f){st.shiftedAt[slot]=f.time;st.shiftArrived[slot]=false;}
                st.shiftSerial[slot]=st.serial;st.shiftPlace[slot]=request.shiftTo[slot];}
            if(config.coverShift&&st.shiftSerial[slot]==st.serial&&!st.shiftArrived[slot]&&st.shiftedAt[slot]>=0&&Distance(man.position,st.shiftPlace[slot])<1.5f){st.shiftArrived[slot]=true;
                if(rt.diagnostics&&rt.diagnostics->options.enabled){std::ostringstream o;o<<std::setprecision(6)<<",\"man\":"<<i<<",\"shifted_at\":"<<st.shiftedAt[slot];
                    TraceCoverSupply(rt.diagnostics,f.soldiers[cmd.leader],cmd,f.time,"cover_shift","arrived",o.str());}}
            // Plan 030 M-S5 (Config::coverRifleBase): a rifleman taken as the rifle base of fire holds the cover he is
            // in as his station while the request lives: he is the base of fire from there, never sent to another place.
            if((config.coverRifleBase||CoverSector(config))&&requestLive&&!shifted&&request.tasked[slot]&&request.rifleBase[slot]&&man.action!=Action::Advance&&
                (!st.held[slot]||Distance(st.station[slot],man.position)>BoundConstants.slotArrival)){st.station[slot]=man.position;st.held[slot]=true;st.issued[slot]=st.serial;st.forward[slot]=false;}
            const bool keepShift=shifted||(stickyShift&&st.issued[slot]==st.serial&&Distance(st.station[slot],st.shiftPlace[slot])<.1f);
            if(st.issued[slot]!=st.serial) {
                Vec3 place{};bool got=false;
                // A man who is firing, under fire or just seated keeps the place he has, and so
                // does one whose own ground bears on the enemy: his place becomes his station.
                if(kind==StationKind::Hold) {
                    if(fighting||StationBears(sergeant,relayMap,man.position,f.time)){place=man.position;got=true;}
                    else if(man.assignment.task==Task::Overwatch&&f.time-man.assignment.activatedAt<GroupConstants.seatedSeconds){place=man.assignment.position;got=true;}
                }
                if(!got) {
                    std::vector<Vec3> taken=hostTaken;
                    if(kind!=StationKind::Hold)taken.push_back(objective);
                    for(int j=0;j<SquadSize;++j)if(j!=slot&&st.held[j]&&st.issued[j]==st.serial)taken.push_back(st.station[j]);
                    got=GroupStation(sergeant,man,kind,objective,sergeant.assignment.sector,taken,relayMap,f.time,place,standOff);
                }
                // Holding in contact, the ground he is on is his station when nothing better is
                // within reach: a station is a fixed point, and "wherever he stands" is not one.
                if(!got&&kind==StationKind::Hold){place=man.position;got=true;}
                st.held[slot]=got;if(got)st.station[slot]=place;
                st.issued[slot]=st.serial;
            }
            if(st.forward[slot]){forwardSum=forwardSum+man.position;++forwardCount;}
            // The grid offset survives only as the last resort, on the objective, which no longer
            // moves under the man: it is a fixed point like any other station.
            const Vec3 grid=objective+Vec3{(sergeant.team?1.f:-1.f)*float(i%2)*2.5f,float(slot-4)*2.4f};
            Vec3 target=st.held[slot]?st.station[slot]:kind==StationKind::Hold?man.position:grid;
            // Plan 023 B (3.3): behind and idle for callUpSeconds, and not already on his way
            // there, he is called up to HIS STATION, once. This is the whole call-up rule: the
            // lagging test, the rally to the leader's live position and the 40 m straggler rule
            // are gone with it, whatever task label he happens to idle under. "On his way" is
            // about the place he is walking to, not about holding a station: a man with no
            // covered station is walking to his place in the group like everybody else.
            const bool onHisWay=AttackMovementTask(man.assignment.task)&&Distance(man.assignment.position,target)<2.f;
            // Plan 023 C (3.7): the covering pair is left alone by the call-up while it covers.
            if(behind&&!ahead&&idle&&!onHisWay&&!st.covering[slot]&&!keepShift){if(st.behindSince[slot]<=0)st.behindSince[slot]=std::max(f.time,.001f);}
            else st.behindSince[slot]=-1;
            const bool called=st.behindSince[slot]>0&&f.time-st.behindSince[slot]>=GroupConstants.callUpSeconds;
            // He is called up to a place WITH THE GROUP. Under a hold objective his station is the
            // patch he is fighting from (3.1), so calling him up to it would be a no-op order.
            if(called&&Distance(target,objective)>GroupConstants.haltRadius&&kind!=StationKind::Bound) {
                std::vector<Vec3> taken=hostTaken;taken.push_back(objective);
                for(int j=0;j<SquadSize;++j)if(j!=slot&&st.held[j]&&st.issued[j]==st.serial)taken.push_back(st.station[j]);
                Vec3 place=objective;
                GroupStation(sergeant,man,StationKind::Halt,objective,sergeant.assignment.sector,taken,relayMap,f.time,place,standOff);
                st.station[slot]=place;st.held[slot]=true;st.issued[slot]=st.serial;target=place;
            }
            // A shifted man holds the cover he was given (his order names it: he takes its firing edge).
            const Task want=keepShift?Task::Hold:st.covering[slot]?(Distance(target,man.position)>.5f?Task::Overwatch:Task::Hold):
                called?Task::Rally:kind==StationKind::Hold?
                (Distance(target,man.position)>.5f?Task::Overwatch:Task::Hold):sergeant.assignment.task;
            // Plan 023 B (3.4): a forward man who is the group's foothold is told to watch the
            // enemy overlooking the way up, so that his rounds are the covering fire the crossing
            // waits on. Nothing else about his order changes: he is never recalled across it.
            // Plan 023 C (3.7): a covering man is told to watch the enemy he was kept against, not
            // the group's general sector, so his rounds are aimed fire and not a wide watch.
            const Vec3 sector=st.covering[slot]?st.coverSector[slot]:shifted?request.contact.position:st.foothold&&st.forward[slot]?st.footholdSector:sergeant.assignment.sector;
            Vec3 clear=ClearReportedFireLane(sergeant,man,target,relayMap,f.time);
            const Task task=Distance(clear,target)>0.5f?Task::ClearLane:want;
            // Plan 031 D: the group's orders carry its leg or hold spell, as the leader planned it; none when off.
            const FireMovementOrder leg=FmGatedTask(want)?FmGroupMarker(cmd):FireMovementOrder{};
            // Plan 023 A (3.5): one order at a time. The relay sends only when the identity of the
            // group order (its station and task; rt.groupOrder records the objective it belongs
            // to) differs from the one he carries; an order he has not taken up is repeated once
            // the transport window has passed. A new objective whose station and task come out
            // the same is the same order: re-sending it is the churn this replaces.
            const auto& sent=rt.lastSent[i];
            // The sector is part of the order's identity: a man judges his own cover against it.
            // It follows the leader's latest contact, so it is compared as the direction it is and
            // not as a point, or an unchanged order is re-sent every time the picture shifts.
            const bool holds=sent.issuer==nco&&sent.task==task&&Distance(sent.position,clear)<1.f&&
                Distance(sent.sector,sector)<GroupConstants.sectorChange&&SameFireMovementOrder(sent.fm,leg)&&
                (man.assignment.serial==sent.serial||f.time-sent.issuedAt<GroupConstants.reissueSeconds);
            // Plan 028 Stage 1: the tasked men, the covering pair and the foothold men carry the payload.
            const bool fires=requestLive&&(task==Task::Hold||task==Task::Overwatch)&&(request.tasked[slot]||st.covering[slot]||(st.foothold&&st.forward[slot]));
            const bool fireDue=fires&&payloadDue(i,request);
            if(!holds||fireDue){send(nco,i,task,clear,sector,kind==StationKind::Hold&&!called?TeamPlan{}:directive,nullptr,ExecutionContract{},1.f,fires?&request:nullptr,fireDue,leg);rt.groupOrder[i]=st.serial;}
        }
        // Plan 023 B (3.4), the user's ruling: "the group should go to them, unless it is unsafe
        // to do so and then they should work with their forward element to establish a foothold
        // to get them across". Two or more men on real forward positions are an advantage: the
        // group's next objective is laid out from THEM (UpdateSearchMission and PlanSquad read
        // this, so the leader comes up with his men instead of pushing on alone). When the way up
        // is one a known enemy can watch, they are the foothold instead: they hold what they have
        // and put their fire on that enemy, which is what the crossing's covering-fire test asks
        // for; if none of them can bear on him the group looks for a covered way round first.
        st.forwardCount=forwardCount;st.foothold=false;
        // Plan 023 B2: the men who are already closest set the floor for everyone else, and a man
        // who is himself inside the stand-off is not an advantage to be pulled onto: he keeps his
        // ground (3.3, ruling 1) and the group's objective is the stand-off line behind him.
        float floorRange=1e9f;const auto knownNow=WithTracks(sergeant,f.time);
        for(int j=0;j<SquadSize;++j)if(st.forward[j]){
            float band=1e9f;for(const auto& ct:knownNow.contacts)if(ct.known)band=std::min(band,Distance(ct.position,st.station[j]));
            floorRange=std::min(floorRange,band);}
        st.standOffFloor=forwardCount?std::min(floorRange,GroupConstants.stationRange):0.f;
        bool insideForward=false;
        if(forwardCount>=GroupConstants.forwardMen) {
            Vec3 candidate=forwardSum*(1.f/forwardCount);
            float band=1e9f;Vec3 nearest{};
            for(const auto& ct:knownNow.contacts)if(ct.known&&Distance(ct.position,candidate)<band){band=Distance(ct.position,candidate);nearest=ct.position;}
            // The objective is pulled back onto the stand-off line, away from the enemy the men in
            // front are fighting: the group comes up BESIDE them, never past them and never inside
            // the band. Their own range is the floor (a centroid of two flanking men is a metre or
            // so nearer than either of them). Men who are themselves inside the band are a
            // foothold, not an advantage: then the group holds the line behind them.
            const float limit=std::max(GroupConstants.standOff,st.standOffFloor);
            if(band<limit) {
                Vec3 back=candidate-nearest;back.z=0;const float length=Length(back);
                if(length>.5f)candidate=nearest+back*(limit/length);
            }
            insideForward=band<GroupConstants.standOff;
            if(!st.comeUp||AxisProgress(axis,candidate)>AxisProgress(axis,st.forwardCentre))st.forwardCentre=candidate;
        }
        // The decision is held until the group has actually come up: the advantage stops being
        // "ahead" the moment the objective is laid out from it, and a rule that re-read it every
        // cycle would hand the objective back and forth between the leader and his forward men.
        if(forwardCount>=GroupConstants.forwardMen||st.comeUp) {
            // The way up is measured from the leader, who is standing somewhere a man can stand:
            // the group's mean position is often inside a wall, and both the exposure estimate and
            // the search for the enemy overlooking it answer "no path" there, which silently
            // turned this whole rule off (the crossing reads as fully exposed and nobody covers it).
            const Vec3 from=sergeant.position;
            const bool wasComeUp=st.comeUp;
            const bool arrived=AxisProgress(axis,st.forwardCentre)<=AxisProgress(axis,centre)+GroupConstants.aheadMargin;
            const bool unsafe=insideForward||(!arrived&&CrossingExposure(sergeant,map,from,st.forwardCentre,f.time)>=GroupConstants.unsafeExposure);
            st.comeUp=!arrived&&!unsafe;
            if(unsafe) {
                const int enemy=OverlookingEnemy(sergeant,map,from,st.forwardCentre,f.time);
                if(enemy>=0) {
                    const Contact ct=WithTracks(sergeant,f.time).contacts[enemy];
                    for(int j=0;j<SquadSize&&!st.foothold;++j)if(st.forward[j])
                        st.foothold=Distance(st.station[j],ct.position)<GroupConstants.stationRange&&
                            ClearLine3D(map,st.station[j]+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight});
                    if(st.foothold)st.footholdSector=ct.position;
                }
            }
            if(rt.diagnostics&&(st.comeUp!=wasComeUp||st.foothold)) {
                float band=1e9f;const auto known=WithTracks(sergeant,f.time);
                for(const auto& ct:known.contacts)if(ct.known)band=std::min(band,Distance(ct.position,st.forwardCentre));
                TraceProposal(rt.diagnostics,sergeant,cmd,map,f.time,st.comeUp?"group_comes_up":st.foothold?"group_foothold":"group_stays",
                    std::to_string(forwardCount)+" men forward, centre "+std::to_string(int(AxisProgress(axis,st.forwardCentre)-AxisProgress(axis,centre)))+
                    " m ahead of the group and "+std::to_string(int(band))+" m from the nearest enemy it knows");
            }
        }
    }
    // Plan 028 Stage 1: request-to-credit evidence (cover_credit rows); diagnostics only.
    if(config.coverRequests&&rt.diagnostics&&rt.diagnostics->options.enabled)for(int team=0;team<SquadCount;++team)TraceCoverCredit(rt.diagnostics,f,team);
    for(auto& s:f.soldiers)for(auto& report:s.reports)if(f.time-report.observedAt>10)report.known=false;
}
}
