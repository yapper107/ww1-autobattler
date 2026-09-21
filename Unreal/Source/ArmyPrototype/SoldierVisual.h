#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterBlend.h"
#include "SoldierVisual.generated.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UAnimSequence;
UCLASS()
class ARMYPROTOTYPE_API ASoldierVisual : public AActor {
    GENERATED_BODY()
public:
    ASoldierVisual();
    static bool AssetsAvailable();
    bool Initialize(int Team);
    void Present(const armyvisual::State& State,double ReplayTime);
    FString PoseDescription() const;
    FString ValidatePresentation();
    float GripError() const;
    FVector MuzzlePosition() const;
    UPROPERTY(VisibleAnywhere) TObjectPtr<USkeletalMeshComponent> Body;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> Rifle;
    UPROPERTY() TArray<TObjectPtr<UAnimSequence>> Clips;
    armyvisual::State LastState;
    double LastTime=0;
};
