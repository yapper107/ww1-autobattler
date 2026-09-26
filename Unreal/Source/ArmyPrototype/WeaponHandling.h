#pragma once
#include <algorithm>
#include <cmath>
namespace armyvisual {
struct HandlingInput {
    double lastShot=-1000, reloadStart=-1, reloadEnd=-1;
    float cycleSeconds=1.25f;
    bool machineGun=false, movingFire=false, coveredPath=false;
    float movingFireWeight=-1; // cached presentation blend; negative uses the legacy flag
    bool sprinting=false, winded=false, staminaAvailable=false;
    float stamina=1;
    // Plan 029 M-C: going over an obstacle (vaultProgress 0..1, vaultHeight m above his feet).
    bool vaulting=false;
    float vaultProgress=0, vaultHeight=0;
    double vaultLandsAt=-1;
};
struct Offset {float x=0,y=0,z=0;};
inline Offset Mix(Offset a,Offset b,float t){return {a.x+(b.x-a.x)*t,a.y+(b.y-a.y)*t,a.z+(b.z-a.z)*t};}
inline float Smooth(float t){t=std::clamp(t,0.f,1.f);return t*t*(3-2*t);}
struct HandlingPose {
    Offset gun,right,left;
    // Body response is part of the action, before solving weapon contacts.
    // Degrees in the character's component axes; +pitch bends toward +Y.
    float torsoPitch=0,torsoYaw=0,torsoRoll=0,headPitch=0,headYaw=0;
    float gunYaw=0,gunRoll=0;
    float pitch=0,boltOpen=0,boltBack=0,boltContact=0,clip=0,upper=0;
    float reloadPhase=-1,reloadContact=0;
    // A released hand follows its action target; it must not drag the carrier
    // to satisfy its reach. The opposite hand continues supporting the weapon.
    float rightSupport=1,leftSupport=1;
    float traversal=0,leftIK=1;
    const char* name="ready";
};
struct HandlingSettings {
    float kickCentimetres=2.2f,kickDegrees=4.f,recoverySeconds=.055f;
    float boltStartSeconds=.16f;
    bool manualBolt=true;
};
// Pure event-time sampling keeps interrupted actions identical during playback,
// seeking and muzzle queries. A reload fades directly out of the active shot;
// returning to an aiming reference in between creates an avoidable hand jump.
struct AuthoredActionLayers {
    float shotPhase=0,reloadPhase=0,shotWeight=0,reloadWeight=0;
    bool shotActive=false,reloadActive=false;
    float ReferenceWeight() const{return 1-shotWeight-reloadWeight;}
};
inline AuthoredActionLayers AuthoredLayers(const HandlingInput& s,double time,bool shotAvailable,bool reloadAvailable) {
    AuthoredActionLayers p;
    if(s.sprinting||s.vaulting)return p;
    const double age=time-s.lastShot;
    p.shotActive=shotAvailable&&age>=0&&age<s.cycleSeconds;
    if(p.shotActive){
        p.shotPhase=float(age/std::max(.1f,s.cycleSeconds));
        p.shotWeight=Smooth(p.shotPhase/.05f)*(1-Smooth((p.shotPhase-.94f)/.06f));
    }
    p.reloadActive=reloadAvailable&&s.reloadStart>=0&&time>=s.reloadStart&&time<s.reloadEnd;
    if(p.reloadActive){
        p.reloadPhase=float((time-s.reloadStart)/std::max(.01,s.reloadEnd-s.reloadStart));
        p.reloadWeight=Smooth(p.reloadPhase/.05f)*(1-Smooth((p.reloadPhase-.94f)/.06f));
        p.shotWeight*=1-p.reloadWeight;
    }
    return p;
}
inline HandlingPose AuthoredRifleMechanism(float u,bool reload) {
    auto env=[&](float a,float b,float c,float d){return Smooth((u-a)/(b-a))*(1-Smooth((u-c)/(d-c)));};
    HandlingPose p;
    p.boltOpen=reload?env(.04f,.12f,.84f,.90f):env(.22f,.31f,.60f,.70f);
    p.boltBack=reload?env(.10f,.17f,.77f,.84f):env(.32f,.42f,.46f,.59f);
    p.boltContact=reload?std::max(env(.01f,.06f,.16f,.22f),env(.72f,.77f,.89f,.97f)):env(.08f,.22f,.74f,.90f);
    p.reloadContact=reload?env(.455f,.49f,.665f,.715f):0;
    p.rightSupport=1-(reload?env(0,.06f,.94f,1.f):p.boltContact);
    return p;
}
inline HandlingPose Handling(const HandlingInput& s,double time,float aim,bool dead,const HandlingSettings& settings={}) {
    HandlingPose p;if(dead)return p;
    p.upper=std::max(aim,s.coveredPath?.45f:0.f);
    if(s.sprinting){p.name="sprint carry";p.upper=0;return p;}
    if(s.vaulting){
        p.name="vault carry";p.traversal=Smooth(s.vaultProgress/.14f)*(1-Smooth((s.vaultProgress-.82f)/.18f));
        p.upper=1-p.traversal;p.leftIK=p.leftSupport=1-p.traversal;
        p.gun={-22*p.traversal,-18*p.traversal,-24*p.traversal};p.pitch=-50*p.traversal;return p;
    }
    if(s.winded){
        const float breath=float(std::sin(time*5.5));
        p.gun.z=breath*.4f;p.torsoPitch=3+breath*.8f;p.headPitch=-2-breath*.5f;p.name="winded";
    }
    const float movingFireWeight=s.movingFireWeight>=0?std::clamp(s.movingFireWeight,0.f,1.f):(s.movingFire?1.f:0.f);
    if(s.machineGun&&movingFireWeight>0){p.gun.z-=14*movingFireWeight;p.pitch-=8*movingFireWeight;p.upper=1;p.name="moving hip fire";}
    const float age=float(time-s.lastShot);
    if(age>=0&&age<.35f){
        const float kick=std::exp(-age/std::max(.01f,settings.recoverySeconds));
        // The gun impulse leads the delayed shoulder compression. Zero body
        // displacement at shot time avoids teleporting the torso on the event.
        const float response=(age/.06f)*std::exp(1-age/.06f)*(1-Smooth((age-.22f)/.13f));
        p.gun.y=-settings.kickCentimetres*kick;p.pitch+=settings.kickDegrees*kick;
        p.torsoPitch-=(s.machineGun?1.1f:2.6f)*response;
        p.torsoYaw+=(s.machineGun?.35f:1.2f)*response;
        p.headPitch+=.8f*response;p.upper=1;p.name="fire / recoil";
    }
    if(!s.machineGun&&settings.manualBolt&&age>=settings.boltStartSeconds&&age<s.cycleSeconds){
        const float t=(age-settings.boltStartSeconds)/std::max(.1f,s.cycleSeconds-settings.boltStartSeconds);
        const float reach=Smooth(t/.16f)*(1-Smooth((t-.84f)/.16f));
        p.boltContact=reach;
        p.boltOpen=Smooth((t-.12f)/.12f)*(1-Smooth((t-.7f)/.12f));
        p.boltBack=Smooth((t-.28f)/.14f)*(1-Smooth((t-.5f)/.17f));
        p.right={6*reach,(10-8*p.boltBack)*reach,(7+4*p.boltOpen)*reach};p.rightSupport=1-reach;p.upper=1;p.name="bolt cycle";
        // Clear the cheek from the receiver, settle the rifle into the left
        // support and follow the operating elbow, then reacquire the sight.
        p.gun.z-=2*reach;p.pitch-=3*reach;p.gunRoll=-5*reach;
        p.torsoPitch+=1.8f*reach;p.torsoYaw-=3.5f*p.boltBack;
        p.headPitch-=4*reach;p.headYaw-=3*reach;
    }
    if(s.reloadStart>=0&&time>=s.reloadStart&&time<s.reloadEnd){
        const float t=float((time-s.reloadStart)/std::max(.01,s.reloadEnd-s.reloadStart));
        p={};p.upper=1;p.name=s.machineGun?"machine gun reload":"rifle reload";
        p.reloadPhase=t;
        if(!s.machineGun)p.reloadContact=Smooth((t-.38f)/.1f)*(1-Smooth((t-.70f)/.1f));
        const float hold=Smooth(t/.12f)*(1-Smooth((t-.85f)/.15f));
        p.pitch=-18*hold;p.gun.z=-9*hold;p.gun.y=-3*hold;
        p.gunRoll=(s.machineGun?8.f:-12.f)*hold;
        // Follow the ammunition hand with chest and gaze. The feet and pelvis
        // remain owned by locomotion so this same action can layer over travel.
        const float retrieve=Smooth((t-.12f)/.13f)*(1-Smooth((t-.35f)/.13f));
        p.torsoPitch=5*hold+4*retrieve;
        p.torsoYaw=(s.machineGun?-1.f:1.f)*(3*hold+5*retrieve);
        p.torsoRoll=(s.machineGun?1.f:-1.f)*2*retrieve;
        p.headPitch=-9*hold-7*retrieve;p.headYaw=(s.machineGun?1.f:-1.f)*5*retrieve;
        if(s.machineGun)p.leftSupport=1-hold;else p.rightSupport=1-hold;
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
