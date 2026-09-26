#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/HUD.h"
#include "GaspReviewGameMode.generated.h"
class USkeletalMeshComponent;
class UAnimSequence;
// Opt-in, isolated retarget inspection. Never drives a battle or replaces its renderer.
UCLASS()
class ARMYPROTOTYPE_API AGaspReviewGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    AGaspReviewGameMode();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    UPROPERTY() TArray<TObjectPtr<USkeletalMeshComponent>> Bodies;
    UPROPERTY() TArray<TObjectPtr<UAnimSequence>> Motions;
    FString ClipLabel;
    bool Ready=false;
    int CaptureFrame=0, CurrentClip=-1;
    float Elapsed=0;
};
UCLASS()
class ARMYPROTOTYPE_API AGaspReviewHUD : public AHUD {
    GENERATED_BODY()
public:
    virtual void DrawHUD() override;
};
