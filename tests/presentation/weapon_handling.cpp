#include "WeaponHandling.h"
#include "CharacterBlend.h"
#include "PresentationState.h"
#include "Sim/BattleSim.h"
#include <cassert>
#include <cstring>
#include <iostream>
using namespace armyvisual;
int main(){
 army::Soldier soldier;HandlingInput bridge;ReadHandling(soldier,bridge);assert(bridge.staminaAvailable&&bridge.stamina==soldier.stamina&&!bridge.sprinting);
 struct BeforeStamina {};bridge.sprinting=true;SprintBridge<BeforeStamina>::Read({},bridge);assert(!bridge.staminaAvailable);
 soldier.stats.value[size_t(army::Stat::Dexterity)]=50;soldier.reloadUntil=10;soldier.gun.reloadSeconds=2.5;
 ReadHandling(soldier,bridge);assert(bridge.reloadStart==5&&bridge.reloadEnd==10);
 struct FutureSoldier:army::Soldier {bool sprinting=true,winded=false;float stamina=3;};
 FutureSoldier future;ReadHandling(future,bridge);assert(bridge.staminaAvailable&&bridge.sprinting&&bridge.stamina==3);
 // Plan 029 M-C: the vault fields bind when the soldier has them, and are cleared when it does not.
 soldier.vaulting=true;soldier.vaultProgress=.4f;soldier.vaultHeight=1.15f;ReadHandling(soldier,bridge);
 assert(bridge.vaulting&&bridge.vaultProgress==.4f&&bridge.vaultHeight==1.15f);
 VaultBridge<BeforeStamina>::Read({},bridge);assert(!bridge.vaulting&&bridge.vaultProgress==0);
 {HandlingInput v;v.vaulting=true;v.vaultHeight=1.15f;v.vaultProgress=.5f;v.lastShot=10;assert(Handling(v,10.001,1,false).upper==0);
  assert(std::abs(VaultLift(v)-130)<1e-3f);v.vaultProgress=0;assert(VaultLift(v)==0);v.vaulting=false;v.vaultProgress=.5f;assert(VaultLift(v)==0);}
 HandlingInput rifle;rifle.lastShot=10;
 assert(Handling(rifle,9,0,false).gun.y==0);
 assert(Handling(rifle,10.001,1,false).gun.y< -2);
 assert(Handling(rifle,10.55,1,false).boltBack>.5);
 assert(Handling(rifle,10.55,1,false).rightSupport<.01f);
 assert(Handling(rifle,10.55,1,false).leftSupport==1);
 HandlingSettings automatic;automatic.manualBolt=false;automatic.kickCentimetres=1;
 assert(Handling(rifle,10.55,1,false,automatic).boltBack==0);
 assert(Handling(rifle,10,1,false,automatic).gun.y==-1);
 auto mg=rifle;mg.machineGun=true;
 assert(Handling(mg,10.55,1,false).boltBack==0);
 // Cached carry blending controls both activation and release independently
 // of a newly changed movement flag; replay seeking supplies the same weight.
 {auto carry=mg;carry.lastShot=-1000;carry.movingFire=true;carry.movingFireWeight=0;
  assert(Handling(carry,10,1,false).gun.z==0);
  carry.movingFireWeight=.5f;const auto entering=Handling(carry,10,1,false);
  carry.movingFire=false;const auto leaving=Handling(carry,10,1,false);
  assert(entering.gun.z==leaving.gun.z&&entering.pitch==leaving.pitch);
  assert(entering.gun.z<0&&entering.gun.z>-14);
 }
 rifle.reloadStart=11;rifle.reloadEnd=13.5;
 assert(std::strcmp(Handling(rifle,12,1,false).name,"rifle reload")==0);
 assert(Handling(rifle,13.5,1,false).clip==0);
 assert(Handling(rifle,13.5,1,false).rightSupport==1);
 auto mgReload=rifle;mgReload.machineGun=true;
 assert(Handling(mgReload,12,1,false).rightSupport==1);
 assert(Handling(mgReload,12,1,false).leftSupport<.01f);
 assert(Handling(rifle,12,1,true).upper==0);
 rifle.sprinting=true;assert(Handling(rifle,12,1,false).upper==0);
 // A reload may begin with the bolt still moving. At its start the existing
 // shot must survive; during the handoff the two action weights exhaust the
 // pose, rather than falling back to an unrelated aiming reference.
 {HandlingInput interrupted;interrupted.lastShot=10;interrupted.reloadStart=10.5;interrupted.reloadEnd=14.5;
  auto a=AuthoredLayers(interrupted,10.5,true,true);
  assert(a.shotWeight==1&&a.reloadWeight==0&&a.ReferenceWeight()==0);
  a=AuthoredLayers(interrupted,10.6,true,true);
  assert(a.shotWeight>0&&a.reloadWeight>0&&std::abs(a.ReferenceWeight())<1e-6);
  a=AuthoredLayers(interrupted,10.71,true,true);assert(a.shotWeight==0&&a.reloadWeight==1);
  const auto old=AuthoredLayers(interrupted,10.49999,true,true),now=AuthoredLayers(interrupted,10.50001,true,true);
  auto bolt=[](const AuthoredActionLayers& l){return AuthoredRifleMechanism(l.shotPhase,false).boltBack*l.shotWeight+AuthoredRifleMechanism(l.reloadPhase,true).boltBack*l.reloadWeight;};
  assert(std::abs(bolt(old)-bolt(now))<.001);
  for(int i=0;i<600;++i){const double t=9+i*.01;const auto first=AuthoredLayers(interrupted,t,true,true);
   AuthoredLayers(interrupted,25-t,true,true);const auto seek=AuthoredLayers(interrupted,t,true,true);
   assert(first.shotPhase==seek.shotPhase&&first.shotWeight==seek.shotWeight&&first.reloadWeight==seek.reloadWeight);
   assert(first.shotWeight>=0&&first.reloadWeight>=0&&first.ReferenceWeight()>-1e-6);
  }
  assert(AuthoredLayers(interrupted,9,true,true).ReferenceWeight()==1);
  assert(AuthoredLayers(interrupted,10.6,false,false).ReferenceWeight()==1);
  interrupted.vaulting=true;assert(AuthoredLayers(interrupted,10.6,true,true).ReferenceWeight()==1);
 }
 for(int i=0;i<2000;++i){
  const double t=i*.01;auto a=Handling(mg,t,1,false);Handling(mg,50-t,1,false);auto b=Handling(mg,t,1,false);
  assert(a.pitch==b.pitch&&a.left.z==b.left.z&&std::isfinite(a.gun.y));
 }
 State s;s.forward=4;s.handling.sprinting=true;
 for(const auto& x:Samples(s,1))assert(std::string(Clips[x.clip].name).find("sprint")!=std::string::npos);
 // A vault plays the jump clips in turn by its progress, weights summing to one.
 for(int i=0;i<=20;++i){State v;v.forward=3;v.handling.vaulting=true;v.handling.vaultProgress=i/20.f;double weight=0;
  for(const auto& x:Samples(v,1)){assert(std::string(Clips[x.clip].name).find("A_jump_")==0&&x.time>=0&&x.time<=Clips[x.clip].duration);weight+=x.weight;}
  assert(std::abs(weight-1)<1e-5);}
 {State v;v.handling.vaulting=true;v.handling.vaultProgress=.1f;assert(Samples(v,1).size()==1&&Samples(v,1)[0].clip==Find("A_jump_up"));
  v.handling.vaultProgress=.5f;assert(Samples(v,1)[0].clip==Find("A_jump_loop"));v.handling.vaultProgress=.9f;assert(Samples(v,1)[0].clip==Find("A_jump_down"));}
 std::cout<<"PASS recoil, bolt/automatic distinction, reload priority/end, death, sprint, vault, 2000 seeks\n";
}
