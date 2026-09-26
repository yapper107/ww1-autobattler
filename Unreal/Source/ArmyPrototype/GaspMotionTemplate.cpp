#include "GaspAuthoringLibrary.h"
#if WITH_EDITOR
#include "Animation/AnimBlueprint.h"
#include "Factories/AnimBlueprintFactory.h"
#include "AnimGraphNode_Root.h"
#include "AnimGraphNode_MotionMatching.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/PoseSearchSchema.h"
#include "EdGraph/EdGraph.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "UObject/UnrealType.h"
#endif

UAnimBlueprint* UGaspAuthoringLibrary::CreateMotionNodeTemplate(UPoseSearchDatabase* Database) {
#if WITH_EDITOR
    if(!Database||!Database->Schema)return nullptr;
    const TCHAR* Path=TEXT("/Game/Characters/GASP/Runtime/ABP_MotionNodeTemplate");
    auto* Blueprint=LoadObject<UAnimBlueprint>(nullptr,Path);
    if(!Blueprint) {
        auto* Factory=NewObject<UAnimBlueprintFactory>();
        Factory->TargetSkeleton=Database->Schema->GetSkeleton(UE::PoseSearch::DefaultRole);
        Blueprint=Cast<UAnimBlueprint>(Factory->FactoryCreateNew(UAnimBlueprint::StaticClass(),CreatePackage(Path),TEXT("ABP_MotionNodeTemplate"),RF_Public|RF_Standalone,nullptr,GWarn));
        if(!Blueprint)return nullptr;
        FAssetRegistryModule::AssetCreated(Blueprint);
    }
    UEdGraph* Graph=nullptr;UAnimGraphNode_Root* Root=nullptr;
    for(auto Candidate:Blueprint->FunctionGraphs)for(auto Node:Candidate->Nodes)
        if(auto* R=Cast<UAnimGraphNode_Root>(Node)){Graph=Candidate;Root=R;break;}
    if(!Graph||!Root)return nullptr;
    UAnimGraphNode_MotionMatching* Node=nullptr;
    for(auto Existing:Graph->Nodes)if(auto* M=Cast<UAnimGraphNode_MotionMatching>(Existing)){Node=M;break;}
    if(!Node){FGraphNodeCreator<UAnimGraphNode_MotionMatching> Creator(*Graph);Node=Creator.CreateNode();Creator.Finalize();}
    auto* NodeProperty=FindFProperty<FStructProperty>(Node->GetClass(),TEXT("Node"));
    auto* Motion=NodeProperty->ContainerPtrToValuePtr<FAnimNode_MotionMatching>(Node);
    Motion->SetMaxActiveBlends(16);
    FindFProperty<FFloatProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("BlendTime"))->SetPropertyValue_InContainer(Motion,.3f);
    auto* Blend=FindFProperty<FEnumProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("BlendOption"));
    check(Blend);Blend->GetUnderlyingProperty()->SetIntPropertyValue(Blend->ContainerPtrToValuePtr<void>(Motion),int64(EAlphaBlendOption::HermiteCubic));
    FindFProperty<FObjectProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("Database"))->SetObjectPropertyValue_InContainer(Motion,Database);
    *FindFProperty<FStructProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("PlayRate"))->ContainerPtrToValuePtr<FFloatInterval>(Motion)=FFloatInterval(.65f,1.2f);
    // No graph inputs/functions: all folded settings must be class constants.
    // Runtime instances copy the compiled node, then supply database/trajectory.
    auto* Output=Node->FindPin(TEXT("Pose"));auto* Input=Root->FindPin(TEXT("Result"));
    if(!Output||!Input||!Graph->GetSchema()->TryCreateConnection(Output,Input))return nullptr;
    FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
    FKismetEditorUtilities::CompileBlueprint(Blueprint);
    if(Blueprint->Status==BS_Error)return nullptr;
    Blueprint->MarkPackageDirty();return Blueprint;
#else
    return nullptr;
#endif
}
