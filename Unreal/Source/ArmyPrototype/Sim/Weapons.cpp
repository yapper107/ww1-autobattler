#include "Weapons.h"
#include "BattleSim.h"
#include <cmath>
#include <utility>
namespace army {
// One fictional full-power rifle cartridge, shared by both entries.
static const Cartridge Standard{"Full-power rifle",.0113f,720.f,.74f,.0007f};
static const WeaponDef Table[]={
    {"Rifle",WeaponAction::Bolt,0.f,1.25f,8,2.5f,.007f,1.f,1.f,.012f,Standard,.74f,70.f},
    {"Machine gun",WeaponAction::Automatic,.10f,0.f,60,4.f,.020f,.67f,.69f,.004f,Standard,.72f,95.f}};
const WeaponDef& WeaponTable(WeaponId id){return Table[int(id)];}
WeaponStats Resolve(const WeaponItem& item){
    const WeaponDef& d=WeaponTable(item.def);WeaponStats w;
    w.name=d.name;w.action=d.action;w.cyclicSeconds=d.cyclicSeconds;w.cycleSeconds=d.cycleSeconds;
    w.magazine=d.magazine;w.reloadSeconds=d.reloadSeconds;w.baseDeviation=d.baseDeviation;
    w.sightQuality=d.sightQuality;w.ergonomics=d.ergonomics;w.recoil=d.recoil;
    w.bulletMass=d.cartridge.bulletMass;w.dragK=d.cartridge.dragK;w.engagementRange=d.engagementRange;
    w.muzzleVelocity=d.cartridge.referenceVelocity*std::pow(d.barrelLength/d.cartridge.referenceBarrel,0.2f);
    for(const auto& m:item.modifiers){
        auto apply=[&](float& value){value=value*m.multiply+m.add;};
        switch(m.field){
        case WeaponModifier::Field::CyclicSeconds:apply(w.cyclicSeconds);break;
        case WeaponModifier::Field::CycleSeconds:apply(w.cycleSeconds);break;
        case WeaponModifier::Field::Magazine:{float v=float(w.magazine);apply(v);w.magazine=int(v);break;}
        case WeaponModifier::Field::ReloadSeconds:apply(w.reloadSeconds);break;
        case WeaponModifier::Field::BaseDeviation:apply(w.baseDeviation);break;
        case WeaponModifier::Field::SightQuality:apply(w.sightQuality);break;
        case WeaponModifier::Field::Ergonomics:apply(w.ergonomics);break;
        case WeaponModifier::Field::Recoil:apply(w.recoil);break;
        case WeaponModifier::Field::MuzzleVelocity:apply(w.muzzleVelocity);break;
        case WeaponModifier::Field::EngagementRange:apply(w.engagementRange);break;
        }
    }
    return w;
}
// The only writer of the organisation flag; Simulate asserts the two agree.
void EquipWeapon(Soldier& s,WeaponItem item){
    s.weapon=std::move(item);s.gun=Resolve(s.weapon);
    s.machineGun=s.gun.action==WeaponAction::Automatic;s.magazineRemaining=s.gun.magazine;
}
}
