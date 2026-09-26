#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WeaponAnimationProfile.generated.h"
// Presentation dimensions only. Cadence, reload duration, ammunition and damage
// come from the recorded equipped weapon; this asset cannot change combat rules.
UCLASS(BlueprintType)
class ARMYPROTOTYPE_API UWeaponAnimationProfile:public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") float SpineWeight=.65f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") float MovingLeanDegrees=2.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") float BreathingCentimetres=.25f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") FVector ReadyOffset=FVector(0,-2,-9);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") float ReadyPitch=-12.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") FVector SprintOffset=FVector(0,-5,-16);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Carry") float SprintPitch=-22.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Aim") float YawLimit=55.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Aim") float PitchLimit=35.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Aim") float HeadWeight=.4f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Aim") float AimResponseSeconds=.08f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Aim") float LookResponseSeconds=.1f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Recoil") float KickCentimetres=2.2f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Recoil") float KickDegrees=4.f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Recoil") float RecoverySeconds=.055f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") bool ManualBolt=true;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") float BoltStartSeconds=.16f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector BoltRest=FVector(-2.5,-16,13);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector BoltKnob=FVector(-6.2,3,-.2);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") float BoltTravel=8;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") float BoltOpenDegrees=-60;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector ReloadFeed=FVector(0,-10,14);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector ReloadPalmOffset=FVector(-3,0,1);
    // Authored pressing-glove axis in weapon space, stable through hand release.
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector ReloadPressDirection=FVector(.75,.4,-.52);
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") FVector AmmunitionBoxGrip=FVector(-3.5,-12,7.5);
    // Eight rounds at 9 mm centres. The row stands above the receiver and is
    // pressed into it, instead of hovering as a horizontal tray over the gun.
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Handling") float ReloadStackHalfHeight=3.6f;
    FVector ReloadClipPosition(float Phase) const {
        return ReloadFeed+FVector(0,0,ReloadStackHalfHeight*(1-2*FMath::SmoothStep(.50f,.70f,Phase)));
    }
};
