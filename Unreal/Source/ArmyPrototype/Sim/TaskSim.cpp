#include "TaskSim.h"
#include "CommandSim.h"
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
#include <cmath>
namespace army {
const char* TaskStatusName(TaskStatus s){const char* n[]={"Issued","Received","Executing","Interrupted","Blocked","Done","Failed","Superseded"};return n[int(s)];}
const char* TaskCauseName(TaskCause c){const char* n[]={"none","shelter","passage","reload","wounded","fire","unreachable","arrived","casualty","replaced","geometry invalidated","battle ended"};return n[int(c)];}
bool TerminalTask(TaskStatus s){return s==TaskStatus::Done||s==TaskStatus::Failed||s==TaskStatus::Superseded;}
bool EquivalentTask(const Assignment& a,Task kind,Vec3 position,Vec3 sector,int target){
    return a.id&&a.task==kind&&a.target==target&&Distance(a.position,position)<.75f&&Distance(a.sector,sector)<6;
}
void TraceTask(Diagnostics* d,const Soldier& s,const TaskReceipt& r,float time,const char* kind){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.parent=d->receivedOrders.count(r.serial)?d->receivedOrders[r.serial]:d->issuedOrders.count(r.serial)?d->issuedOrders[r.serial]:d->lastPlan[s.squad];
    e.time=time;e.soldier=s.id;e.squad=s.squad;e.order=r.serial;e.kind=kind;e.reason=std::string(TaskStatusName(r.status))+": "+TaskCauseName(r.cause);
    e.taskTarget=r.target;e.taskId=r.id;e.taskStatus=int(r.status);e.taskCause=int(r.cause);e.taskSequence=r.sequence;e.taskSubject=r.soldier;e.taskObservedAt=r.at;
    e.alive=r.active;e.position=r.position;e.goal=r.goal;e.routeId=r.route;
    e.geometry=r.geometry;e.planDecision=d->lastPlan[s.squad];
    auto knowledge=WithTracks(s,time);for(int id=0;id<UnitCount;++id)if(knowledge.contacts[id].known)e.knowledge.push_back({id,s.contacts[id].visible,knowledge.contacts[id]});
    d->entries.push_back(e);
}
void SetTaskStatus(Soldier& s,TaskStatus status,TaskCause cause,float time,Diagnostics* d){
    auto& a=s.assignment;if(!a.id||(a.status==status&&a.cause==cause)||TerminalTask(a.status))return;
    a.status=status;a.cause=cause;a.statusAt=time;++a.statusSequence;
    TaskReceipt r;r.id=a.id;r.soldier=s.id;r.serial=a.serial;r.sequence=a.statusSequence;r.status=status;r.cause=cause;r.at=time;r.position=s.position;r.goal=a.position;r.route=a.teamPlan.route?a.teamPlan.route->id:0;r.geometry=a.geometry;r.target=a.target;
    s.taskOutbox.push_back(r);TraceTask(d,s,r,time,"task_status");
}
void UpdateTaskReports(Frame& f,CommandRuntime& rt){
    for(auto& s:f.soldiers){
        int newLeader=f.command[s.squad].leader;
        if(newLeader>=0&&newLeader!=rt.taskLeaders[s.squad]&&s.assignment.id){
            const auto& a=s.assignment;TaskReceipt r;r.id=a.id;r.soldier=s.id;r.serial=a.serial;r.sequence=a.statusSequence;r.status=a.status;r.cause=a.cause;r.at=a.statusAt;r.position=s.position;r.active=s.Active();r.goal=a.position;r.route=a.teamPlan.route?a.teamPlan.route->id:0;r.geometry=a.geometry;r.target=a.target;if(!r.active){r.cause=TaskCause::Casualty;++r.sequence;}s.taskOutbox.push_back(r);
        }
        if(!s.Active()&&s.assignment.id&&!s.taskLossReported){
            SetTaskStatus(s,TaskStatus::Failed,TaskCause::Casualty,f.time,rt.diagnostics);
            const auto& a=s.assignment;TaskReceipt loss;loss.id=a.id;loss.soldier=s.id;loss.serial=a.serial;loss.sequence=a.statusSequence+1;loss.status=a.status;loss.cause=TaskCause::Casualty;loss.at=f.time;loss.position=s.position;loss.active=false;loss.goal=a.position;loss.route=a.teamPlan.route?a.teamPlan.route->id:0;loss.geometry=a.geometry;loss.target=a.target;
            s.taskOutbox.push_back(loss);s.taskLossReported=true;TraceTask(rt.diagnostics,s,loss,f.time,"task_unit_lost");
        }
        const int leader=f.command[s.squad].leader,nco=s.squad*SquadSize+1;
        for(const auto& r:s.taskOutbox)for(int recipient:{leader,nco==leader?-1:nco}){
            if(recipient<0||!f.soldiers[recipient].Active())continue;
            CommandMessage m;m.kind=CommandMessage::Kind::TaskStatus;m.sender=s.id;m.recipient=recipient;m.arrives=f.time+MessageDelay;m.taskReceipt=r;rt.messages.push_back(m);
        }
        s.taskOutbox.clear();
    }
    for(int squad=0;squad<SquadCount;++squad)rt.taskLeaders[squad]=f.command[squad].leader;
}
void PrepareTaskExecution(const Soldier& s,Tactics& memory,float time){
    bool moving=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally||s.assignment.task==Task::BoundCover||s.assignment.task==Task::Overwatch;
    if(s.assignment.hasSlot&&Distance(s.position,s.assignment.position)<1.5f&&(!memory.assigned||(!memory.emergency&&Distance(memory.shelter,s.assignment.slot.shelter)>.04f))){
        const auto& slot=s.assignment.slot;memory.assigned=true;memory.coverId=slot.id;memory.geometryRevision=s.assignment.geometry;memory.shelter=slot.shelter;memory.peek=slot.peek;memory.halfCover=slot.crouch;memory.expires=time+180;memory.lastProgress=time;
    }
    if(moving&&memory.assigned&&Distance(memory.shelter,s.assignment.position)>2&&
        (!memory.emergency||s.suppression<.08f)&&s.suppression<.35f&&s.reloadUntil<=time)memory={};
}
Order ExecuteTask(const Soldier& s,const Map& map,const Config& config,const std::vector<Vec3>& reservations,Tactics& memory,float time,DecisionAlternatives* alternatives){
    bool moving=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally;
    if(!moving)return ChooseOrder(s,map,config,reservations,memory,time,alternatives);
    Doctrine doctrine=s.team?config.emberDoctrine:config.doctrine;
    float duck=doctrine==Doctrine::Cautious?.4f:doctrine==Doctrine::Aggressive?.65f:.52f;
    bool exposed=false;
    for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&Distance(s.position,ct.position)<95&&
        ClearLine3D(map,ct.position+Vec3{0,0,1.5f},s.position+Vec3{0,0,1.3f})&&!ProtectedAt(map,s.position,ct.position,Stance::Crouched))exposed=true;
    const bool pressure=s.suppression>duck;
    if((exposed&&s.suppression>.08f)||(memory.emergency&&s.suppression>.08f)){
        auto safe=[&](Vec3 p,bool crouch){for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<10&&Distance(p,ct.position)<95&&
            !ProtectedAt(map,p,ct.position,crouch?Stance::Crouched:Stance::Standing)&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,crouch?.95f:1.7f}))return false;
            return true;};
        if(!memory.emergency||!memory.assigned||!safe(memory.shelter,memory.halfCover)){
            float best=1e9f;const CoverPosition* selected=nullptr;
            for(const auto& cover:CoverPositions(map)){
                float distance=Distance(s.position,cover.shelter);if(distance>25||!safe(cover.shelter,cover.crouch))continue;
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
    if(pressure||s.reloadUntil>time)return {s.position,Action::Hold,Reason::Suppressed,Stance::Crouched};
    if(Distance(s.position,s.assignment.position)>.7f&&!(s.assignment.hasSlot&&memory.assigned&&Distance(memory.shelter,s.assignment.position)<.04f)){
        memory={};return {s.assignment.position,s.assignment.task==Task::PullBack?Action::Retreat:Action::Advance,Reason::BoundAdvance};
    }
    if(s.assignment.hasSlot){
        if(!memory.assigned||Distance(memory.shelter,s.assignment.slot.shelter)>.04f){const auto& slot=s.assignment.slot;memory={};memory.assigned=true;memory.coverId=slot.id;memory.geometryRevision=s.assignment.geometry;memory.shelter=slot.shelter;memory.peek=slot.peek;memory.halfCover=slot.crouch;memory.expires=time+180;memory.lastProgress=time;}
        return ChooseOrder(s,map,config,reservations,memory,time,alternatives);
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
    if(TerminalTask(s.assignment.status))return;
    TaskStatus status=TaskStatus::Executing;TaskCause cause=TaskCause::None;
    if(!s.Active()){status=TaskStatus::Failed;cause=TaskCause::Casualty;}
    else if(s.waitingPassage>=0){status=TaskStatus::Interrupted;cause=TaskCause::Passage;}
    else if(s.reloadUntil>time){status=TaskStatus::Interrupted;cause=TaskCause::Reload;}
    else if(memory.emergency||s.reason==Reason::Suppressed||s.reason==Reason::Duck){status=TaskStatus::Interrupted;cause=TaskCause::Shelter;}
    else if((!Walkable(map,s.assignment.position)||(s.assignment.hasSlot&&!CoverExists(map,s.assignment.slot.id)))&&Distance(s.position,s.assignment.position)<3){status=TaskStatus::Failed;cause=TaskCause::Geometry;}
    else if(s.assignment.hasSlot?(Distance(s.position,s.assignment.slot.peek)<.75f&&s.action==Action::Fire&&SelectFireSolution(s,map,time).enemy>=0):Distance(s.position,s.assignment.position)<1.5f){status=TaskStatus::Done;cause=TaskCause::Arrived;}
    if(status==TaskStatus::Executing&&s.assignment.status==TaskStatus::Blocked&&s.assignment.cause==TaskCause::Unreachable)return;
    if(cause==TaskCause::Geometry)s.assignment.geometry=map.revision;
    SetTaskStatus(s,status,cause,time,d);
}
}
