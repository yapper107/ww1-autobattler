#include "SoldierAnimInstance.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimationPoseData.h"
#include "AnimationRuntime.h"
#include "TwoBoneIK.h"

class FArmyAnimProxy final : public FAnimInstanceProxy {
public:
    FArmyAnimProxy(UAnimInstance* Instance):FAnimInstanceProxy(Instance){}
    TArray<FArmyPoseSample> Samples;
    float Grip=1;
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        auto* A=CastChecked<USoldierAnimInstance>(Instance);Samples=A->Samples;Grip=A->GripAlpha;
    }
    virtual bool Evaluate(FPoseContext& Output) override {
        Output.ResetToRefPose();
        float Total=0;
        for(const auto& S:Samples)if(S.Sequence&&S.Weight>.00001f) {
            FPoseContext P(this);P.ResetToRefPose();FAnimationPoseData Data(P);
            S.Sequence->GetAnimationPose(Data,FAnimExtractContext(S.Time,false));
            if(Total==0){Output.Pose.CopyBonesFrom(P.Pose);Output.Curve=P.Curve;Output.CustomAttributes=P.CustomAttributes;}
            else {FPoseContext Previous(Output);Previous.Pose.CopyBonesFrom(Output.Pose);Previous.Curve=Output.Curve;Previous.CustomAttributes=Output.CustomAttributes;
                const FAnimationPoseData A(Previous),B(P);FAnimationPoseData Dest(Output);
                FAnimationRuntime::BlendTwoPosesTogether(A,B,Total/(Total+S.Weight),Dest);}
            Total+=S.Weight;
        }
        if(Grip>0) {
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto index=[&](const FString& Name){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(Name))));};
            for(const FString Side:{FString(TEXT("Left")),FString(TEXT("Right"))}) {
                const auto Upper=index(TEXT("")+Side+TEXT("Arm"));
                const auto Lower=index(TEXT("")+Side+TEXT("ForeArm"));
                const auto Hand=index(TEXT("")+Side+TEXT("Hand"));
                const auto Target=index(Side==TEXT("Left")?TEXT("WeaponGrip_L"):TEXT("WeaponGrip_R"));
                if(Upper.GetInt()<0||Lower.GetInt()<0||Hand.GetInt()<0||Target.GetInt()<0)continue;
                FTransform U=CS.GetComponentSpaceTransform(Upper),L=CS.GetComponentSpaceTransform(Lower),H=CS.GetComponentSpaceTransform(Hand);
                const FTransform T=CS.GetComponentSpaceTransform(Target),OldU=U,OldL=L,OldH=H;
                // Preserve the authored elbow side. No stretching: unreachable targets are reported.
                const FVector Pole=L.GetLocation()+(L.GetLocation()-(U.GetLocation()+H.GetLocation())*.5)*3;
                AnimationCore::SolveTwoBoneIK(U,L,H,Pole,T.GetLocation(),false,1.,1.);
                H.SetRotation(T.GetRotation());
                if(Grip<1){U.Blend(OldU,U,Grip);L.Blend(OldL,L,Grip);H.Blend(OldH,H,Grip);}
                TArray<FBoneTransform> Edits;Edits.Emplace(Upper,U);Edits.Emplace(Lower,L);Edits.Emplace(Hand,H);
                CS.SafeSetCSBoneTransforms(Edits);
            }
            for(auto I:Output.Pose.ForEachBoneIndex())Output.Pose[I]=CS.GetLocalSpaceTransform(I);
            Output.Pose.NormalizeRotations();
        }
        return true;
    }

};
USoldierAnimInstance::USoldierAnimInstance(){bUseMultiThreadedAnimationUpdate=false;}
FAnimInstanceProxy* USoldierAnimInstance::CreateAnimInstanceProxy(){return new FArmyAnimProxy(this);}
void USoldierAnimInstance::DestroyAnimInstanceProxy(FAnimInstanceProxy* Proxy){delete Proxy;}
