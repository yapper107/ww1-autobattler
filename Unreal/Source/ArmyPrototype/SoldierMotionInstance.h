#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/TrajectoryTypes.h"
#include "SoldierAnimInstance.h"
#include "SoldierMotionInstance.generated.h"
class UPoseSearchDatabase;
// The motion planner evaluates at a fixed replay clock. The visible mesh reads
// its cached blend decisions, so a paused seek cannot change pose history.
UCLASS(Transient)
class ARMYPROTOTYPE_API USoldierMotionInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USoldierMotionInstance();
    UPROPERTY(Transient) TObjectPtr<UPoseSearchDatabase> Database;
    // Keeps the compiled constant node data alive in editor and cooked builds.
    UPROPERTY(Transient) TObjectPtr<UClass> MotionTemplateClass;
    FTransformTrajectory Trajectory;
    bool ContactsEnabled=false;
    bool Crouching=false;
    bool CanFinishStop=false;
    float LocomotionSpeed=0;
    float StopSeconds=-1;
    FVector LocomotionVelocity=FVector::ZeroVector;
    bool ReadDecision(TArray<FArmyPoseSample>& Out) const;
    FString DescribeQuery() const;
protected:
    virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override;
    virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* Proxy) override;
};
