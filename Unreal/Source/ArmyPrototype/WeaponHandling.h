#pragma once
#include <algorithm>
#include <cmath>
namespace armyvisual {
struct HandlingInput {
    double lastShot=-1000, reloadStart=-1, reloadEnd=-1;
    float cycleSeconds=1.25f;
    bool machineGun=false, movingFire=false, coveredPath=false;
    bool sprinting=false, winded=false, staminaAvailable=false;
    float stamina=1;
    // Plan 029 M-C: going over an obstacle (vaultProgress 0..1, vaultHeight m above his feet).
    bool vaulting=false;
    float vaultProgress=0, vaultHeight=0;
};
struct Offset {float x=0,y=0,z=0;};
inline Offset Mix(Offset a,Offset b,float t){return {a.x+(b.x-a.x)*t,a.y+(b.y-a.y)*t,a.z+(b.z-a.z)*t};}
inline float Smooth(float t){t=std::clamp(t,0.f,1.f);return t*t*(3-2*t);}
struct HandlingPose {
    Offset gun,right,left;
    float pitch=0,boltOpen=0,boltBack=0,clip=0,upper=0;
    const char* name="ready";
};
inline HandlingPose Handling(const HandlingInput& s,double time,float aim,bool dead) {
    HandlingPose p;if(dead)return p;
    p.upper=std::max(aim,s.coveredPath?.45f:0.f);
    if(s.sprinting){p.name="sprint carry";p.upper=0;return p;}
    if(s.vaulting){p.name="vault carry";p.upper=0;return p;} // both hands for the wall; he cannot fire
    if(s.winded){p.gun.z=float(std::sin(time*5.5))*.4f;p.name="winded";}
    if(s.machineGun&&s.movingFire){p.gun.z-=14;p.pitch-=8;p.upper=1;p.name="moving hip fire";}
    const float age=float(time-s.lastShot);
    if(age>=0&&age<.2f){const float kick=std::exp(-age/ .055f);p.gun.y=-2.2f*kick;p.pitch+=4*kick;p.upper=1;p.name="fire / recoil";}
    if(!s.machineGun&&age>=.16f&&age<s.cycleSeconds){
        const float t=(age-.16f)/std::max(.1f,s.cycleSeconds-.16f);
        const float reach=Smooth(t/.16f)*(1-Smooth((t-.84f)/.16f));
        p.boltOpen=Smooth((t-.12f)/.12f)*(1-Smooth((t-.7f)/.12f));
        p.boltBack=Smooth((t-.28f)/.14f)*(1-Smooth((t-.5f)/.17f));
        p.right={6*reach,(10-8*p.boltBack)*reach,(7+4*p.boltOpen)*reach};p.upper=1;p.name="bolt cycle";
    }
    if(s.reloadStart>=0&&time>=s.reloadStart&&time<s.reloadEnd){
        const float t=float((time-s.reloadStart)/std::max(.01,s.reloadEnd-s.reloadStart));
        p={};p.upper=1;p.name=s.machineGun?"machine gun reload":"rifle reload";
        const float hold=Smooth(t/.12f)*(1-Smooth((t-.85f)/.15f));p.pitch=-10*hold;p.gun.z=-4*hold;
        // Authored standing keys: retrieve at belt, insert, withdraw, reacquire grip.
        const float keys[]={0,.13f,.32f,.52f,.7f,.86f,1};
        const Offset rifle[]={{},{6,10,11},{12,-4,-25},{5,17,20},{5,17,11},{7,10,14},{}};
        const Offset mg[]={{},{0,0,-8},{4,-10,-25},{0,0,-12},{0,0,-3},{0,0,-8},{}};
        for(int i=0;i<6;++i)if(t>=keys[i]&&t<=keys[i+1]){
            const auto target=Mix(s.machineGun?mg[i]:rifle[i],s.machineGun?mg[i+1]:rifle[i+1],Smooth((t-keys[i])/(keys[i+1]-keys[i])));
            if(s.machineGun)p.left=target;else p.right=target;break;
        }
        p.boltOpen=s.machineGun?0:hold;p.boltBack=s.machineGun?0:hold;
        p.clip=!s.machineGun&&t>.32f&&t<.72f?1:0;
    }
    return p;
}
}
