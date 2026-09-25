#pragma once
// Presentation-only selection and timing: deliberately independent of Unreal and Sim.
#include "CharacterClips.h"
#include "WeaponHandling.h"
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
namespace armyvisual {
// Plan 029 M-A1: there are no prone clips yet (art handoff). A prone man plays the crouching set,
// lowered by this much times his prone weight; the stand-in reads as a man down low, not lying flat.
constexpr float ProneRootDrop=30.f; // cm
// Plan 029 M-C: there are no vault clips yet (art handoff). A vault plays A_jump_up, A_jump_loop and
// A_jump_down in turn, timed by the simulation's vault progress, and the root is lifted over the top.
inline float VaultLift(const HandlingInput& h){ // cm: an arc peaking a little above the obstacle's top
    if(!h.vaulting)return 0.f;
    const float p=std::clamp(h.vaultProgress,0.f,1.f);
    return (h.vaultHeight+.15f)*100.f*std::sin(3.14159265f*p);
}
struct State {
    HandlingInput handling;
    float forward=0, right=0, crouch=0, aim=0;
    float prone=0; // 0..1: blends toward the crouching set with the root lowered (ProneRootDrop)
    double phase=0;
    float outAt=-1;
    bool outCrouched=false;
};
struct Sample { int clip; float weight; double time; };
inline int Find(const std::string& name) {
    for(int i=0;i<ClipCount;++i)if(name==Clips[i].name)return i;
    return -1;
}
inline std::vector<Sample> Samples(const State& s,double time) {
    std::vector<Sample> out;
    const double age=s.outAt<0?-1:std::max(0.,time-s.outAt);
    const float death=age<0?0:float(std::clamp(age/.15,0.,1.));
    const double aliveTime=s.outAt<0?time:s.outAt;
    auto add=[&](const std::string& name,float weight,bool movement){
        if(weight<.00001f)return;
        const int i=Find(name);if(i<0)return;
        const double duration=Clips[i].duration;
        const double phase=s.phase+Clips[i].phaseOffset;
        const double t=movement?(phase-std::floor(phase))*duration:std::fmod(std::max(0.,aliveTime),duration);
        out.push_back({i,weight,t});
    };
    if(s.handling.vaulting&&death<=0) {
        // Up for the first 30%, over the top to 70%, down for the rest, with short cross-fades.
        const double p=std::clamp(double(s.handling.vaultProgress),0.,1.);
        const float up=1-float(std::clamp((p-.25)/.1,0.,1.)),down=float(std::clamp((p-.65)/.1,0.,1.)),loop=std::max(0.f,1-up-down);
        auto jump=[&](const char* name,float weight,double local){if(weight<.00001f)return;const int i=Find(name);if(i<0)return;
            out.push_back({i,weight,std::clamp(local,0.,1.)*Clips[i].duration});};
        jump("A_jump_up",up,p/.3);jump("A_jump_loop",loop,(p-.3)/.4);jump("A_jump_down",down,(p-.7)/.3);
        return out;
    }
    const float speed=std::hypot(s.forward,s.right);
    const float move=std::clamp(speed/.25f,0.f,1.f);
    const char* dirs[]={"forward","forward_right","right","backward_right","backward","backward_left","left","forward_left"};
    double sector=std::atan2(s.right,s.forward)*4/3.141592653589793;
    if(sector<0)sector+=8;
    int d=int(sector)%8;float a=float(sector-std::floor(sector));
    const float low=std::max(s.crouch,s.prone); // prone plays the crouching set until prone clips exist
    for(int stance=0;stance<2;++stance) {
        const float sw=(stance?low:1-low)*(1-death);
        const std::string idle=stance?"A_idle_crouching":"A_idle";
        add(idle,sw*(1-move)*(1-s.aim),false);add(idle+"_aiming",sw*(1-move)*s.aim,false);
        auto direction=[&](const std::string& prefix,float gait){
            add(prefix+dirs[d]+"_InPlace",sw*move*gait*(1-a),true);
            add(prefix+dirs[(d+1)%8]+"_InPlace",sw*move*gait*a,true);
        };
        if(stance)direction("A_walk_crouching_",1);
        else {
            const float run=s.handling.sprinting?1.f:std::clamp((speed-1.755f)/(4.389f-1.755f),0.f,1.f);
            const float sprint=s.handling.sprinting?1.f:std::clamp((speed-4.389f)/(6.583f-4.389f),0.f,1.f);
            direction("A_walk_",1-run);direction("A_run_",run*(1-sprint));direction("A_sprint_",sprint);
        }
    }
    if(death>0) {
        const int i=Find(s.outCrouched?"A_death_crouching_headshot_front":"A_death_from_the_front");
        out.push_back({i,death,std::min(age,Clips[i].duration)});
    }
    return out;
}
inline double CycleRate(const State& s) {
    State live=s;live.outAt=-1;
    double rate=0,weight=0;const double speed=std::hypot(s.forward,s.right);
    for(const auto& x:Samples(live,0))if(Clips[x.clip].speed>.5){
        rate+=x.weight*speed/(Clips[x.clip].speed*Clips[x.clip].duration);weight+=x.weight;
    }
    return weight>0?rate/weight:0;
}
inline float Grip(const State& s,double time) {
    return s.outAt<0?1.f:float(1-std::clamp((time-s.outAt-.1)/(.183333333-.1),0.,1.));
}
}
