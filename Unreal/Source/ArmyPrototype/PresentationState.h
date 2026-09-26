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
// Plan 029 M-C, the same pattern: bind only to explicit vault fields when the simulation has them.
template<class T,class=void>struct VaultBridge {
    static void Read(const T&,HandlingInput& h){h.vaulting=false;h.vaultProgress=0;h.vaultHeight=0;}
};
template<class T,class=void>struct LandingBridge {static void Read(const T&,HandlingInput&) {}};
template<class T>struct LandingBridge<T,std::void_t<decltype(T::vaultLandsAt)>> {
    static void Read(const T& s,HandlingInput& h){h.vaultLandsAt=s.vaultLandsAt;}
};
template<class T>struct VaultBridge<T,std::void_t<decltype(T::vaulting),decltype(T::vaultProgress),decltype(T::vaultHeight)>> {
    static void Read(const T& s,HandlingInput& h){h.vaulting=s.vaulting;h.vaultProgress=s.vaultProgress;h.vaultHeight=s.vaultHeight;}
};
template<class T>inline void ReadHandling(const T& s,HandlingInput& h) {
    h.recoilShotCount=0; // ReplaySource supplies the actual event window separately.
    h.machineGun=s.machineGun;h.movingFire=s.movingFire;h.coveredPath=s.coveredPath;
    h.cycleSeconds=s.gun.cycleSeconds>0?s.gun.cycleSeconds/army::StatScale(s.stats.Get(army::Stat::Dexterity)):0;
    h.reloadEnd=s.reloadUntil;
    h.reloadStart=s.reloadUntil>0?s.reloadUntil-s.gun.reloadSeconds/army::StatScale(s.stats.Get(army::Stat::Dexterity)):-1;
    SprintBridge<T>::Read(s,h);
    VaultBridge<T>::Read(s,h);
    LandingBridge<T>::Read(s,h);
}
}
