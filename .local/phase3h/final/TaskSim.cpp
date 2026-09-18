#include "TaskSim.h"
#include "CommandSim.h"
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
#include "PerceptionSim.h"
#include <cmath>
namespace army {
const char* TaskStatusName(TaskStatus s){const char* n[]={"Issued","Received","Executing","Interrupted","Blocked","Done","Failed","Superseded"};return n[int(s)];}
const char* TaskCauseName(TaskCause c){const char* n[]={"none","shelter","passage","reload","wounded","fire","unreachable","arrived","casualty","replaced","geometry invalidated","battle ended","observed sight lines","useful support fire","execution timeout","no useful observation","awaiting support","insufficient capable members","local covering fire unavailable"};return n[int(c)];}
static void ReceiptEvidence(const Soldier& s,TaskReceipt& r){
    r.execution=s.assignment.execution;
    for(const auto& e:s.coverage)if(e.observer==s.id&&e.method==r.execution.method&&e.stage==r.execution.stage&&e.generation==r.execution.generation&&e.observedAt>r.coverage.observedAt)r.coverage=e;
}
bool TerminalTask(TaskStatus s){return s==TaskStatus::Done||s==TaskStatus::Failed||s==TaskStatus::Superseded;}
bool EquivalentTask(const Assignment& a,Task kind,Vec3 position,Vec3 sector,int target){
    return a.id&&a.task==kind&&a.target==target&&Distance(a.position,position)<.75f&&Distance(a.sector,sector)<6;
}
void TraceTask(Diagnostics* d,const Soldier& s,const TaskReceipt& r,float time,const char* kind){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.parent=d->receivedOrders.count(r.serial)?d->receivedOrders[r.serial]:d->issuedOrders.count(r.serial)?d->issuedOrders[r.serial]:d->lastPlan[s.squad];
    e.time=time;e.soldier=s.id;e.squad=s.squad;e.order=r.serial;e.kind=kind;e.reason=std::string(TaskStatusName(r.status))+": "+TaskCauseName(r.cause);
    e.intent.id=r.goalId;e.taskTarget=r.target;e.taskId=r.id;e.taskStatus=int(r.status);e.taskCause=int(r.cause);e.taskSequence=r.sequence;e.taskSubject=r.soldier;e.taskObservedAt=r.at;
    e.execution=r.execution;if(r.coverage.observer>=0)e.coverage.push_back(r.coverage);e.peek=s.assignment.hasSlot?s.assignment.slot.peek:s.assignment.position;e.sector=s.assignment.sector;
    e.taskRemaining=r.remaining;e.alive=r.active;e.position=r.position;e.goal=r.goal;e.routeId=r.route;
    e.geometry=r.geometry;e.planDecision=d->lastPlan[s.squad];
    auto knowledge=WithTracks(s,time);for(int id=0;id<UnitCount;++id)if(knowledge.contacts[id].known)e.knowledge.push_back({id,s.contacts[id].visible,knowledge.contacts[id]});
    d->entries.push_back(e);
}
void SetTaskStatus(Soldier& s,TaskStatus status,TaskCause cause,float time,Diagnostics* d){
    auto& a=s.assignment;if(!a.id||(a.status==status&&a.cause==cause)||(TerminalTask(a.status)&&!(a.status==TaskStatus::Done&&(a.execution.completion==Completion::Support||(s.cognition&&a.execution.completion==Completion::Occupy)))))return;
    a.status=status;a.cause=cause;a.statusAt=time;a.statusPosition=s.position;++a.statusSequence;
    TaskReceipt r;r.goalId=a.intent.id;r.id=a.id;r.soldier=s.id;r.serial=a.serial;r.sequence=a.statusSequence;r.status=status;r.cause=cause;r.at=time;r.position=s.position;r.goal=a.position;r.route=a.teamPlan.route?a.teamPlan.route->id:0;r.geometry=a.geometry;r.target=a.target;
    ReceiptEvidence(s,r);s.taskOutbox.push_back(r);TraceTask(d,s,r,time,"task_status");
}
void UpdateTaskReports(Frame& f,CommandRuntime& rt){
    for(auto& s:f.soldiers){
        int newLeader=f.command[s.squad].leader;
        if(newLeader>=0&&newLeader!=rt.taskLeaders[s.squad]&&s.assignment.id){
            const auto& a=s.assignment;TaskReceipt r;r.goalId=a.intent.id;r.id=a.id;r.soldier=s.id;r.serial=a.serial;r.sequence=a.statusSequence;r.status=a.status;r.cause=a.cause;r.at=a.statusAt;r.position=s.cognition?a.statusPosition:s.position;r.active=s.Active();r.goal=a.position;r.route=a.teamPlan.route?a.teamPlan.route->id:0;r.geometry=a.geometry;r.target=a.target;if(!r.active){r.cause=TaskCause::Casualty;++r.sequence;}ReceiptEvidence(s,r);s.taskOutbox.push_back(r);
        }
        if(!s.Active()&&s.assignment.id&&!s.taskLossReported){
            SetTaskStatus(s,TaskStatus::Failed,TaskCause::Casualty,f.time,rt.diagnostics);
            const auto& a=s.assignment;TaskReceipt loss;loss.goalId=a.intent.id;loss.id=a.id;loss.soldier=s.id;loss.serial=a.serial;loss.sequence=a.statusSequence+1;loss.status=a.status;loss.cause=TaskCause::Casualty;loss.at=f.time;loss.position=s.position;loss.active=false;loss.goal=a.position;loss.route=a.teamPlan.route?a.teamPlan.route->id:0;loss.geometry=a.geometry;loss.target=a.target;
            ReceiptEvidence(s,loss);s.taskOutbox.push_back(loss);s.taskLossReported=true;TraceTask(rt.diagnostics,s,loss,f.time,"task_unit_lost");
        }
        if(s.cognition&&s.Active()&&s.assignment.id&&s.assignment.status==TaskStatus::Executing&&
            (s.assignment.execution.completion==Completion::Transit||s.assignment.execution.completion==Completion::Occupy)){
            auto& a=s.assignment;
            if(rt.taskProgressAssignment[s.id]!=a.id){rt.taskProgressAssignment[s.id]=a.id;rt.taskProgressAt[s.id]=f.time;rt.taskProgressPosition[s.id]=s.position;}
            else if(f.time-rt.taskProgressAt[s.id]>=1&&Distance(s.position,rt.taskProgressPosition[s.id])>=.75f){
                rt.taskProgressAt[s.id]=f.time;rt.taskProgressPosition[s.id]=s.position;
                TaskReceipt progress;progress.goalId=a.intent.id;progress.id=a.id;progress.soldier=s.id;progress.serial=a.serial;progress.sequence=++a.statusSequence;
                progress.status=a.status;progress.cause=a.cause;progress.at=f.time;progress.position=s.position;progress.goal=a.position;
                progress.remaining=rt.taskRemaining[s.id];
                progress.route=a.teamPlan.route?a.teamPlan.route->id:0;progress.geometry=a.geometry;progress.target=a.target;
                ReceiptEvidence(s,progress);s.taskOutbox.push_back(progress);TraceTask(rt.diagnostics,s,progress,f.time,"task_progress");
            }
        }
        const int leader=f.command[s.squad].leader,nco=s.squad*SquadSize+1;
        for(const auto& r:s.taskOutbox)for(int recipient:{leader,nco==leader?-1:nco}){
            if(recipient<0||!f.soldiers[recipient].Active())continue;
            CommandMessage m;m.kind=CommandMessage::Kind::TaskStatus;m.sender=s.id;m.recipient=recipient;m.arrives=f.time+rt.reportDelay;m.taskReceipt=r;rt.messages.push_back(m);
        }
        s.taskOutbox.clear();
    }
    for(int squad=0;squad<SquadCount;++squad)rt.taskLeaders[squad]=f.command[squad].leader;
}
void PrepareTaskExecution(const Soldier& s,Tactics& memory,float time){
    // Safety selected the same cover as the order. Once pressure subsides the
    // soldier may resume toward its peek without ever touching the shelter centre.
    if(s.cognition&&memory.emergency&&memory.assigned&&
        Distance(memory.shelter,s.assignment.hasSlot?s.assignment.slot.shelter:s.assignment.position)<.04f&&
        s.suppression<.08f&&s.reloadUntil<=time&&(!s.assignment.execution.paused||Distance(s.position,memory.shelter)<.2f))memory.emergency=false;
    bool moving=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally||s.assignment.task==Task::BoundCover||s.assignment.task==Task::Overwatch;
    if(s.assignment.hasSlot&&Distance(s.position,s.assignment.position)<1.5f&&(!memory.assigned||memory.emergency||Distance(memory.shelter,s.assignment.slot.shelter)>.04f)){
        // Emergency arrival at the assigned shelter resumes the same task.
        // Completion still requires the existing firing-position predicate.
        const auto& slot=s.assignment.slot;memory.emergency=memory.emergency&&s.assignment.execution.paused&&Distance(s.position,slot.shelter)>=.2f;memory.assigned=true;memory.coverId=slot.id;memory.geometryRevision=s.assignment.geometry;memory.shelter=slot.shelter;memory.peek=slot.peek;memory.halfCover=slot.crouch;memory.expires=time+180;memory.lastProgress=time;
    }
    if(moving&&memory.assigned&&Distance(memory.shelter,s.assignment.position)>2&&
        (!memory.emergency||s.suppression<.08f)&&s.suppression<.35f&&s.reloadUntil<=time)memory={};
}
Order ExecuteTask(const Soldier& s,const Map& map,const Config& config,const std::vector<Vec3>& reservations,Tactics& memory,float time,DecisionAlternatives* alternatives){
    const bool typed=s.assignment.execution.completion!=Completion::Legacy;
    bool moving=typed||s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally;
    if(!moving)return ChooseOrder(s,map,config,reservations,memory,time,alternatives);
    if(typed&&s.assignment.execution.unavailable)return {s.position,Action::Hold,Reason::AwaitOrders,Stance::Crouched};
    Doctrine doctrine=s.team?config.emberDoctrine:config.doctrine;
    float duck=doctrine==Doctrine::Cautious?.4f:doctrine==Doctrine::Aggressive?.65f:.52f;
    bool exposed=false;
    for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&Distance(s.position,ct.position)<95&&
        ClearLine3D(map,ct.position+Vec3{0,0,1.5f},s.position+Vec3{0,0,1.3f})&&!ProtectedAt(map,s.position,ct.position,Stance::Crouched))exposed=true;
    const bool pressure=s.suppression>duck;
    const float shelterThreshold=s.cognition&&s.assignment.teamPlan.released?.3f:.08f;
    if((exposed&&s.suppression>shelterThreshold)||(memory.emergency&&s.suppression>shelterThreshold)){
        auto safe=[&](Vec3 p,bool crouch){for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&Distance(p,ct.position)<95&&
            !ProtectedAt(map,p,ct.position,crouch?Stance::Crouched:Stance::Standing)&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,crouch?.95f:1.7f}))return false;
            return true;};
        if(!memory.emergency||!memory.assigned||!safe(memory.shelter,memory.halfCover)){
            float best=1e9f;const CoverPosition* selected=nullptr;
            for(const auto& cover:CoverPositions(map)){
                float distance=Distance(s.position,cover.shelter);if(distance>25||!safe(cover.shelter,cover.crouch))continue;
                if(config.drills){bool occupied=false;int close=0;for(int id=0;id<UnitCount;++id)if(id!=s.id&&s.allies[id].known&&time-s.allies[id].observedAt<3){
                    float gap=Distance(s.allies[id].position,cover.shelter);close+=gap<3;occupied|=gap<2||Distance(s.allies[id].position,cover.peek)<1.8f||close>=2;
                }if(occupied)continue;}

                auto path=FindPath(map,s.position,cover.shelter);if(path.empty())continue;
                float score=0;Vec3 previous=s.position;for(Vec3 end:path){float length=Distance(previous,end);int count=std::max(1,int(std::ceil(length/3)));
                    for(int k=1;k<=count;++k){Vec3 at=previous+(end-previous)*(float(k)/count);bool seen=false;
                        for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},at+Vec3{0,0,1.3f}))seen=true;
                        score+=length/count*(seen?5.f:1.f);
                    }previous=end;
                }
                for(const auto& ct:s.contacts)if(ct.known)score+=2*std::max(0.f,Distance(s.position,ct.position)-Distance(cover.shelter,ct.position));
                if(score<best){best=score;selected=&cover;}
            }
            if(selected){memory={};memory.assigned=memory.emergency=true;memory.shelter=selected->shelter;memory.peek=selected->peek;memory.halfCover=selected->crouch;memory.coverId=selected->id;memory.geometryRevision=map.revision;memory.lastProgress=time;}
        }
        if(memory.emergency&&memory.assigned)return {memory.shelter,Distance(s.position,memory.shelter)>.12f?Action::Cover:Action::Hold,Reason::EmergencyCover,memory.halfCover?Stance::Crouched:Stance::Standing};
        return {s.position,Action::Hold,Reason::Suppressed,Stance::Crouched};
    }
    if(s.assignment.drillInstance>0&&s.assignment.execution.paused&&s.assignment.hasSlot){
        const auto& slot=s.assignment.slot;
        if(Distance(s.position,slot.shelter)<=8&&CoverExists(map,slot.id)){
            auto path=FindPath(map,s.position,slot.shelter);bool allowed=!path.empty();
            for(Vec3 point:path){
                const auto& a=s.assignment;
                allowed&=((point.x>=a.areaMin.x&&point.x<=a.areaMax.x&&point.y>=a.areaMin.y&&point.y<=a.areaMax.y)||(a.areaDiscRadius>0&&Distance(point,a.areaDiscCenter)<=a.areaDiscRadius));
                if(a.teamPlan.route)allowed&=CorridorDistance(*a.teamPlan.route,point)<=40;
            }
            if(allowed&&Distance(s.position,slot.shelter)>.2f)return {slot.shelter,Action::Cover,Reason::EmergencyCover,Stance::Crouched};
        }
    }
    if(pressure||s.reloadUntil>time)return {s.position,Action::Hold,Reason::Suppressed,Stance::Crouched};
    if(s.assignment.drillInstance>0&&s.assignment.execution.rushSeconds>0&&
        !s.assignment.execution.paused&&time-s.assignment.activatedAt-s.assignment.drillRushPausedSeconds>=s.assignment.execution.rushSeconds&&Distance(s.position,s.assignment.position)>.75f)
        return {s.position,Action::Hold,Reason::AwaitOrders,Stance::Crouched};
    if(typed&&s.assignment.execution.paused){
        // A support pause stops the advance, but must not strand a soldier in
        // a known firing line beside their assigned shelter. This bounded safety
        // move ends at shelter, never at the exposed peek or the next waypoint.
        if(s.cognition&&s.assignment.hasSlot&&(exposed||(memory.emergency&&memory.assigned&&Distance(memory.shelter,s.assignment.slot.shelter)<.04f))){
            const auto& slot=s.assignment.slot;const float distance=Distance(s.position,slot.shelter);
            bool safe=distance>.2f&&distance<=6&&CoverExists(map,slot.id)&&ClearLine(map,s.position,slot.shelter,.48f);
            for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&Distance(slot.shelter,ct.position)<95)
                safe&=ProtectedAt(map,slot.shelter,ct.position,slot.crouch?Stance::Crouched:Stance::Standing);
            if(safe){memory={};memory.assigned=memory.emergency=true;memory.shelter=slot.shelter;memory.peek=slot.peek;
                memory.halfCover=slot.crouch;memory.coverId=slot.id;memory.geometryRevision=map.revision;memory.lastProgress=time;
                return {slot.shelter,Action::Cover,Reason::EmergencyCover,slot.crouch?Stance::Crouched:Stance::Standing};}
        }
        // Awaiting movement support does not forbid defending the current
        // position. Fire only from the current posture with a real local solution.
        if(s.cognition&&SelectFireSolution(s,map,time).enemy>=0)return {s.position,Action::Fire,Reason::AwaitOrders,s.stance};
        return {s.position,Action::Hold,Reason::AwaitOrders,Stance::Crouched};
    }
    if(Distance(s.position,s.assignment.position)>.7f&&
        ((s.assignment.drillInstance>0&&s.assignment.execution.rushSeconds>0)||!(s.assignment.hasSlot&&memory.assigned&&Distance(memory.shelter,s.assignment.position)<.04f))){
        memory={};return {s.assignment.position,s.assignment.task==Task::PullBack?Action::Retreat:Action::Advance,Reason::BoundAdvance,Stance::Standing};
    }
    if(s.assignment.drillInstance>0&&s.assignment.execution.rushSeconds>0){
        // A sprint ends crouched at its accepted endpoint, never at an exposed
        // peek. Personal safety above still overrides movement during the rush.
        auto crouched=s;crouched.stance=Stance::Crouched;
        if(SelectFireSolution(crouched,map,time).enemy>=0)return {s.position,Action::Fire,Reason::AtWaypoint,Stance::Crouched};
        return {s.position,Action::Hold,Reason::AtWaypoint,Stance::Crouched};
    }
    if(s.assignment.hasSlot){
        if(!memory.assigned||Distance(memory.shelter,s.assignment.slot.shelter)>.04f){const auto& slot=s.assignment.slot;memory={};memory.assigned=true;memory.coverId=slot.id;memory.geometryRevision=s.assignment.geometry;memory.shelter=slot.shelter;memory.peek=slot.peek;memory.halfCover=slot.crouch;memory.expires=time+180;memory.lastProgress=time;}
        if(!typed)return ChooseOrder(s,map,config,reservations,memory,time,alternatives);
    }
    if(typed){
        const Vec3 peek=s.assignment.hasSlot?s.assignment.slot.peek:s.assignment.position;
        if(Distance(s.position,peek)>.15f)return {peek,Action::Advance,Reason::Peek,Stance::Standing};
        if(s.assignment.execution.completion==Completion::Observe)return {peek,Action::Hold,Reason::Watching,Stance::Standing};
        if(s.assignment.execution.completion==Completion::Transit){
            // Arrival is a synchronization point, not a cease-fire order.
            // Cover the remaining members from here when personal sensing gives
            // a real shot; this never substitutes for the named support dependency.
            if(s.cognition&&SelectFireSolution(s,map,time).enemy>=0)return {peek,Action::Fire,Reason::AtWaypoint,s.stance};
            return {peek,Action::Hold,Reason::AtWaypoint,Stance::Crouched};
        }
        Stance posture=Stance::Standing;
        if(s.cognition&&s.assignment.hasSlot&&s.assignment.slot.crouch){
            auto crouched=s;crouched.stance=Stance::Crouched;
            const auto shot=SelectFireSolution(crouched,map,time);
            if(shot.enemy>=0&&ClearLine3D(map,peek+Vec3{0,0,.72f},shot.point))posture=Stance::Crouched;
        }
        return {peek,Action::Fire,Reason::CoverFire,posture};
    }
    // Intermediate stages are synchronization points. Safety can crouch here,
    // but cannot invent a replacement maneuver destination.
    return {s.position,Action::Hold,Reason::AtWaypoint,Stance::Crouched};
}
void ReportTaskNavigation(Soldier& s,bool reachable,float time,Diagnostics* d){
    if(!s.assignment.id||TerminalTask(s.assignment.status))return;
    if(!reachable)SetTaskStatus(s,TaskStatus::Blocked,TaskCause::Unreachable,time,d);
    else if(s.assignment.status==TaskStatus::Blocked&&s.assignment.cause==TaskCause::Unreachable)SetTaskStatus(s,TaskStatus::Executing,TaskCause::None,time,d);
}
void EvaluateTaskExecution(Soldier& s,const Map& map,const Tactics& memory,float time,Diagnostics* d){
    // Occupation certifies physical control of the assigned shelter or peek.
    // Looking from the peek and delivering fire have separate contracts. A
    // reload at the assigned shelter must not erase a real foothold.
    const bool occupies=s.cognition&&s.assignment.execution.completion==Completion::Occupy&&
        !s.assignment.execution.unavailable&&s.Active()&&Walkable(map,s.assignment.position)&&
        (!memory.emergency||Distance(s.position,s.goal)<.2f)&&
        (!s.assignment.hasSlot||CoverExists(map,s.assignment.slot.id))&&
        (Distance(s.position,s.assignment.position)<.75f||
            (s.assignment.hasSlot&&Distance(s.position,s.assignment.slot.peek)<.75f));
    if(occupies){SetTaskStatus(s,TaskStatus::Done,TaskCause::Arrived,time,d);return;}
    if(TerminalTask(s.assignment.status)&&!(s.assignment.status==TaskStatus::Done&&(s.assignment.execution.completion==Completion::Support||(s.cognition&&s.assignment.execution.completion==Completion::Occupy))))return;
    TaskStatus status=TaskStatus::Executing;TaskCause cause=TaskCause::None;
    if(!s.Active()){status=TaskStatus::Failed;cause=TaskCause::Casualty;}
    else if(s.assignment.execution.unavailable){status=TaskStatus::Failed;cause=TaskCause::Unreachable;}
    else if(s.waitingPassage>=0){status=TaskStatus::Interrupted;cause=TaskCause::Passage;}
    else if(s.reloadUntil>time){status=TaskStatus::Interrupted;cause=TaskCause::Reload;}
    else if(memory.emergency||s.reason==Reason::Suppressed||s.reason==Reason::Duck){status=TaskStatus::Interrupted;cause=TaskCause::Shelter;}
    else if((!Walkable(map,s.assignment.position)||(s.assignment.hasSlot&&!CoverExists(map,s.assignment.slot.id)))&&Distance(s.position,s.assignment.position)<3){status=TaskStatus::Failed;cause=TaskCause::Geometry;}
    else if(s.assignment.execution.completion!=Completion::Legacy){
        auto& a=s.assignment;const auto kind=a.execution.completion;
        const bool arrived=Distance(s.position,a.hasSlot?a.slot.peek:a.position)<.75f;
        bool success=(kind==Completion::Transit||kind==Completion::Occupy)&&arrived;
        if(kind==Completion::Observe&&arrived&&time-a.activatedAt>=1){
            bool sampled=false,sighted=false;
            for(const auto& e:s.coverage)if(e.observer==s.id&&e.method==a.execution.method&&e.stage==a.execution.stage&&e.generation==a.execution.generation&&e.observedAt>=a.activatedAt){sampled|=e.samples!=0;success|=CoverageSamples(e.samples)>=5;}
            for(const auto& ct:s.contacts)sighted|=ct.known&&ct.observedAt>=a.activatedAt&&Distance(ct.position,a.sector)<8;
            success|=sampled&&sighted; // Completion carries inspected sight lines even when contact recognition arrived first.
        }
        if(arrived&&(kind==Completion::Support||kind==Completion::Observe))cause=TaskCause::Arrived;
        if(kind==Completion::Support&&arrived)for(const auto& delivery:s.deliveries){
            const bool local=s.cognition&&a.execution.rifleSupport&&a.task==Task::BoundCover;
            if(delivery.shooter!=s.id||(!delivery.supportWeapon&&!local)||delivery.observedAt<a.activatedAt||time-delivery.observedAt>=6)continue;
            if(local){int rounds=0;for(float at:delivery.times)rounds+=at>=a.activatedAt&&at>=time-6&&at<=time;
                success|=rounds>=2&&(delivery.enemy==a.execution.supportThreat||Distance(delivery.target,a.sector)<4);
            }else success|=Distance(delivery.target,a.sector)<18;
        }
        if(kind==Completion::Support&&!success&&a.status==TaskStatus::Done)a.execution.deadline=std::min(a.intent.expiresAt,time+15.f);
        if(!success&&a.execution.paused){status=TaskStatus::Interrupted;cause=TaskCause::AwaitSupport;}
        if(success){status=TaskStatus::Done;cause=kind==Completion::Observe?TaskCause::Observed:kind==Completion::Support?TaskCause::Support:TaskCause::Arrived;}
        else if(a.drillInstance>0&&a.execution.rushSeconds>0&&!a.execution.paused&&time-a.activatedAt-a.drillRushPausedSeconds>=a.execution.rushSeconds){status=TaskStatus::Failed;cause=TaskCause::Timeout;}
        else if(a.execution.deadline>0&&time>=a.execution.deadline){status=TaskStatus::Failed;cause=kind==Completion::Observe?TaskCause::NoObservation:TaskCause::Timeout;}
    }
    else if(s.assignment.hasSlot?(Distance(s.position,s.assignment.slot.peek)<.75f&&s.action==Action::Fire&&SelectFireSolution(s,map,time).enemy>=0):Distance(s.position,s.assignment.position)<1.5f){status=TaskStatus::Done;cause=TaskCause::Arrived;}
    if(status==TaskStatus::Executing&&s.assignment.status==TaskStatus::Blocked&&s.assignment.cause==TaskCause::Unreachable)return;
    if(s.assignment.execution.completion==Completion::Support&&s.assignment.status==TaskStatus::Done&&status!=TaskStatus::Done&&cause!=TaskCause::Casualty&&cause!=TaskCause::Geometry)s.assignment.execution.deadline=std::min(s.assignment.intent.expiresAt,time+15.f);
    if(cause==TaskCause::Geometry)s.assignment.geometry=map.revision;
    SetTaskStatus(s,status,cause,time,d);
}
}
