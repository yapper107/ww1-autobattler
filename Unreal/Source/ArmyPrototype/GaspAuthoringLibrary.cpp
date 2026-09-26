#include "GaspAuthoringLibrary.h"
#include "Engine/SkeletalMesh.h"
#include "Animation/Skeleton.h"
bool UGaspAuthoringLibrary::AssignPrototypeSkeleton(USkeletalMesh* Mesh,USkeleton* Skeleton) {
#if WITH_EDITOR
    if(!Mesh||!Skeleton)return false;
    const FString Prefix=TEXT("/Game/Characters/GASP/Bodies/");
    if(!Mesh->GetPathName().StartsWith(Prefix)||!Skeleton->GetPathName().StartsWith(Prefix))return false;
    Mesh->Modify();Mesh->SetSkeleton(Skeleton);Mesh->MarkPackageDirty();return true;
#else
    return false;
#endif
}

#include "Animation/AnimSequence.h"
#include "Animation/AnimData/IAnimationDataModel.h"
#include "Animation/AnimData/IAnimationDataController.h"
#include "PoseSearch/PoseSearchSchema.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/PoseSearchFeatureChannel_Trajectory.h"
#include "PoseSearch/PoseSearchFeatureChannel_Position.h"
#include "PoseSearch/PoseSearchFeatureChannel_Velocity.h"
#include "PoseSearch/PoseSearchIndex.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"
#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "PoseSearch/PoseSearchDerivedData.h"
#endif

UPoseSearchSchema* UGaspAuthoringLibrary::CreateSoldierSchema(USkeleton* Skeleton,const FString& Path) {
#if WITH_EDITOR
    if(!Skeleton||!Path.StartsWith(TEXT("/Game/Characters/GASP/Motion/")))return nullptr;
    const FString Name=FPackageName::GetLongPackageAssetName(Path);
    if(auto* Existing=LoadObject<UPoseSearchSchema>(nullptr,*(Path+TEXT(".")+Name)))return Existing;
    auto* Schema=NewObject<UPoseSearchSchema>(CreatePackage(*Path),*Name,RF_Public|RF_Standalone);
    Schema->AddSkeleton(Skeleton);Schema->SampleRate=30;
    auto* Trajectory=NewObject<UPoseSearchFeatureChannel_Trajectory>(Schema);
    Trajectory->Samples.Reset();Trajectory->Weight=3.f;
    for(float Offset:{-.4f,0.f,.2f,.4f,.7f,1.f}) {
        FPoseSearchTrajectorySample Sample;Sample.Offset=Offset;
        Sample.Flags=int32(EPoseSearchTrajectoryFlags::PositionXY)|int32(EPoseSearchTrajectoryFlags::VelocityXY)|int32(EPoseSearchTrajectoryFlags::FacingDirectionXY);
        Trajectory->Samples.Add(Sample);
    }
    Schema->AddChannel(Trajectory);
    for(const FName Bone:{FName(TEXT("LeftFoot")),FName(TEXT("RightFoot")),FName(TEXT("Hips"))}) {
        auto* Position=NewObject<UPoseSearchFeatureChannel_Position>(Schema);
        Position->Bone.BoneName=Bone;Position->Weight=Bone==TEXT("Hips")?.5f:1.f;
        Position->InputQueryPose=EInputQueryPose::UseCharacterPose;
        Schema->AddChannel(Position);
        auto* Velocity=NewObject<UPoseSearchFeatureChannel_Velocity>(Schema);
        Velocity->Bone.BoneName=Bone;Velocity->Weight=.5f;Velocity->InputQueryPose=EInputQueryPose::UseCharacterPose;
        Schema->AddChannel(Velocity);
    }
    Schema->PostEditChange();Schema->MarkPackageDirty();FAssetRegistryModule::AssetCreated(Schema);
    return Schema;
#else
    return nullptr;
#endif
}
UPoseSearchDatabase* UGaspAuthoringLibrary::CreateSoldierDatabase(UPoseSearchSchema* Schema,const TArray<UAnimSequence*>& Clips,const FString& Path) {
#if WITH_EDITOR
    if(!Schema||Clips.IsEmpty()||!Path.StartsWith(TEXT("/Game/Characters/GASP/Motion/")))return nullptr;
    const FString Name=FPackageName::GetLongPackageAssetName(Path);
    auto* Database=LoadObject<UPoseSearchDatabase>(nullptr,*(Path+TEXT(".")+Name));
    if(!Database){Database=NewObject<UPoseSearchDatabase>(CreatePackage(*Path),*Name,RF_Public|RF_Standalone);FAssetRegistryModule::AssetCreated(Database);}
    Database->Modify();Database->Schema=Schema;
    while(Database->GetNumAnimationAssets()>0)Database->RemoveAnimationAssetAt(Database->GetNumAnimationAssets()-1);
    for(UAnimSequence* Clip:Clips) {
        if(!Clip||Clip->GetSkeleton()!=Schema->GetSkeleton(UE::PoseSearch::DefaultRole))return nullptr;
        FPoseSearchDatabaseAnimationAsset Asset;Asset.AnimAsset=Clip;Database->AddAnimationAsset(Asset);
    }
    Database->PostEditChange();Database->MarkPackageDirty();return Database;
#else
    return nullptr;
#endif
}
int32 UGaspAuthoringLibrary::BuildDatabase(UPoseSearchDatabase* Database) {
#if WITH_EDITOR
    if(!Database)return -1;
    using namespace UE::PoseSearch;
    const auto Result=FAsyncPoseSearchDatabasesManagement::RequestAsyncBuildIndex(Database,ERequestAsyncBuildFlag::NewRequest|ERequestAsyncBuildFlag::WaitForCompletion);
    return Result==EAsyncBuildIndexResult::Success?Database->GetSearchIndex().GetNumPoses():-1;
#else
    return -1;
#endif
}
UAnimSequence* UGaspAuthoringLibrary::NormalizeLegacyClip(UAnimSequence* Source,USkeleton* Skeleton,const FString& Path) {
#if WITH_EDITOR
    if(!Source||!Skeleton||!Path.StartsWith(TEXT("/Game/Characters/GASP/Legacy/")))return nullptr;
    const FString Name=FPackageName::GetLongPackageAssetName(Path);
    auto* Clip=LoadObject<UAnimSequence>(nullptr,*(Path+TEXT(".")+Name));
    if(!Clip)Clip=DuplicateObject<UAnimSequence>(Source,CreatePackage(*Path),*Name);
    Clip->SetFlags(RF_Public|RF_Standalone);
    const auto* Model=Source->GetDataModel();auto& Controller=Clip->GetController();
    TArray<FName> Names;Model->GetBoneTrackNames(Names);
    const FName Root=Skeleton->GetReferenceSkeleton().GetBoneName(0);
    const auto& SourceRef=Source->GetSkeleton()->GetReferenceSkeleton();
    const FQuat RootBasis=SourceRef.GetRefBonePose()[0].GetRotation();
    Controller.OpenBracket(FText::FromString(TEXT("Bake FBX root scale into translations")),false);
    // UE 5.8 stores raw tracks in an FK Control Rig. Rebind that rig before
    // changing the asset skeleton, as Epic's own batch retargeter does.
    Controller.RemoveAllBoneTracks(false);Controller.UpdateWithSkeleton(Skeleton,false);
    Clip->SetSkeleton(Skeleton);Clip->RetargetSource=NAME_None;Clip->SetRetargetSourceAsset(nullptr);
    for(FName Bone:Names) {
        TArray<FTransform> Keys;Model->GetBoneTrackTransforms(Bone,Keys);
        TArray<FVector3f> Positions,Scales;TArray<FQuat4f> Rotations;
        const bool DirectChild=SourceRef.GetParentIndex(SourceRef.FindBoneIndex(Bone))==0;
        for(const auto& Key:Keys) {
            const FVector Position=Key.GetTranslation()*(Bone==Root?1.:100.);
            Positions.Add(FVector3f(DirectChild?RootBasis.RotateVector(Position):Position));
            const FQuat Rotation=Bone==Root?Key.GetRotation()*RootBasis.Inverse():DirectChild?RootBasis*Key.GetRotation():Key.GetRotation();
            Rotations.Add(FQuat4f(Rotation));Scales.Add(FVector3f::OneVector);
        }
        Controller.AddBoneCurve(Bone,false);
        if(!Controller.SetBoneTrackKeys(Bone,Positions,Rotations,Scales,false)){Controller.CloseBracket(false);return nullptr;}
    }
    Controller.NotifyPopulated();Controller.CloseBracket(false);Clip->UpdateRetargetSourceAssetData();Clip->Notifies.Reset();Clip->RefreshCacheData();
    Clip->MarkPackageDirty();FAssetRegistryModule::AssetCreated(Clip);return Clip;
#else
    return nullptr;
#endif
}

bool UGaspAuthoringLibrary::CreateFootTargets(USkeleton* Skeleton) {
#if WITH_EDITOR
    if(!Skeleton||!Skeleton->GetPathName().StartsWith(TEXT("/Game/Characters/GASP/Bodies/")))return false;
    Skeleton->Modify();const FName Root=Skeleton->GetReferenceSkeleton().GetBoneName(0);
    for(const FString Side:{FString(TEXT("Left")),FString(TEXT("Right"))}) {
        const FName Target(*(Side+TEXT("Foot"))),Virtual(*(TEXT("VB FootTarget_")+Side));
        bool Exists=false;for(const auto& Bone:Skeleton->GetVirtualBones())Exists|=Bone.VirtualBoneName==Virtual;
        if(!Exists&&!Skeleton->AddNewNamedVirtualBone(Root,Target,Virtual))return false;
    }
    Skeleton->MarkPackageDirty();return true;
#else
    return false;
#endif
}

bool UGaspAuthoringLibrary::SynchronizeNormalizedSkeleton(USkeletalMesh* Mesh) {
#if WITH_EDITOR
    if(!Mesh||!Mesh->GetPathName().StartsWith(TEXT("/Game/Characters/GASP/Bodies/")))return false;
    USkeleton* Skeleton=Mesh->GetSkeleton();
    if(!Skeleton||!Skeleton->GetPathName().StartsWith(TEXT("/Game/Characters/GASP/Bodies/")))return false;
    const auto& Ref=Mesh->GetRefSkeleton();
    if(Ref.GetNum()==0||!Ref.GetRefBonePose()[0].Equals(FTransform::Identity,.0001))return false;
    // SkeletonModifier commits the mesh reference pose, but the separate
    // USkeleton can retain the FBX scale/basis. Root-motion extraction uses
    // USkeleton, so checking the rendered mesh alone misses a 100x error.
    Skeleton->Modify();Skeleton->UpdateReferencePoseFromMesh(Mesh);
    const auto& SkeletonRef=Skeleton->GetReferenceSkeleton();
    for(int I=0;I<Ref.GetRawBoneNum();++I) {
        const int J=SkeletonRef.FindBoneIndex(Ref.GetBoneName(I));
        if(J<0||!Ref.GetRefBonePose()[I].Equals(SkeletonRef.GetRefBonePose()[J],.0001))return false;
    }
    Skeleton->MarkPackageDirty();return true;
#else
    return false;
#endif
}

FVector UGaspAuthoringLibrary::RootMotionTranslation(UAnimSequence* Clip,float Start,float Duration) {
    if(!Clip)return FVector::ZeroVector;
    return Clip->ExtractRootMotionFromRange(Start,Start+Duration,FAnimExtractContext(Start,true)).GetTranslation();
}
