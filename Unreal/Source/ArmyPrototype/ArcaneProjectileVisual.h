#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sim/BattleSim.h"
#include "ArcaneProjectileVisual.generated.h"

class UInstancedStaticMeshComponent;

// All effects are sampled from recorded battle time, never integrated by frame dt.
UCLASS()
class ARMYPROTOTYPE_API AArcaneProjectileVisual : public AActor {
    GENERATED_BODY()
public:
    AArcaneProjectileVisual();
    void Configure(const army::Record& Record);
    void Present(const army::Record& Record,float Time,TFunctionRef<FVector(const army::Shot&)> Muzzle);
    void Clear();
    FString ValidatePresentation();
    int VisibleShots=0;
    TSet<int> MuzzleOwners;
private:
    void Instance(int Batch,const FTransform& Transform,float Fade);
    void FinishFrame();
    TArray<int> ActiveCounts;
    void Orb(int Team,FVector Position,float Radius,float Fade,bool Core=false);
    void Stroke(int Team,FVector A,FVector B,float Width,float Fade);
    void Ring(int Team,FVector Center,FVector Axis,float Radius,float Fade,float Spin,bool Glyphs);
    void Impact(int Team,FVector Point,FVector Direction,float Age,float Seed,bool Through=false);
    UPROPERTY() TArray<TObjectPtr<UInstancedStaticMeshComponent>> Batches;
    TArray<FVector> Origins;
    TArray<uint8> OriginReady;
    float Lookback=1;
};
