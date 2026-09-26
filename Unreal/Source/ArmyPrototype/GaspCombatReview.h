#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/HUD.h"
#include "GaspCombatReview.generated.h"
class ASoldierVisual;
class ACameraActor;
class UAnimSequence;
UCLASS()
class ARMYPROTOTYPE_API AGaspCombatReview : public AGameModeBase {
    GENERATED_BODY()
public:
    AGaspCombatReview();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    UPROPERTY() TArray<TObjectPtr<ASoldierVisual>> Soldiers;
    UPROPERTY() TObjectPtr<ACameraActor> Camera;
    UPROPERTY() TArray<TObjectPtr<UAnimSequence>> SourceClips;
    UPROPERTY() TArray<TObjectPtr<AActor>> ReviewObstacles;
    FString SourceClipName;
    FString Label;
    int Frame=0;
    float Elapsed=0;
    bool Ready=false;
};
UCLASS()
class ARMYPROTOTYPE_API AGaspCombatReviewHUD:public AHUD {
    GENERATED_BODY()
public:
    virtual void DrawHUD() override;
};
