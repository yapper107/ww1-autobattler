#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WeaponHandling.h"
#include "SoldierAnimInstance.generated.h"
class UAnimSequence;
class UWeaponAnimationProfile;
USTRUCT()
struct FArmyPoseSample {
    GENERATED_BODY()
    UPROPERTY() TObjectPtr<UAnimSequence> Sequence;
    float Weight=0;
    double Time=0;
    float PlayRate=1;
    bool Looping=false,ExtractRoot=false;
};
UCLASS(Transient)
class ARMYPROTOTYPE_API USoldierAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USoldierAnimInstance();
    UPROPERTY(Transient) TArray<FArmyPoseSample> Samples;
    float GripAlpha=1;
    UPROPERTY(Transient) TObjectPtr<UAnimSequence> StandingAim;
    UPROPERTY(Transient) TObjectPtr<UWeaponAnimationProfile> EquipmentProfile;
    float AimYaw=0,AimPitch=0,LookYaw=0,LookPitch=0,MoveSpeed=0;
    double PoseTime=0;
    bool ContactsEnabled=false;
    bool RootOffsetEnabled=false;
    FTransform MotionRoot;
    float VaultPlant=0;
    FVector VaultHandTarget=FVector::ZeroVector;
    FTransform ContactPelvis,ContactLeftFoot,ContactRightFoot;
    armyvisual::HandlingPose Handling;
    bool MachineGun=false;
    float ModelScale=1;
protected:
    virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override;
    virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* Proxy) override;
};
