#pragma once
// Weapons are items attached to soldiers, so attachments and enchantments can
// modify them later. Nothing outside Resolve/EquipWeapon reads the table.
#include <vector>
namespace army {
enum class WeaponAction { Bolt, SemiAuto, Automatic };
enum class WeaponId { Rifle, MachineGun };
struct Cartridge { const char* name; float bulletMass /*kg*/, referenceVelocity /*m/s*/, referenceBarrel /*m*/, dragK /*1/m*/; };
// Fire on the move (plan 019). Every number of walking fire lives here so a parameter
// search can reach it; each is a multiplier on the stationary value at stats 100.
struct MovingFire {
    float aimSeconds=2.5f;      // settle time multiplier
    float aimCap=.5f;           // the aim never settles above this fraction while walking
    float spread=3;             // horizontal and vertical aiming error multiplier
    float sway=4;               // sway amplitude multiplier
    float recoilKick=1.5f;      // per-shot kick multiplier
    float recoilRecovery=.5f;   // decay-rate multiplier: below 1 recovers slower
    float cadence=1.5f;         // time between shots multiplier (manual cycling only)
    float range=70;             // m; no walking fire beyond this (the rifle's own engagement range)
    float pace=.8f;             // fraction of his movement pace while delivering walking fire
    int burstMin=0,burstMax=0;  // automatic burst on the move; 0 keeps the weapon's own structure
};
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
    MovingFire moving;        // walking fire; never consulted by a stationary shooter
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
    MovingFire moving{};
};
const WeaponDef& WeaponTable(WeaponId id);
WeaponStats Resolve(const WeaponItem& item);
}
