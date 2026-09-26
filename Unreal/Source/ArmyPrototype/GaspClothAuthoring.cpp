#include "GaspAuthoringLibrary.h"
#if WITH_EDITOR
#include "Engine/SkeletalMesh.h"
#include "ClothingAssetFactory.h"
#include "ClothingAsset.h"
#include "ClothLODData.h"
#include "ClothVertBoneData.h"
#include "ChaosCloth/ChaosClothConfig.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "PhysicsEngine/SkeletalBodySetup.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "UObject/Package.h"
#endif

FString UGaspAuthoringLibrary::CreateCoatCloth(USkeletalMesh* Mesh) {
#if WITH_EDITOR
    if(!Mesh||!Mesh->GetPathName().StartsWith(TEXT("/Game/Characters/GASP/Bodies/")))return TEXT("ERROR: generated body required");
    const auto& Ref=Mesh->GetRefSkeleton();
    if(!Ref.GetRefBonePose()[0].Equals(FTransform::Identity,.001))return TEXT("ERROR: normalize root first");
    auto* Model=Mesh->GetImportedModel();if(!Model||Model->LODModels.IsEmpty())return TEXT("ERROR: missing imported mesh");
    int Section=INDEX_NONE;
    for(int I=0;I<Model->LODModels[0].Sections.Num();++I) {
        const int Material=Model->LODModels[0].Sections[I].MaterialIndex;
        const auto& Slot=Mesh->GetMaterials()[Material];
        if(Slot.MaterialSlotName.ToString().Contains(TEXT("cloth"),ESearchCase::IgnoreCase)) {
            if(Section!=INDEX_NONE)return TEXT("ERROR: ambiguous lower coat section");
            Section=I;
        }
    }
    if(Section==INDEX_NONE)return TEXT("ERROR: no lower coat material section");
    Mesh->Modify();
    FScopedSkeletalMeshPostEditChange DeferredMeshBuild(Mesh);
    UClothingAssetCommon* Cloth=nullptr;
    for(const auto& Asset:Mesh->GetMeshClothingAssets()) {
        if(Asset->GetName().StartsWith(TEXT("ArmyLowerCoat")))Cloth=Cast<UClothingAssetCommon>(Asset);
        else return TEXT("ERROR: unexpected existing cloth");
    }
    if(Cloth)Cloth->UnbindFromSkeletalMesh(Mesh,INDEX_NONE,INDEX_NONE);
    const bool Male=Mesh->GetName().Contains(TEXT("Male"),ESearchCase::CaseSensitive);
    const FString PhysicsName=Male?TEXT("PHYS_Male_GASP"):TEXT("PHYS_Female_GASP");
    const FString Path=TEXT("/Game/Characters/GASP/Bodies/")+PhysicsName;
    auto* Physics=LoadObject<UPhysicsAsset>(nullptr,*(Path+TEXT(".")+PhysicsName));
    if(!Physics){Physics=NewObject<UPhysicsAsset>(CreatePackage(*Path),*PhysicsName,RF_Public|RF_Standalone);FAssetRegistryModule::AssetCreated(Physics);}
    Physics->Modify();Physics->SkeletalBodySetups.Reset();Physics->ConstraintSetup.Reset();
    TArray<FTransform> CS=Ref.GetRefBonePose();
    for(int I=1;I<CS.Num();++I)CS[I]=CS[I]*CS[Ref.GetParentIndex(I)];
    auto AddCapsule=[&](FName Bone,FVector Start,FVector End,float Radius) {
        const int Index=Ref.FindBoneIndex(Bone);check(Index!=INDEX_NONE);
        auto* Setup=NewObject<USkeletalBodySetup>(Physics);Setup->BoneName=Bone;Setup->PhysicsType=PhysType_Kinematic;
        FKSphylElem Capsule;
        Capsule.Center=CS[Index].InverseTransformPosition((Start+End)*.5);
        Capsule.Rotation=FQuat::FindBetweenNormals(FVector::UpVector,CS[Index].InverseTransformVectorNoScale((End-Start).GetSafeNormal())).Rotator();
        Capsule.Radius=Radius;Capsule.Length=FMath::Max(0.,(End-Start).Size()-2*Radius);
        Setup->AggGeom.SphylElems.Add(Capsule);Setup->InvalidatePhysicsData();Setup->CreatePhysicsMeshes();
        Physics->SkeletalBodySetups.Add(Setup);
    };
    auto BonePosition=[&](FName Bone){return CS[Ref.FindBoneIndex(Bone)].GetLocation();};
    const FVector Hip=BonePosition(TEXT("Hips"));
    AddCapsule(TEXT("Hips"),Hip+FVector(-14,0,-5),Hip+FVector(14,0,-5),Male?11.f:9.f);
    AddCapsule(TEXT("Spine"),BonePosition(TEXT("Spine")),BonePosition(TEXT("Spine2")),Male?14.f:11.f);
    for(const FString Side:{TEXT("Left"),TEXT("Right")}) {
        AddCapsule(FName(Side+TEXT("UpLeg")),BonePosition(FName(Side+TEXT("UpLeg"))),BonePosition(FName(Side+TEXT("Leg"))),Male?8.f:6.5f);
        AddCapsule(FName(Side+TEXT("Leg")),BonePosition(FName(Side+TEXT("Leg"))),BonePosition(FName(Side+TEXT("Foot"))),Male?6.f:5.f);
    }
    Physics->UpdateBodySetupIndexMap();Physics->UpdateBoundsBodiesArray();Physics->MarkPackageDirty();
    Mesh->SetPhysicsAsset(Physics);
    if(!Cloth) {
        FSkeletalMeshClothBuildParams Params;Params.AssetName=TEXT("ArmyLowerCoat");Params.LodIndex=0;
        Params.SourceSection=Section;Params.bRemoveFromMesh=false;Params.PhysicsAsset=Physics;
        Cloth=Cast<UClothingAssetCommon>(NewObject<UClothingAssetFactory>()->CreateFromSkeletalMesh(Mesh,Params));
        if(!Cloth)return TEXT("ERROR: cloth factory failed");
        Mesh->AddClothingAsset(Cloth);
    }
    Cloth->PhysicsAsset=Physics;
    auto& Lod=Cloth->LodData[0];auto& Physical=Lod.PhysicalMeshData;
    float Top=-FLT_MAX,Bottom=FLT_MAX;
    for(const auto& P:Physical.Vertices){Top=FMath::Max(Top,P.Z);Bottom=FMath::Min(Bottom,P.Z);}
    if(Top-Bottom<25||Top>150||Bottom<20)return TEXT("ERROR: lower coat bounds are not in expected centimetres");
    // The skin-only fallback remains on the render section. Cloth's rest target
    // belongs to the pelvis, so thigh skin weights do not pull the hem sideways.
    const int HipMap=Cloth->UsedBoneNames.AddUnique(TEXT("Hips"));
    for(auto& Bone:Physical.BoneData){Bone=FClothVertBoneData();Bone.NumInfluences=1;Bone.BoneIndices[0]=HipMap;Bone.BoneWeights[0]=1;}
    Cloth->RefreshBoneMapping(Mesh);Cloth->CalculateReferenceBoneIndex();
    Lod.PointWeightMaps.Reset();
    FPointWeightMap Mask(Physical.Vertices.Num());Mask.Name=TEXT("Waist pins and free hem");
    Mask.CurrentTarget=uint8(EWeightMapTargetCommon::MaxDistance);Mask.bEnabled=true;
    int Pins=0;
    for(int I=0;I<Physical.Vertices.Num();++I) {
        const float Depth=Top-Physical.Vertices[I].Z;
        Mask.Values[I]=FMath::Max(0.f,Depth-4.f)*1.8f;
        if(Mask.Values[I]==0)++Pins;
    }
    Lod.PointWeightMaps.Add(Mask);
    auto* Config=Cloth->GetClothConfig<UChaosClothConfig>();
    if(!Config){Config=NewObject<UChaosClothConfig>(Cloth);Cloth->ClothConfigs.Add(Config->GetClass()->GetFName(),Config);}
    Config->MassMode=EClothMassMode::TotalMass;Config->TotalMass=.8f;
    Config->EdgeStiffnessWeighted={.9f,.9f};Config->AreaStiffnessWeighted={.9f,.9f};
    Config->BendingStiffnessWeighted={.35f,.35f};Config->bUseBendingElements=true;
    Config->TetherStiffness={1,1};Config->TetherScale={1.02f,1.02f};
    Config->DampingCoefficient=.15f;Config->LocalDampingCoefficient=.1f;
    Config->CollisionThickness=.8f;Config->FrictionCoefficient=.35f;
    Config->bUseCCD=true;Config->bUseSelfCollisions=true;Config->SelfCollisionThickness=.5f;
    Config->AnimDriveStiffness={.025f,.025f};Config->AnimDriveDamping={.1f,.1f};
    Config->LinearVelocityScale=FVector(.75);Config->AngularVelocityScale=.6f;
    auto* Shared=Cloth->GetClothConfig<UChaosClothSharedSimConfig>();
    if(!Shared){Shared=NewObject<UChaosClothSharedSimConfig>(Cloth);Cloth->ClothConfigs.Add(Shared->GetClass()->GetFName(),Shared);}
    Shared->IterationCount=6;Shared->MaxIterationCount=12;Shared->SubdivisionCount=2;
    Cloth->ApplyParameterMasks();Cloth->InvalidateAllCachedData();
    if(!Cloth->BindToSkeletalMesh(Mesh,0,Section,0))return TEXT("ERROR: cloth binding failed");
    // Match the editor's ApplyClothingAsset: the source-section record is the
    // persistent authority used when the derived render mesh is rebuilt.
    auto& MeshLod=Mesh->GetImportedModel()->LODModels[0];
    auto& SourceSection=FSkelMeshSourceSectionUserData::GetSourceSectionUserData(MeshLod.UserSectionsData,MeshLod.Sections[Section]);
    SourceSection.CorrespondClothAssetIndex=int16(Mesh->GetMeshClothingAssets().IndexOfByKey(Cloth));
    SourceSection.ClothingData.AssetGuid=Cloth->GetAssetGuid();SourceSection.ClothingData.AssetLodIndex=0;
    Mesh->InvalidateDeriveDataCacheGUID();
    Mesh->MarkPackageDirty();
    return FString::Printf(TEXT("OK vertices=%d pins=%d section=%d height_cm=%.2f..%.2f collision_bodies=%d"),Physical.Vertices.Num(),Pins,Section,Bottom,Top,Physics->SkeletalBodySetups.Num());
#else
    return TEXT("ERROR: editor only");
#endif
}
