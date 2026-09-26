#include "SoldierMotionInstance.h"
#include "SoldierRootOffset.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimNodeSpaceConversions.h"
#include "BoneControllers/AnimNode_FootPlacement.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "UObject/UnrealType.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/AnimNode_MotionMatching.h"
#include "PoseSearch/AnimNode_PoseSearchHistoryCollector.h"

class FArmyMotionProxy final:public FAnimInstanceProxy {
public:
    FAnimNode_MotionMatching Motion;
    FArmyRootOffset RootOffset;
    FAnimNode_PoseSearchHistoryCollector History;
    FAnimNode_ConvertLocalToComponentSpace ToComponent;
    FAnimNode_FootPlacement Feet;
    FAnimNode_TwoBoneIK LeftLeg,RightLeg;
    FAnimNode_ConvertComponentToLocalSpace ToLocal;
    UPoseSearchDatabase* LastDatabase=nullptr;
    FArmyMotionProxy(UAnimInstance* Instance):FAnimInstanceProxy(Instance) {
        if(auto* A=Cast<USoldierMotionInstance>(Instance);A&&A->MotionTemplateClass) {
            for(TFieldIterator<FStructProperty> It(A->MotionTemplateClass);It;++It)
                if(It->Struct==FAnimNode_MotionMatching::StaticStruct()) {
                    Motion=*It->ContainerPtrToValuePtr<FAnimNode_MotionMatching>(A->MotionTemplateClass->GetDefaultObject());
                    break;
                }
        }
        Motion.SetMaxActiveBlends(16);
        // Native standalone nodes lack a public setter for this reflected field.
        // Keep playback correction bounded; the simulation still supplies speed.
        auto* Rate=FindFProperty<FStructProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("PlayRate"));
        check(Rate);*Rate->ContainerPtrToValuePtr<FFloatInterval>(&Motion)=FFloatInterval(.8f,1.2f);
        RootOffset.Source.SetLinkNode(&Motion);History.Source.SetLinkNode(&RootOffset);History.PoseCount=8;History.SamplingInterval=1.f/30;
        for(const FName Name:{FName(TEXT("Hips")),FName(TEXT("LeftFoot")),FName(TEXT("RightFoot"))}) {
            FBoneReference Bone;Bone.BoneName=Name;History.CollectedBones.Add(Bone);
        }
        ToComponent.LocalPose.SetLinkNode(&History);Feet.ComponentPose.SetLinkNode(&ToComponent);
        LeftLeg.ComponentPose.SetLinkNode(&Feet);RightLeg.ComponentPose.SetLinkNode(&LeftLeg);ToLocal.ComponentPose.SetLinkNode(&RightLeg);
        Feet.PelvisBone.BoneName=TEXT("Hips");
        if(const auto* Component=Cast<USkeletalMeshComponent>(Instance->GetOuter()))
            if(const auto* Mesh=Component->GetSkeletalMeshAsset())Feet.IKFootRootBone.BoneName=Mesh->GetRefSkeleton().GetBoneName(0);
        Feet.PlantSpeedMode=EWarpingEvaluationMode::Graph;
        Feet.TraceSettings.StartOffset=-40;Feet.TraceSettings.EndOffset=60;Feet.TraceSettings.MaxGroundPenetration=.5f;
        for(int I=0;I<2;++I) {
            const FString Side=I==0?TEXT("Left"):TEXT("Right");
            FFootPlacemenLegDefinition Leg;Leg.FKFootBone.BoneName=*(Side+TEXT("Foot"));
            Leg.IKFootBone.BoneName=*(TEXT("VB FootTarget_")+Side);Leg.BallBone.BoneName=*(Side+TEXT("ToeBase"));Feet.LegDefinitions.Add(Leg);
            auto& IK=I==0?LeftLeg:RightLeg;IK.IKBone=Leg.FKFootBone;
            IK.EffectorLocationSpace=BCS_BoneSpace;IK.EffectorTarget.BoneReference=Leg.IKFootBone;
            IK.JointTargetLocationSpace=BCS_ComponentSpace;IK.JointTargetLocation=FVector(I==0?25:-25,150,50);
            IK.bTakeRotationFromEffectorSpace=true;IK.bAllowStretching=false;
        }
    }
    virtual FAnimNode_Base* GetCustomRootNode() override{return &ToLocal;}
    virtual void GetCustomNodes(TArray<FAnimNode_Base*>& Out) override {Out.Append({&Motion,&RootOffset,&History,&ToComponent,&Feet,&LeftLeg,&RightLeg,&ToLocal});}
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        const auto* A=CastChecked<USoldierMotionInstance>(Instance);
        History.TransformTrajectory=A->Trajectory;
        Feet.Alpha=LeftLeg.Alpha=RightLeg.Alpha=A->ContactsEnabled?1.f:0.f;
        Motion.SetDatabaseToSearch(A->Database,A->Database==LastDatabase?EPoseSearchInterruptMode::DoNotInterrupt:EPoseSearchInterruptMode::InterruptOnDatabaseChange);
        LastDatabase=A->Database;
    }
};
USoldierMotionInstance::USoldierMotionInstance(){bUseMultiThreadedAnimationUpdate=false;SetRootMotionMode(ERootMotionMode::IgnoreRootMotion);}
FAnimInstanceProxy* USoldierMotionInstance::CreateAnimInstanceProxy(){
    if(Cast<USkeletalMeshComponent>(GetOuter())) {
        MotionTemplateClass=LoadClass<UAnimInstance>(nullptr,TEXT("/Game/Characters/GASP/Runtime/ABP_MotionNodeTemplate.ABP_MotionNodeTemplate_C"));
#if !WITH_EDITOR
        checkf(MotionTemplateClass,TEXT("Missing compiled motion node template. Run GASP --runtime before cooking."));
#endif
    }
    return new FArmyMotionProxy(this);
}
void USoldierMotionInstance::DestroyAnimInstanceProxy(FAnimInstanceProxy* Proxy){delete Proxy;}
bool USoldierMotionInstance::ReadDecision(TArray<FArmyPoseSample>& Out) const {
    const auto& Proxy=GetProxyOnGameThread<FArmyMotionProxy>();
    Out.Reset();float Remaining=1;
    const auto& Players=Proxy.Motion.AnimPlayers;
    // Reconstruct the native stack in the same oldest-to-newest blend order.
    for(int32 I=0;I<Players.Num();++I) {
        const auto& Player=Players[I];
        const float Alpha=I==Players.Num()-1?1.f:Player.GetBlendInWeight();
        const float Weight=Remaining*Alpha;Remaining*=1-Alpha;
        if(Weight<.000001f)continue;
        auto* Clip=Cast<UAnimSequence>(Player.GetAnimationAsset());
        // Never silently discard a stored overflow pose, per-bone profile or mirror.
        if(!Clip||Player.GetMirror()||Player.GetBlendInWeightsNum()>0)return false;
        FArmyPoseSample Sample;Sample.Sequence=Clip;Sample.Weight=Weight;Sample.Time=Player.GetCurrentAssetTime();
        Sample.PlayRate=Player.GetPlayRate();Sample.Looping=Player.IsLooping();Sample.ExtractRoot=true;
        Out.Insert(Sample,0);
    }
    return !Out.IsEmpty();
}

#include "PoseSearch/PoseSearchSchema.h"
#include "PoseSearch/PoseSearchContext.h"
#include "PoseSearch/PoseSearchIndex.h"
#include "IObjectChooser.h"
FString USoldierMotionInstance::DescribeQuery() const {
    using namespace UE::PoseSearch;
    FMemMark Mark(FMemStack::Get());
    const auto& Proxy=GetProxyOnGameThread<FArmyMotionProxy>();
    const auto& Result=Proxy.Motion.GetMotionMatchingState().SearchResult;
    if(!Result.SelectedDatabase)return TEXT("No database");
    FSearchContext Search(0,FFloatInterval(0,0),FPoseSearchEvent());
    FChooserEvaluationContext Context(const_cast<USoldierMotionInstance*>(this));
    Search.AddRole(DefaultRole,&Context,Proxy.History.GetPoseHistoryPtr());
    const auto Query=Search.GetOrBuildQuery(Result.SelectedDatabase->Schema);
    FSearchResult Selected;Selected.InitFrom(Result);TArray<float> Buffer;
    const auto Values=Result.SelectedDatabase->GetSearchIndex().GetPoseValuesSafe(Selected.PoseIdx,Buffer);
    FString Text=FString::Printf(TEXT("asset=%s time=%.3f cost=%g dims=%d estimated=%s\nquery="),*GetNameSafe(Result.SelectedAnim),Result.SelectedTime,Result.SearchCost,Query.Num(),*Proxy.Motion.GetEstimatedFutureRootMotionVelocity().ToString());
    for(float V:Query)Text+=FString::Printf(TEXT("%.3f "),V);
    Text+=TEXT("\npose=");for(float V:Values)Text+=FString::Printf(TEXT("%.3f "),V);
    Text+=TEXT("\nweights=");for(float V:Result.SelectedDatabase->GetSearchIndex().WeightsSqrt)Text+=FString::Printf(TEXT("%.4f "),V);
    return Text+FString::Printf(TEXT("\nroot_delta_cm=%.4f root_offset=%s\n"),Proxy.RootOffset.DeltaCentimetres,*Proxy.RootOffset.WorldRoot.GetRelativeTransform(Proxy.GetComponentTransform()).ToString());
}
