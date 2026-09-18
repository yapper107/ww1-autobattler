#include "PerceptionSim.h"
#include "CommandSim.h"
#include <algorithm>
#include <cmath>
namespace army {
int CoverageSamples(unsigned samples){int n=0;for(;samples;samples>>=1)n+=int(samples&1);return n;}
ObservationCoverage SenseCoverage(const Soldier& s,const Map& map,float time){
    ObservationCoverage evidence;const auto& a=s.assignment;
    if(!s.Active()||a.execution.completion!=Completion::Observe||s.stance!=Stance::Standing||
       Distance(s.position,a.hasSlot?a.slot.peek:a.position)>1.2f)return evidence;
    evidence.observer=s.id;evidence.method=a.execution.method;evidence.stage=a.execution.stage;evidence.generation=a.execution.generation;
    evidence.position=s.position;evidence.sector=a.sector;evidence.observedAt=time;
    const Vec3 eye=s.position+Vec3{0,0,1.7f};int bit=0;
    for(float x:{-4.f,0.f,4.f})for(float y:{-4.f,0.f,4.f}){
        Vec3 sample=a.sector+Vec3{x,y,1.2f};
        if(InVisualField(s,sample,SightRange(s))&&ClearLine3D(map,eye,sample))evidence.samples|=1u<<bit;
        ++bit;
    }
    return evidence;
}
void ReceiveCoverage(Soldier& s,const ObservationCoverage& evidence,float time){
    if(evidence.observer<0||evidence.observer>=UnitCount||evidence.observer/(SquadSize*SquadsPerTeam)!=s.team||evidence.observedAt>time||time-evidence.observedAt>120)return;
    auto* destination=&s.coverage[0];
    for(auto& old:s.coverage){
        if(old.observer==evidence.observer&&old.method==evidence.method&&old.stage==evidence.stage&&old.generation==evidence.generation){destination=&old;break;}
        if(old.observer<0||old.observedAt<destination->observedAt)destination=&old;
    }
    if(evidence.observedAt<=destination->observedAt)return;
    if(destination->method!=evidence.method||destination->samples!=evidence.samples)++s.knowledgeRevision;
    *destination=evidence;destination->receivedAt=time;
}
bool InVisualField(const Soldier& s,Vec3 p,float range){
    Vec3 delta=p-s.position;
    if(Length(delta)>=range)return false;
    if(!s.directionalSight)return true;
    float horizontal=std::sqrt(delta.x*delta.x+delta.y*delta.y);
    if(horizontal<.01f)return true;
    float lookLength=std::sqrt(s.look.x*s.look.x+s.look.y*s.look.y);
    // First slice: 140 degree horizontal field. Physical rays still test elevation/occlusion.
    return lookLength>.001f&&(delta.x*s.look.x+delta.y*s.look.y)/(horizontal*lookLength)>=.34202014f;
}
void UpdateAttention(Soldier& s,float time,float dt){
    if(!s.directionalSight||!s.Active())return;
    Vec3 target{};bool contact=false;float newest=-1000;
    if(s.cognition){
        float best=-1;int selected=-1;
        auto memory=WithTracks(s,time);
        for(int id=0;id<UnitCount;++id){const auto& ct=memory.contacts[id];
            if(!ct.known||time-ct.observedAt>6)continue;
            float score=TrackConfidence(ct,time)*(ct.automaticWeapon?1.5f:1.f)/(1+Distance(s.position,ct.position)/30);
            if(score>best){best=score;selected=id;}
        }
        // Attention periodically releases even a live contact to inspect the assigned sector/rear.
        if(selected>=0&&std::fmod(time+float(s.id%8)*.73f,8.f)<6){
            target=memory.contacts[selected].position;contact=true;s.attentionTrack=selected;
        }else s.attentionTrack=-1;
        if(s.assignment.execution.completion==Completion::Observe||
            (s.assignment.intent.purpose==GoalPurpose::Observe&&time<s.assignment.intent.expiresAt)){
            target=s.assignment.execution.completion==Completion::Observe?s.assignment.sector:s.assignment.intent.objective;contact=true;s.attentionTrack=-1;
        }
        if(contact)newest=time+1;
    }
    for(int id=0;!s.cognition&&id<UnitCount;++id){
        const auto& local=s.contacts[id];const auto& reported=s.reports[id];
        const auto& ct=local.observedAt>=reported.observedAt?local:reported;
        if(ct.observedAt<=std::max(local.clearedAt,reported.clearedAt)||time-ct.observedAt>12)continue;
        if(ct.observedAt>newest){newest=ct.observedAt;target=ct.position;contact=true;}
    }
    float desired;
    if(contact)desired=std::atan2(target.y-s.position.y,target.x-s.position.x);
    else {
        Vec3 sector=s.assignment.task!=Task::None?s.assignment.sector-s.position:s.goal-s.position;
        if(std::abs(sector.x)+std::abs(sector.y)<.01f)sector=s.facing;
        // Deterministic scan: most attention stays near the ordered sector; periodic rear checks.
        float phase=std::fmod(time+float(s.id%8)*.73f,12.f);
        float sweep=phase<9?std::sin(phase*1.3962634f)*.75f:3.14159265f;
        desired=std::atan2(sector.y,sector.x)+sweep;
    }
    float current=std::atan2(s.look.y,s.look.x);
    float turn=std::remainder(desired-current,6.28318531f);
    current+=std::clamp(turn,-2.0943951f*dt,2.0943951f*dt); // 120 degrees/second.
    s.look={std::cos(current),std::sin(current),0};
}
}
