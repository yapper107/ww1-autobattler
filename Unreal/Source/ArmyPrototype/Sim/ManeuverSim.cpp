#include "ManeuverSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "TacticalRouteSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
#include <sstream>
namespace army {
void RememberDelivery(Soldier& soldier,const FireDelivery& report) {
    if(report.shooter<0)return;
    auto* slot=&soldier.deliveries[0];
    for(auto& e:soldier.deliveries){if(e.shooter==report.shooter){if(report.observedAt>e.observedAt)e=report;return;}if(e.observedAt<slot->observedAt)slot=&e;}
    *slot=report;
}
static bool Overlooks(const Contact& ct,Vec3 p,const Map& map){return Distance(ct.position,p)<100&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,1.3f});}
float CrossingExposure(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time) {
    auto knowledge=WithTracks(leader,time);auto path=FindPath(map,from,to);if(path.empty())return 1;
    float exposed=0,length=0;Vec3 start=from;
    for(Vec3 end:path){float d=Distance(start,end);int n=std::max(1,int(std::ceil(d/3)));for(int k=1;k<=n;++k){Vec3 p=start+(end-start)*(float(k)/n);bool seen=false;for(const auto& ct:knowledge.contacts)if(ct.known&&Overlooks(ct,p,map))seen=true;length+=d/n;if(seen)exposed+=d/n;}start=end;}
    return exposed/std::max(.01f,length);
}
bool CoveringCrossing(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time) {
    return CoveringPath(leader,map,from,FindPath(map,from,to),time);
}
bool CoveringPath(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time){
    if(path.empty())return false;
    bool fresh=false;for(const auto& delivery:leader.deliveries)if(delivery.shooter>=0&&delivery.rounds>0&&time-delivery.observedAt<=6)fresh=true;
    if(!fresh)return false;
    auto knowledge=WithTracks(leader,time);Vec3 to=path.back();
    int primary=-1;float priority=1e9f;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(!ct.known)continue;
        float score=Distance(ct.position,(from+to)*.5f)-(ct.automaticWeapon?20.f:0.f)+std::max(0.f,time-ct.observedAt)*.1f;
        if(score>=priority)continue;
        bool overlooks=false;Vec3 start=from;
        for(Vec3 end:path){int n=std::max(1,int(std::ceil(Distance(start,end)/3)));for(int k=1;k<=n;++k)if(Overlooks(ct,start+(end-start)*(float(k)/n),map)){overlooks=true;break;}if(overlooks)break;start=end;}
        if(overlooks){primary=id;priority=score;}
    }
    if(primary<0)return false;
    // Cover the dominant position overlooking this route. Other known threats
    // still contribute exposure/risk; readiness is not a claim that every enemy is pinned.
    const auto& ct=knowledge.contacts[primary];int rounds=0;
    for(const auto& e:leader.deliveries)if((e.enemy==primary||Distance(e.target,ct.position)<6)&&time-e.observedAt<=6&&Distance(e.target,ct.position)<10){
        if(e.times[0]<0)rounds+=e.rounds;else for(float delivered:e.times)rounds+=time-delivered<=6;
    }
    return rounds>=3;
}
void RememberFireArea(Soldier& s,const FireArea& area) {
    if(area.intensity<=0)return;
    auto* slot=&s.fireAreas[0];
    for(auto& a:s.fireAreas) {
        if(a.intensity>0&&Distance(a.position,area.position)<6) {
            if(area.observedAt>a.observedAt)a=area;
            return;
        }
        if(a.observedAt<slot->observedAt)slot=&a;
    }
    *slot=area;
}
float FireDanger(const Soldier& s,Vec3 p,float time) {
    float danger=0;
    for(const auto& area:s.fireAreas) {
        float age=time-area.observedAt;
        if(age<0||age>18)continue;
        danger+=area.intensity*std::max(0.f,1-age/18)*std::max(0.f,1-Distance(p,area.position)/12);
    }
    return std::min(1.f,danger);
}
float MovementPressure(const Soldier& leader,const std::vector<Soldier>& squad,float time) {
    float pressure=FireDanger(leader,leader.position,time);
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)&&!KnowsWounded(leader,s))
        pressure=std::max(pressure,std::max(s.understoodSuppression,FireDanger(leader,s.position,time)));
    return pressure;
}
void PauseSquadMovement(const Soldier& leader,const std::vector<Soldier>& squad,SquadCommand& cmd,MoveBlock reason,float time) {
    if(cmd.movementBlock.reason!=MoveBlock::None)return;
    auto& b=cmd.movementBlock;b.reason=reason;b.started=time;b.pressure=MovementPressure(leader,squad,time);
    b.origin=leader.position;b.target=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    cmd.failedMoves[cmd.failedMoveCount%4]=b.target;++cmd.failedMoveCount;
    if(reason==MoveBlock::Support){cmd.supportNeedsMove=true;cmd.supportMoveFrom=leader.reportedSupportPosition;}
    b.support=cmd.support;b.supportPosition=leader.reportedSupportPosition;
    b.hadSupport=cmd.supportUseful&&time-leader.supportActivityAt<6;b.improvedSince=-1;
    cmd.hasWaypoint=true;cmd.waypoint=b.target;
    cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;++cmd.teamPlan.serial;
    cmd.coveringReady=false;cmd.opportunitySince=-1;
    cmd.planReason=reason==MoveBlock::Fire?"movement paused: reported fire stopped execution":
        reason==MoveBlock::Support?"movement paused: covering element not ready":"movement paused: crossing failed to reach shelter";
}
bool HasMachineGun(const std::vector<Soldier>& squad) {
    return std::any_of(squad.begin(),squad.end(),[](const Soldier& s){return s.Active()&&s.machineGun;});
}
bool RifleCoverReady(const Soldier& officer,const std::vector<Soldier>&,const Map& map,float time) {
    const auto leader=WithTracks(officer,time);
    for(const auto& ct:leader.contacts)if(ct.known&&CoveringCrossing(officer,map,officer.position,ct.position+(officer.position-ct.position)*.4f,time))return true;
    return false;
}
const char* ManeuverName(Maneuver m) {
    const char* names[]={"SPREAD ADVANCE","FLANK NORTH","FLANK SOUTH","PULL BACK / REGROUP","REPOSITION","PRESS TO COVER"};return names[int(m)];
}
const char* ProgressName(SquadProgress p) {
    const char* names[]={"DEPLOYING","MOVING","SUPPORTING","UNDER FIRE","REGROUPING","NO PROGRESS","REVISING PLAN","REAR GUARD"};return names[int(p)];
}
void UpdateSquadProgress(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<Vec3>& friendlyApproaches,SquadCommand& cmd,ProgressRuntime& rt,float time,bool recover) {
    if(!cmd.advancing){cmd.progress=SquadProgress::Deploying;return;}
    Vec3 centre{};int count=0;const Soldier* point=nullptr;const Soldier* support=nullptr;
    for(const auto& s:squad)if(s.Active()) {
        if(s.id==cmd.support)support=&s;
        if(s.id==cmd.leader||s.id==cmd.support||KnowsWounded(leader,s)||InWindowTeam(cmd.teamPlan,s.id))continue;
        centre=centre+s.position;++count;
        if(!point||s.role==Role::Corporal)point=&s;
    }
    if(!count){cmd.progress=SquadProgress::RearGuard;cmd.idleSeconds=0;rt.initialized=false;return;}
    centre=centre*(1.f/count);
    Vec3 target=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    float distance=Distance(centre,target);
    if(!rt.initialized){rt.initialized=true;rt.lastProgressAt=rt.lastMotionAt=time;rt.distance=distance;rt.target=target;rt.members=count;}
    if(Distance(rt.target,target)>2||rt.members!=count){rt.distance=distance;rt.target=target;rt.members=count;}
    else if(distance<rt.distance-2.5f){rt.distance=distance;rt.lastProgressAt=rt.lastMotionAt=time;}
    cmd.idleSeconds=std::max(0.f,time-rt.lastMotionAt);
    int rounds=0;for(const auto& s:squad)rounds+=s.rounds;
    if(rounds>rt.rounds)rt.lastFireAt=time;
    rt.rounds=rounds;
    const bool firing=time-rt.lastFireAt<6||(cmd.supportUseful&&time-leader.supportActivityAt<6);
    const bool danger=FireDanger(leader,centre,time)>0.3f;
    cmd.progress=cmd.idleSeconds<6?SquadProgress::Moving:danger?SquadProgress::UnderFire:
        point->regrouping?SquadProgress::Regrouping:firing?SquadProgress::Supporting:
        cmd.hasWaypoint&&cmd.maneuver==Maneuver::Reposition?SquadProgress::Recovering:SquadProgress::Waiting;
    if(cmd.supportNeedsMove&&support&&Distance(support->position,support->assignment.position)<0.7f&&Distance(support->position,cmd.supportMoveFrom)>6)cmd.supportNeedsMove=false;
    if(firing&&!cmd.teamPlan.bounding&&!cmd.hasWaypoint){
        cmd.progress=SquadProgress::Supporting;rt.lastProgressAt=time;return;
    }
    if(!recover)return;
    const float deadline=cmd.engaged?65.f:firing?40.f:danger?30.f:point->regrouping?26.f:18.f;
    if(time-rt.lastProgressAt<deadline||time<rt.nextRecovery)return;
    ++cmd.recoveries;cmd.progress=SquadProgress::Recovering;
    const float sign=leader.team?-1.f:1.f;const Vec3 origin=point->position;
    Vec3 best{};float bestScore=1e9f;Maneuver chosen=Maneuver::Reposition;
    // Recovery is local and uses reported danger. Prefer a different approach;
    // if both sides are unsafe, look for a reachable withdrawal instead.
    for(int pass=0;pass<2&&bestScore==1e9f;++pass) {
        for(float side:{-1.f,1.f})for(float width:{12.f,22.f}) {
            Vec3 candidate{origin.x+sign*(pass?-12.f:8.f),origin.y+side*width};
            Vec3 p;if(!ResolveOrderPosition(map,origin,candidate,p)||Distance(p,origin)<6)continue;
            auto path=FindPath(map,origin,p);float risk=0,length=0;Vec3 start=origin;
            for(Vec3 end:path){float segment=Distance(start,end);length+=segment;int steps=std::max(1,int(std::ceil(segment/2)));
                for(int k=1;k<=steps;++k){Vec3 sample=start+(end-start)*(float(k)/steps);if(Distance(sample,origin)>10)risk=std::max(risk,FireDanger(leader,sample,time));}start=end;}
            if(risk>(pass?0.6f:0.22f))continue;
            float score=risk*100+length*0.2f+Distance(p,target)*0.15f;
            if(cmd.recoveries>1)score+=std::max(0.f,15-Distance(p,rt.lastRecovery))*3;
            for(Vec3 other:friendlyApproaches)score+=std::max(0.f,14-Distance(p,other))*2;
            if(score<bestScore){bestScore=score;best=p;chosen=pass?Maneuver::PullBack:Maneuver::Reposition;}
        }
    }
    if(bestScore<1e8f){cmd.hasWaypoint=true;cmd.waypoint=best;cmd.maneuver=chosen;cmd.maneuverUntil=time+20;rt.lastRecovery=best;rt.target=best;rt.distance=Distance(centre,best);}
    else cmd.progress=SquadProgress::UnderFire;
    if(support&&!firing&&!KnowsWounded(leader,*support)) {cmd.supportNeedsMove=true;cmd.supportMoveFrom=support->position;}
    rt.lastProgressAt=time;rt.nextRecovery=time+18;
}
void UpdateManeuver(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,const std::vector<Vec3>& friendlyApproaches,SquadCommand& cmd,float time,Diagnostics* diagnostics) {
    if(!cmd.advancing)return;
    cmd.candidateScores.clear();
    const auto knowledge=WithTracks(leader,time);const Soldier* point=&leader;
    for(const auto& s:squad)if(s.Active()&&s.role==Role::Corporal&&!KnowsWounded(leader,s))point=&s;
    const Vec3 origin=point->position;
    const auto doctrine=leader.team?config.emberDoctrine:config.doctrine;
    const float caution=doctrine==Doctrine::Cautious?1.4f:doctrine==Doctrine::Aggressive?.7f:1.f;
    cmd.friendlyStrength=cmd.enemyStrength=0;cmd.danger=FireDanger(leader,origin,time);
    float nearest=1e9f,priority=1e9f;int enemy=-1,solutions=0,mobile=0;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(!ct.known)continue;
        float d=Distance(origin,ct.position);if(d>120)continue;
        // Resistance is estimated around this engagement, not summed across the entire platoon front.
        float score=d-(ct.automaticWeapon?15.f:0.f);
        if(score<priority){priority=score;nearest=d;enemy=id;}
        cmd.lastContactAt=std::max(cmd.lastContactAt,ct.observedAt);
    }
    if(enemy>=0)for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,knowledge.contacts[enemy].position)<24&&Distance(origin,ct.position)<85)
        cmd.enemyStrength+=1.25f*TrackConfidence(ct,time);
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)) {
        cmd.friendlyStrength+=(s.machineGun?1.6f:1.f)*(KnowsWounded(leader,s)?.55f:1.f)*(1-.65f*s.understoodSuppression);
        if(!KnowsWounded(leader,s))++mobile;
        solutions+=SelectFireSolution(s,map,time).enemy>=0&&!s.holdingFire&&s.reloadUntil<=time;
    }
    bool delivery=false;for(const auto& e:leader.deliveries)if(e.shooter/SquadSize==leader.squad&&e.shooter>=0&&time-e.observedAt<6)delivery=true;
    cmd.engaged=solutions>=2||delivery;
    if(cmd.engaged)cmd.lastEffectiveAt=time;
    const bool quiet=enemy<0;
    if(quiet&&!cmd.searching)++cmd.searchesResumed;
    cmd.searching=quiet;
    const float pressure=MovementPressure(leader,squad,time);
    const float ratio=cmd.friendlyStrength/std::max(1.f,cmd.enemyStrength);
    if(!quiet&&ratio<.7f){if(cmd.unfavorableSince<0)cmd.unfavorableSince=time;}else cmd.unfavorableSince=-1;
    const bool emergency=cmd.unfavorableSince>=0&&time-cmd.unfavorableSince>=6&&pressure>.3f;
    if(quiet) {
        if(cmd.movementBlock.reason!=MoveBlock::None){cmd.movementBlock={};cmd.hasWaypoint=false;cmd.planReason="searched or expired track; resume search";}
        if(!cmd.hasWaypoint)return;
    }
    if(cmd.hasWaypoint&&cmd.movementBlock.reason==MoveBlock::None) {
        int arrived=0,participants=0;
        for(const auto& s:squad)if(s.Active()&&!s.machineGun&&!IsPlatoonStaff(s)&&!KnowsWounded(leader,s)&&s.id!=cmd.leader&&s.id!=cmd.support){++participants;arrived+=Distance(s.position,cmd.waypoint)<8;}
        bool done=arrived>=std::max(1,(participants+1)/2)&&(cmd.route||Distance(origin,cmd.waypoint)<5);
        if(done&&time-cmd.planStarted>3&&cmd.route&&size_t(cmd.routeStage+1)<cmd.route->stages.size()){
            ++cmd.routeStage;const auto& stage=cmd.route->stages[cmd.routeStage];cmd.waypoint=stage.destination;
            cmd.moveExposure=stage.exposedSeconds/std::max(.01f,stage.seconds);cmd.teamPlan.moving=1-cmd.teamPlan.moving;++cmd.boundsCompleted;cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;
            cmd.opportunitySince=time;cmd.planReason="route stage reached; retain approach and prepare next segment";
            cmd.maneuverUntil=time+std::max(30.f,stage.seconds*2+15);return;
        }
        if(done&&time-cmd.planStarted>3){cmd.hasWaypoint=false;cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;cmd.planReason="movement destination reached";cmd.opportunitySince=-1;return;}
        std::vector<Vec3> crossing;
        if(cmd.route&&size_t(cmd.routeStage)<cmd.route->stages.size()){const auto& stage=cmd.route->stages[cmd.routeStage];crossing.assign(cmd.route->points.begin()+stage.begin,cmd.route->points.begin()+stage.end);}
        bool support=cmd.moveExposure<.2f||(!crossing.empty()?CoveringPath(leader,map,origin,crossing,time):CoveringCrossing(leader,map,origin,cmd.waypoint,time));
        int refusals=0;
        for(const auto& report:leader.movementReports)if(report.soldier>=0&&time-report.observedAt<8)
            for(const auto& s:squad)if(s.id==report.soldier&&s.Active()&&s.assignment.serial==report.order)++refusals;
        float crossingPressure=pressure;
        if(cmd.route){crossingPressure=0;for(const auto& member:squad)if(member.Active()&&member.assignment.teamPlan.route&&member.assignment.teamPlan.route->id==cmd.route->id&&member.assignment.task==Task::BoundMove)
            crossingPressure=std::max(crossingPressure,std::max(member.understoodSuppression,FireDanger(leader,member.position,time)));}
        if(cmd.maneuver!=Maneuver::PullBack&&(crossingPressure>.72f||(!support&&cmd.moveExposure>=.2f)||refusals>=2))
            PauseSquadMovement(leader,squad,cmd,!support?MoveBlock::Support:MoveBlock::Fire,time);
        else if(time>cmd.maneuverUntil&&!done)PauseSquadMovement(leader,squad,cmd,MoveBlock::Execution,time);
        else if(!emergency||cmd.maneuver==Maneuver::PullBack)return;
    }
    if(quiet)return;
    const auto& track=knowledge.contacts[enemy];cmd.trackedEnemy=enemy;cmd.enemyReference=track.position;
    const bool mg=HasMachineGun(squad),supportAssignment=cmd.platoonTask==PlatoonTask::Support&&time<cmd.platoonUntil;
    float idle=std::max(0.f,time-cmd.lastEffectiveAt);
    float hold=4+(mg?7.f:0.f)+(cmd.engaged?3.f:0.f)+pressure*8*caution-std::min(12.f,idle*.3f);
    if(supportAssignment&&delivery)hold+=8;
    if(emergency)hold-=12;
    using Candidate=ManeuverOption;
    TacticalRoutePlanner planner(map,leader,time,doctrine);
    std::vector<Candidate> candidates;
    // Routes have a four-second estimate lifetime. New tracks, weapon classifications,
    // metre-scale movement, and changed reported fire invalidate the assessment immediately.
    uint64_t key=1469598103934665603ull;auto add=[&](int v){key=(key^uint64_t(v))*1099511628211ull;};
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(ct.known){add(id);add(int(std::floor(ct.position.x)));add(int(std::floor(ct.position.y)));add(int(std::floor(ct.position.z)));add(ct.automaticWeapon);}}
    for(const auto& area:leader.fireAreas)if(time-area.observedAt<18){add(int(area.position.x));add(int(area.position.y));add(int(area.intensity*4));}
    add(int(cmd.platoonTask));add(cmd.platoonOrderSerial);add(cmd.failedMoveCount);
    const bool reuse=cmd.routeAssessment&&cmd.routeAssessment->geometry==map.revision&&cmd.routeAssessment->knowledge==key&&time-cmd.routeAssessment->at<4&&Distance(origin,cmd.routeAssessment->origin)<2;
    if(reuse)candidates=cmd.routeAssessment->options;
    // Fixed option families, deterministic ordering and cover-ID tie breaking.
    if(!reuse){
    for(int family=0;family<5;++family){std::vector<Candidate> shortlist;
        if(family==4&&(cmd.platoonTask==PlatoonTask::None||cmd.platoonTask==PlatoonTask::Support||time>=cmd.platoonUntil))continue;
        for(const auto& cover:CoverPositions(map)) {
            Vec3 p=cover.shelter;float travel=Distance(p,origin);if(cover.window||travel<6||travel>(family==0||family==1||family==4?100.f:32.f)||std::abs(p.z-origin.z)>.5f)continue;
            Vec3 toward=track.position-origin;float len=std::max(1.f,Length(toward));
            float lateral=((p.x-origin.x)*toward.y-(p.y-origin.y)*toward.x)/len;
            float gain=nearest-Distance(p,track.position);
            if((family==0&&lateral<8)||(family==1&&lateral>-8)||(family==2&&(gain<8||std::abs(lateral)>12))||(family==3&&gain>-8))continue;
            if(family==4&&Distance(p,leader.platoonOrder.position)>Distance(origin,leader.platoonOrder.position)-5)continue;
            if(!ProtectedAt(map,p,track.position,cover.crouch?Stance::Crouched:Stance::Standing))continue;
            bool failed=false;for(int i=0;i<std::min(4,cmd.failedMoveCount);++i)if(Distance(p,cmd.failedMoves[i])<6)failed=true;
            if(failed)continue;
            float score=family==3?(-gain*.35f+pressure*12+(emergency?15.f:0.f)-10):gain*.35f+std::abs(lateral)*.3f+std::min(5.f,idle*.15f)+(mg?-4.f:3.f);
            if(family==4)score+=8+(.4f*(Distance(origin,leader.platoonOrder.position)-Distance(p,leader.platoonOrder.position)));
            bool firingAngle=ClearLine3D(map,cover.peek+Vec3{0,0,1.5f},track.position+Vec3{0,0,1.5f});
            if(family!=3){score+=firingAngle?8.f:-8.f;Vec3 before=origin-track.position,after=p-track.position;
                float cosine=(before.x*after.x+before.y*after.y)/std::max(.01f,Length(before)*Length(after));if(firingAngle&&cosine<.707107f)score+=6;}
            score-=travel*.12f+FireDanger(leader,p,time)*12*caution;
            if(family!=3)score-=std::max(0.f,1-ratio)*8*caution;
            for(Vec3 other:friendlyApproaches)score-=std::max(0.f,8-Distance(p,other));
            shortlist.push_back({p,family==0?Maneuver::FlankNorth:family==1?Maneuver::FlankSouth:family==2?Maneuver::Press:family==3?Maneuver::PullBack:Maneuver::Reposition,score,0,false,{}});
        }
        std::stable_sort(shortlist.begin(),shortlist.end(),[](const Candidate&a,const Candidate&b){return a.score>b.score;});
        int tested=0;for(auto candidate:shortlist){if(++tested>2)break;
            auto route=std::make_shared<TacticalRoute>(planner.Evaluate(origin,candidate.p));
            route->id=uint64_t(leader.squad+1)*1000000000ull+uint64_t(++cmd.routeSerial);route->plan=cmd.planId+1;
            if(diagnostics&&diagnostics->options.enabled)diagnostics->routes.push_back(route);
            if(route->points.empty())continue;
            candidate.route=route;candidate.exposure=route->exposedSeconds/std::max(.01f,route->cost.travel);

            candidate.score-=route->cost.exposure*.25f+route->cost.fire+route->cost.lanes+route->cost.congestion+route->cost.uncertainty;
            candidate.score-=std::max(0.f,route->cost.travel-Distance(origin,candidate.p)/route->speed)*.35f;

            // Release gates apply to the upcoming stage, not the whole sheltered approach.
            const auto& stage=route->stages.front();
            candidate.exposure=stage.exposedSeconds/std::max(.01f,stage.seconds);

            candidates.push_back(std::move(candidate));
        }
    }
    auto assessment=std::make_shared<ManeuverAssessment>();assessment->geometry=map.revision;assessment->knowledge=key;assessment->at=time;assessment->origin=origin;assessment->options=candidates;cmd.routeAssessment=assessment;
    }
    for(auto& candidate:candidates){const auto& stage=candidate.route->stages.front();std::vector<Vec3> path(candidate.route->points.begin(),candidate.route->points.begin()+stage.end);
        candidate.support=CoveringPath(leader,map,origin,path,time);
        if(candidate.kind!=Maneuver::PullBack&&candidate.support)candidate.score+=10+std::min(5.f,std::max(0.f,ratio-1)*5);
        if(candidate.kind!=Maneuver::PullBack&&candidate.exposure>=.2f&&!candidate.support)candidate.score-=12;
    }
    std::stable_sort(candidates.begin(),candidates.end(),[](const Candidate&a,const Candidate&b){return a.score>b.score;});
    std::ostringstream scores;scores<<"hold="<<hold;for(const auto& c:candidates)scores<<"; "<<ManeuverName(c.kind)<<"="<<c.score<<" exposure="<<c.exposure<<" covering="<<c.support;
    cmd.candidateScores=scores.str();
    if(candidates.empty()||candidates.front().score<hold+2||mobile<2){cmd.opportunitySince=-1;cmd.planReason="hold wins candidate comparison";return;}
    const auto& best=candidates.front();
    bool withdrawal=best.kind==Maneuver::PullBack;
    if(!withdrawal&&best.exposure>=.2f&&!best.support){cmd.opportunitySince=-1;cmd.planReason="exposed crossing waits for fire on the primary overlooking track";return;}
    const float preparation=withdrawal?(emergency?0.f:2.f):best.exposure<.2f?2.f:8.f;
    if(cmd.opportunitySince<0||Distance(best.p,cmd.preparedTarget)>3){cmd.opportunitySince=time;cmd.preparedTarget=best.p;}
    cmd.preparationSeconds=preparation;
    if(time-cmd.opportunitySince<preparation){cmd.planReason=preparation>=8?"prepare exposed assault: eight seconds of covering fire":"prepare protected stage";return;}
    cmd.route=best.route;cmd.routeStage=0;cmd.teamPlan.route=cmd.route;
    cmd.hasWaypoint=true;cmd.waypoint=best.route->stages.front().destination;cmd.moveExposure=best.exposure;cmd.maneuver=best.kind;
    cmd.maneuverUntil=time+std::max(30.f,best.route->cost.travel*2+20);
    cmd.movementBlock={};cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;++cmd.teamPlan.serial;
    cmd.planReason=withdrawal?"withdrawal wins candidate comparison":best.exposure<.2f?"protected maneuver wins candidate comparison":"supported assault wins candidate comparison";
    if(withdrawal)++cmd.withdrawals;else ++cmd.presses;
}
}
