#include "SoldierMotionInstance.h"
#include "SoldierRootOffset.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimNodeSpaceConversions.h"
#include "BoneControllers/AnimNode_FootPlacement.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "BoneControllers/AnimNode_StrideWarping.h"
#include "BoneControllers/AnimNode_OrientationWarping.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "UObject/UnrealType.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "PoseSearch/PoseSearchDatabase.h"
#include "PoseSearch/AnimNode_MotionMatching.h"
#include "PoseSearch/AnimNode_PoseSearchHistoryCollector.h"
#include "SoldierMotionEvents.h"
UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_ArmyAnimationStop,"Army.Animation.Stop","Measured end of source root travel for a planted stop");

class FArmyMotionProxy final:public FAnimInstanceProxy {
public:
    FAnimNode_MotionMatching Motion;
    FArmyRootOffset RootOffset;
    FAnimNode_PoseSearchHistoryCollector History;
    FAnimNode_ConvertLocalToComponentSpace ToComponent;
    FAnimNode_FootPlacement Feet;
    FAnimNode_StrideWarping Stride;
    FAnimNode_OrientationWarping Orientation;
    FAnimNode_TwoBoneIK LeftLeg,RightLeg;
    FAnimNode_ConvertComponentToLocalSpace ToLocal;
    UPoseSearchDatabase* LastDatabase=nullptr;
    int32 WarpMask=7;
    FVector LastTravelDirection=FVector::ZeroVector;
    float TravelWarpWeight=0;
    bool StopEventWasActive=false;
    float StopEventSourceTime=-1;
    int32 TimedStopSearches=0;
    FArmyMotionProxy(UAnimInstance* Instance):FAnimInstanceProxy(Instance) {
        FParse::Value(FCommandLine::Get(),TEXT("ArmyMotionWarpMask="),WarpMask);
        if(auto* A=Cast<USoldierMotionInstance>(Instance);A&&A->MotionTemplateClass) {
            for(TFieldIterator<FStructProperty> It(A->MotionTemplateClass);It;++It)
                if(It->Struct==FAnimNode_MotionMatching::StaticStruct()) {
                    Motion=*It->ContainerPtrToValuePtr<FAnimNode_MotionMatching>(A->MotionTemplateClass->GetDefaultObject());
                    break;
                }
        }
        Motion.SetMaxActiveBlends(16);
        FindFProperty<FFloatProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("BlendTime"))->SetPropertyValue_InContainer(&Motion,.3f);
        auto* Blend=FindFProperty<FEnumProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("BlendOption"));
        check(Blend);Blend->GetUnderlyingProperty()->SetIntPropertyValue(Blend->ContainerPtrToValuePtr<void>(&Motion),int64(EAlphaBlendOption::HermiteCubic));
        // Native standalone nodes lack a public setter for this reflected field.
        // Keep playback correction bounded; the simulation still supplies speed.
        auto* Rate=FindFProperty<FStructProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("PlayRate"));
        check(Rate);*Rate->ContainerPtrToValuePtr<FFloatInterval>(&Motion)=FFloatInterval(.65f,1.2f);
        RootOffset.Source.SetLinkNode(&Motion);History.Source.SetLinkNode(&RootOffset);History.PoseCount=8;History.SamplingInterval=1.f/30;
        for(const FName Name:{FName(TEXT("Hips")),FName(TEXT("LeftFoot")),FName(TEXT("RightFoot"))}) {
            FBoneReference Bone;Bone.BoneName=Name;History.CollectedBones.Add(Bone);
        }
        ToComponent.LocalPose.SetLinkNode(&History);Orientation.ComponentPose.SetLinkNode(&ToComponent);Stride.ComponentPose.SetLinkNode(&Orientation);Feet.ComponentPose.SetLinkNode(&Stride);
        LeftLeg.ComponentPose.SetLinkNode(&Feet);RightLeg.ComponentPose.SetLinkNode(&LeftLeg);ToLocal.ComponentPose.SetLinkNode(&RightLeg);
        Feet.PelvisBone.BoneName=TEXT("Hips");
        Stride.Mode=EWarpingEvaluationMode::Graph;Stride.PelvisBone.BoneName=TEXT("Hips");
        // During an idle-to-moving blend the extracted root speed begins near
        // zero. An unbounded speed ratio stretches the first step into a split.
        Stride.StrideScaleModifier.bClampResult=true;
        Stride.StrideScaleModifier.ClampMin=.5f;Stride.StrideScaleModifier.ClampMax=1.2f;
        Stride.StrideScaleModifier.bInterpResult=true;
        Stride.StrideScaleModifier.InterpSpeedIncreasing=Stride.StrideScaleModifier.InterpSpeedDecreasing=8.f;
        Orientation.Mode=EWarpingEvaluationMode::Graph;Orientation.TargetTime=0;
        // A motion-matching switch can reverse the extracted delta even while
        // the blended pose is continuous. Counter compensation applies that
        // direction jump immediately; it is not an authored pivot of this body.
        Orientation.bCounterCompenstateInterpolationByRootMotion=false;
        Orientation.MaxCorrectionDegrees=45.f;
        for(const FName Name:{FName(TEXT("Spine")),FName(TEXT("Spine1")),FName(TEXT("Spine2"))}){FBoneReference B;B.BoneName=Name;Orientation.SpineBones.Add(B);}
        // Orientation warping rotates this branch independently of the body.
        // Using the weighted skeleton root here rotates the body twice and
        // invalidates the spine counter-rotation and cached contact targets.
        Feet.IKFootRootBone.BoneName=Stride.IKFootRootBone.BoneName=Orientation.IKFootRootBone.BoneName=TEXT("VB FootRoot");
        Feet.PlantSpeedMode=EWarpingEvaluationMode::Graph;
        Feet.TraceSettings.StartOffset=-40;Feet.TraceSettings.EndOffset=60;Feet.TraceSettings.MaxGroundPenetration=.5f;
        for(int I=0;I<2;++I) {
            const FString Side=I==0?TEXT("Left"):TEXT("Right");
            FFootPlacemenLegDefinition Leg;Leg.FKFootBone.BoneName=*(Side+TEXT("Foot"));
            Leg.IKFootBone.BoneName=*(TEXT("VB FootTarget_")+Side);Leg.BallBone.BoneName=*(Side+TEXT("ToeBase"));Feet.LegDefinitions.Add(Leg);
            FStrideWarpingFootDefinition Warp;Warp.FKFootBone=Leg.FKFootBone;Warp.IKFootBone=Leg.IKFootBone;Warp.ThighBone.BoneName=*(Side+TEXT("UpLeg"));Stride.FootDefinitions.Add(Warp);
            Orientation.IKFootBones.Add(Leg.IKFootBone);
            auto& IK=I==0?LeftLeg:RightLeg;IK.IKBone=Leg.FKFootBone;
            IK.EffectorLocationSpace=BCS_BoneSpace;IK.EffectorTarget.BoneReference=Leg.IKFootBone;
            // Preserve the source knee plane while placing the foot. A fixed
            // forward pole twists sideways and backward crouch steps.
            IK.JointTargetLocationSpace=BCS_BoneSpace;
            IK.JointTarget.BoneReference.BoneName=*(Side+TEXT("Leg"));
            IK.JointTargetLocation=FVector::ZeroVector;
            IK.bTakeRotationFromEffectorSpace=true;IK.bAllowStretching=false;
        }
    }
    virtual FAnimNode_Base* GetCustomRootNode() override{return &ToLocal;}
    virtual void GetCustomNodes(TArray<FAnimNode_Base*>& Out) override {Out.Append({&Motion,&RootOffset,&History,&ToComponent,&Orientation,&Stride,&Feet,&LeftLeg,&RightLeg,&ToLocal});}
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        const auto* A=CastChecked<USoldierMotionInstance>(Instance);
        // Native timed-event search aligns the source's stopping footfall with
        // the recorded trajectory's stop. Without it a similar pose could
        // finish braking while the battle actor was still travelling.
        FPoseSearchEvent StopEvent;
        if(A->StopSeconds>.025f&&A->LocomotionSpeed>5) {
            StopEvent.EventTag=TAG_ArmyAnimationStop;StopEvent.TimeToEvent=A->StopSeconds;
            // Standing stops include a flight phase; do not suspend it in
            // slow motion. Crouch retains its planted-step event range: the
            // tighter bound changed its support choice to a crossed-foot stop.
            StopEvent.PlayRateRangeOverride=A->Crouching?FFloatInterval(.35f,1.5f):FFloatInterval(.65f,1.2f);
        }
        *FindFProperty<FStructProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("EventToSearch"))->ContainerPtrToValuePtr<FPoseSearchEvent>(&Motion)=StopEvent;
        History.TransformTrajectory=A->Trajectory;
        LeftLeg.Alpha=RightLeg.Alpha=A->ContactsEnabled&&WarpMask?1.f:0.f;
        Feet.Alpha=A->ContactsEnabled&&(WarpMask&4)?1.f:0.f;
        // Root-motion direction/velocity become ill-conditioned as a stop
        // settles. Release travel warping continuously while retaining ground
        // contacts, rather than steering planted feet with near-zero deltas.
        const float TravelTarget=FMath::SmoothStep(5.f,35.f,A->LocomotionSpeed);
        // Speed can cross the entire release interval in a single braking
        // frame. A smooth function of speed alone then unwinds the planted
        // lower body instantly. Filter in animation time, including release.
        TravelWarpWeight=Dt>0?FMath::Lerp(TravelWarpWeight,TravelTarget,1.f-FMath::Exp(-Dt/.12f)):TravelTarget;
        const float TravelWarp=TravelWarpWeight;
        if(A->LocomotionSpeed>1.f)LastTravelDirection=A->LocomotionVelocity;
        Stride.Alpha=A->ContactsEnabled&&(WarpMask&2)?TravelWarp:0.f;Stride.LocomotionSpeed=A->LocomotionSpeed;
        Orientation.Alpha=A->ContactsEnabled&&(WarpMask&1)?TravelWarp:0.f;Orientation.LocomotionDirection=LastTravelDirection;
        // Finish the selected braking footfall while the trajectory still asks
        // for a stop. Repeated left/right stop searches changed support feet in
        // the middle of planting. A new movement or stance releases this hold.
        const auto& Selected=Motion.GetMotionMatchingState().SearchResult;
        const auto* Sequence=Cast<UAnimSequence>(Selected.SelectedAnim);
        const bool TimedStop=StopEvent.EventTag.IsValid();
        const bool BeginTimedStop=TimedStop&&!StopEventWasActive;
        const bool FinishStop=(A->CanFinishStop||TimedStop)&&!BeginTimedStop&&Sequence&&Sequence->GetName().Contains(TEXT("_Stop_"))&&
            Sequence->GetName().Contains(TEXT("_Crouch_"))==A->Crouching&&
            Selected.SelectedTime<Sequence->GetPlayLength()-.2f;
        // Pose similarity repeatedly restarted the first fraction of nearby
        // 45/90-degree turns. Let the selected support exchange complete while
        // stationary; translation, stance change or opposite intent releases it.
        const bool FinishTurn=A->CanFinishTurn&&Sequence&&
            (Sequence->GetName().Contains(TEXT("_Stand_Turn_"))||Sequence->GetName().Contains(TEXT("_Crouch_Idle_Turn_")))&&
            Sequence->GetName().Contains(TEXT("_Crouch_"))==A->Crouching&&
            Selected.SelectedTime<Sequence->GetPlayLength()-.2f&&
            (FMath::IsNearlyZero(A->TurnYaw)||(A->TurnYaw>0)==Sequence->GetName().EndsWith(TEXT("_R")));
        StopEventSourceTime=-1;
        auto* Rate=FindFProperty<FStructProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("PlayRate"))->ContainerPtrToValuePtr<FFloatInterval>(&Motion);
        *Rate=FFloatInterval(.65f,1.2f);
        if(FinishStop&&TimedStop) {
            for(const auto& Notify:Sequence->Notifies)if(Notify.NotifyName==TEXT("Army transition stop event")) {
                StopEventSourceTime=Notify.GetTriggerTime();break;
            }
            if(StopEventSourceTime>Selected.SelectedTime) {
                // UE5.8's Blueprint result does not retain EventPoseIdx when
                // rebuilding the continuing search result. Preserve its timed
                // playback explicitly after the initial native event search.
                const float MatchedRate=FMath::Clamp((StopEventSourceTime-Selected.SelectedTime)/A->StopSeconds,A->Crouching?.2f:.65f,A->Crouching?1.5f:1.2f);
                *Rate=FFloatInterval(MatchedRate,MatchedRate);
            }
        }
        // A long crossfade erases most of the opening turn step. Locomotion
        // keeps its existing blend; in-place support changes enter promptly.
        FindFProperty<FFloatProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("BlendTime"))->SetPropertyValue_InContainer(&Motion,A->CanFinishTurn&&FMath::Abs(A->TurnYaw)>5?.2f:.3f);
        const bool FinishTransition=FinishStop||FinishTurn;
        FindFProperty<FBoolProperty>(FAnimNode_MotionMatching::StaticStruct(),TEXT("bShouldSearch"))->SetPropertyValue_InContainer(&Motion,!FinishTransition);
        auto* Database=FinishTransition&&LastDatabase?LastDatabase:A->Database.Get();
        Motion.SetDatabaseToSearch(Database,BeginTimedStop?EPoseSearchInterruptMode::ForceInterrupt:Database==LastDatabase?EPoseSearchInterruptMode::DoNotInterrupt:EPoseSearchInterruptMode::InterruptOnDatabaseChange);
        if(BeginTimedStop)++TimedStopSearches;
        StopEventWasActive=TimedStop;
        LastDatabase=Database;
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
    Text=FString::Printf(TEXT("stop_in=%.3f timed_stop=%d source_stop=%.3f event_searches=%d rate=%.3f\n"),StopSeconds,int(Proxy.StopEventWasActive),Proxy.StopEventSourceTime,Proxy.TimedStopSearches,Result.WantedPlayRate)+Text;
    for(float V:Query)Text+=FString::Printf(TEXT("%.3f "),V);
    Text+=TEXT("\npose=");for(float V:Values)Text+=FString::Printf(TEXT("%.3f "),V);
    Text+=TEXT("\nweights=");for(float V:Result.SelectedDatabase->GetSearchIndex().WeightsSqrt)Text+=FString::Printf(TEXT("%.4f "),V);
    return Text+FString::Printf(TEXT("\nroot_delta_cm=%.4f root_offset=%s\n"),Proxy.RootOffset.DeltaCentimetres,*Proxy.RootOffset.WorldRoot.GetRelativeTransform(Proxy.GetComponentTransform()).ToString());
}
