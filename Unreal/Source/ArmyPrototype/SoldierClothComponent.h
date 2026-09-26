#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SoldierClothComponent.generated.h"

// Animation is evaluated from the replay clock, not the world's tick clock.
// Keep Chaos on that same clock, including pause and explicit seek resets.
UCLASS()
class ARMYPROTOTYPE_API USoldierClothComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    void AdvanceCoat(double ReplayTime);
    bool CoatIsFinite() const;
    int CoatVertexCount() const;
    uint32 CoatSignature() const;
    void SetCoatDetail(bool Enabled);
    bool HasCoatDetail() const{return DetailEnabled;}
private:
    double CoatTime=-1;
    double LastPresentationTime=-1;
    bool DetailEnabled=true;
    bool BudgetActivation=false;
    void StepCoat(float Seconds,bool Reset);
};
