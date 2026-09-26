#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TraversalAnimationProfile.generated.h"
class UAnimSequence;
UCLASS(BlueprintType)
class ARMYPROTOTYPE_API UTraversalAnimationProfile:public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere,BlueprintReadOnly) TObjectPtr<UAnimSequence> Animation;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float StartSeconds=0;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float LandSeconds=.9f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float SourceObstacleForward=0;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float SourceObstacleHeight=100;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float PlantBegin=.18f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float PlantFull=.27f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float PlantRelease=.42f;
    UPROPERTY(EditAnywhere,BlueprintReadOnly) float PlantEnd=.52f;
};
