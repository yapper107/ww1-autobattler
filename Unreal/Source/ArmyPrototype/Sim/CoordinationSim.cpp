#include "CoordinationSim.h"
#include "CommandSim.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <cmath>
namespace army {
int FireTeam(int id){return (id%SquadSize)%2==1?0:1;}
bool InWindowTeam(const TeamPlan& p,int id){return p.windowTeam[0]==id||p.windowTeam[1]==id;}
const char* SupportStateName(SupportState s){const char* names[]={"DEPLOYING","WATCHING APPROACH","COVERING ADVANCE","FIRE LANE BLOCKED","CONTACT STALE","NO USEFUL ANGLE","REPOSITIONING"};return names[int(s)];}
float SupportCoverage(const Map& map,Vec3 gun,Vec3 crossing,const Soldier& leader,float time) {
    float best=0;bool known=false;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<=8&&Distance(ct.position,crossing)<45) {
        known=true;
        if(Distance(gun,ct.position)<95&&ClearLine3D(map,gun+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))best=1;
    }
    if(!known&&Distance(gun,crossing)<90&&ClearLine3D(map,gun+Vec3{0,0,1.5f},crossing+Vec3{0,0,1.5f}))best=0.5f;
    return best;
}
Order TeamOrder(const Soldier& s,const TeamPlan& p,Vec3) {
    for(int i=0;i<2;++i)if(p.windowTeam[i]==s.id)return {p.windows[i],Action::Cover,Reason::WindowPosition};
    if(FireTeam(s.id)==p.moving&&p.released)return {p.moves[s.id%SquadSize],Action::Advance,Reason::BoundAdvance};
    return {p.holds[s.id%SquadSize],Action::Hold,Reason::BoundSupport};
}
void UpdateCoordination(const Soldier& officer,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<int>& claimed,SquadCommand& cmd,float time) {
    if(cmd.movementBlock.reason!=MoveBlock::None)return;
    const auto leader=WithReports(officer,time);const Soldier* gun=nullptr;const Soldier* nco=nullptr;
    Vec3 centre{};int healthy=0;bool contact=false;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8)contact=true;
    for(const auto& s:squad)if(s.Active()) {
        if(s.id==cmd.support)gun=&s;
        if(s.role==Role::Corporal&&s.id!=cmd.leader&&!KnowsWounded(leader,s))nco=&s;
        if(s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)){centre=centre+s.position;++healthy;}
    }
    if(healthy)centre=centre*(1.f/healthy);else centre=officer.position;
    const Vec3 mission=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    if(cmd.teamPlan.bounding&&Distance(mission,cmd.mission)>5){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}
    cmd.mission=mission;
    bool releasedTeam=false;
    for(int i=0;i<2;++i)if(cmd.teamPlan.windowTeam[i]>=0) {
        auto it=std::find_if(squad.begin(),squad.end(),[&](const Soldier& s){return s.id==cmd.teamPlan.windowTeam[i];});
        if(it==squad.end()||!it->Active()||KnowsWounded(leader,*it)){cmd.teamPlan.windowTeam[i]=-1;releasedTeam=true;}
    }
    if(cmd.building>=0&&((time>cmd.buildingUntil&&!cmd.engaged)||(!contact&&cmd.searching)||healthy<4||cmd.maneuver==Maneuver::PullBack||Distance(map.buildings[cmd.building].center,centre)>35)) {
        cmd.building=-1;cmd.buildingRetryAt=time+16;cmd.teamPlan.windowTeam={{-1,-1}};releasedTeam=true;
    }
    if(releasedTeam)++cmd.teamPlan.serial;
    // At most two healthy riflemen occupy a building; commanders and the assault
    // group retain their jobs. Another squad's claimed building is left available to it.
    if(cmd.building<0&&time>=cmd.buildingRetryAt&&contact&&healthy>=4&&cmd.advancing&&cmd.maneuver!=Maneuver::PullBack) {
        float best=1e9f;int building=-1;std::array<Vec3,2> windows{};std::array<int,2> members{{-1,-1}};
        for(size_t b=0;b<map.buildings.size();++b) {
            if(std::find(claimed.begin(),claimed.end(),int(b))!=claimed.end()||Distance(map.buildings[b].center,centre)>24)continue;
            std::vector<CoverPosition> options;
            for(const auto& w:map.windows)if(std::abs(w.shelter.x-map.buildings[b].center.x)<5&&std::abs(w.shelter.y-map.buildings[b].center.y)<4&&SupportCoverage(map,w.peek,cmd.mission,leader,time)>0.5f)options.push_back(w);
            if(options.size()<2)continue;
            std::array<int,2> ids{{-1,-1}};std::array<Vec3,2> places{};float score=0;
            for(int slot=0;slot<2;++slot){float nearest=1e9f;
                for(const auto& s:squad)if(s.Active()&&s.role==Role::Rifleman&&s.id!=cmd.support&&s.id!=ids[0]&&!KnowsWounded(leader,s))for(const auto& w:options) {
                    if(slot&&Distance(w.peek,places[0])<2.2f)continue;
                    float value=Distance(s.position,w.peek)+(w.peek.z>1?-2.f:0.f);
                    if(value<nearest&&!FindPath(map,s.position,w.peek).empty()){nearest=value;ids[slot]=s.id;places[slot]=w.peek;}
                }
                score+=nearest;
            }
            if(ids[1]>=0&&score<best){best=score;building=int(b);members=ids;windows=places;}
        }
        if(building>=0){cmd.building=building;cmd.teamPlan.windowTeam=members;cmd.teamPlan.windows=windows;cmd.buildingUntil=time+32;++cmd.teamPlan.serial;}
    }
    const Vec3 crossing=cmd.teamPlan.bounding?cmd.teamPlan.target:cmd.mission;
    const bool reported=time-leader.supportReportAt<5;
    const float coverage=reported?SupportCoverage(map,leader.reportedSupportPosition,crossing,leader,time):0;
    cmd.supportUseful=gun&&reported&&time-leader.supportReadyAt<5&&!leader.supportBlocked&&coverage>0;
    cmd.supportState=!gun?SupportState::Deploying:!reported?SupportState::Deploying:
        leader.supportBlocked?SupportState::Blocked:time-leader.supportReadyAt>=5?SupportState::Moving:
        coverage<=0?SupportState::WrongAngle:contact&&time-leader.supportContactAt>8?SupportState::Stale:
        coverage>0.5f?SupportState::Effective:SupportState::Watching;
    if(cmd.supportState==SupportState::Stale)cmd.supportUseful=false;
    bool bad=cmd.advancing&&reported&&!cmd.supportUseful&&cmd.supportState!=SupportState::Moving;
    if(!bad)cmd.supportProblemSince=-1;else if(cmd.supportProblemSince<0)cmd.supportProblemSince=time;
    if(gun&&bad&&time-cmd.supportProblemSince>=8&&time>=cmd.nextSupportMove&&!KnowsWounded(leader,*gun)) {
        cmd.supportNeedsMove=true;cmd.supportMoveFrom=gun->position;cmd.nextSupportMove=time+16;cmd.supportProblemSince=time;++cmd.supportRepositions;
    }
    int members[2]={0,0};
    for(const auto& s:squad)if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)&&!InWindowTeam(cmd.teamPlan,s.id))++members[FireTeam(s.id)];
    if((cmd.engaged&&!cmd.hasWaypoint&&!(cmd.teamPlan.bounding&&cmd.teamPlan.released))||!cmd.advancing||(!contact&&!(cmd.teamPlan.bounding&&cmd.teamPlan.released))||!nco||!members[0]||!members[1]||(cmd.maneuver==Maneuver::PullBack&&!cmd.route)||time<cmd.boundRetryAt) {
        if(cmd.teamPlan.bounding){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}return;
    }
    if(cmd.teamPlan.bounding&&cmd.teamPlan.released) {
        bool arrived=true;
        for(const auto& s:squad)if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)&&!InWindowTeam(cmd.teamPlan,s.id)&&FireTeam(s.id)==cmd.teamPlan.moving) {
            const auto order=TeamOrder(s,cmd.teamPlan,cmd.mission);
            if(Distance(s.position,order.goal)>3)arrived=false;
        }
        if(arrived&&time-cmd.boundReleasedAt>3){++cmd.boundsCompleted;cmd.teamPlan.moving=1-cmd.teamPlan.moving;cmd.teamPlan.bounding=false;
            if(cmd.engaged&&!cmd.route){cmd.teamPlan.released=false;++cmd.teamPlan.serial;return;}}
        else if(time-cmd.boundReleasedAt>18){PauseSquadMovement(officer,squad,cmd,MoveBlock::Execution,time);return;}
    }
    if(!cmd.teamPlan.bounding) {
        cmd.boundOrigin=centre;Vec3 from=nco->position;auto path=cmd.route?FollowCorridor(map,*cmd.route,from,cmd.mission):FindPath(map,from,cmd.mission);if(path.empty())return;
        Vec3 goal=from;float left=10;
        for(Vec3 p:path){float d=Distance(goal,p);if(d>left){goal=goal+(p-goal)*(left/d);break;}goal=p;left-=d;}
        if(cmd.hasWaypoint)goal=cmd.waypoint;
        if(!Walkable(map,goal)||Distance(goal,from)<3)return;
        cmd.teamPlan.route=cmd.route;cmd.teamPlan.target=goal;cmd.teamPlan.bounding=true;cmd.teamPlan.released=false;cmd.boundStarted=time;cmd.boundReleasedAt=-1;
        std::vector<Vec3> reserved, moveReservations;
        const auto& cover=CoverPositions(map);
        for(const auto& s:squad) {
            const int slot=s.id%SquadSize;Vec3 resolved=s.position;
            Vec3 offset{(s.team?1.f:-1.f)*float(s.id%2)*1.5f,float(slot-3)*1.7f,0};
            ResolveOrderPosition(map,s.position,goal+offset,resolved);
            if((cmd.maneuver==Maneuver::Press||cmd.maneuver==Maneuver::FlankNorth||cmd.maneuver==Maneuver::FlankSouth)&&s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!InWindowTeam(cmd.teamPlan,s.id)) {
                float bestMove=1e9f;Vec3 covered=s.position;
                // Sheltered terrain is a valid travel-stage destination even without a manufactured cover slot.
                if(cmd.route&&CorridorDistance(*cmd.route,resolved)<3){bool safe=true;
                    for(const auto& ct:leader.contacts)if(ct.known&&!ProtectedAt(map,resolved,ct.position,Stance::Standing))safe=false;
                    for(Vec3 p:moveReservations)if(Distance(p,resolved)<1.2f)safe=false;
                    if(safe&&!FollowCorridor(map,*cmd.route,s.position,resolved).empty()){covered=resolved;bestMove=8;}
                }
                for(const auto& c:cover) {
                    if((cmd.route&&CorridorDistance(*cmd.route,c.shelter)>4)||c.window||Distance(c.shelter,resolved)>7||Distance(c.shelter,s.position)>38)continue;
                    bool safe=true;
                    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<10&&
                        (!ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing)||Distance(c.shelter,ct.position)<3))safe=false;
                    for(Vec3 p:moveReservations)if(Distance(p,c.shelter)<2)safe=false;
                    float cost=Distance(c.shelter,resolved)+Distance(c.shelter,s.position)*0.2f;
                    if(safe&&cost<bestMove&&!(cmd.route?FollowCorridor(map,*cmd.route,s.position,c.shelter):FindPath(map,s.position,c.shelter)).empty()){bestMove=cost;covered=c.shelter;}
                }
                resolved=covered;moveReservations.push_back(covered);
            }
            cmd.teamPlan.moves[slot]=resolved;
            Vec3 hold=s.position;float best=1e9f;
            if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!InWindowTeam(cmd.teamPlan,s.id))for(const auto& c:cover) {
                if(c.window||Distance(s.position,c.shelter)>10||!Walkable(map,c.shelter))continue;
                bool protectedPosition=true,occupied=false;
                for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8&&!ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing))protectedPosition=false;
                for(Vec3 p:reserved)if(Distance(p,c.shelter)<2)occupied=true;
                const float cost=Distance(s.position,c.shelter)+(SupportCoverage(map,c.peek,goal,leader,time)>0.5f?0:8);
                if(protectedPosition&&!occupied&&cost<best&&!FindPath(map,s.position,c.shelter).empty()){best=cost;hold=c.shelter;}
            }
            cmd.teamPlan.holds[slot]=hold;reserved.push_back(hold);
        }
        ++cmd.teamPlan.serial;
    }
    {
        int ready=0;
        for(const auto& s:squad)if(s.Active()&&s.id!=cmd.support&&s.id!=cmd.leader&&!InWindowTeam(cmd.teamPlan,s.id)&&!KnowsWounded(leader,s)&&FireTeam(s.id)!=cmd.teamPlan.moving&&s.assignment.task==Task::BoundCover&&s.suppression<0.5f&&Distance(s.position,cmd.teamPlan.holds[s.id%SquadSize])<8&&SupportCoverage(map,s.position,cmd.teamPlan.target,leader,time)>0) {
            bool sheltered=false;
            for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,cmd.teamPlan.holds[s.id%SquadSize])<0.6f&&
                (Distance(s.position,cover.shelter)<1.5f||Distance(s.position,cover.peek)<1.5f)) {
                bool safe=true;
                for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8&&!ProtectedAt(map,cover.shelter,ct.position,cover.crouch?Stance::Crouched:Stance::Standing))safe=false;
                sheltered|=safe;
            }
            if(sheltered)++ready;
        }
        std::vector<Vec3> crossingPath;
        if(cmd.route&&size_t(cmd.routeStage)<cmd.route->stages.size()){const auto& stage=cmd.route->stages[cmd.routeStage];crossingPath.assign(cmd.route->points.begin()+stage.begin,cmd.route->points.begin()+stage.end);}
        bool covering=!crossingPath.empty()?CoveringPath(officer,map,cmd.boundOrigin,crossingPath,time):CoveringCrossing(officer,map,cmd.boundOrigin,cmd.teamPlan.target,time);
        if(cmd.moveExposure>=.2f&&!covering)cmd.opportunitySince=-1;
        if(cmd.moveExposure>=.2f&&covering&&cmd.opportunitySince<0)cmd.opportunitySince=time;
        cmd.coveringReady=cmd.moveExposure<.2f?time-cmd.boundStarted>=2:covering&&cmd.opportunitySince>=0&&time-cmd.opportunitySince>=8;
        if(!cmd.teamPlan.released&&cmd.coveringReady){cmd.teamPlan.released=true;cmd.boundReleasedAt=time;++cmd.teamPlan.serial;}
        else if(!cmd.teamPlan.released&&time-cmd.boundStarted>12)PauseSquadMovement(officer,squad,cmd,MoveBlock::Support,time);
    }
}
}
