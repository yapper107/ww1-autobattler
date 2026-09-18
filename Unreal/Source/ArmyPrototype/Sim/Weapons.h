#pragma once
// Weapons are items attached to soldiers, so attachments and enchantments can
// modify them later. Nothing outside Resolve/EquipWeapon reads the table.
#include <vector>
namespace army {
enum class WeaponAction { Bolt, SemiAuto, Automatic };
enum class WeaponId { Rifle, MachineGun };
struct Cartridge { const char* name; float bulletMass /*kg*/, referenceVelocity /*m/s*/, referenceBarrel /*m*/, dragK /*1/m*/; };
struct WeaponDef {
    const char* name; WeaponAction action;
    float cyclicSeconds;      // Automatic: fixed interval between rounds. SemiAuto: trigger minimum.
    float cycleSeconds;       // Bolt: manual cycle at dexterity 100
    int   magazine; float reloadSeconds;          // at dexterity 100
    float baseDeviation;      // rad, mechanical, irreducible
    float sightQuality;       // 1 = iron-sight reference; divides the shooter's aiming error
    float ergonomics;         // 1 = reference; divides settle time, recovery, sway and recoil
    float recoil;             // rad of aim displacement per shot at the reference
    Cartridge cartridge; float barrelLength /*m*/;
    float engagementRange;    // m, scaled by perception into sight range
};
struct WeaponModifier {
    enum class Field { CyclicSeconds, CycleSeconds, Magazine, ReloadSeconds, BaseDeviation, SightQuality, Ergonomics, Recoil, MuzzleVelocity, EngagementRange };
    Field field=Field::Ergonomics; float multiply=1, add=0;
};
inline bool SameModifier(const WeaponModifier& a,const WeaponModifier& b){return a.field==b.field&&a.multiply==b.multiply&&a.add==b.add;}
struct WeaponItem { WeaponId def=WeaponId::Rifle; std::vector<WeaponModifier> modifiers; };
// Effective values after modifiers. The defaults are the resolved rifle so a
// bare Soldier fights like a rifleman.
struct WeaponStats {
    const char* name="Rifle";
    WeaponAction action=WeaponAction::Bolt;
    float cyclicSeconds=0, cycleSeconds=1.25f;
    int magazine=8; float reloadSeconds=2.5f;
    float baseDeviation=.007f, sightQuality=1, ergonomics=1, recoil=.012f;
    float muzzleVelocity=720, bulletMass=.0113f, dragK=.0007f, engagementRange=70;
};
const WeaponDef& WeaponTable(WeaponId id);
WeaponStats Resolve(const WeaponItem& item);
}
