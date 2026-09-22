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
    float Grip=1,Scale=1;
    UAnimSequence* Standing=nullptr;
    armyvisual::HandlingPose Handling;
    bool MG=false;
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        auto* A=CastChecked<USoldierAnimInstance>(Instance);Samples=A->Samples;Grip=A->GripAlpha;Standing=A->StandingAim;Handling=A->Handling;MG=A->MachineGun;Scale=A->ModelScale;
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
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto index=[&](const FString& Name){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(Name))));};
            FPoseContext UpperPose(this);UpperPose.ResetToRefPose();
            FCSPose<FCompactPose> StandingCS;
            const auto Spine=index(TEXT("Spine")),Hip=index(TEXT("Hips")),Socket=index(TEXT("WeaponSocket_R"));
            const bool Layer=Standing&&Handling.upper>0&&Spine.GetInt()>=0&&Hip.GetInt()>=0;
            if(Layer) {
                FAnimationPoseData Data(UpperPose);Standing->GetAnimationPose(Data,FAnimExtractContext(0.,false));
                StandingCS.InitPose(UpperPose.Pose);
                // The authored handling pose starts standing; only spine descendants replace locomotion.
                // Hips, thighs and feet continue to use direction, speed, stance and stride phase.
                for(auto I:Output.Pose.ForEachBoneIndex()) {
                    auto Parent=I;bool Upper=false;
                    while(Parent.GetInt()>=0){if(Parent==Spine){Upper=true;break;}Parent=Bones.GetParentBoneIndex(Parent);}
                    if(Upper){FTransform T;T.Blend(Output.Pose[I],UpperPose.Pose[I],Handling.upper*Grip);Output.Pose[I]=T;}
                }
            }
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            if(Socket.GetInt()>=0) {
                const FTransform Original=CS.GetComponentSpaceTransform(Socket);
                FTransform Gun=Original;
                if(Layer) {
                    const FTransform StandingGun=StandingCS.GetComponentSpaceTransform(Socket).GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                    Gun.Blend(Original,StandingGun,Handling.upper*Grip);
                }
                FTransform RigidOriginal=Original;RigidOriginal.SetScale3D(FVector::OneVector);
                FTransform Rigid=Gun;Rigid.SetScale3D(FVector::OneVector);
                auto offset=[](armyvisual::Offset P){return FVector(P.x,P.y,P.z);};
                Rigid.AddToTranslation(Rigid.TransformVectorNoScale(offset(Handling.gun)/Scale));
                // Pitch about the weapon's local lateral X axis (+Y is muzzle-forward).
                Rigid.SetRotation(Rigid.GetRotation()*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(Handling.pitch)));
                auto relativeControl=[&](const TCHAR* Name) {
                    const auto B=index(Name);
                    FTransform Relative=CS.GetComponentSpaceTransform(B).GetRelativeTransform(RigidOriginal);
                    if(MG&&Layer) {
                        FTransform Reference=StandingCS.GetComponentSpaceTransform(Socket);Reference.SetScale3D(FVector::OneVector);
                        Relative=StandingCS.GetComponentSpaceTransform(B).GetRelativeTransform(Reference);
                    }
                    FVector P=Relative.GetLocation();
                    if(FString(Name)!=TEXT("WeaponMuzzle"))P+=offset(FString(Name)==TEXT("WeaponGrip_L")?Handling.left:Handling.right);
                    Relative.SetLocation(P/Scale);return Relative;
                };
                // Fit the rigid carrier to both arms before IK. The two bodies have
                // different arm lengths; a reload reach must not stretch an arm or
                // leave its supporting hand behind. All targets move with the gun.
                for(int Iteration=0;Iteration<16;++Iteration) {
                    bool Adjusted=false;
                    for(const FString Side:{FString(TEXT("Left")),FString(TEXT("Right"))}) {
                        const auto U=index(Side+TEXT("Arm")),L=index(Side+TEXT("ForeArm")),H=index(Side+TEXT("Hand"));
                        const TCHAR* Target=Side==TEXT("Left")?TEXT("WeaponGrip_L"):TEXT("WeaponGrip_R");
                        if(U.GetInt()<0||L.GetInt()<0||H.GetInt()<0||index(Target).GetInt()<0)continue;
                        const FVector Shoulder=CS.GetComponentSpaceTransform(U).GetLocation();
                        const FVector Elbow=CS.GetComponentSpaceTransform(L).GetLocation(),Hand=CS.GetComponentSpaceTransform(H).GetLocation();
                        const float Reach=(FVector::Distance(Shoulder,Elbow)+FVector::Distance(Elbow,Hand))*.995f;
                        const FVector Delta=Rigid.TransformPosition(relativeControl(Target).GetLocation())-Shoulder;
                        const float Excess=Delta.Size()-Reach;
                        if(Excess>.001f){Rigid.AddToTranslation(-Delta.GetSafeNormal()*Excess);Adjusted=true;}
                    }
                    if(!Adjusted)break;
                }
                TArray<FBoneTransform> Controls;
                Gun=Rigid;Gun.SetScale3D(Original.GetScale3D());Controls.Emplace(Socket,Gun);
                for(const auto Name:{TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("WeaponMuzzle")}) {
                    const auto B=index(Name);if(B.GetInt()<0)continue;
                    FTransform T=CS.GetComponentSpaceTransform(B),Relative=relativeControl(Name);
                    T.SetLocation(Rigid.TransformPosition(Relative.GetLocation()));T.SetRotation(Rigid.GetRotation()*Relative.GetRotation());
                    Controls.Emplace(B,T);
                }
                Controls.Sort([](const FBoneTransform& A,const FBoneTransform& B){return A.BoneIndex.GetInt()<B.BoneIndex.GetInt();});
                CS.SafeSetCSBoneTransforms(Controls);
            }
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
