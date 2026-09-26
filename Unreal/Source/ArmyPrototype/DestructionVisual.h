#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestructionEffects.h"
#include "DestructionVisual.generated.h"

class UInstancedStaticMeshComponent;
class UStaticMeshComponent;
class UStaticMesh;
class UMaterialInterface;
class UMaterialInstanceDynamic;

// Plan 033: debris chunks and dust from Record::destruction, and the window glass (Record::glassPanes) until it shatters;
// plan 032: the grenades in the world (Frame::grenades) and each explosion's flash and smoke (Record::explosions).
// Sampled from recorded battle time, never integrated by frame dt, so pause, seek and replay speed show the same picture.
// Visual only: no collision, nothing reaches the battle.
UCLASS()
class ARMYPROTOTYPE_API ADestructionVisual : public AActor {
    GENERATED_BODY()
public:
    ADestructionVisual();
    // Precomputes every event's debris (landing on the geometry of its moment) and dust, the panes and the grenades' paths.
    void Configure(const army::Record& Record);
    void Present(float Time);
    void Clear();
    // The F cutaway: panes above the ground storey go with the upper structure.
    void ShowUpper(bool bShow){bUpperShown=bShow;}
    // Chunk and dust transforms shown now, for seek and replay checks.
    TArray<FTransform> Snapshot() const;
    int32 VisibleChunks=0,VisiblePuffs=0,TotalChunks=0,TotalPuffs=0,VisiblePanes=0,TotalPanes=0,VisibleGrenades=0,TotalGrenades=0;
    bool DustAvailable() const {return DustMaterial!=nullptr;}
private:
    void EnsureComponents();
    void ChunkInstance(int32 Material,const FTransform& Transform);
    void FinishChunks();
    UStaticMeshComponent* DustSphere(int32 Index);
    UStaticMeshComponent* PaneMesh(int32 Index);
    void FinishGrenades();
    std::vector<armydestruction::FDebrisChunk> Chunks;
    std::vector<armydestruction::FDustPuff> Puffs;
    std::vector<armydestruction::FPaneVisual> Panes;
    std::vector<armydestruction::FGrenadeTrack> Grenades;
    TArray<int32> GrenadeCounts;
    bool bUpperShown=true;
    float LongestChunk=0,LongestPuff=0;
    TArray<int32> ChunkCounts;
    int32 DustShown=0;
    bool bCleared=true;
    UPROPERTY() TArray<TObjectPtr<UInstancedStaticMeshComponent>> ChunkBatches;
    UPROPERTY() TArray<TObjectPtr<UStaticMeshComponent>> Dust;
    UPROPERTY() TArray<TObjectPtr<UMaterialInstanceDynamic>> DustMaterials;
    UPROPERTY() TObjectPtr<UStaticMesh> SphereMesh;
    UPROPERTY() TObjectPtr<UMaterialInterface> DustMaterial;
    UPROPERTY() TObjectPtr<UStaticMesh> CubeMesh;
    UPROPERTY() TArray<TObjectPtr<UStaticMeshComponent>> PaneMeshes;
    UPROPERTY() TObjectPtr<UMaterialInstanceDynamic> PaneMaterial;
    UPROPERTY() TArray<TObjectPtr<UInstancedStaticMeshComponent>> GrenadeBatches;   // fragmentation, concussion
};
