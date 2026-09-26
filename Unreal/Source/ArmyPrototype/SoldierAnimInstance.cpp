#include "SoldierAnimInstance.h"
#include "WeaponAnimationProfile.h"
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
    UWeaponAnimationProfile* Profile=nullptr;
    float AimYaw=0,AimPitch=0,LookYaw=0,LookPitch=0,MoveSpeed=0;
    double PoseTime=0;
    bool Contacts=false;
    bool RootOffset=false;
    FTransform MotionRoot;
    float VaultPlant=0;FVector VaultHandTarget;
    FTransform ContactPelvis,ContactFeet[2];
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        auto* A=CastChecked<USoldierAnimInstance>(Instance);Samples=A->Samples;Grip=A->GripAlpha;Standing=A->StandingAim;Handling=A->Handling;MG=A->MachineGun;Scale=A->ModelScale;
        Profile=A->EquipmentProfile;AimYaw=A->AimYaw;AimPitch=A->AimPitch;LookYaw=A->LookYaw;LookPitch=A->LookPitch;MoveSpeed=A->MoveSpeed;PoseTime=A->PoseTime;
        Contacts=A->ContactsEnabled;ContactPelvis=A->ContactPelvis;ContactFeet[0]=A->ContactLeftFoot;ContactFeet[1]=A->ContactRightFoot;
        RootOffset=A->RootOffsetEnabled;MotionRoot=A->MotionRoot;
        VaultPlant=A->VaultPlant;VaultHandTarget=A->VaultHandTarget;
    }
    virtual bool Evaluate(FPoseContext& Output) override {
        Output.ResetToRefPose();
        float Total=0;
        for(const auto& S:Samples)if(S.Sequence&&S.Weight>.00001f) {
            FPoseContext P(this);P.ResetToRefPose();FAnimationPoseData Data(P);
            S.Sequence->GetAnimationPose(Data,FAnimExtractContext(S.Time,S.ExtractRoot));
            if(Total==0){Output.Pose.CopyBonesFrom(P.Pose);Output.Curve=P.Curve;Output.CustomAttributes=P.CustomAttributes;}
            else {FPoseContext Previous(Output);Previous.Pose.CopyBonesFrom(Output.Pose);Previous.Curve=Output.Curve;Previous.CustomAttributes=Output.CustomAttributes;
                const FAnimationPoseData A(Previous),B(P);FAnimationPoseData Dest(Output);
                FAnimationRuntime::BlendTwoPosesTogether(A,B,Total/(Total+S.Weight),Dest);}
            Total+=S.Weight;
        }
        if(RootOffset)Output.Pose[FCompactPoseBoneIndex(0)]=MotionRoot;
        if(Contacts) {
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto Index=[&](const FString& Name){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(Name))));};
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            const auto Hip=Index(TEXT("Hips"));
            if(Hip.GetInt()>=0)CS.SafeSetCSBoneTransforms({FBoneTransform(Hip,ContactPelvis)});
            for(int I=0;I<2;++I) {
                const FString Side=I==0?TEXT("Left"):TEXT("Right");
                const auto Upper=Index(Side+TEXT("UpLeg")),Lower=Index(Side+TEXT("Leg")),Foot=Index(Side+TEXT("Foot"));
                if(Upper.GetInt()<0||Lower.GetInt()<0||Foot.GetInt()<0)continue;
                auto U=CS.GetComponentSpaceTransform(Upper),L=CS.GetComponentSpaceTransform(Lower),F=CS.GetComponentSpaceTransform(Foot);
                AnimationCore::SolveTwoBoneIK(U,L,F,FVector(I==0?25:-25,150,50),ContactFeet[I].GetLocation(),false,1.,1.);
                F.SetRotation(ContactFeet[I].GetRotation());
                CS.SafeSetCSBoneTransforms({FBoneTransform(Upper,U),FBoneTransform(Lower,L),FBoneTransform(Foot,F)});
            }
            for(auto I:Output.Pose.ForEachBoneIndex())Output.Pose[I]=CS.GetLocalSpaceTransform(I);
            Output.Pose.NormalizeRotations();
        }
        if(VaultPlant>0) {
            // Retargeted bodies do not have the source mannequin's reach. While
            // airborne, move the body just enough to support its wall contact;
            // do not lengthen the arm or silently clamp the hand off the wall.
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto Index=[&](FName N){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(N)));};
            const auto Arm=Index(TEXT("LeftArm")),Elbow=Index(TEXT("LeftForeArm")),Hand=Index(TEXT("LeftHand"));
            if(Arm.GetInt()>=0&&Elbow.GetInt()>=0&&Hand.GetInt()>=0) {
                FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
                const FVector A=CS.GetComponentSpaceTransform(Arm).GetLocation(),E=CS.GetComponentSpaceTransform(Elbow).GetLocation(),H=CS.GetComponentSpaceTransform(Hand).GetLocation();
                const double Reach=(FVector::Distance(A,E)+FVector::Distance(E,H))*.99;
                const FVector ToContact=VaultHandTarget-A;
                const double Excess=FMath::Clamp(ToContact.Size()-Reach,0.,22.);
                Output.Pose[FCompactPoseBoneIndex(0)].AddToTranslation(ToContact.GetSafeNormal()*Excess*VaultPlant);
            }
        }
        if(Grip>0) {
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto index=[&](const FString& Name){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(Name))));};
            FPoseContext UpperPose(this);UpperPose.ResetToRefPose();
            FCSPose<FCompactPose> StandingCS;
            const auto Spine=index(TEXT("Spine")),Hip=index(TEXT("Hips")),Socket=index(TEXT("WeaponSocket_R"));
            FCSPose<FCompactPose> LocomotionCS;LocomotionCS.InitPose(Output.Pose);
            const FQuat LocomotionSpine=Spine.GetInt()>=0?LocomotionCS.GetComponentSpaceTransform(Spine).GetRotation():FQuat::Identity;
            const bool Layer=Standing&&Spine.GetInt()>=0&&Hip.GetInt()>=0;
            if(Layer) {
                FAnimationPoseData Data(UpperPose);Standing->GetAnimationPose(Data,FAnimExtractContext(Profile?FMath::Fmod(PoseTime,Standing->GetPlayLength()):0.,false));
                StandingCS.InitPose(UpperPose.Pose);
                // The authored handling pose starts standing; only spine descendants replace locomotion.
                // Hips, thighs and feet continue to use direction, speed, stance and stride phase.
                for(auto I:Output.Pose.ForEachBoneIndex()) {
                    auto Parent=I;bool Upper=false;
                    while(Parent.GetInt()>=0){if(Parent==Spine){Upper=true;break;}Parent=Bones.GetParentBoneIndex(Parent);}
                    if(Upper){
                        const FName Name=Bones.GetReferenceSkeleton().GetBoneName(Bones.MakeMeshPoseIndex(I).GetInt());
                        const float Weight=Profile&&Name.ToString().StartsWith(TEXT("Spine"))?Profile->SpineWeight:1.f;
                        FTransform T;T.Blend(Output.Pose[I],UpperPose.Pose[I],Handling.upper*Grip*Weight);Output.Pose[I]=T;
                    }
                }
            }
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            if(Profile) {
                // A bounded torso/attention layer. It never rotates the actor or
                // changes the recorded trajectory/shot direction.
                const float Yaw=FMath::Clamp(AimYaw,-Profile->YawLimit,Profile->YawLimit);
                const float Pitch=FMath::Clamp(AimPitch,-Profile->PitchLimit,Profile->PitchLimit);
                if(Spine.GetInt()>=0) {
                    auto T=CS.GetComponentSpaceTransform(Spine);
                    if(Layer) {
                        const FQuat Reference=StandingCS.GetComponentSpaceTransform(Spine).GetRotation();
                        T.SetRotation(FQuat::Slerp(LocomotionSpine,Reference,Handling.upper*Profile->SpineWeight));
                    }
                    const float Lean=Profile->MovingLeanDegrees*FMath::Clamp(MoveSpeed/3.f,0.f,1.f);
                    T.SetRotation(FQuat(FVector::UpVector,FMath::DegreesToRadians(Yaw*.45f))*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(Pitch*.35f-Lean))*T.GetRotation());
                    CS.SafeSetCSBoneTransforms({FBoneTransform(Spine,T)});
                }
                const auto Head=index(TEXT("Head"));
                if(Head.GetInt()>=0) {
                    auto T=CS.GetComponentSpaceTransform(Head);
                    // Preserve the authored head attitude in component space.
                    // Copying its local rotation beneath a running pelvis adds
                    // the pelvis lean a second time and points the face down.
                    const FQuat Base=Layer?FQuat::Slerp(T.GetRotation(),(RootOffset?MotionRoot.GetRotation():FQuat::Identity)*StandingCS.GetComponentSpaceTransform(Head).GetRotation(),Handling.upper):T.GetRotation();
                    const float GazeYaw=FMath::Clamp(Yaw*.45f+LookYaw*Profile->HeadWeight,-65.f,65.f);
                    const float GazePitch=FMath::Clamp(Pitch*.5f+LookPitch*Profile->HeadWeight,-30.f,30.f);
                    T.SetRotation(FQuat(FVector::UpVector,FMath::DegreesToRadians(GazeYaw))*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(GazePitch))*Base);
                    CS.SafeSetCSBoneTransforms({FBoneTransform(Head,T)});
                }
            }
            if(Socket.GetInt()>=0) {
                const FTransform Original=CS.GetComponentSpaceTransform(Socket);
                FTransform Gun=Original;
                if(Layer) {
                    FTransform StandingGun=StandingCS.GetComponentSpaceTransform(Socket);
                    if(Profile) {
                        // Follow pelvis height/translation, not its unarmed twist.
                        // Calibrate the authored barrel (+Y in weapon space) to
                        // the facing axis before applying carry, recoil and aim.
                        const FQuat Calibration=FQuat::FindBetweenNormals(StandingGun.TransformVectorNoScale(FVector::RightVector).GetSafeNormal(),FVector::RightVector);
                        const FVector FromHip=StandingGun.GetLocation()-StandingCS.GetComponentSpaceTransform(Hip).GetLocation();
                        StandingGun.SetLocation(CS.GetComponentSpaceTransform(Hip).GetLocation()+Calibration.RotateVector(FromHip));
                        StandingGun.SetRotation(Calibration*StandingGun.GetRotation());
                    } else StandingGun=StandingGun.GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                    Gun.Blend(Original,StandingGun,FMath::Clamp(Handling.upper+Handling.traversal,0.f,1.f)*Grip);
                }
                FTransform RigidOriginal=Original;RigidOriginal.SetScale3D(FVector::OneVector);
                FTransform Rigid=Gun;Rigid.SetScale3D(FVector::OneVector);
                auto offset=[](armyvisual::Offset P){return FVector(P.x,P.y,P.z);};
                Rigid.AddToTranslation(Rigid.TransformVectorNoScale(offset(Handling.gun)/Scale));
                // Pitch about the weapon's local lateral X axis (+Y is muzzle-forward).
                Rigid.SetRotation(Rigid.GetRotation()*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(Handling.pitch)));
                if(Profile) {
                    const FQuat Aim=FQuat(FVector::UpVector,FMath::DegreesToRadians(FMath::Clamp(AimYaw,-Profile->YawLimit,Profile->YawLimit)))*
                        FQuat(FVector::ForwardVector,FMath::DegreesToRadians(FMath::Clamp(AimPitch,-Profile->PitchLimit,Profile->PitchLimit)));
                    const FVector Pivot=CS.GetComponentSpaceTransform(Hip).GetLocation()+FVector(0,0,35);
                    Rigid.SetLocation(Pivot+Aim.RotateVector(Rigid.GetLocation()-Pivot));Rigid.SetRotation(Aim*Rigid.GetRotation());
                    Rigid.AddToTranslation(FVector(0,0,FMath::Sin(PoseTime*2.3)*Profile->BreathingCentimetres));
                }
                auto relativeControl=[&](const TCHAR* Name) {
                    const auto B=index(Name);
                    FTransform Relative=CS.GetComponentSpaceTransform(B).GetRelativeTransform(RigidOriginal);
                    if((MG||Profile)&&Layer) {
                        FTransform Reference=StandingCS.GetComponentSpaceTransform(Socket);Reference.SetScale3D(FVector::OneVector);
                        Relative=StandingCS.GetComponentSpaceTransform(B).GetRelativeTransform(Reference);
                    }
                    FVector P=Relative.GetLocation();
                    if(FString(Name)!=TEXT("WeaponMuzzle"))P+=offset(FString(Name)==TEXT("WeaponGrip_L")?Handling.left:Handling.right);
                    if(Profile&&!MG&&Layer&&FString(Name)==TEXT("WeaponGrip_R")&&Handling.boltContact>0) {
                        const auto Hand=index(TEXT("RightHand")),Knuckle=index(TEXT("RightHandMiddle1"));
                        if(Hand.GetInt()>=0&&Knuckle.GetInt()>=0) {
                            // The palm contacts the same moving knob used by the
                            // visible mechanism, instead of an unrelated wrist offset.
                            const FVector Palm=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation())*.65;
                            const FTransform Bolt(FRotator(Profile->BoltOpenDegrees*Handling.boltOpen,0,0),Profile->BoltRest-FVector(0,Profile->BoltTravel*Handling.boltBack,0));
                            const FQuat HandRotation=Bolt.GetRotation()*Relative.GetRotation();
                            const FVector Contact=Bolt.TransformPosition(Profile->BoltKnob)-HandRotation.RotateVector(Palm);
                            P=FMath::Lerp(P,Contact,Handling.boltContact);
                            Relative.SetRotation(FQuat::Slerp(Relative.GetRotation(),HandRotation,Handling.boltContact));
                        }
                    }
                    if(Profile&&!MG&&Layer&&FString(Name)==TEXT("WeaponGrip_R")&&Handling.reloadContact>0) {
                        const auto Hand=index(TEXT("RightHand")),Knuckle=index(TEXT("RightHandMiddle1"));
                        if(Hand.GetInt()>=0&&Knuckle.GetInt()>=0) {
                            const FVector Palm=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation())*.65;
                            const FVector Contact=Profile->ReloadClipPosition(Handling.reloadPhase)+FVector(0,0,3)-Relative.GetRotation().RotateVector(Palm);
                            P=FMath::Lerp(P,Contact,Handling.reloadContact);
                        }
                    }
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
                        const float Support=Side==TEXT("Left")?Handling.leftSupport:Handling.rightSupport;
                        if(Excess>.001f&&Support>.999f){Rigid.AddToTranslation(-Delta.GetSafeNormal()*Excess);Adjusted=true;}
                    }
                    if(!Adjusted)break;
                }
                TArray<FBoneTransform> Controls;
                Gun=Rigid;Gun.SetScale3D(Original.GetScale3D());Controls.Emplace(Socket,Gun);
                for(const auto Name:{TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("WeaponMuzzle")}) {
                    const auto B=index(Name);if(B.GetInt()<0)continue;
                    FTransform T=CS.GetComponentSpaceTransform(B),Relative=relativeControl(Name);
                    T.SetLocation(Rigid.TransformPosition(Relative.GetLocation()));T.SetRotation(Rigid.GetRotation()*Relative.GetRotation());
                    if(FString(Name)!=TEXT("WeaponMuzzle")) {
                        const FString Side=FString(Name)==TEXT("WeaponGrip_L")?TEXT("Left"):TEXT("Right");
                        const float Support=Side==TEXT("Left")?Handling.leftSupport:Handling.rightSupport;
                        if(Support<.999f) {
                            const auto U=index(Side+TEXT("Arm")),L=index(Side+TEXT("ForeArm")),H=index(Side+TEXT("Hand"));
                            const FVector Shoulder=CS.GetComponentSpaceTransform(U).GetLocation(),Elbow=CS.GetComponentSpaceTransform(L).GetLocation(),Hand=CS.GetComponentSpaceTransform(H).GetLocation();
                            const double Reach=(FVector::Distance(Shoulder,Elbow)+FVector::Distance(Elbow,Hand))*.995;
                            T.SetLocation(Shoulder+(T.GetLocation()-Shoulder).GetClampedToMaxSize(Reach));
                        }
                    }
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
                FTransform T=CS.GetComponentSpaceTransform(Target);const FTransform OldU=U,OldL=L,OldH=H;
                float HandAlpha=Grip;
                if(Side==TEXT("Left")) {
                    HandAlpha*=Handling.leftIK;
                    if(VaultPlant>0){T=H;T.SetLocation(FMath::Lerp(H.GetLocation(),VaultHandTarget,VaultPlant));HandAlpha=Grip;}
                }
                // Preserve the authored elbow side. No stretching: unreachable targets are reported.
                const FVector Pole=L.GetLocation()+(L.GetLocation()-(U.GetLocation()+H.GetLocation())*.5)*3;
                AnimationCore::SolveTwoBoneIK(U,L,H,Pole,T.GetLocation(),false,1.,1.);
                H.SetRotation(T.GetRotation());
                if(HandAlpha<1){U.Blend(OldU,U,HandAlpha);L.Blend(OldL,L,HandAlpha);H.Blend(OldH,H,HandAlpha);}
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
