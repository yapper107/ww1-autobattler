#pragma once
#include "CharacterBlend.h"
#include "Sim/Stats.h"
#include <type_traits>
namespace armyvisual {
// Plan 022 is developed independently. Bind only to explicit sprint/winded fields
// when that simulation revision is available; never infer gameplay sprint from gait.
template<class T,class=void>struct SprintBridge {
    static void Read(const T&,HandlingInput& h){h.staminaAvailable=false;}
};
template<class T>struct SprintBridge<T,std::void_t<decltype(T::sprinting),decltype(T::winded),decltype(T::stamina)>> {
    static void Read(const T& s,HandlingInput& h){h.sprinting=s.sprinting;h.winded=s.winded;h.stamina=s.stamina;h.staminaAvailable=true;}
};
template<class T>inline void ReadHandling(const T& s,HandlingInput& h) {
    h.machineGun=s.machineGun;h.movingFire=s.movingFire;h.coveredPath=s.coveredPath;
    h.cycleSeconds=s.gun.cycleSeconds>0?s.gun.cycleSeconds/army::StatScale(s.stats.Get(army::Stat::Dexterity)):0;
    h.reloadEnd=s.reloadUntil;
    h.reloadStart=s.reloadUntil>0?s.reloadUntil-s.gun.reloadSeconds/army::StatScale(s.stats.Get(army::Stat::Dexterity)):-1;
    SprintBridge<T>::Read(s,h);
}
}
