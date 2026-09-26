#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GaspAuthoringLibrary.generated.h"
class USkeletalMesh;
class UStaticMesh;
class USkeleton;
class UAnimSequence;
class UPoseSearchSchema;
class UPoseSearchDatabase;
class UAnimBlueprint;
class UMaterial;
UCLASS()
class ARMYPROTOTYPE_API UGaspAuthoringLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    // Native SetSkeleton has no Python binding in 5.8. Limit this authoring bridge
    // to generated duplicate assets; never reassign a production mesh's skeleton.
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static bool AssignPrototypeSkeleton(USkeletalMesh* Mesh,USkeleton* Skeleton);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static UPoseSearchSchema* CreateSoldierSchema(USkeleton* Skeleton, const FString& PackagePath);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static UPoseSearchDatabase* CreateSoldierDatabase(UPoseSearchSchema* Schema, const TArray<UAnimSequence*>& Clips, const FString& PackagePath);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static int32 BuildDatabase(UPoseSearchDatabase* Database);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static UAnimSequence* NormalizeLegacyClip(UAnimSequence* Source, USkeleton* Skeleton, const FString& PackagePath);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static bool CreateFootTargets(USkeleton* Skeleton);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static bool SynchronizeNormalizedSkeleton(USkeletalMesh* Mesh);
    // Read-only selection in bind-pose centimetres for the four female belt pouches.
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static TArray<int32> FemaleBeltPouchVertices(USkeletalMesh* Mesh);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static TArray<FVector> FemaleBeltPouchPositions(USkeletalMesh* Mesh);
    // Read-only mesh-space vertices for measured equipment contacts.
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static TArray<FVector> StaticMeshPositions(UStaticMesh* Mesh);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static TArray<FVector> SkeletalMeshPositions(USkeletalMesh* Mesh, FName MaterialSlot=NAME_None);
    // Preserve mesh-description vertex IDs for position-matched weight painting.
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static TMap<int32,FVector> SkeletalMeshVertexPositions(USkeletalMesh* Mesh);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static bool FinalizeArticulatedPouchMaterial(UMaterial* Material);

    UFUNCTION(BlueprintCallable, Category="Army|Authoring")
    static bool FinalizeHandlingFeedMaterial(UMaterial* Material);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static FVector RootMotionTranslation(UAnimSequence* Clip,float Start,float Duration);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static UAnimSequence* CreateCombatCrouch(UAnimSequence* Source,float MinimumHipHeight,const FString& PackagePath);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static FString CreateCoatCloth(USkeletalMesh* Mesh);
    UFUNCTION(BlueprintCallable, Category="Army|GASP Authoring")
    static UAnimBlueprint* CreateMotionNodeTemplate(UPoseSearchDatabase* Database);
};
