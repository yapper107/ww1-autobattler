#include "GaspAuthoringLibrary.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Animation/Skeleton.h"
#include "Materials/Material.h"
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
#include "PoseSearch/PoseSearchAnimNotifies.h"
#include "SoldierMotionEvents.h"
#include "TwoBoneIK.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"
#if WITH_EDITOR
#include "AssetRegistry/AssetRegistryModule.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
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
        FPoseSearchDatabaseAnimationAsset Asset;Asset.AnimAsset=Clip;
        // Find the real movement interval. Sample clips can contain seconds of
        // approach or idle before their named transition: a fixed first-second
        // window excluded the braking section and selected a travelling stride.
        // Keep the full clip indexed so a selected footfall can still finish.
        if(Path.EndsWith(TEXT("_starting"))||Path.EndsWith(TEXT("_stopping"))) {
            const FName Marker(TEXT("Army transition continuation"));
            const float Duration=Clip->GetPlayLength(),Step=1.f/60;
            float MovementBegin=Duration,MovementEnd=0;
            for(float T=0;T<Duration-Step*.5f;T+=Step) {
                const float End=FMath::Min(T+Step,Duration);
                const auto Delta=Clip->ExtractRootMotionFromRange(T,End,FAnimExtractContext(T,true));
                if(Delta.GetTranslation().Size2D()/(End-T)>10) {
                    MovementBegin=FMath::Min(MovementBegin,T);MovementEnd=End;
                }
            }
            if(MovementEnd<=MovementBegin)return nullptr;
            const bool Starting=Path.EndsWith(TEXT("_starting"));
            const float EntryBegin=FMath::Max(0.f,Starting?MovementBegin-.25f:MovementEnd-1.f);
            const float EntryEnd=FMath::Min(Duration,Starting?MovementBegin+1.f:MovementEnd+.15f);
            // Context databases share clips. Rebuilding their indexes should
            // not replace unchanged notify objects and churn every source asset.
            int Existing=0,Expected=int(EntryBegin>=Step)+int(Duration-EntryEnd>=Step)+int(!Starting);
            bool Matches=true;TSet<FName> Seen;
            for(const auto& Event:Clip->Notifies)if(Event.NotifyName.ToString().StartsWith(TEXT("Army transition "))) {
                ++Existing;Matches&=!Seen.Contains(Event.NotifyName);Seen.Add(Event.NotifyName);
                if(Event.NotifyName==TEXT("Army transition stop event")) {
                    const auto* Notify=Cast<UAnimNotify_PoseSearchEvent>(Event.Notify);
                    Matches&=!Starting&&Notify&&Notify->EventTag==TAG_ArmyAnimationStop&&FMath::IsNearlyEqual(Event.GetTriggerTime(),MovementEnd,.0001f);
                } else {
                    const bool Approach=Event.NotifyName==TEXT("Army transition approach");
                    const float Begin=Approach?0.f:EntryEnd,End=Approach?EntryBegin:Duration;
                    Matches&=(Approach||Event.NotifyName==Marker)&&End-Begin>=Step&&
                        Event.NotifyStateClass&&Event.NotifyStateClass->IsA<UAnimNotifyState_PoseSearchBlockTransition>()&&
                        FMath::IsNearlyEqual(Event.GetTriggerTime(),Begin,.0001f)&&FMath::IsNearlyEqual(Event.GetDuration(),End-Begin,.0001f);
                }
            }
            if(!Matches||Existing!=Expected) {
                Clip->Notifies.RemoveAll([&](const FAnimNotifyEvent& Event){return Event.NotifyName.ToString().StartsWith(TEXT("Army transition "));});
                auto BlockEntry=[&](float Begin,float End,FName Label) {
                    if(End-Begin<Step)return;
                    auto& Event=Clip->Notifies.AddDefaulted_GetRef();Event.NotifyName=Marker;
                    Event.NotifyName=Label;
                    Event.NotifyStateClass=NewObject<UAnimNotifyState_PoseSearchBlockTransition>(Clip);
                    Event.Link(Clip,Begin);Event.SetDuration(End-Begin);Event.EndLink.Link(Clip,End);
                };
                BlockEntry(0,EntryBegin,TEXT("Army transition approach"));
                BlockEntry(EntryEnd,Duration,Marker);
                if(!Starting) {
                    auto& Event=Clip->Notifies.AddDefaulted_GetRef();Event.NotifyName=TEXT("Army transition stop event");
                    auto* Notify=NewObject<UAnimNotify_PoseSearchEvent>(Clip);Notify->EventTag=TAG_ArmyAnimationStop;
                    Event.Notify=Notify;Event.Link(Clip,MovementEnd);
                }
                Clip->RefreshCacheData();Clip->MarkPackageDirty();
            }
            UE_LOG(LogTemp,Display,TEXT("ARMY_TRANSITION_WINDOW %s movement=%.3f..%.3f entry=%.3f..%.3f"),*Clip->GetName(),MovementBegin,MovementEnd,EntryBegin,EntryEnd);
        }
        if(Path.Contains(TEXT("_turning"))) {
            // A late left-turn pose can resemble an early right turn while its
            // remaining trajectory is almost zero. Admit only the opening
            // support exchange; continuations remain available to the player.
            const float Step=1.f/60,Duration=Clip->GetPlayLength();float Begin=-1;
            for(float T=0;T<Duration-Step*.5f;T+=Step) {
                const auto Delta=Clip->ExtractRootMotionFromRange(T,FMath::Min(T+Step,Duration),FAnimExtractContext(T,true));
                if(FMath::Abs(Delta.Rotator().Yaw)/Step>5){Begin=T;break;}
            }
            if(Begin<0)return nullptr;
            const float EntryEnd=FMath::Min(Duration,Begin+.15f);
            const FName Marker(TEXT("Army turn continuation"));
            int Count=0;bool Matches=true;
            for(const auto& Event:Clip->Notifies)if(Event.NotifyName==Marker) {
                ++Count;Matches&=Event.NotifyStateClass&&Event.NotifyStateClass->IsA<UAnimNotifyState_PoseSearchBlockTransition>()&&
                    FMath::IsNearlyEqual(Event.GetTriggerTime(),EntryEnd,.0001f)&&FMath::IsNearlyEqual(Event.GetDuration(),Duration-EntryEnd,.0001f);
            }
            if(!Matches||Count!=1) {
                Clip->Notifies.RemoveAll([&](const FAnimNotifyEvent& E){return E.NotifyName==Marker;});
                auto& Event=Clip->Notifies.AddDefaulted_GetRef();Event.NotifyName=Marker;
                Event.NotifyStateClass=NewObject<UAnimNotifyState_PoseSearchBlockTransition>(Clip);
                Event.Link(Clip,EntryEnd);Event.SetDuration(Duration-EntryEnd);Event.EndLink.Link(Clip,Duration);
                Clip->RefreshCacheData();Clip->MarkPackageDirty();
            }
            UE_LOG(LogTemp,Display,TEXT("ARMY_TURN_ENTRY %s rotation_begin=%.3f entry_end=%.3f"),*Clip->GetName(),Begin,EntryEnd);
        }
        Database->AddAnimationAsset(Asset);
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
    const FName FootRoot(TEXT("VB FootRoot"));
    bool HasRoot=false;for(const auto& Bone:Skeleton->GetVirtualBones())HasRoot|=Bone.VirtualBoneName==FootRoot;
    if(!HasRoot&&!Skeleton->AddNewNamedVirtualBone(Root,Root,FootRoot))return false;
    for(const FString Side:{FString(TEXT("Left")),FString(TEXT("Right"))}) {
        const FName Target(*(Side+TEXT("Foot"))),Virtual(*(TEXT("VB FootTarget_")+Side));
        bool Exists=false,Correct=false;
        for(const auto& Bone:Skeleton->GetVirtualBones())if(Bone.VirtualBoneName==Virtual){Exists=true;Correct=Bone.SourceBoneName==FootRoot;}
        if(Exists&&!Correct)Skeleton->RemoveVirtualBones({Virtual});
        if(!Correct&&!Skeleton->AddNewNamedVirtualBone(FootRoot,Target,Virtual))return false;
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

TArray<int32> UGaspAuthoringLibrary::FemaleBeltPouchVertices(USkeletalMesh* Mesh) {
    TArray<int32> Result;
#if WITH_EDITOR
    if(!Mesh||Mesh->GetPathName()!=TEXT("/Game/Characters/GASP/Bodies/SK_Female_GASP.SK_Female_GASP"))return Result;
    const auto* Description=Mesh->GetMeshDescription(0);if(!Description)return Result;
    const FStaticMeshConstAttributes Attributes(*Description);
    const auto Positions=Attributes.GetVertexPositions();
    const auto Materials=Attributes.GetPolygonGroupMaterialSlotNames();
    TSet<int32> Selected;
    for(const FPolygonID Polygon:Description->Polygons().GetElementIDs()) {
        const FString Material=Materials[Description->GetPolygonPolygonGroup(Polygon)].ToString().ToLower();
        if(!Material.Contains(TEXT("olive"))||!Material.Contains(TEXT("webbing")))continue;
        for(const auto Instance:Description->GetPolygonVertexInstances(Polygon)) {
            const FVertexID Vertex=Description->GetVertexInstanceVertex(Instance);
            // Four disconnected pouch islands end at 108.4 cm. The chest straps
            // begin at 111.6 cm and retain their existing flexible skin weights.
            if(Positions[Vertex].Z>90&&Positions[Vertex].Z<110)Selected.Add(Vertex.GetValue());
        }
    }
    Result=Selected.Array();Result.Sort();
#endif
    return Result;
}

TArray<FVector> UGaspAuthoringLibrary::FemaleBeltPouchPositions(USkeletalMesh* Mesh) {
    TArray<FVector> Result;
#if WITH_EDITOR
    const auto Vertices=FemaleBeltPouchVertices(Mesh);
    if(Vertices.IsEmpty())return Result;
    const FStaticMeshConstAttributes Attributes(*Mesh->GetMeshDescription(0));
    for(int32 Vertex:Vertices)Result.Add(FVector(Attributes.GetVertexPositions()[FVertexID(Vertex)]));
#endif
    return Result;
}

TArray<FVector> UGaspAuthoringLibrary::StaticMeshPositions(UStaticMesh* Mesh) {
    TArray<FVector> Result;
#if WITH_EDITOR
    if(!Mesh)return Result;
    const FMeshDescription* Description=Mesh->GetMeshDescription(0);
    if(!Description)return Result;
    const FStaticMeshConstAttributes Attributes(*Description);
    for(const FVertexID Vertex:Description->Vertices().GetElementIDs())
        Result.Add(FVector(Attributes.GetVertexPositions()[Vertex]));
#endif
    return Result;
}

TArray<FVector> UGaspAuthoringLibrary::SkeletalMeshPositions(USkeletalMesh* Mesh,FName MaterialSlot) {
    TArray<FVector> Result;
#if WITH_EDITOR
    if(!Mesh)return Result;
    const FMeshDescription* Description=Mesh->GetMeshDescription(0);
    if(!Description)return Result;
    const FStaticMeshConstAttributes Attributes(*Description);
    TSet<FVertexID> Selected;
    if(MaterialSlot.IsNone()) {
        for(const FVertexID Vertex:Description->Vertices().GetElementIDs())Selected.Add(Vertex);
    } else {
        const auto Slots=Attributes.GetPolygonGroupMaterialSlotNames();
        for(const FPolygonID Polygon:Description->Polygons().GetElementIDs()) {
            if(Slots[Description->GetPolygonPolygonGroup(Polygon)]!=MaterialSlot)continue;
            for(const FVertexInstanceID Instance:Description->GetPolygonVertexInstances(Polygon))
                Selected.Add(Description->GetVertexInstanceVertex(Instance));
        }
    }
    for(const FVertexID Vertex:Selected)Result.Add(FVector(Attributes.GetVertexPositions()[Vertex]));
#endif
    return Result;
}

TMap<int32,FVector> UGaspAuthoringLibrary::SkeletalMeshVertexPositions(USkeletalMesh* Mesh) {
    TMap<int32,FVector> Result;
#if WITH_EDITOR
    if(!Mesh)return Result;
    const FMeshDescription* Description=Mesh->GetMeshDescription(0);
    if(!Description)return Result;
    const FStaticMeshConstAttributes Attributes(*Description);
    for(const FVertexID Vertex:Description->Vertices().GetElementIDs())
        Result.Add(Vertex.GetValue(),FVector(Attributes.GetVertexPositions()[Vertex]));
#endif
    return Result;
}

bool UGaspAuthoringLibrary::RepairMaleSleeveTriangle(USkeletalMesh* Mesh,const TArray<FVector>& Boundary) {
#if WITH_EDITOR
    if(!Mesh||Mesh->GetPathName()!=TEXT("/Game/Characters/GASP/Bodies/SK_Male_GASP.SK_Male_GASP")||Boundary.Num()!=3)return false;
    FMeshDescription* D=Mesh->GetMeshDescription(0);if(!D)return false;
    FStaticMeshAttributes A(*D);const auto Positions=A.GetVertexPositions();
    FVertexInstanceID Source[3];bool Found[3]={};int EdgeCounts[3]={};
    FPolygonGroupID Group;bool Reverse=false,HasExisting=false;FTriangleID Existing,Neighbor;
    for(const FTriangleID Tri:D->Triangles().GetElementIDs()) {
        const auto Instances=D->GetTriangleVertexInstances(Tri);int Corners[3]={-1,-1,-1};
        for(int J=0;J<3;++J)for(int K=0;K<3;++K)
            if(FVector::Distance(FVector(Positions[D->GetVertexInstanceVertex(Instances[J])]),Boundary[K])<.03)Corners[J]=K;
        if(Corners[0]>=0&&Corners[1]>=0&&Corners[2]>=0){Existing=Tri;HasExisting=true;continue;}
        for(int J=0;J<3;++J) {
            const int X=Corners[J],Y=Corners[(J+1)%3];if(X<0||Y<0||X==Y)continue;
            const int Edge=X+Y==1?0:X+Y==3?1:2;++EdgeCounts[Edge];
            if(Edge==0){Group=D->GetTrianglePolygonGroup(Tri);Reverse=X==0;Neighbor=Tri;}
            Source[X]=Instances[J];Source[Y]=Instances[(J+1)%3];Found[X]=Found[Y]=true;
        }
    }
    for(int J=0;J<3;++J)if(!Found[J]||EdgeCounts[J]!=1)return false;
    Mesh->Modify();TArray<FVertexInstanceID> NewInstances;
    auto Normals=A.GetVertexInstanceNormals(),Tangents=A.GetVertexInstanceTangents();
    auto Signs=A.GetVertexInstanceBinormalSigns();auto UVs=A.GetVertexInstanceUVs();auto Colors=A.GetVertexInstanceColors();
    for(int J=0;J<3;++J) {
        const int K=Reverse?2-J:J;const auto Old=Source[K];
        const auto New=HasExisting?D->GetTriangleVertexInstances(Existing)[J]:D->CreateVertexInstance(D->GetVertexInstanceVertex(Old));
        Normals[New]=Normals[Old];Tangents[New]=Tangents[Old];Signs[New]=Signs[Old];Colors[New]=Colors[Old];
        // This mesh uses isolated atlas islands. Interpolating three unrelated
        // corner UVs drew stripes across the patch; sample the adjacent cloth.
        for(int Channel=0;Channel<UVs.GetNumChannels();++Channel) {
            FVector2f ColorUV=FVector2f::ZeroVector;
            for(const auto Corner:D->GetTriangleVertexInstances(Neighbor))ColorUV+=UVs.Get(Corner,Channel)/3.f;
            UVs.Set(New,Channel,ColorUV);
        }
        NewInstances.Add(New);
    }
    if(!HasExisting)D->CreatePolygon(Group,NewInstances);
    if(!Mesh->CommitMeshDescription(0))return false;
    Mesh->Build();Mesh->MarkPackageDirty();return true;
#else
    return false;
#endif
}

bool UGaspAuthoringLibrary::FinalizeArticulatedPouchMaterial(UMaterial* Material) {
#if WITH_EDITOR
    if(!Material)return false;
    const FString Path=Material->GetPathName();
    if(Path!=TEXT("/Game/Characters/GASP/Equipment/M_WebbingArticulatedPouch.M_WebbingArticulatedPouch")&&
       Path!=TEXT("/Game/Characters/GASP/Equipment/M_maleatlasArticulatedPouch.M_maleatlasArticulatedPouch"))return false;
    if(Material->BlendMode!=BLEND_Masked)return false;
    // Duplicating an opaque palette preserves this cached optimization in 5.8.
    // It is not exposed to Python; an opacity expression alone cannot clear it.
    Material->Modify();Material->bCanMaskedBeAssumedOpaque=false;
    Material->PostEditChange();Material->MarkPackageDirty();
    return Material->GetBlendMode()==BLEND_Masked;
#else
    return false;
#endif
}

bool UGaspAuthoringLibrary::FinalizeHandlingFeedMaterial(UMaterial* Material) {
#if WITH_EDITOR
    if(!Material)return false;
    const FString Path=Material->GetPathName();
    if(Path!=TEXT("/Game/Characters/FemaleRifle/M_handlingbrass.M_handlingbrass")&&
       Path!=TEXT("/Game/Characters/FemaleRifle/M_handlingcyan.M_handlingcyan"))return false;
    if(Material->BlendMode!=BLEND_Masked)return false;
    UE_LOG(LogTemp,Display,TEXT("ARMY_FEED_MATERIAL %s assumed_opaque=%d effective_blend=%d"),
        *Path,int(Material->bCanMaskedBeAssumedOpaque),int(Material->GetBlendMode()));
    Material->Modify();Material->bCanMaskedBeAssumedOpaque=false;
    Material->PostEditChange();Material->MarkPackageDirty();
    return Material->GetBlendMode()==BLEND_Masked;
#else
    return false;
#endif
}

FVector UGaspAuthoringLibrary::RootMotionTranslation(UAnimSequence* Clip,float Start,float Duration) {
    if(!Clip)return FVector::ZeroVector;
    return Clip->ExtractRootMotionFromRange(Start,Start+Duration,FAnimExtractContext(Start,true)).GetTranslation();
}

UAnimSequence* UGaspAuthoringLibrary::CreateCombatCrouch(UAnimSequence* Source,float MinimumHipHeight,const FString& Path) {
#if WITH_EDITOR
    if(!Source||!Path.StartsWith(TEXT("/Game/Characters/GASP/CombatCrouch/"))||MinimumHipHeight<40||MinimumHipHeight>85)return nullptr;
    const auto& Ref=Source->GetSkeleton()->GetReferenceSkeleton();
    const int Count=Ref.GetRawBoneNum(),Hip=Ref.FindBoneIndex(TEXT("Hips"));
    const TArray<FName> EditedNames={TEXT("Hips"),TEXT("LeftUpLeg"),TEXT("LeftLeg"),TEXT("LeftFoot"),TEXT("RightUpLeg"),TEXT("RightLeg"),TEXT("RightFoot")};
    TArray<int> Edited;for(FName Bone:EditedNames){const int Index=Ref.FindBoneIndex(Bone);if(Index<0)return nullptr;Edited.Add(Index);}
    const auto* Model=Source->GetDataModel();TArray<FName> Tracks;Model->GetBoneTrackNames(Tracks);
    TArray<int> Indices;for(FName Name:Tracks)Indices.Add(Ref.FindBoneIndex(Name));
    TArray<TArray<FTransform>> Keys;Keys.SetNum(Edited.Num());
    for(int Frame=0;Frame<=Model->GetNumberOfFrames();++Frame) {
        TArray<FTransform> Local=Ref.GetRefBonePose(),CS,TrackPose;CS.SetNum(Count);
        Model->GetBoneTracksTransform(Tracks,FFrameNumber(Frame),TrackPose);
        for(int I=0;I<Tracks.Num();++I)if(Indices[I]>=0&&Indices[I]<Count)Local[Indices[I]]=TrackPose[I];
        auto Rebuild=[&](){for(int I=0;I<Count;++I){const int Parent=Ref.GetParentIndex(I);CS[I]=Parent>=0?Local[I]*CS[Parent]:Local[I];}};
        Rebuild();
        const FTransform Feet[]={CS[Edited[3]],CS[Edited[6]]};
        const FVector Knees[]={CS[Edited[2]].GetLocation(),CS[Edited[5]].GetLocation()};
        auto Pelvis=CS[Hip];const float Height=float(Pelvis.GetLocation().Z-CS[0].GetLocation().Z);
        // Smooth minimum: keep the moving source's height variation while
        // replacing its deep kneeling rest with a combat crouch. This is baked
        // into a duplicate clip, so pose search sees the same edited performance.
        const float Difference=Height-MinimumHipHeight;
        const float Lift=.5f*(-Difference+FMath::Sqrt(Difference*Difference+16.f));
        Pelvis.AddToTranslation(FVector(0,0,Lift));Local[Hip]=Pelvis.GetRelativeTransform(CS[Ref.GetParentIndex(Hip)]);Rebuild();
        for(int Side=0;Side<2;++Side) {
            const int U=Edited[1+Side*3],L=Edited[2+Side*3],F=Edited[3+Side*3];
            auto Upper=CS[U],Lower=CS[L],Foot=CS[F];
            AnimationCore::SolveTwoBoneIK(Upper,Lower,Foot,Knees[Side],Feet[Side].GetLocation(),false,1.,1.);
            Foot.SetRotation(Feet[Side].GetRotation());
            if(FVector::Distance(Foot.GetLocation(),Feet[Side].GetLocation())>.1)return nullptr;
            Local[U]=Upper.GetRelativeTransform(CS[Ref.GetParentIndex(U)]);
            Local[L]=Lower.GetRelativeTransform(Upper);Local[F]=Foot.GetRelativeTransform(Lower);
        }
        for(int I=0;I<Edited.Num();++I)Keys[I].Add(Local[Edited[I]]);
    }
    const FString Name=FPackageName::GetLongPackageAssetName(Path);
    auto* Clip=LoadObject<UAnimSequence>(nullptr,*(Path+TEXT(".")+Name),nullptr,LOAD_NoWarn);
    if(!Clip){Clip=DuplicateObject<UAnimSequence>(Source,CreatePackage(*Path),*Name);FAssetRegistryModule::AssetCreated(Clip);}
    auto& Controller=Clip->GetController();Controller.OpenBracket(FText::FromString(TEXT("Author combat crouch height and planted legs")),false);
    for(int I=0;I<Edited.Num();++I) {
        TArray<FVector3f> Positions,Scales;TArray<FQuat4f> Rotations;
        for(const auto& Key:Keys[I]){Positions.Add(FVector3f(Key.GetLocation()));Rotations.Add(FQuat4f(Key.GetRotation()));Scales.Add(FVector3f(Key.GetScale3D()));}
        if(!Tracks.Contains(EditedNames[I]))Controller.AddBoneCurve(EditedNames[I],false);
        if(!Controller.SetBoneTrackKeys(EditedNames[I],Positions,Rotations,Scales,false)){Controller.CloseBracket(false);return nullptr;}
    }
    Controller.NotifyPopulated();Controller.CloseBracket(false);Clip->RefreshCacheData();Clip->MarkPackageDirty();return Clip;
#else
    return nullptr;
#endif
}
