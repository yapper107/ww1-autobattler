#include "CommandSim.h"
#include "TaskSim.h"
#include "RecoverySim.h"
#include "CoordinationSim.h"
#include "TrafficSim.h"
#include "ManeuverSim.h"
#include "PlanSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>

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
    if(soldier.assignment.task==Task::ClearLane&&time-soldier.assignment.activatedAt<8&&Distance(soldier.position,soldier.assignment.position)>0.7f&&
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
    for(const auto& cover:CoverPositions(map)) {
        Vec3 p=cover.shelter;
        if(sign*p.x>front+(healthy?0.f:4.f)||Distance(p,soldier.position)>40||!Walkable(map,p)||occupied(p))continue;
        bool canFire=firing(cover.peek);
        float score=Distance(p,soldier.position)*0.45f+std::abs(sign*p.x-(front-6))*0.7f+Distance(p,sector)*0.15f;
        if(!canFire)score+=55;
        if(!ProtectedAt(map,p,sector,cover.crouch?Stance::Crouched:Stance::Standing))score+=20;
        if(soldier.assignment.task==Task::RearGuard&&Distance(p,soldier.assignment.position)<1)score-=4;
        if(cover.window)score-=3;
        if(score<bestScore&&!FindPath(map,soldier.position,p).empty()){bestScore=score;best=p;}
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
        Vec3 eye=s.position+Vec3{0,0,s.stance==Stance::Crouched?.82f:1.7f};
        for(Vec3 delta:{Vec3{},Vec3{radius,0},Vec3{-radius,0},Vec3{0,radius},Vec3{0,-radius}})
            empty=empty&&ClearLine3D(map,eye,ct.position+delta+Vec3{0,0,.55f});
        for(const auto& seen:s.contacts)if(seen.visible&&time-seen.observedAt<2&&Distance(seen.position,ct.position)<radius+2)empty=false;
        if(!empty)ct.emptySince=-1;
        else if(ct.emptySince<0)ct.emptySince=time;
        else if(time-ct.emptySince>=3){ct.clearedAt=time;ct.known=ct.visible=false;++s.knowledgeRevision;}
    }
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
    const Soldier* point=&officer;
    for(const auto& s:squad)if(s.Active()&&s.role==Role::Corporal&&!KnowsWounded(officer,s)){point=&s;break;}
    auto setMission=[&](Vec3 target) {
        if(cmd.teamPlan.bounding&&Distance(target,cmd.mission)>5){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}
        cmd.mission=target;
    };
    if(cmd.hasWaypoint){setMission(cmd.waypoint);return;}
    if(cmd.engaged){
        // Finish a released short crossing before settling into the firefight.
        if(!(cmd.teamPlan.bounding&&cmd.teamPlan.released))setMission(point->position);
        return;
    }
    const auto knowledge=WithTracks(officer,time);
    const Contact* contact=nullptr;float nearest=1e9f;
    for(const auto& ct:knowledge.contacts)if(ct.known&&time-ct.observedAt<=120) {
        float distance=Distance(point->position,ct.position);
        if(distance<nearest){nearest=distance;contact=&ct;}
    }
    Vec3 requested;
    if(contact) {
        // Approach a reported contact to rifle range, never order an assault through it.
        requested=point->position+(contact->position-point->position)*(std::max(0.f,nearest-32.f)/std::max(0.01f,nearest));
        requested.z=point->position.z;
    } else {
        // Search mapped sectors without consulting enemy bodies. Each squad starts
        // in its own lane and continues beyond the old map centre when contact is lost.
        const float sign=officer.team?-1.f:1.f;
        auto sector=[&]() {
            const float xs[]={-80,-20,45,110,45,-50};
            int lane=(officer.squad%SquadsPerTeam+cmd.searchLeg/6)%SquadsPerTeam;
            float y=SquadLane(lane)*sign;
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
static Vec3 UsefulFiringPosition(const Soldier& leader,const Soldier& s,const Map& map,float time) {
    if(s.machineGun||s.role!=Role::Rifleman||s.understoodSuppression>.45f||time-s.lastShotAt<8)return s.position;
    if(s.assignment.task==Task::Overwatch&&time-s.assignment.activatedAt<12)return s.assignment.position;
    const auto knowledge=WithTracks(leader,time);const Contact* target=nullptr;float nearest=1e9f;
    for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,s.position)<nearest){nearest=Distance(ct.position,s.position);target=&ct;}
    if(!target)return s.position;
    float best=1e9f;Vec3 result=s.position;
    for(const auto& c:CoverPositions(map)){float travel=Distance(s.position,c.shelter);
        if(travel<2||travel>12||std::abs(c.shelter.z-s.position.z)>.5f||Distance(c.peek,target->position)>65||!ProtectedAt(map,c.shelter,target->position,c.crouch?Stance::Crouched:Stance::Standing)||!ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{target->position.x,target->position.y,target->aimHeight}))continue;
        float score=travel+FireDanger(leader,c.shelter,time)*20;
        if(score<best&&!FindPath(map,s.position,c.shelter).empty()){best=score;result=c.shelter;}
    }
    return result;
}
std::vector<PlannedOrder> PlanSquad(const Soldier& officer,const std::vector<Soldier>& friends,
    const Map& map,const Config&,const SquadCommand& command,float time) {
    std::vector<PlannedOrder> orders;
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
    const Soldier* support=nullptr;const Soldier* nco=nullptr;
    for(const auto& s:friends)if(s.Active()&&s.id!=officer.id) {
        if(s.id==command.support)support=&s;
        if(s.role==Role::Corporal&&!KnowsWounded(officer,s))nco=&s;
    }
    Vec3 anchor=officer.position;
    if(support) {
        Vec3 assaultCentre{};int assaultCount=0;
        for(const auto& s:friends)if(s.Active()&&s.id!=officer.id&&s.id!=support->id&&!KnowsWounded(officer,s)){assaultCentre=assaultCentre+s.position;++assaultCount;}
        if(assaultCount)assaultCentre=assaultCentre*(1.f/assaultCount);else assaultCentre=officer.position;
        float score=1e9f;bool found=false;
        const bool keepGun=!command.supportNeedsMove&&recent>=time-10&&command.supportUseful&&!leader.supportBlocked&&
            time-leader.supportReadyAt<5&&support->assignment.task==Task::Overwatch&&
            Distance(support->position,support->assignment.position)<2;
        if(keepGun){anchor=support->assignment.position;score=-1e9f;found=true;}
        for(const auto& cover:CoverPositions(map))if(!keepGun&&cover.crouch) {
                Vec3 p=cover.shelter;
                if((recent<time-10&&Distance(p,assaultCentre)>18)||Distance(p,support->position)>55||std::abs(p.y-assaultCentre.y)>28||sign*p.x>sign*assaultCentre.x+(command.engaged?8.f:24.f)||!Walkable(map,p)||!ProtectedAt(map,p,sector,Stance::Crouched)||
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
        } else assign(*support,found?Task::Overwatch:Task::Hold,found?anchor:support->position,sector);
    }
    Vec3 assembly={anchor.x+sign*2,anchor.y+(anchor.y>0?-4.f:4.f)};
    if(!Walkable(map,assembly))assembly=officer.position;
    const bool supporting=command.platoonTask==PlatoonTask::Support&&time<command.platoonUntil&&recent>=time-10;
    Task task=command.advancing&&!command.engaged&&!supporting?Task::Advance:Task::Hold;
    Vec3 destination=command.advancing?command.mission:assembly;
    if(command.engaged||supporting)destination=nco?nco->position:officer.position;
    if(command.hasWaypoint&&command.movementBlock.reason==MoveBlock::None) {
        destination=command.waypoint;
        task=command.maneuver==Maneuver::PullBack?Task::PullBack:command.maneuver==Maneuver::Press?Task::Flank:Task::Flank;
        if(command.maneuver==Maneuver::PullBack&&support&&!KnowsWounded(officer,*support)&&
            (!command.supportUseful||support->understoodSuppression>0.52f||Distance(officer.position,destination)<10||time-command.planStarted>12))
            for(auto& order:orders)if(order.recipient==support->id){order.task=Task::PullBack;order.position=destination+Vec3{-sign*5,3};}
    }
    if(command.movementBlock.reason!=MoveBlock::None){task=Task::Hold;destination=nco?nco->position:officer.position;}
    if(nco) {
        Task ownTask=task;Vec3 ownPosition=destination;
        if(command.teamPlan.bounding){auto order=TeamOrder(*nco,command.teamPlan,sector);ownTask=order.action==Action::Advance?Task::BoundMove:Task::BoundCover;ownPosition=order.goal;}
        assign(*nco,ownTask,ownPosition,sector);
        orders.back().teamPlan=command.teamPlan;
    }
    if(!nco||KnowsWounded(officer,*nco))for(const auto& s:friends)if(s.Active()&&s.id!=officer.id&&(!nco||s.id!=nco->id)&&(!support||s.id!=support->id))
        {if(InWindowTeam(command.teamPlan,s.id)){auto window=TeamOrder(s,command.teamPlan,sector);assign(s,Task::Window,window.goal,sector);}
        else assign(s,task,task==Task::Hold&&command.engaged?s.position:destination+Vec3{0,float(s.id-base-4)*1.2f},sector);}
    // The officer follows behind the assault group while the NCO executes the advance.
    Vec3 rear=command.hasWaypoint&&command.maneuver==Maneuver::PullBack?destination+Vec3{-sign*7,-3}:
        command.advancing&&nco?nco->position+Vec3{-sign*5,3}:assembly+Vec3{-sign*3,0};
    if(command.advancing&&!nco&&!command.engaged)rear=destination;
    if(!Walkable(map,rear))rear=officer.position;
    if(command.advancing&&!nco&&!command.engaged){assign(officer,task,rear,sector);return orders;}
    assign(officer,command.hasWaypoint&&command.maneuver==Maneuver::PullBack?Task::PullBack:Task::Hold,rear,sector);
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
        if(!recipient.Active()||(!sender.Active()&&message.kind!=CommandMessage::Kind::TaskStatus)||sender.team!=recipient.team||(sender.squad!=recipient.squad&&message.kind!=CommandMessage::Kind::Lane&&message.kind!=CommandMessage::Kind::Delivery&&message.kind!=CommandMessage::Kind::SupportSector))continue;
        if(message.kind==CommandMessage::Kind::Order) {
            const auto& cmd=f.command[recipient.squad];
            bool authorised=(IsPlatoonStaff(recipient)&&IsPlatoonStaff(sender))||sender.id==cmd.leader||(sender.role==Role::Corporal&&cmd.leader>=0&&sender.id!=recipient.id);
            if(!authorised||message.assignment.serial<=recipient.assignment.serial)continue;
            PendingReaction reaction;reaction.kind=ReactionKind::Order;reaction.source=sender.id;reaction.order=message.assignment;
            QueueReaction(recipient,reaction,f.time,rt.reactions);
            log(EventKind::OrderReceived,sender.id,recipient.id,std::string(Name(recipient.id))+" hears "+TaskName(message.assignment.task)+" from "+Name(sender.id));
        } else if(message.kind==CommandMessage::Kind::SupportSector) {
            if(!config.recoveryFixture||sender.team!=recipient.team||sender.id!=f.command[sender.squad].leader||
                f.command[sender.squad].support!=recipient.id)continue;
            PendingReaction reaction;reaction.kind=ReactionKind::SupportSector;reaction.source=sender.id;reaction.supportSector=message.supportSector;
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
    rt.platoon.geometryViews=rt.geometryViews;UpdatePlatoon(f,map,config,rt.platoon,rt.reactions,events);
    auto send=[&](int sender,int recipient,Task task,Vec3 position,Vec3 sector,const TeamPlan& plan=TeamPlan{},const CoverPosition* slot=nullptr) {
        const bool recovery=config.recoveryFixture&&f.soldiers[recipient].team!=rt.fixedDefender;
        const Vec3 requested=position;
        if(recovery&&EquivalentTask(rt.lastSent[recipient],task,position,sector,plan.targetEnemy)&&rt.lastSent[recipient].teamPlan.liftFire==plan.liftFire&&rt.lastSent[recipient].hasSlot==(slot!=nullptr)&&
            (!slot||(rt.lastSent[recipient].slot.id==slot->id&&Distance(rt.lastSent[recipient].slot.shelter,slot->shelter)<.05f&&Distance(rt.lastSent[recipient].slot.peek,slot->peek)<.05f)))return;
        const Map& orderMap=recovery&&rt.geometryViews?(*rt.geometryViews)[sender]:map;
        if(!ResolveOrderPosition(orderMap,f.soldiers[recipient].position,requested,position)) {
            log(EventKind::Decision,sender,recipient,std::string(Name(sender))+": no reachable waypoint for "+Name(recipient));return;
        }
        auto& last=rt.lastSent[recipient];
        const auto& unit=f.soldiers[recipient];
        // Finish a short movement commitment before refreshing a moving formation
        // anchor. Emergency withdrawals and lane clearance can still interrupt.
        if(!recovery&&last.issuer==sender&&last.task==task&&last.teamPlan.serial==plan.serial&&
            task!=Task::PullBack&&task!=Task::ClearLane&&f.time-last.issuedAt<8&&
            unit.understoodSuppression<0.52f&&Distance(unit.position,last.position)>1.5f&&
            Distance(last.position,position)>2&&!FindPath(map,unit.position,last.position).empty())return;
        if(!recovery&&last.issuer==sender&&last.task==task&&Distance(last.position,position)<2&&Distance(last.sector,sector)<6&&last.teamPlan.serial==plan.serial)return;
        Assignment order;order.geometry=orderMap.revision;order.target=plan.targetEnemy;order.task=task;order.issuer=sender;order.serial=rt.nextSerial++;
        order.position=position;order.sector=sector;if(slot){order.hasSlot=true;order.slot=*slot;}if(recovery){order.id=uint64_t(order.serial);order.statusAt=f.time;}order.teamPlan=plan;order.issuedAt=f.time;last=order;
        TraceOrder(rt.diagnostics,f.soldiers[recipient],order,f.time,"order_issued");
        log(EventKind::OrderIssued,sender,recipient,std::string(Name(sender))+" orders "+Name(recipient)+": "+TaskName(task));
        if(Distance(requested,position)>0.1f)log(EventKind::Decision,sender,recipient,std::string(Name(sender))+": adjusts blocked waypoint for "+Name(recipient));
        if(sender==recipient) {
            PendingReaction reaction;reaction.kind=ReactionKind::Order;reaction.order=order;reaction.source=sender;
            QueueReaction(f.soldiers[recipient],reaction,f.time,rt.reactions);return;
        }
        CommandMessage message;message.sender=sender;message.recipient=recipient;message.arrives=f.time+MessageDelay;message.assignment=order;
        rt.messages.push_back(message);
    };
    // Attached command staff follow their host squad, fight and seek cover, but
    // are not included in its assault formation or subordinate command chain.
    for(auto& s:f.soldiers)if(s.Active()&&IsPlatoonStaff(s)&&f.time>=rt.nextNco[s.id]) {
        rt.nextNco[s.id]=f.time+4;Vec3 anchor{};int count=0;
        for(const auto& ally:f.soldiers)if(ally.Active()&&ally.squad==s.squad&&!IsPlatoonStaff(ally)){anchor=anchor+ally.position;++count;}
        if(count){anchor=anchor*(1.f/count);Vec3 pos=anchor+Vec3{s.team?7.f:-7.f,s.role==Role::Lieutenant?-3.f:3.f};
            send(s.id,s.id,Task::Hold,pos,anchor+Vec3{s.team?-30.f:30.f,0});}
    }
    for(auto& s:f.soldiers)if(s.Active()&&!IsPlatoonStaff(s)&&f.time>=rt.nextReport[s.id]) {
        rt.nextReport[s.id]=f.time+2;
        auto& cmd=f.command[s.squad];int nco=s.squad*SquadSize+1;
        int parent=(s.id==nco||s.id==cmd.support||!f.soldiers[nco].Active()||cmd.leader==nco)?cmd.leader:nco;
        if(!config.recoveryFixture&&cmd.leader>=0&&s.id!=cmd.leader&&
            (s.assignment.task==Task::Advance||s.assignment.task==Task::Flank||s.assignment.task==Task::BoundMove)&&
            (s.reason==Reason::EmergencyCover||s.reason==Reason::ProtectedHold||s.reason==Reason::Suppressed)&&
            Distance(s.position,s.assignment.position)>3) {
            CommandMessage message;message.kind=CommandMessage::Kind::Movement;message.sender=s.id;message.recipient=cmd.leader;
            message.failedMove={s.id,s.assignment.serial,s.assignment.position,f.time};message.arrives=f.time+MessageDelay;rt.messages.push_back(message);
        }
        if(s.blockedSeconds>=1&&(s.holdingFire||f.time-s.lastBlockedAt<4))
            s.blockedLanes[s.id]={s.position,s.aimPoint,ShotSpread(s),f.time};
        auto relayLanes=[&](int receiver) {
            if(receiver<0||receiver==s.id||!f.soldiers[receiver].Active())return;
            for(int shooter=0;shooter<UnitCount;++shooter) {
                const auto& lane=s.blockedLanes[shooter];
                if(f.time-lane.observedAt>8||lane.observedAt<=f.soldiers[receiver].blockedLanes[shooter].observedAt)continue;
                CommandMessage message;message.kind=CommandMessage::Kind::Lane;message.sender=s.id;message.recipient=receiver;
                message.subject=shooter;message.fireLane=lane;message.arrives=f.time+MessageDelay;rt.messages.push_back(message);
            }
        };
        if(s.id==cmd.leader) {
            relayLanes(nco);
            for(int other=0;other<SquadCount;++other)if(other!=s.squad&&other/SquadsPerTeam==s.team)relayLanes(f.command[other].leader);
        } else relayLanes(parent);
        auto relayFire=[&](int receiver){if(receiver<0||receiver==s.id)return;for(const auto& e:s.deliveries)if(e.shooter>=0&&f.time-e.observedAt<(config.recoveryFixture?10.f:6.f)){CommandMessage m;m.kind=CommandMessage::Kind::Delivery;m.sender=s.id;m.recipient=receiver;m.arrives=f.time+MessageDelay;m.delivery=e;rt.messages.push_back(m);}};
        if(s.id==cmd.leader){relayFire(nco);for(int other=0;other<SquadCount;++other)if(other!=s.squad&&other/SquadsPerTeam==s.team)relayFire(f.command[other].leader);}
        else relayFire(parent);
        if(s.id==cmd.leader||parent<0||parent==s.id)continue;
        for(const auto& area:s.fireAreas)if(area.intensity>0&&f.time-area.observedAt<=18) {
            CommandMessage message;message.kind=CommandMessage::Kind::Fire;message.sender=s.id;message.recipient=parent;
            message.fireArea=area;message.arrives=f.time+MessageDelay;rt.messages.push_back(message);
        }
        for(const auto& friendUnit:f.soldiers)if(friendUnit.squad==s.squad&&KnowsWounded(s,friendUnit)&&!f.soldiers[parent].knownWounded[friendUnit.id]) {
            CommandMessage message;message.kind=CommandMessage::Kind::Wound;message.sender=s.id;message.recipient=parent;
            message.subject=friendUnit.id;message.arrives=f.time+MessageDelay;rt.messages.push_back(message);
        }
        const auto knowledge=WithTracks(s,f.time);
        for(int enemy=0;enemy<UnitCount;++enemy) {
            const auto& ct=knowledge.contacts[enemy];
            if((!ct.known&&ct.clearedAt<=-100)||f.time-std::max(ct.observedAt,ct.clearedAt)>120)continue;
            CommandMessage message;message.kind=CommandMessage::Kind::Contact;message.sender=s.id;message.recipient=parent;
            message.enemy=enemy;message.contact=ct;message.contact.visible=false;message.arrives=f.time+MessageDelay;rt.messages.push_back(message);
        }
        if(s.id==cmd.support&&cmd.leader>=0) {
            CommandMessage message;message.kind=CommandMessage::Kind::Ready;message.sender=s.id;message.recipient=cmd.leader;
            message.arrives=f.time+MessageDelay;
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
                message.arrives=f.time+MessageDelay;message.supportSector=AssaultSupportSector(f.soldiers[cmd.leader],cmd,knownMap,f.time);
                rt.messages.push_back(message);
                TraceProposal(rt.diagnostics,f.soldiers[cmd.leader],cmd,knownMap,f.time,"support_sector_sent",std::string(message.supportSector.lifted?"lift sector: ":"prioritize threats overlooking assault slots: ")+std::to_string(message.supportSector.threats.size())+" known tracks");
            }
            continue; // This controller owns destinations; no legacy maneuver or corporal formation refresh.
        }
        const bool changedKnowledge=rt.plannedKnowledge[team]!=f.soldiers[cmd.leader].knowledgeRevision;
        if(f.time>=rt.nextPlan[team]||(changedKnowledge&&f.time-rt.lastPlanAt[team]>=1)) {
            rt.lastPlanAt[team]=f.time;rt.plannedKnowledge[team]=f.soldiers[cmd.leader].knowledgeRevision;
            rt.nextPlan[team]=f.time+(cmd.opportunitySince>=0?1.f:cmd.hasWaypoint?2.f:8.f);
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
            rt.nextPlan[team]=f.time+(cmd.opportunitySince>=0?1.f:cmd.hasWaypoint?2.f:8.f);
            for(const auto& order:PlanSquad(f.soldiers[cmd.leader],friends,knownMap,config,cmd,f.time))
                send(cmd.leader,order.recipient,order.task,order.position,order.sector,order.teamPlan);
        }
        int nco=team*SquadSize+1;auto& sergeant=f.soldiers[nco];
        if(nco==cmd.leader||!sergeant.Active()||sergeant.assignment.task==Task::None||f.time<rt.nextNco[nco])continue;
        rt.nextNco[nco]=f.time+2;
        if(sergeant.assignment.task==Task::RearGuard){sergeant.regrouping=false;continue;}
        std::vector<Soldier> squad;std::vector<Vec3> rearReservations;
        for(const auto& s:f.soldiers)if(s.squad==team&&!IsPlatoonStaff(s))squad.push_back(s);
        Vec3 mean{};int count=0;
        for(int i=team*SquadSize+2;i<(team+1)*SquadSize;++i)if(i!=cmd.support&&f.soldiers[i].Active()&&!IsPlatoonStaff(f.soldiers[i])&&!KnowsWounded(sergeant,f.soldiers[i])&&!InWindowTeam(sergeant.assignment.teamPlan,i)) {mean=mean+f.soldiers[i].position;++count;}
        sergeant.regrouping=!sergeant.assignment.teamPlan.bounding&&count>0&&Distance(sergeant.position,mean*(1.f/count))>(sergeant.regrouping?7.f:10.f);
        for(int i=team*SquadSize+2;i<(team+1)*SquadSize;++i)if(i!=cmd.support&&f.soldiers[i].Active()&&!IsPlatoonStaff(f.soldiers[i])) {
            if(KnowsWounded(sergeant,f.soldiers[i])) {
                Vec3 rear=RearPosition(sergeant,f.soldiers[i],squad,rt.geometryViews?(*rt.geometryViews)[nco]:map,f.time,rearReservations);rearReservations.push_back(rear);
                send(nco,i,Task::RearGuard,rear,sergeant.assignment.sector);continue;
            }
            const auto& directive=sergeant.assignment.teamPlan;
            if(InWindowTeam(directive,i)||directive.bounding) {
                auto order=TeamOrder(f.soldiers[i],directive,sergeant.assignment.sector);
                Task childTask=InWindowTeam(directive,i)?Task::Window:order.action==Action::Advance?Task::BoundMove:Task::BoundCover;
                Vec3 clear=ClearReportedFireLane(sergeant,f.soldiers[i],order.goal,rt.geometryViews?(*rt.geometryViews)[nco]:map,f.time);
                send(nco,i,Distance(clear,order.goal)>0.5f?Task::ClearLane:childTask,clear,sergeant.assignment.sector,directive);continue;
            }
            if(sergeant.assignment.task==Task::Hold) {
                Vec3 desired=UsefulFiringPosition(sergeant,f.soldiers[i],map,f.time);
                Vec3 clear=ClearReportedFireLane(sergeant,f.soldiers[i],desired,map,f.time);
                send(nco,i,Distance(clear,desired)>.5f?Task::ClearLane:Distance(desired,f.soldiers[i].position)>.5f?Task::Overwatch:Task::Hold,clear,sergeant.assignment.sector);continue;
            }
            const bool lagging=Distance(f.soldiers[i].position,sergeant.position)>(sergeant.regrouping?7.f:14.f);
            Vec3 offset{(sergeant.team?1.f:-1.f)*float(i%2)*2.5f,float(i%SquadSize-4)*2.4f};
            Vec3 target=(lagging?sergeant.position:sergeant.assignment.position)+offset;
            Vec3 clear=ClearReportedFireLane(sergeant,f.soldiers[i],target,rt.geometryViews?(*rt.geometryViews)[nco]:map,f.time);
            send(nco,i,Distance(clear,target)>0.5f?Task::ClearLane:lagging?Task::Rally:sergeant.assignment.task,clear,sergeant.assignment.sector,directive);
        }
    }
    for(auto& s:f.soldiers)for(auto& report:s.reports)if(f.time-report.observedAt>10)report.known=false;
}
}
