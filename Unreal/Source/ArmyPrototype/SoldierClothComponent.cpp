#include "SoldierClothComponent.h"
#include "ClothingSimulationInstance.h"
#include "Engine/SkeletalMesh.h"
#include "Misc/Crc.h"

void USoldierClothComponent::StepCoat(float Seconds,bool Reset) {
    // The public 5.8 simulation facade avoids scheduling a second world-time
    // cloth tick after the explicit, replay-time skeletal pose evaluation.
    WaitForExistingParallelClothSimulation_GameThread();
    if(Reset)ForceClothNextUpdateTeleportAndReset();
    CurrentSimulationData.Reset();
    for(auto& Instance:GetClothingSimulationInstances()) {
        Instance.FillContextAndPrepareTick(this,Seconds,false);
        Instance.SyncClothingInteractor();
        Instance.Simulate();
        Instance.AppendSimulationData(CurrentSimulationData,this,nullptr);
    }
    ResetClothTeleportMode();
}
void USoldierClothComponent::AdvanceCoat(double ReplayTime) {
    ClothTickFunction.SetTickFunctionEnable(false);
    const double PresentationDelta=ReplayTime-LastPresentationTime;LastPresentationTime=ReplayTime;
    if(!DetailEnabled)return;
    if(GetClothingSimulationInstances().IsEmpty()){CoatTime=ReplayTime;return;}
    const double Delta=ReplayTime-CoatTime;
    if(CoatTime>=0&&FMath::Abs(Delta)<1.e-6)return; // Pausing freezes the cloth too.
#if WITH_CLOTH_COLLISION_DETECTION
    UpdateBounds();
    for(auto& Instance:GetClothingSimulationInstances())Instance.ClearExternalCollisions();
    ProcessClothCollisionWithEnvironment();
#endif
    if(CoatTime<0||Delta<0||Delta>.1) {
        // A seek must not turn its positional jump into enormous cloth inertia.
        // Settle the new pose locally; cloth history is intentionally not baked
        // into the battle recording, unlike the deterministic skeletal poses.
        // A coat newly entering the live budget warms briefly and fades in.
        // Paused camera changes and seeks settle immediately at full weight.
        const bool BlendIn=BudgetActivation&&PresentationDelta>0&&PresentationDelta<=.1;
        for(int I=0;I<(BlendIn?3:12);++I)StepCoat(1.f/60,I==0);
        ClothBlendWeight=BlendIn?0.f:1.f;BudgetActivation=false;
    } else {
        StepCoat(float(Delta),false);
        ClothBlendWeight=FMath::Min(1.f,ClothBlendWeight+float(Delta)/.15f);
    }
    CoatTime=ReplayTime;
    MarkRenderDynamicDataDirty();
}
void USoldierClothComponent::SetCoatDetail(bool Enabled) {
    if(DetailEnabled==Enabled)return;
    DetailEnabled=Enabled;ClothBlendWeight=0;CoatTime=-1;BudgetActivation=Enabled;
    MarkRenderDynamicDataDirty();
}
bool USoldierClothComponent::CoatIsFinite() const {
    for(const auto& Entry:CurrentSimulationData)for(const auto& P:Entry.Value.Positions)
        if(P.ContainsNaN())return false;
    return true;
}
int USoldierClothComponent::CoatVertexCount() const {
    int Count=0;for(const auto& Entry:CurrentSimulationData)Count+=Entry.Value.Positions.Num();return Count;
}
uint32 USoldierClothComponent::CoatSignature() const {
    uint32 Hash=0;
    for(const auto& Entry:CurrentSimulationData)Hash=FCrc::MemCrc32(Entry.Value.Positions.GetData(),Entry.Value.Positions.Num()*sizeof(FVector3f),Hash);
    return Hash;
}
