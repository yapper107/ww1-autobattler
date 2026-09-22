#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WeaponHandling.h"
#include "SoldierAnimInstance.generated.h"
class UAnimSequence;
USTRUCT()
struct FArmyPoseSample {
    GENERATED_BODY()
    UPROPERTY() TObjectPtr<UAnimSequence> Sequence;
    float Weight=0;
    double Time=0;
};
UCLASS(Transient)
class ARMYPROTOTYPE_API USoldierAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USoldierAnimInstance();
    UPROPERTY(Transient) TArray<FArmyPoseSample> Samples;
    float GripAlpha=1;
    UPROPERTY(Transient) TObjectPtr<UAnimSequence> StandingAim;
    armyvisual::HandlingPose Handling;
    bool MachineGun=false;
    float ModelScale=1;
protected:
    virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override;
    virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* Proxy) override;
};
