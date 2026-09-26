#pragma once
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimRootMotionProvider.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"

// A bounded, fixed-step presentation root. The battle actor remains at its
// recorded transform; only the skeleton absorbs small motion/trajectory errors.
// Unlike folded editor-only anim-node fields, these settings also exist in a
// native runtime instance. Its output is saved with the replay pose cache.
struct FArmyRootOffset final: FAnimNode_Base {
    FPoseLink Source;
    FTransform WorldRoot=FTransform::Identity,PreviousComponent=FTransform::Identity;
    float Dt=0,DeltaCentimetres=0;
    bool Initialized=false;
    virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override {
        Initialized=false;Source.Initialize(Context);
    }
    virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override {Source.CacheBones(Context);}
    virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override {Dt=Context.GetDeltaTime();Source.Update(Context);}
    virtual void Evaluate_AnyThread(FPoseContext& Output) override {
        Source.Evaluate(Output);
        const FTransform Component=Output.AnimInstanceProxy->GetComponentTransform();
        FTransform Delta=FTransform::Identity;
        if(const auto* Provider=UE::Anim::IAnimRootMotionProvider::Get())Provider->ExtractRootMotion(Output.CustomAttributes,Delta);
        DeltaCentimetres=float(Delta.GetTranslation().Size());
        if(!Initialized||FVector::Distance(Component.GetLocation(),PreviousComponent.GetLocation())>100) {
            WorldRoot=Component;Initialized=true;
        } else {
            WorldRoot=Delta*WorldRoot;
            const FVector Travel=Component.GetLocation()-PreviousComponent.GetLocation();
            const float HalfLife=Travel.SizeSquared()>.01?.12f:.08f;
            FVector Offset=(WorldRoot.GetLocation()-Component.GetLocation())*FMath::Pow(.5f,Dt/HalfLife);
            Offset.Z=0;Offset=Offset.GetClampedToMaxSize(12);
            // Keep the cosmetic root out of adjacent walls without moving the
            // soldier or informing any simulation decision.
            if(!Offset.IsNearlyZero()) {
                auto* Mesh=Output.AnimInstanceProxy->GetSkelMeshComponent();
                FCollisionQueryParams Params(SCENE_QUERY_STAT(SoldierRootOffset),false,Mesh->GetOwner());
                FHitResult Hit;const FVector Start=Component.GetLocation()+FVector(0,0,70);
                if(Mesh->GetWorld()->SweepSingleByChannel(Hit,Start,Start+Offset,FQuat::Identity,ECC_Visibility,FCollisionShape::MakeSphere(15),Params))Offset*=FMath::Max(0.f,Hit.Time-.05f);
            }
            WorldRoot.SetLocation(Component.GetLocation()+Offset);
            const float Error=FMath::FindDeltaAngleDegrees(Component.Rotator().Yaw,WorldRoot.Rotator().Yaw);
            const float Yaw=FMath::Clamp(Error,-55.f,55.f)*FMath::Pow(.5f,Dt/.18f);
            WorldRoot.SetRotation(FRotator(0,Component.Rotator().Yaw+Yaw,0).Quaternion());
        }
        PreviousComponent=Component;
        const FTransform Offset=WorldRoot.GetRelativeTransform(Component);
        Output.Pose[FCompactPoseBoneIndex(0)]=Output.Pose[FCompactPoseBoneIndex(0)]*Offset;
        Output.Pose.NormalizeRotations();
    }
};
