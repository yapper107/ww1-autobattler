#include "DestructionVisual.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"
#include <algorithm>
#include <memory>
#include <utility>

namespace {
constexpr int32 MostDust=192;   // translucent spheres drawn at once (three per puff)
// A grenade as drawn (the engine sphere is one metre across at scale one): a little larger than the real 6 by 11 cm so it
// can be followed from the battle camera.
const FVector GrenadeScale(.085f,.085f,.12f);
// Window glass: the unlit translucent material's colour, its alpha the opacity (an opaque pale blue without it).
const FLinearColor GlassTint(.60f,.76f,.86f,.28f);
}
ADestructionVisual::ADestructionVisual() {
    PrimaryActorTick.bCanEverTick=false;
    RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}
void ADestructionVisual::EnsureComponents() {
    if(ChunkBatches.Num())return;
    UStaticMesh* Cube=LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Cube.Cube"));CubeMesh=Cube;
    UMaterialInterface* Shape=LoadObject<UMaterialInterface>(nullptr,TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
    for(int32 Material=0;Material<4;++Material) {
        auto* Batch=NewObject<UInstancedStaticMeshComponent>(this);
        Batch->SetupAttachment(RootComponent);Batch->SetStaticMesh(Cube);
        Batch->SetCollisionEnabled(ECollisionEnabled::NoCollision);Batch->SetMobility(EComponentMobility::Movable);Batch->SetCanEverAffectNavigation(false);
        Batch->RegisterComponent();AddInstanceComponent(Batch);
        auto* Paint=UMaterialInstanceDynamic::Create(Shape,Batch);Paint->SetVectorParameterValue(TEXT("Color"),armydestruction::DebrisColor(Material));Batch->SetMaterial(0,Paint);
        ChunkBatches.Add(Batch);ChunkCounts.Add(0);
    }
    SphereMesh=LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    // The engine's unlit translucent material (one "Color" parameter, its alpha the opacity): dust needs no new asset.
    DustMaterial=LoadObject<UMaterialInterface>(nullptr,TEXT("/Engine/EngineDebugMaterials/M_SimpleUnlitTranslucent.M_SimpleUnlitTranslucent"));
    if(!DustMaterial||!SphereMesh){DustMaterial=nullptr;UE_LOG(LogTemp,Warning,TEXT("ARMY_DESTRUCTION: engine translucent material missing; dust is not drawn"));}
    PaneMaterial=UMaterialInstanceDynamic::Create(DustMaterial?DustMaterial.Get():Shape,this);
    PaneMaterial->SetVectorParameterValue(TEXT("Color"),DustMaterial?GlassTint:FLinearColor(GlassTint.R*.8f,GlassTint.G*.8f,GlassTint.B*.8f));
    // Grenades: instanced spheres, one batch per type.
    UStaticMesh* Sphere=LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Sphere.Sphere"));
    for(const army::GrenadeType Type:{army::GrenadeType::Fragmentation,army::GrenadeType::Concussion}) {
        auto* Batch=NewObject<UInstancedStaticMeshComponent>(this);
        Batch->SetupAttachment(RootComponent);Batch->SetStaticMesh(Sphere);
        Batch->SetCollisionEnabled(ECollisionEnabled::NoCollision);Batch->SetMobility(EComponentMobility::Movable);Batch->SetCanEverAffectNavigation(false);
        Batch->RegisterComponent();AddInstanceComponent(Batch);
        auto* Paint=UMaterialInstanceDynamic::Create(Shape,Batch);Paint->SetVectorParameterValue(TEXT("Color"),armydestruction::GrenadeColor(Type));Batch->SetMaterial(0,Paint);
        GrenadeBatches.Add(Batch);GrenadeCounts.Add(0);
    }
}
void ADestructionVisual::Configure(const army::Record& Record) {
    Chunks.clear();Puffs.clear();LongestChunk=LongestPuff=0;
    armydestruction::PaneVisuals(Record,Panes);armydestruction::GrenadeTracks(Record,Grenades);
    if(!Record.destruction.empty()||!Record.explosions.empty()||!Panes.empty()||!Grenades.empty())EnsureComponents();
    // Debris lands on the geometry of its own moment (after the change that threw it).
    std::vector<std::pair<const army::Map*,std::unique_ptr<armydestruction::FDebrisWorld>>> Scenes;
    for(const auto& Change:Record.destruction) {
        const army::Map& Geometry=army::GeometryAt(Record,Change.time);
        const armydestruction::FDebrisWorld* Scene=nullptr;
        for(const auto& Entry:Scenes)if(Entry.first==&Geometry)Scene=Entry.second.get();
        if(!Scene){Scenes.emplace_back(&Geometry,std::make_unique<armydestruction::FDebrisWorld>(Geometry));Scene=Scenes.back().second.get();}
        armydestruction::SpawnDebris(Change,*Scene,Chunks,Puffs);
    }
    for(const auto& Explosion:Record.explosions)armydestruction::BlastPuffs(Explosion,Puffs);   // plan 032: flash and smoke
    std::stable_sort(Chunks.begin(),Chunks.end(),[](const armydestruction::FDebrisChunk& A,const armydestruction::FDebrisChunk& B){return A.Start<B.Start;});
    std::stable_sort(Puffs.begin(),Puffs.end(),[](const armydestruction::FDustPuff& A,const armydestruction::FDustPuff& B){return A.Start<B.Start;});
    for(const auto& Chunk:Chunks)LongestChunk=FMath::Max(LongestChunk,Chunk.Life);
    for(const auto& Puff:Puffs)LongestPuff=FMath::Max(LongestPuff,Puff.Life);
    TotalChunks=int32(Chunks.size());TotalPuffs=int32(Puffs.size());
    // Each pane is one translucent box, placed once; Present shows it until it shatters.
    for(int32 I=0;I<int32(Panes.size());++I){UStaticMeshComponent* Pane=PaneMesh(I);Pane->SetWorldLocationAndRotation(Panes[size_t(I)].Center,FQuat::Identity);Pane->SetWorldScale3D(Panes[size_t(I)].Scale);}
    TotalPanes=int32(Panes.size());TotalGrenades=int32(Grenades.size());
    bCleared=false;Clear();
}
void ADestructionVisual::ChunkInstance(int32 Material,const FTransform& Transform) {
    auto* Batch=ChunkBatches[Material].Get();const int32 Index=ChunkCounts[Material]++;
    if(Index<Batch->GetInstanceCount())Batch->UpdateInstanceTransform(Index,Transform,false,false,true);
    else Batch->AddInstance(Transform);
}
void ADestructionVisual::FinishChunks() {
    for(int32 B=0;B<ChunkBatches.Num();++B) {
        auto* Batch=ChunkBatches[B].Get();
        for(int32 I=ChunkCounts[B];I<Batch->GetInstanceCount();++I){FTransform Placed;Batch->GetInstanceTransform(I,Placed);
            if(!Placed.GetScale3D().IsNearlyZero()){Placed.SetScale3D(FVector::ZeroVector);Batch->UpdateInstanceTransform(I,Placed,false,false,true);}}
        Batch->MarkRenderInstancesDirty();
    }
}
UStaticMeshComponent* ADestructionVisual::PaneMesh(int32 Index) {
    while(PaneMeshes.Num()<=Index) {
        auto* Pane=NewObject<UStaticMeshComponent>(this);
        Pane->SetupAttachment(RootComponent);Pane->SetStaticMesh(CubeMesh);
        Pane->SetCollisionEnabled(ECollisionEnabled::NoCollision);Pane->SetCastShadow(false);Pane->SetMobility(EComponentMobility::Movable);
        Pane->SetCanEverAffectNavigation(false);Pane->SetVisibility(false);
        Pane->RegisterComponent();AddInstanceComponent(Pane);Pane->SetMaterial(0,PaneMaterial);
        PaneMeshes.Add(Pane);
    }
    return PaneMeshes[Index];
}
void ADestructionVisual::FinishGrenades() {
    for(int32 B=0;B<GrenadeBatches.Num();++B) {
        auto* Batch=GrenadeBatches[B].Get();
        for(int32 I=GrenadeCounts[B];I<Batch->GetInstanceCount();++I){FTransform Placed;Batch->GetInstanceTransform(I,Placed);
            if(!Placed.GetScale3D().IsNearlyZero()){Placed.SetScale3D(FVector::ZeroVector);Batch->UpdateInstanceTransform(I,Placed,false,false,true);}}
        Batch->MarkRenderInstancesDirty();
    }
}
UStaticMeshComponent* ADestructionVisual::DustSphere(int32 Index) {
    while(Dust.Num()<=Index) {
        auto* Sphere=NewObject<UStaticMeshComponent>(this);
        Sphere->SetupAttachment(RootComponent);Sphere->SetStaticMesh(SphereMesh);
        Sphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);Sphere->SetCastShadow(false);Sphere->SetMobility(EComponentMobility::Movable);
        Sphere->SetCanEverAffectNavigation(false);Sphere->SetVisibility(false);
        Sphere->RegisterComponent();AddInstanceComponent(Sphere);
        auto* Paint=UMaterialInstanceDynamic::Create(DustMaterial,Sphere);Sphere->SetMaterial(0,Paint);
        Dust.Add(Sphere);DustMaterials.Add(Paint);
    }
    return Dust[Index];
}
void ADestructionVisual::Present(float Time) {
    if(Chunks.empty()&&Puffs.empty()&&Panes.empty()&&Grenades.empty()){Clear();return;}   // a battle without any costs nothing per frame
    EnsureComponents();bCleared=false;
    for(int32& Count:ChunkCounts)Count=0;
    VisibleChunks=0;
    auto FirstChunk=std::lower_bound(Chunks.begin(),Chunks.end(),Time-LongestChunk,[](const armydestruction::FDebrisChunk& Chunk,float At){return Chunk.Start<At;});
    for(auto It=FirstChunk;It!=Chunks.end()&&It->Start<=Time;++It) {
        const float Age=Time-It->Start;
        if(Age>=It->Life)continue;
        ChunkInstance(It->Material,It->TransformAt(Age));++VisibleChunks;
    }
    FinishChunks();
    int32 Used=0;
    if(DustMaterial) {
        auto FirstPuff=std::lower_bound(Puffs.begin(),Puffs.end(),Time-LongestPuff,[](const armydestruction::FDustPuff& Puff,float At){return Puff.Start<At;});
        for(auto It=FirstPuff;It!=Puffs.end()&&It->Start<=Time&&Used+armydestruction::FDustPuff::LobeCount<=MostDust;++It) {
            const float Age=Time-It->Start;
            if(Age>=It->Life)continue;
            FVector Where;float Radius=0,Alpha=0;It->Sample(Age,Where,Radius,Alpha);
            if(Alpha<.004f||Radius<=.001f)continue;
            // Three offset lobes read as a small cloud. The engine sphere is 50 cm in radius at scale one.
            const FLinearColor Tone=armydestruction::DustColor(It->Material);
            for(int32 Lobe=0;Lobe<armydestruction::FDustPuff::LobeCount;++Lobe){
                UStaticMeshComponent* Sphere=DustSphere(Used);const float Shade=It->LobeTone[Lobe];
                DustMaterials[Used]->SetVectorParameterValue(TEXT("Color"),FLinearColor(Tone.R*Shade,Tone.G*Shade,Tone.B*Shade,Alpha));
                Sphere->SetWorldLocationAndRotation(Where+It->Lobes[Lobe]*(Radius*100.f),FQuat::Identity);
                Sphere->SetWorldScale3D(FVector(Radius*2.f*It->LobeSize[Lobe]));
                if(!Sphere->IsVisible())Sphere->SetVisibility(true);
                ++Used;
            }
        }
    }
    for(int32 I=Used;I<DustShown;++I)Dust[I]->SetVisibility(false);
    DustShown=Used;VisiblePuffs=Used/armydestruction::FDustPuff::LobeCount;
    // Window glass, whole until it shatters (upper storeys' only while the upper structure shows).
    VisiblePanes=0;
    for(int32 I=0;I<int32(Panes.size());++I){
        const auto& Pane=Panes[size_t(I)];const bool Whole=Time<Pane.BrokenAt&&(bUpperShown||!Pane.Upper);
        UStaticMeshComponent* Mesh=PaneMeshes[I].Get();if(Mesh->IsVisible()!=Whole)Mesh->SetVisibility(Whole);
        VisiblePanes+=Whole?1:0;
    }
    // The grenades in the world now.
    for(int32& Count:GrenadeCounts)Count=0;
    VisibleGrenades=0;
    for(const auto& Track:Grenades) {
        FVector Where;if(!Track.PositionAt(Time,Where))continue;
        const int32 B=Track.Type==army::GrenadeType::Concussion?1:0;auto* Batch=GrenadeBatches[B].Get();const int32 Index=GrenadeCounts[B]++;
        const FTransform Placed(FQuat::Identity,Where*100.,GrenadeScale);
        if(Index<Batch->GetInstanceCount())Batch->UpdateInstanceTransform(Index,Placed,false,false,true);else Batch->AddInstance(Placed);
        ++VisibleGrenades;
    }
    FinishGrenades();
}
void ADestructionVisual::Clear() {
    if(bCleared)return;
    for(int32& Count:ChunkCounts)Count=0;
    if(ChunkBatches.Num())FinishChunks();
    for(int32 I=0;I<DustShown;++I)Dust[I]->SetVisibility(false);
    for(auto& Pane:PaneMeshes)if(Pane->IsVisible())Pane->SetVisibility(false);
    for(int32& Count:GrenadeCounts)Count=0;
    if(GrenadeBatches.Num())FinishGrenades();
    DustShown=0;VisibleChunks=VisiblePuffs=VisiblePanes=VisibleGrenades=0;bCleared=true;
}
TArray<FTransform> ADestructionVisual::Snapshot() const {
    TArray<FTransform> Shown;
    for(int32 B=0;B<ChunkBatches.Num();++B)for(int32 I=0;I<ChunkCounts[B];++I){FTransform Placed;ChunkBatches[B]->GetInstanceTransform(I,Placed);Shown.Add(Placed);}
    for(int32 I=0;I<DustShown;++I)Shown.Add(Dust[I]->GetComponentTransform());
    return Shown;
}
