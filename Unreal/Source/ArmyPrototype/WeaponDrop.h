#pragma once
#include "CoreMinimal.h"
class AActor;
class UWeaponAnimationProfile;

// Presentation-only, isolated Chaos scene. Fixed steps are cached so seeks and
// muzzle queries do not advance global physics or depend on render frame rate.
struct FWeaponDrop {
    static constexpr double Step=1./240.;
    TArray<FTransform> Frames;
    double DeathAt=-1;
    FTransform OwnerTransform;
    int CollisionBodies=0;
    void Reset(){Frames.Reset();DeathAt=-1;}
    bool Build(AActor* Owner,const UWeaponAnimationProfile* Profile,
        const FTransform& Release,const FTransform& Before,double SampleInterval);
    FTransform Sample(double Age) const;
};
