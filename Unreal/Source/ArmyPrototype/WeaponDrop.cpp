#include "WeaponDrop.h"
#include "WeaponAnimationProfile.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "Engine/OverlapResult.h"
#include "Components/PrimitiveComponent.h"
#include "Physics/ImmediatePhysics/ImmediatePhysicsSimulation.h"
#include "Physics/ImmediatePhysics/ImmediatePhysicsActorHandle.h"
#include "Physics/ImmediatePhysics/ImmediatePhysicsAdapters.h"
#include "Chaos/Convex.h"
#include "Chaos/Collision/CollisionContext.h"
#include "Chaos/ChaosPhysicalMaterial.h"

bool FWeaponDrop::Build(AActor* Owner,const UWeaponAnimationProfile* Profile,
    const FTransform& Release,const FTransform& Before,double SampleInterval) {
    Frames.Reset();CollisionBodies=0;
    if(!Owner||!Profile||Profile->DropHull.Num()<4||SampleInterval<=0)return false;
    TArray<Chaos::FConvex::FVec3Type> Points;
    for(const FVector& P:Profile->DropHull)Points.Add(Chaos::FConvex::FVec3Type(P));
    TArray<Chaos::FConvex::FPlaneType> Planes;
    TArray<TArray<int32>> Faces;TArray<Chaos::FConvex::FVec3Type> Vertices;
    Chaos::FConvex::FAABB3Type Bounds;
    Chaos::FConvexBuilder::Build(Points,Planes,Faces,Vertices,Bounds,Chaos::FConvexBuilder::ConvexHull3);
    // Keep the exact hull. FConvex's convenience constructor merges faces at
    // a 1 cm tolerance, which can cut into narrow barrels, crystals and feet.
    Chaos::FConvexPtr Hull(new Chaos::FConvex(MoveTemp(Planes),MoveTemp(Faces),MoveTemp(Vertices)));
    double Omission=0;for(const auto& P:Points){Chaos::FVec3 Normal;Omission=FMath::Max(Omission,double(Hull->PhiWithNormal(Chaos::FVec3(P),Normal)));}
    UE_LOG(LogTemp,Display,TEXT("DROP hull %s omission_cm=%.6f"),*Profile->GetName(),Omission);
    if(Omission>.01)return false;
    if(Hull->GetVolume()<=0){UE_LOG(LogTemp,Warning,TEXT("DROP invalid hull %s volume=%f"),*Profile->GetName(),Hull->GetVolume());return false;}
    ImmediatePhysics::FSimulation Simulation;
    Simulation.SetSolverSettings(Step,2,1000,1,16,4,2,1);
    auto Detector=Simulation.GetCollisionDetectorSettings();
    Detector.bAllowCCD=true;Detector.BoundsVelocityInflation=1;Detector.MaxVelocityBoundsExpansion=50;
    Simulation.SetCollisionDetectorSettings(Detector);
    Simulation.SetUseMinStepTime(false);Simulation.SetUseFixedStepTolerance(false);
    ImmediatePhysics::FActorSetup Setup;
    Setup.ActorType=ImmediatePhysics::EActorType::DynamicActor;
    Setup.Transform=Release;Setup.Geometry=Hull;
    Setup.Mass=FMath::Max(1.f,Profile->DropMassKg);
    // The exact triangulated constructor uses a bounds-volume approximation.
    // Compute mass properties from the point-cloud constructor, which integrates
    // the closed hull before face simplification; geometry stays exact above.
    Chaos::FConvexPtr MassHull(new Chaos::FConvex(Points,0,Chaos::FConvexBuilder::ConvexHull3));
    const auto Inertia=MassHull->GetInertiaTensor(Setup.Mass);
    Setup.Inertia=FVector(Inertia.M[0][0],Inertia.M[1][1],Inertia.M[2][2]);
    Setup.CoMTransform=FTransform(MassHull->GetRotationOfMass(),MassHull->GetCenterOfMass());
    Setup.LinearDamping=.08;Setup.AngularDamping=.18;
    Setup.Material=MakeUnique<Chaos::FChaosPhysicsMaterial>();
    Setup.Material->Friction=.65;Setup.Material->StaticFriction=.8;
    Setup.Material->Restitution=.08;
    auto* Weapon=Simulation.CreateActor(MoveTemp(Setup));
    if(!Weapon)return false;
    Simulation.SetEnabled(Weapon,true);Weapon->SetCCDEnabled(true);
    const FVector Centre=MassHull->GetCenterOfMass();
    Weapon->SetLinearVelocity((Release.TransformPosition(Centre)-Before.TransformPosition(Centre))/SampleInterval);
    FQuat Delta=Release.GetRotation()*Before.GetRotation().Inverse();
    if(Delta.W<0)Delta=Delta*-1.;
    FVector Axis;double Angle;Delta.ToAxisAndAngle(Axis,Angle);
    Weapon->SetAngularVelocity(Axis*(Angle/SampleInterval));
    TArray<FOverlapResult> Overlaps;
    FCollisionQueryParams Params(SCENE_QUERY_STAT(ArmyWeaponDrop),false,Owner);
    Owner->GetWorld()->OverlapMultiByChannel(Overlaps,Release.GetLocation(),FQuat::Identity,
        ECC_WorldStatic,FCollisionShape::MakeSphere(600),Params,FCollisionResponseParams(ECR_Overlap));
    TSet<const FBodyInstance*> Added;
    for(const auto& Hit:Overlaps)if(auto* Component=Hit.GetComponent()) {
        auto* Body=Component->GetBodyInstance(NAME_None,false,Hit.ItemIndex);
        if(Component->GetOwner()==Owner||!Body||!Body->IsValidBodyInstance()||Added.Contains(Body))continue;
        // World colliders are sampled at release. They cannot impart impulses
        // back into gameplay, and later replay queries see the same snapshot.
        // Body transforms omit scale. The adapter rebuilds simple collision
        // from BodySetup and needs the actual instance scale (including ISMs).
        FTransform World=Body->GetUnrealWorldTransform();World.SetScale3D(Body->Scale3D);
        auto* Collider=Simulation.CreateActor(ImmediatePhysics::MakeKinematicActorSetup(Body,World));
        if(Collider){Simulation.AddToCollidingPairs(Collider);++CollisionBodies;Added.Add(Body);}
    }
    if(CollisionBodies==0){UE_LOG(LogTemp,Warning,TEXT("DROP no colliders %s overlaps=%d release=%s"),*Profile->GetName(),Overlaps.Num(),*Release.GetLocation().ToString());return false;}
    Frames.Add(Release);
    int Quiet=0;
    for(int I=1;I<=FMath::RoundToInt(6./Step);++I) {
        Simulation.Simulate(Step,Step,1,FVector(0,0,Owner->GetWorld()->GetGravityZ()));
        const auto Pose=Weapon->GetWorldTransform();
        if(Pose.ContainsNaN()){Frames.Reset();return false;}
        Frames.Add(Pose);
        const bool Settled=Weapon->GetLinearVelocity().SizeSquared()<.25&&Weapon->GetAngularVelocity().SizeSquared()<.0001;
        Quiet=Settled?Quiet+1:0;
        if(Quiet>=FMath::RoundToInt(.5/Step))break;
    }
    return true;
}

FTransform FWeaponDrop::Sample(double Age) const {
    if(Frames.IsEmpty())return FTransform::Identity;
    const double F=FMath::Clamp(Age/Step,0.,double(Frames.Num()-1));
    const int A=FMath::FloorToInt(F),B=FMath::Min(A+1,Frames.Num()-1);
    FTransform Result;Result.Blend(Frames[A],Frames[B],F-FMath::FloorToDouble(F));return Result;
}
