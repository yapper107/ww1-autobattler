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
 HandlingInput rifle;rifle.lastShot=10;
 assert(Handling(rifle,9,0,false).gun.y==0);
 assert(Handling(rifle,10.001,1,false).gun.y< -2);
 assert(Handling(rifle,10.55,1,false).boltBack>.5);
 auto mg=rifle;mg.machineGun=true;
 assert(Handling(mg,10.55,1,false).boltBack==0);
 rifle.reloadStart=11;rifle.reloadEnd=13.5;
 assert(std::strcmp(Handling(rifle,12,1,false).name,"rifle reload")==0);
 assert(Handling(rifle,13.5,1,false).clip==0);
 assert(Handling(rifle,12,1,true).upper==0);
 rifle.sprinting=true;assert(Handling(rifle,12,1,false).upper==0);
 for(int i=0;i<2000;++i){
  const double t=i*.01;auto a=Handling(mg,t,1,false);Handling(mg,50-t,1,false);auto b=Handling(mg,t,1,false);
  assert(a.pitch==b.pitch&&a.left.z==b.left.z&&std::isfinite(a.gun.y));
 }
 State s;s.forward=4;s.handling.sprinting=true;
 for(const auto& x:Samples(s,1))assert(std::string(Clips[x.clip].name).find("sprint")!=std::string::npos);
 std::cout<<"PASS recoil, bolt/automatic distinction, reload priority/end, death, sprint, 2000 seeks\n";
}
