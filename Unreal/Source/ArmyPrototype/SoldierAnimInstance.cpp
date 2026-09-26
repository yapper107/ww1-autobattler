#include "SoldierAnimInstance.h"
#include "WeaponAnimationProfile.h"
#include "MachineGunMechanism.h"
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
    TArray<FTransform> DeathEntryPose;
    float DeathEntryWeight=0;
    UAnimSequence* Standing=nullptr;
    TArray<FArmyPoseSample> ArmedReference;
    TArray<FArmyPoseSample> AuthoredBurst;
    float WeaponReady=1;
    bool AuthoredHandling=false;
    bool ArticulatedRiflePouch=false,ArticulatedMG=false;
    float AuthoredHandlingAlpha=0;
    FVector AuthoredPelvisOffset=FVector::ZeroVector;
    float AuthoredMGPelvisWeight=0;
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
    FVector ContactKnees[2];
    FTransform ContactSpine[3];
    virtual void PreUpdate(UAnimInstance* Instance,float Dt) override {
        FAnimInstanceProxy::PreUpdate(Instance,Dt);
        auto* A=CastChecked<USoldierAnimInstance>(Instance);Samples=A->Samples;Grip=A->GripAlpha;Standing=A->StandingAim;Handling=A->Handling;MG=A->MachineGun;Scale=A->ModelScale;
        Profile=A->EquipmentProfile;AimYaw=A->AimYaw;AimPitch=A->AimPitch;LookYaw=A->LookYaw;LookPitch=A->LookPitch;MoveSpeed=A->MoveSpeed;PoseTime=A->PoseTime;
        ArmedReference=A->ArmedReference;WeaponReady=A->WeaponReady;
        DeathEntryPose=A->DeathEntryPose;DeathEntryWeight=A->DeathEntryWeight;
        AuthoredBurst=A->AuthoredBurst;
        AuthoredHandling=A->AuthoredHandling;
        ArticulatedRiflePouch=A->ArticulatedRiflePouch;ArticulatedMG=A->ArticulatedMG;
        AuthoredHandlingAlpha=A->AuthoredHandlingAlpha;
        AuthoredPelvisOffset=A->AuthoredPelvisOffset;
        AuthoredMGPelvisWeight=A->AuthoredMGPelvisWeight;
        AimYaw*=WeaponReady*(1-Handling.traversal);AimPitch*=WeaponReady*(1-Handling.traversal);
        Contacts=A->ContactsEnabled;ContactPelvis=A->ContactPelvis;ContactFeet[0]=A->ContactLeftFoot;ContactFeet[1]=A->ContactRightFoot;
        ContactKnees[0]=A->ContactLeftKnee;ContactKnees[1]=A->ContactRightKnee;
        for(int I=0;I<3;++I)ContactSpine[I]=A->ContactSpine[I];
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
            const FString SpineNames[]={TEXT("Spine"),TEXT("Spine1"),TEXT("Spine2")};
            for(int I=0;I<3;++I){const auto Bone=Index(SpineNames[I]);if(Bone.GetInt()>=0)CS.SafeSetCSBoneTransforms({FBoneTransform(Bone,ContactSpine[I])});}
            for(int I=0;I<2;++I) {
                const FString Side=I==0?TEXT("Left"):TEXT("Right");
                const auto Upper=Index(Side+TEXT("UpLeg")),Lower=Index(Side+TEXT("Leg")),Foot=Index(Side+TEXT("Foot"));
                if(Upper.GetInt()<0||Lower.GetInt()<0||Foot.GetInt()<0)continue;
                auto U=CS.GetComponentSpaceTransform(Upper),L=CS.GetComponentSpaceTransform(Lower),F=CS.GetComponentSpaceTransform(Foot);
                const FVector Pole=ContactKnees[I];
                AnimationCore::SolveTwoBoneIK(U,L,F,Pole,ContactFeet[I].GetLocation(),false,1.,1.);
                F.SetRotation(ContactFeet[I].GetRotation());
                CS.SafeSetCSBoneTransforms({FBoneTransform(Upper,U),FBoneTransform(Lower,L),FBoneTransform(Foot,F)});
            }
            for(auto I:Output.Pose.ForEachBoneIndex())Output.Pose[I]=CS.GetLocalSpaceTransform(I);
            Output.Pose.NormalizeRotations();
        }
        if(Grip>0&&!AuthoredPelvisOffset.IsNearlyZero()) {
            const auto& Bones=Output.Pose.GetBoneContainer();
            auto Index=[&](const FString& N){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(N))));};
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            FTransform Feet[2];FVector Knees[2];
            for(int I=0;I<2;++I) {
                const FString Side=I==0?TEXT("Left"):TEXT("Right");
                Feet[I]=CS.GetComponentSpaceTransform(Index(Side+TEXT("Foot")));
                Knees[I]=CS.GetComponentSpaceTransform(Index(Side+TEXT("Leg"))).GetLocation();
            }
            const auto Hip=Index(TEXT("Hips"));auto T=CS.GetComponentSpaceTransform(Hip);T.AddToTranslation(AuthoredPelvisOffset);
            CS.SafeSetCSBoneTransforms({FBoneTransform(Hip,T)});
            for(int I=0;I<2;++I) {
                const FString Side=I==0?TEXT("Left"):TEXT("Right");
                const auto U=Index(Side+TEXT("UpLeg")),L=Index(Side+TEXT("Leg")),F=Index(Side+TEXT("Foot"));
                auto UT=CS.GetComponentSpaceTransform(U),LT=CS.GetComponentSpaceTransform(L),FT=CS.GetComponentSpaceTransform(F);
                AnimationCore::SolveTwoBoneIK(UT,LT,FT,Knees[I],Feet[I].GetLocation(),false,1.,1.);FT.SetRotation(Feet[I].GetRotation());
                CS.SafeSetCSBoneTransforms({FBoneTransform(U,UT),FBoneTransform(L,LT),FBoneTransform(F,FT)});
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
            FPoseContext GripPose(this);GripPose.ResetToRefPose();
            FCSPose<FCompactPose> StandingCS,GripCS;
            const float TorsoWeight=FMath::Lerp(Profile?FMath::Lerp(.22f,Profile->SpineWeight,WeaponReady):1.f,1.f,AuthoredHandlingAlpha);
            const auto Spine=index(TEXT("Spine")),Hip=index(TEXT("Hips")),Socket=index(TEXT("WeaponSocket_R"));
            FCSPose<FCompactPose> LocomotionCS;LocomotionCS.InitPose(Output.Pose);
            const bool Layer=Standing&&Spine.GetInt()>=0&&Hip.GetInt()>=0;
            if(Layer) {
                FAnimationPoseData Data(UpperPose);Standing->GetAnimationPose(Data,FAnimExtractContext(Profile?FMath::Fmod(PoseTime,Standing->GetPlayLength()):0.,false));
                GripPose.Pose.CopyBonesFrom(UpperPose.Pose);GripCS.InitPose(GripPose.Pose);
                float ReferenceWeight=0;
                for(const auto& S:ArmedReference)if(S.Sequence&&S.Weight>.00001f) {
                    FPoseContext P(this);P.ResetToRefPose();FAnimationPoseData ReferenceData(P);
                    S.Sequence->GetAnimationPose(ReferenceData,FAnimExtractContext(S.Time,false));
                    if(ReferenceWeight==0)UpperPose.Pose.CopyBonesFrom(P.Pose);
                    else for(auto I:UpperPose.Pose.ForEachBoneIndex()) {
                        FTransform T;T.Blend(UpperPose.Pose[I],P.Pose[I],S.Weight/(ReferenceWeight+S.Weight));UpperPose.Pose[I]=T;
                    }
                    ReferenceWeight+=S.Weight;
                }
                StandingCS.InitPose(UpperPose.Pose);
                // The reference follows carry/aim and crouch. Only spine descendants replace locomotion.
                // Hips, thighs and feet continue to use direction, speed, stance and stride phase.
                for(auto I:Output.Pose.ForEachBoneIndex()) {
                    auto Parent=I;bool Upper=false;
                    while(Parent.GetInt()>=0){if(Parent==Spine){Upper=true;break;}Parent=Bones.GetParentBoneIndex(Parent);}
                    if(Upper){
                        const FName Name=Bones.GetReferenceSkeleton().GetBoneName(Bones.MakeMeshPoseIndex(I).GetInt());
                        const float Weight=Profile&&Name.ToString().StartsWith(TEXT("Spine"))?TorsoWeight:1.f;
                        FTransform T;T.Blend(Output.Pose[I],UpperPose.Pose[I],Handling.upper*Grip*Weight);Output.Pose[I]=T;
                    }
                }
            }
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            if(MG&&AuthoredHandling&&Layer&&AuthoredMGPelvisWeight>0&&Socket.GetInt()>=0) {
                // Preserve the source's actual loading and recovery keys. A
                // fixed reload offset erased the hip response to each operation.
                // Translate the pelvis while keeping the locomotion feet planted.
                const auto BaseGun=GripCS.GetComponentSpaceTransform(Socket);
                const FQuat Facing=FQuat::FindBetweenNormals(BaseGun.GetUnitAxis(EAxis::Y),FVector::RightVector);
                const FVector Delta=Facing.RotateVector(StandingCS.GetComponentSpaceTransform(Hip).GetLocation()-GripCS.GetComponentSpaceTransform(Hip).GetLocation())*AuthoredMGPelvisWeight;
                FTransform Feet[2];FVector Knees[2];
                for(int I=0;I<2;++I) {
                    const FString Side=I==0?TEXT("Left"):TEXT("Right");
                    Feet[I]=CS.GetComponentSpaceTransform(index(Side+TEXT("Foot")));
                    Knees[I]=CS.GetComponentSpaceTransform(index(Side+TEXT("Leg"))).GetLocation();
                }
                auto Pelvis=CS.GetComponentSpaceTransform(Hip);Pelvis.AddToTranslation(Delta);
                CS.SafeSetCSBoneTransforms({FBoneTransform(Hip,Pelvis)});
                for(int I=0;I<2;++I) {
                    const FString Side=I==0?TEXT("Left"):TEXT("Right");
                    const auto U=index(Side+TEXT("UpLeg")),L=index(Side+TEXT("Leg")),F=index(Side+TEXT("Foot"));
                    auto UT=CS.GetComponentSpaceTransform(U),LT=CS.GetComponentSpaceTransform(L),FT=CS.GetComponentSpaceTransform(F);
                    AnimationCore::SolveTwoBoneIK(UT,LT,FT,Knees[I],Feet[I].GetLocation(),false,1.,1.);FT.SetRotation(Feet[I].GetRotation());
                    CS.SafeSetCSBoneTransforms({FBoneTransform(U,UT),FBoneTransform(L,LT),FBoneTransform(F,FT)});
                }
            }
            if(AuthoredHandling&&Layer&&Profile&&Socket.GetInt()>=0) {
                // The gun is calibrated from the authored hip translation and
                // facing, while local spine keys used to inherit the unarmed
                // locomotion pelvis tilt. That moved the shoulder up to 14 cm
                // toward a pouch wrist and folded the elbow around it. Map the
                // authored spine through the same frame as its weapon, easing
                // the correction with the action's weight.
                const auto BaseGun=GripCS.GetComponentSpaceTransform(Socket);
                const FQuat Calibration=FQuat::Slerp(FQuat::Identity,FQuat::FindBetweenNormals(BaseGun.TransformVectorNoScale(FVector::RightVector).GetSafeNormal(),FVector::RightVector),MG?1.f:WeaponReady);
                FTransform Target=StandingCS.GetComponentSpaceTransform(Spine);
                Target.SetLocation(CS.GetComponentSpaceTransform(Hip).GetLocation()+Calibration.RotateVector(Target.GetLocation()-StandingCS.GetComponentSpaceTransform(Hip).GetLocation()));
                Target.SetRotation(Calibration*Target.GetRotation());
                FTransform Blended;Blended.Blend(CS.GetComponentSpaceTransform(Spine),Target,AuthoredHandlingAlpha);
                CS.SafeSetCSBoneTransforms({FBoneTransform(Spine,Blended)});
            }
            // Capture the un-aimed chest before the independent attention
            // rotation. Carriage follows the chest's gait rather than a fixed
            // transform over the hips, without applying the aim rotation twice.
            FTransform CarrierSpine=Spine.GetInt()>=0?CS.GetComponentSpaceTransform(Spine):FTransform::Identity;
            if(Layer&&Profile) {
                auto T=CarrierSpine;
                const FQuat Response=FQuat(FVector::UpVector,FMath::DegreesToRadians(Handling.torsoYaw))*
                    FQuat(FVector::RightVector,FMath::DegreesToRadians(Handling.torsoRoll))*
                    FQuat(FVector::ForwardVector,FMath::DegreesToRadians(-Handling.torsoPitch));
                T.SetRotation(Response*T.GetRotation());
                CS.SafeSetCSBoneTransforms({FBoneTransform(Spine,T)});
                CarrierSpine=T;
            }
            if(Profile) {
                // A bounded torso/attention layer. It never rotates the actor or
                // changes the recorded trajectory/shot direction.
                const float Yaw=FMath::Clamp(AimYaw,-Profile->YawLimit,Profile->YawLimit);
                const float Pitch=FMath::Clamp(AimPitch,-Profile->PitchLimit,Profile->PitchLimit);
                if(Spine.GetInt()>=0) {
                    auto T=CS.GetComponentSpaceTransform(Spine);
                    // Preserve the already blended local chain and action
                    // response instead of overwriting them with a static spine.
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
                    const FQuat Base=Layer?FQuat::Slerp(T.GetRotation(),(RootOffset?MotionRoot.GetRotation():FQuat::Identity)*StandingCS.GetComponentSpaceTransform(Head).GetRotation(),Handling.upper*FMath::Lerp(.35f,1.f,WeaponReady)):T.GetRotation();
                    const float GazeYaw=FMath::Clamp(Yaw*.45f+LookYaw*Profile->HeadWeight,-65.f,65.f);
                    const float GazePitch=FMath::Clamp(Pitch*.5f+LookPitch*Profile->HeadWeight,-30.f,30.f);
                    T.SetRotation(FQuat(FVector::UpVector,FMath::DegreesToRadians(GazeYaw))*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(GazePitch))*Base);
                    T.SetRotation(FQuat(FVector::UpVector,FMath::DegreesToRadians(Handling.headYaw))*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(-Handling.headPitch))*T.GetRotation());
                    CS.SafeSetCSBoneTransforms({FBoneTransform(Head,T)});
                }
            }
            FTransform BurstGun=FTransform::Identity;
            if(MG&&Layer&&Socket.GetInt()>=0&&!AuthoredBurst.IsEmpty()) {
                // Add each actual shot's authored deviation from its own first
                // pose. Sampling in seconds preserves the shoulder's recovery
                // across subsequent rounds instead of compressing/restarting a
                // 0.4-second performance at every 0.12-second firing interval.
                FPoseContext Base(this);Base.ResetToRefPose();FAnimationPoseData BaseData(Base);
                AuthoredBurst[0].Sequence->GetAnimationPose(BaseData,FAnimExtractContext(0.,false));
                FCSPose<FCompactPose> BaseCS;BaseCS.InitPose(Base.Pose);
                FPoseContext BodyResponse(this);BodyResponse.ResetToRefPose();
                for(auto I:Output.Pose.ForEachBoneIndex())BodyResponse.Pose[I]=CS.GetLocalSpaceTransform(I);
                for(const auto& Sample:AuthoredBurst) {
                    FPoseContext Impulse(this);Impulse.ResetToRefPose();FAnimationPoseData Data(Impulse);
                    Sample.Sequence->GetAnimationPose(Data,FAnimExtractContext(Sample.Time,false));
                    for(const TCHAR* Name:{TEXT("Spine"),TEXT("Spine1"),TEXT("Spine2"),TEXT("Neck"),TEXT("Head")}) {
                        const auto Bone=index(Name);if(Bone.GetInt()<0)continue;
                        const auto& Reference=Base.Pose[Bone];const auto& Shot=Impulse.Pose[Bone];
                        auto& Current=BodyResponse.Pose[Bone];
                        const FQuat Delta=Shot.GetRotation()*Reference.GetRotation().Inverse();
                        Current.SetRotation((FQuat::Slerp(FQuat::Identity,Delta,Sample.Weight)*Current.GetRotation()).GetNormalized());
                        Current.AddToTranslation((Shot.GetLocation()-Reference.GetLocation())*Sample.Weight);
                    }
                    FCSPose<FCompactPose> ImpulseCS;ImpulseCS.InitPose(Impulse.Pose);
                    auto ShotGun=ImpulseCS.GetComponentSpaceTransform(Socket),BaseGun=BaseCS.GetComponentSpaceTransform(Socket);
                    ShotGun.SetScale3D(FVector::OneVector);BaseGun.SetScale3D(FVector::OneVector);
                    auto Delta=ShotGun.GetRelativeTransform(BaseGun);
                    Delta.SetLocation(Delta.GetLocation()*Sample.Weight);
                    Delta.SetRotation(FQuat::Slerp(FQuat::Identity,Delta.GetRotation(),Sample.Weight).GetNormalized());
                    Delta.SetScale3D(FVector::OneVector);BurstGun=Delta*BurstGun;
                }
                CS.InitPose(BodyResponse.Pose);
            }
            if(Socket.GetInt()>=0) {
                const FTransform Original=CS.GetComponentSpaceTransform(Socket);
                FTransform Gun=Original;
                if(Layer) {
                    auto& GunReference=MG&&!AuthoredHandling?GripCS:StandingCS;
                    FTransform StandingGun=GunReference.GetComponentSpaceTransform(Socket);
                    if(Profile) {
                        // Follow pelvis height/translation, not its unarmed twist.
                        // Calibrate the authored barrel (+Y in weapon space) to
                        // the facing axis before applying carry, recoil and aim.
                        const auto CalibrationGun=AuthoredHandling?GripCS.GetComponentSpaceTransform(Socket):StandingGun;
                        const FQuat Calibration=FQuat::Slerp(FQuat::Identity,FQuat::FindBetweenNormals(CalibrationGun.TransformVectorNoScale(FVector::RightVector).GetSafeNormal(),FVector::RightVector),MG?1.f:WeaponReady);
                        const FVector FromHip=StandingGun.GetLocation()-GunReference.GetComponentSpaceTransform(Hip).GetLocation();
                        StandingGun.SetLocation(CS.GetComponentSpaceTransform(Hip).GetLocation()+Calibration.RotateVector(FromHip));
                        StandingGun.SetRotation(Calibration*StandingGun.GetRotation());
                        const auto ReferenceSpine=GunReference.GetComponentSpaceTransform(Spine);
                        const FQuat ChestDelta=CarrierSpine.GetRotation()*ReferenceSpine.GetRotation().Inverse();
                        const float ActionFrame=MG?AuthoredHandlingAlpha:(AuthoredHandling?1.f:0.f);
                        const float GaitFollow=(1-ActionFrame)*FMath::Lerp(.8f,.18f*FMath::Clamp(MoveSpeed,0.f,1.f),WeaponReady)*(1-Handling.traversal);
                        const FQuat Follow=FQuat::Slerp(FQuat::Identity,ChestDelta,GaitFollow);
                        const FVector ReferenceChest=CS.GetComponentSpaceTransform(Hip).GetLocation()+
                            Calibration.RotateVector(ReferenceSpine.GetLocation()-GunReference.GetComponentSpaceTransform(Hip).GetLocation());
                        const FVector Carried=CarrierSpine.GetLocation()+Follow.RotateVector(StandingGun.GetLocation()-ReferenceChest);
                        StandingGun.SetLocation(FMath::Lerp(Carried,StandingGun.GetLocation(),ActionFrame));
                        StandingGun.SetRotation(Follow*StandingGun.GetRotation());
                    } else StandingGun=StandingGun.GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                    Gun.Blend(Original,StandingGun,(Profile?1.f:FMath::Clamp(Handling.upper+Handling.traversal,0.f,1.f))*Grip);
                }
                FTransform RigidOriginal=Original;RigidOriginal.SetScale3D(FVector::OneVector);
                FTransform Rigid=Gun;Rigid.SetScale3D(FVector::OneVector);
                auto offset=[](armyvisual::Offset P){return FVector(P.x,P.y,P.z);};
                Rigid.AddToTranslation(Rigid.TransformVectorNoScale(offset(Handling.gun)/Scale));
                // Pitch about the weapon's local lateral X axis (+Y is muzzle-forward).
                Rigid.SetRotation(Rigid.GetRotation()*FQuat(FVector::ForwardVector,FMath::DegreesToRadians(Handling.pitch)));
                Rigid.SetRotation(Rigid.GetRotation()*FQuat(FVector::RightVector,FMath::DegreesToRadians(Handling.gunRoll))*FQuat(FVector::UpVector,FMath::DegreesToRadians(Handling.gunYaw)));
                if(Layer&&Handling.traversal>0) {
                    // Carry beside the moving torso, not above a folded vault
                    // body at the old standing chest height. The left hand is
                    // free to plant; the right hand supports the rigid weapon.
                    const auto Shoulder=index(TEXT("RightArm")),Hand=index(TEXT("WeaponGrip_R"));
                    if(Shoulder.GetInt()>=0&&Hand.GetInt()>=0) {
                        FTransform Reference=GripCS.GetComponentSpaceTransform(Socket);Reference.SetScale3D(FVector::OneVector);
                        const FVector HandLocal=Reference.InverseTransformPosition(GripCS.GetComponentSpaceTransform(Hand).GetLocation());
                        FTransform Tucked=Rigid;
                        const FVector Direction=FVector(-.95,.2,-.2).GetSafeNormal();
                        Tucked.SetRotation(FQuat::FindBetweenNormals(Rigid.TransformVectorNoScale(FVector::RightVector).GetSafeNormal(),Direction)*Rigid.GetRotation());
                        const FVector HandTarget=LocomotionCS.GetComponentSpaceTransform(Shoulder).GetLocation()+FVector(-8,-5,-24);
                        Tucked.SetLocation(HandTarget-Tucked.TransformVectorNoScale(HandLocal));
                        Rigid.Blend(Rigid,Tucked,Handling.traversal);
                    }
                }
                if(Profile) {
                    const FQuat Aim=FQuat(FVector::UpVector,FMath::DegreesToRadians(FMath::Clamp(AimYaw,-Profile->YawLimit,Profile->YawLimit)))*
                        FQuat(FVector::ForwardVector,FMath::DegreesToRadians(FMath::Clamp(AimPitch,-Profile->PitchLimit,Profile->PitchLimit)));
                    const FVector Pivot=CS.GetComponentSpaceTransform(Hip).GetLocation()+FVector(0,0,35);
                    Rigid.SetLocation(Pivot+Aim.RotateVector(Rigid.GetLocation()-Pivot));Rigid.SetRotation(Aim*Rigid.GetRotation());
                    Rigid.AddToTranslation(FVector(0,0,FMath::Sin(PoseTime*2.3)*Profile->BreathingCentimetres));
                }
                Rigid=BurstGun*Rigid;
                auto relativeControl=[&](const TCHAR* Name) {
                    const auto B=index(Name);
                    FTransform Relative=CS.GetComponentSpaceTransform(B).GetRelativeTransform(RigidOriginal);
                    if((MG||Profile)&&Layer) {
                        auto& ControlCS=AuthoredHandling?StandingCS:GripCS;
                        FTransform Reference=ControlCS.GetComponentSpaceTransform(Socket);Reference.SetScale3D(FVector::OneVector);
                        Relative=ControlCS.GetComponentSpaceTransform(B).GetRelativeTransform(Reference);
                    }
                    FVector P=Relative.GetLocation();
                    if(FString(Name)!=TEXT("WeaponMuzzle"))P+=offset(FString(Name)==TEXT("WeaponGrip_L")?Handling.left:Handling.right);
                    if(Profile&&!MG&&Layer&&FString(Name)==TEXT("WeaponGrip_R")&&Handling.boltContact>0) {
                        const auto Hand=index(TEXT("RightHand")),Knuckle=index(TEXT("RightHandMiddle1"));
                        if(Hand.GetInt()>=0&&Knuckle.GetInt()>=0) {
                            // The authored thumb/index grip contacts the same
                            // knob as the visible mechanism. Legacy uses its palm.
                            FVector Palm=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation())*.65;
                            const auto ThumbTip=index(TEXT("RightHandThumb4")),IndexTip=index(TEXT("RightHandIndex4"));
                            if(AuthoredHandling&&ThumbTip.GetInt()>=0&&IndexTip.GetInt()>=0) {
                                const FVector Pinch=(StandingCS.GetComponentSpaceTransform(ThumbTip).GetLocation()+StandingCS.GetComponentSpaceTransform(IndexTip).GetLocation())*.5;
                                Palm=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(Pinch);
                            }
                            const FTransform Bolt(FRotator(Profile->BoltOpenDegrees*Handling.boltOpen,0,0),Profile->BoltRest-FVector(0,Profile->BoltTravel*Handling.boltBack,0));
                            const FQuat HandRotation=AuthoredHandling?Relative.GetRotation():Bolt.GetRotation()*Relative.GetRotation();
                            const FVector Contact=Bolt.TransformPosition(Profile->BoltKnob)-HandRotation.RotateVector(Palm);
                            P=FMath::Lerp(P,Contact,Handling.boltContact);
                            Relative.SetRotation(FQuat::Slerp(Relative.GetRotation(),HandRotation,Handling.boltContact));
                        }
                    }
                    if(Profile&&!MG&&Layer&&FString(Name)==TEXT("WeaponGrip_R")&&Handling.reloadContact>0) {
                        const auto Hand=index(TEXT("RightHand")),Knuckle=index(TEXT("RightHandMiddle1"));
                        if(Hand.GetInt()>=0&&Knuckle.GetInt()>=0) {
                            const FVector Palm=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation())*.65;
                            FVector Contact=Profile->ReloadClipPosition(Handling.reloadPhase)+Profile->ReloadPalmOffset-Relative.GetRotation().RotateVector(Palm);
                            const auto Thumb=index(TEXT("RightHandThumb4"));
                            if(ArticulatedRiflePouch&&AuthoredHandling&&Thumb.GetInt()>=0) {
                                const FVector Tip=StandingCS.GetComponentSpaceTransform(Hand).InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Thumb).GetLocation());
                                const FVector Top=Profile->ReloadClipPosition(Handling.reloadPhase)+FVector(0,0,Profile->ReloadStackHalfHeight);
                                Contact=FMath::Lerp(Contact,Top-Relative.GetRotation().RotateVector(Tip),FMath::SmoothStep(.49f,.535f,Handling.reloadPhase));
                            }
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
                        const bool MechanismContact=!MG&&Side==TEXT("Right")&&(Handling.boltContact>.999f||Handling.reloadContact>.999f);
                        if(Excess>.001f&&(Support>.999f||MechanismContact)){Rigid.AddToTranslation(-Delta.GetSafeNormal()*Excess);Adjusted=true;}
                    }
                    if(!Adjusted)break;
                }
                TArray<FBoneTransform> Controls;
                Gun=Rigid;Gun.SetScale3D(Original.GetScale3D());Controls.Emplace(Socket,Gun);
                for(const auto Name:{TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("WeaponMuzzle")}) {
                    const auto B=index(Name);if(B.GetInt()<0)continue;
                    FTransform T=CS.GetComponentSpaceTransform(B),Relative=relativeControl(Name);
                    T.SetLocation(Rigid.TransformPosition(Relative.GetLocation()));T.SetRotation(Rigid.GetRotation()*Relative.GetRotation());
                    if(ArticulatedRiflePouch&&AuthoredHandling&&Layer&&FString(Name)==TEXT("WeaponGrip_R")&&Handling.reloadPhase>=0) {
                        // During pouch access the hand follows the pelvis-mounted
                        // equipment, independent of locomotion/aim chest tilt.
                        const float U=Handling.reloadPhase;
                        const float Contact=FMath::SmoothStep(.205f,.245f,U)*(1-FMath::SmoothStep(.405f,.455f,U));
                        const FTransform PouchHand=StandingCS.GetComponentSpaceTransform(B).GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                        T.Blend(T,PouchHand,Contact);
                    }
                    if(ArticulatedMG&&AuthoredHandling&&Layer&&FString(Name)==TEXT("WeaponGrip_L")&&Handling.reloadPhase>=0) {
                        // Ammunition lives on the pelvis; weapon aim must not
                        // pull the retrieving glove away from that pouch.
                        const auto PouchHand=StandingCS.GetComponentSpaceTransform(B).GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                        T.Blend(T,PouchHand,armymg::PouchContact(Handling.reloadPhase));
                    }
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
                if(MG&&AuthoredHandling&&Handling.reloadPhase>=0) {
                    const auto Prop=index(TEXT("Weapon_Free"));
                    if(Prop.GetInt()>=0) {
                        FTransform Reference=StandingCS.GetComponentSpaceTransform(Socket);Reference.SetScale3D(FVector::OneVector);
                        const auto Relative=StandingCS.GetComponentSpaceTransform(Prop).GetRelativeTransform(Reference);
                        auto T=Relative*Rigid;
                        if(ArticulatedMG) {
                            const auto PouchProp=StandingCS.GetComponentSpaceTransform(Prop).GetRelativeTransform(StandingCS.GetComponentSpaceTransform(Hip))*CS.GetComponentSpaceTransform(Hip);
                            T.Blend(T,PouchProp,armymg::PouchContact(Handling.reloadPhase));
                        }
                        T.SetScale3D(FVector::OneVector);Controls.Emplace(Prop,T);
                    }
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
                FVector Pole=L.GetLocation()+(L.GetLocation()-(U.GetLocation()+H.GetLocation())*.5)*3;
                const FVector UnauthoredPole=Pole;
                if(AuthoredHandling) {
                    // Contact calibration can move the wrist across the old
                    // absolute pole. Transport the authored bend plane with
                    // that adjustment instead of letting the elbow flip sides.
                    const FVector SourceAxis=(H.GetLocation()-U.GetLocation()).GetSafeNormal();
                    const FVector TargetAxis=(T.GetLocation()-U.GetLocation()).GetSafeNormal();
                    const FVector Bend=L.GetLocation()-(U.GetLocation()+H.GetLocation())*.5;
                    const FQuat Transport=FQuat::FindBetweenNormals(SourceAxis,TargetAxis);
                    Pole=(U.GetLocation()+T.GetLocation())*.5+Transport.RotateVector(Bend)*4;
                    if(!MG&&Side==TEXT("Right")&&Handling.reloadPhase>=0) {
                        // Pouch contact follows the live pelvis, while the
                        // authored chest is calibrated to weapon facing. That
                        // changes the reach plane; transporting its old elbow
                        // alone can raise the arm over the shoulder or into the
                        // vest. Resolve the operating bend from the live chest
                        // on both body sizes before blending into pressure.
                        const auto Other=index(TEXT("LeftArm"));
                        if(Other.GetInt()>=0) {
                            const FVector Outward=(U.GetLocation()-CS.GetComponentSpaceTransform(Other).GetLocation()).GetSafeNormal2D();
                            FVector Forward=FVector::CrossProduct(Outward,FVector::UpVector).GetSafeNormal();
                            const FVector MuzzleDirection=CS.GetComponentSpaceTransform(Socket).GetUnitAxis(EAxis::Y);
                            if(FVector::DotProduct(Forward,MuzzleDirection)<0)Forward=-Forward;
                            const FVector ReachAxis=(T.GetLocation()-U.GetLocation()).GetSafeNormal();
                            const FQuat BendFrame=FQuat::FindBetweenNormals(Forward,ReachAxis);
                            FVector Preferred=U.GetLocation()+BendFrame.RotateVector(Outward*.7-FVector::UpVector*.7)*100.;
                            const float Phase=Handling.reloadPhase;
                            // When closing the bolt, keep the forearm on the
                            // operating side of the stock instead of reaching
                            // up through it from the belt-pouch bend.
                            const FVector ClosingPole=U.GetLocation()+BendFrame.RotateVector(Outward*.9-FVector::UpVector*.15)*100.;
                            Preferred=FMath::Lerp(Preferred,ClosingPole,FMath::SmoothStep(.70f,.77f,Phase));
                            const float Contact=FMath::SmoothStep(.17f,.245f,Phase)*(1-FMath::SmoothStep(.94f,.99f,Phase));
                            Pole=FMath::Lerp(Pole,Preferred,Contact);
                        }
                    }
                    if(!MG&&Side==TEXT("Right")&&Handling.reloadPhase>=0) {
                        // Let the forearm support the pressing glove. The
                        // downward pouch-reach pole folds the wrist backwards
                        // when the thumb reaches the receiver on either body.
                        const auto Knuckle=index(TEXT("RightHandMiddle1"));
                        if(Knuckle.GetInt()>=0) {
                            const auto& SourceHand=StandingCS.GetComponentSpaceTransform(Hand);
                            const FVector AlongGlove=SourceHand.InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation()).GetSafeNormal();
                            const float UpperLength=FVector::Distance(U.GetLocation(),L.GetLocation());
                            const float ForearmLength=FVector::Distance(L.GetLocation(),H.GetLocation());
                            // During release the glove turns toward the bolt. Keep
                            // the supporting forearm on the authored press axis
                            // until the press layer fades, rather than following
                            // that new hand rotation across a bend singularity.
                            const FVector PressDirection=Profile?CS.GetComponentSpaceTransform(Socket).TransformVectorNoScale(Profile->ReloadPressDirection).GetSafeNormal():T.GetRotation().RotateVector(AlongGlove);
                            const FVector NaturalElbow=T.GetLocation()-PressDirection*ForearmLength;
                            const FVector Axis=(T.GetLocation()-U.GetLocation()).GetSafeNormal();
                            const float Distance=FMath::Clamp(float(FVector::Distance(T.GetLocation(),U.GetLocation())),FMath::Abs(UpperLength-ForearmLength)+.01f,UpperLength+ForearmLength-.01f);
                            const float Along=(UpperLength*UpperLength-ForearmLength*ForearmLength+Distance*Distance)/(2*Distance);
                            const FVector Center=U.GetLocation()+Axis*Along;
                            const float Radius=FMath::Sqrt(FMath::Max(0.f,UpperLength*UpperLength-Along*Along));
                            const auto OtherShoulder=index(TEXT("LeftArm"));
                            const FVector Outside=OtherShoulder.GetInt()>=0?(U.GetLocation()-CS.GetComponentSpaceTransform(OtherShoulder).GetLocation()).GetSafeNormal2D():FVector(-1,0,0);
                            FVector Up=FVector::UpVector-Axis*Axis.Z;
                            const float Phase=Handling.reloadPhase;
                            const float Press=FMath::SmoothStep(.405f,.52f,Phase)*(1-FMath::SmoothStep(.665f,.75f,Phase));
                            if(Press>SMALL_NUMBER&&Up.SizeSquared()>SMALL_NUMBER&&Radius>.01f) {
                                const float UpLength=Up.Size();Up.Normalize();
                                FVector Lateral=FVector::CrossProduct(Axis,Up).GetSafeNormal();
                                if(FVector::DotProduct(Lateral,Outside)<0)Lateral=-Lateral;
                                // Parameterize the anatomical outside half of the
                                // reach circle. A shortest quaternion arc can
                                // switch direction when the rotating glove takes
                                // its desired elbow across the opposite pole;
                                // the male release then jumped in one frame.
                                // Elevation on this single feasible interval has
                                // no wrap boundary and remains seek-independent.
                                const FVector Current=Pole-Center,Desired=NaturalElbow-Center;
                                const float CurrentAngle=FMath::Atan2(float(FVector::DotProduct(Current,Up)),FMath::Max(0.f,float(FVector::DotProduct(Current,Lateral))));
                                // When wrist and glove point along the reach axis,
                                // their projected elbow direction has zero length.
                                // Give that ambiguous pose a soft outward preference
                                // instead of letting infinitesimal motion choose
                                // opposite sides of the circle.
                                const float OutwardPreference=UpperLength*.35f;
                                float DesiredAngle=FMath::Atan2(float(FVector::DotProduct(Desired,Up)),FMath::Abs(float(FVector::DotProduct(Desired,Lateral)))+OutwardPreference);
                                const float Ceiling=(U.GetLocation().Z-UpperLength*.22f-Center.Z)/(Radius*UpLength);
                                DesiredAngle=FMath::Min(DesiredAngle,FMath::Asin(FMath::Clamp(Ceiling,-1.f,1.f)));
                                const float Angle=FMath::Lerp(CurrentAngle,DesiredAngle,Press);
                                Pole=Center+(Up*FMath::Sin(Angle)+Lateral*FMath::Cos(Angle))*100;
                            }
                        }
                    }
                }
                if(MG&&AuthoredHandling)Pole=FMath::Lerp(UnauthoredPole,Pole,AuthoredHandlingAlpha);
                const bool FitMGWrist=MG&&ArticulatedMG&&AuthoredHandling&&Side==TEXT("Left")&&Handling.reloadPhase>=0;
                if(FitMGWrist) {
                    const auto Other=index(TEXT("RightArm"));
                    const FVector Outward=(U.GetLocation()-CS.GetComponentSpaceTransform(Other).GetLocation()).GetSafeNormal2D();
                    const FVector Forward=CS.GetComponentSpaceTransform(Socket).GetUnitAxis(EAxis::Y).GetSafeNormal2D();
                    const FVector Axis=(T.GetLocation()-U.GetLocation()).GetSafeNormal();
                    const FQuat Transport=FQuat::FindBetweenNormals(Forward,Axis);
                    const FVector Stable=U.GetLocation()+Transport.RotateVector(Outward*.8-FVector::UpVector*.55)*100;
                    const float Phase=Handling.reloadPhase;
                    const float Weight=FMath::SmoothStep(.01f,.07f,Phase)*(1-FMath::SmoothStep(.94f,.99f,Phase));
                    Pole=FMath::Lerp(Pole,Stable,Weight);
                }
                AnimationCore::SolveTwoBoneIK(U,L,H,Pole,T.GetLocation(),false,1.,1.);
                H.SetRotation(T.GetRotation());
                if(FitMGWrist) {
                    // Preserve the authored surface contact while the actual
                    // forearm determines a feasible glove attitude. This avoids
                    // folding a large glove backward to meet a small lever.
                    const auto Knuckle=index(TEXT("LeftHandMiddle1")),Thumb=index(TEXT("LeftHandThumb1"));
                    const FTransform SourceHand=StandingCS.GetComponentSpaceTransform(Hand);
                    const FVector Forward=SourceHand.InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation()).GetSafeNormal();
                    FVector Across=SourceHand.InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Thumb).GetLocation());
                    Across=(Across-Forward*FVector::DotProduct(Across,Forward)).GetSafeNormal();
                    const FQuat HandBasis=FRotationMatrix::MakeFromXY(Across,Forward).ToQuat();
                    const FVector Palm=SourceHand.InverseTransformPosition(StandingCS.GetComponentSpaceTransform(Knuckle).GetLocation())*.65;
                    const FVector Contact=T.TransformPosition(Palm);
                    const FVector Normal=T.TransformVectorNoScale(FVector::CrossProduct(Across,Forward));
                    const FQuat Authored=T.GetRotation();
                    const float Phase=Handling.reloadPhase;
                    const float Weight=FMath::Max(FMath::SmoothStep(.015f,.07f,Phase)*(1-FMath::SmoothStep(.17f,.215f,Phase)),FMath::SmoothStep(.65f,.685f,Phase)*(1-FMath::SmoothStep(.94f,.99f,Phase)))*.95f;
                    for(int Iteration=0;Iteration<6&&Weight>0;++Iteration) {
                        const FVector Along=(Contact-L.GetLocation()).GetSafeNormal();
                        const FVector PlaneNormal=(Normal-Along*FVector::DotProduct(Normal,Along)).GetSafeNormal();
                        if(PlaneNormal.IsNearlyZero())break;
                        const FVector Lateral=FVector::CrossProduct(Along,PlaneNormal).GetSafeNormal();
                        const FQuat Natural=FRotationMatrix::MakeFromXY(Lateral,Along).ToQuat()*HandBasis.Inverse();
                        const FQuat Rotation=FQuat::Slerp(Authored,Natural,Weight);
                        T.SetRotation(Rotation);T.SetLocation(Contact-Rotation.RotateVector(Palm));
                        AnimationCore::SolveTwoBoneIK(U,L,H,Pole,T.GetLocation(),false,1.,1.);H.SetRotation(Rotation);
                    }
                    // Keep the required control at the final contact-preserving
                    // wrist so diagnostics and weapon attachment read the same pose.
                    CS.SafeSetCSBoneTransforms({FBoneTransform(Target,T)});
                }
                if(HandAlpha<1){U.Blend(OldU,U,HandAlpha);L.Blend(OldL,L,HandAlpha);H.Blend(OldH,H,HandAlpha);}
                TArray<FBoneTransform> Edits;Edits.Emplace(Upper,U);Edits.Emplace(Lower,L);Edits.Emplace(Hand,H);
                CS.SafeSetCSBoneTransforms(Edits);
            }
            for(auto I:Output.Pose.ForEachBoneIndex())Output.Pose[I]=CS.GetLocalSpaceTransform(I);
            Output.Pose.NormalizeRotations();
        }
        if(DeathEntryWeight>0&&!DeathEntryPose.IsEmpty()) {
            // Blend the fully evaluated armed pose, not only its bare locomotion
            // sample. Otherwise the gun, arm overlay and contact root disappear
            // on the first death frame before the body has begun its reaction.
            const auto& Bones=Output.Pose.GetBoneContainer();
            for(auto I:Output.Pose.ForEachBoneIndex()) {
                const int MeshIndex=Bones.MakeMeshPoseIndex(I).GetInt();
                if(DeathEntryPose.IsValidIndex(MeshIndex)) {
                    FTransform T;T.Blend(Output.Pose[I],DeathEntryPose[MeshIndex],DeathEntryWeight);Output.Pose[I]=T;
                }
            }
            Output.Pose.NormalizeRotations();
            // Local-space blending follows different chains for hands and gun
            // controls. Keep the grips until the authored release, using the
            // blended elbow plane instead of adding an unrelated arm pose.
            FCSPose<FCompactPose> CS;CS.InitPose(Output.Pose);
            auto Index=[&](const FString& N){return Bones.MakeCompactPoseIndex(FMeshPoseBoneIndex(Bones.GetPoseBoneIndexForBoneName(FName(N))));};
            for(int Side=0;Side<2&&Grip>0;++Side) {
                const FString Prefix=Side==0?TEXT("Left"):TEXT("Right");
                const auto U=Index(Prefix+TEXT("Arm")),L=Index(Prefix+TEXT("ForeArm")),H=Index(Prefix+TEXT("Hand"));
                const auto Target=Index(Side==0?TEXT("WeaponGrip_L"):TEXT("WeaponGrip_R"));
                if(U.GetInt()<0||L.GetInt()<0||H.GetInt()<0||Target.GetInt()<0)continue;
                auto UT=CS.GetComponentSpaceTransform(U),LT=CS.GetComponentSpaceTransform(L),HT=CS.GetComponentSpaceTransform(H);
                const auto OldU=UT,OldL=LT,OldH=HT,Goal=CS.GetComponentSpaceTransform(Target);
                AnimationCore::SolveTwoBoneIK(UT,LT,HT,LT.GetLocation(),Goal.GetLocation(),false,1.,1.);HT.SetRotation(Goal.GetRotation());
                UT.Blend(OldU,UT,Grip);LT.Blend(OldL,LT,Grip);HT.Blend(OldH,HT,Grip);
                CS.SafeSetCSBoneTransforms({FBoneTransform(U,UT),FBoneTransform(L,LT),FBoneTransform(H,HT)});
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
