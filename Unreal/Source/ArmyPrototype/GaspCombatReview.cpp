#include "GaspCombatReview.h"
#include "SoldierVisual.h"
#include "MachineGunMechanism.h"
#include "SoldierClothComponent.h"
#include "SoldierAnimInstance.h"
#include "SoldierMotionInstance.h"
#include "WeaponAnimationProfile.h"
#include "Animation/AnimSequence.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Engine/Canvas.h"
#include "Engine/DirectionalLight.h"
#include "Engine/SkyLight.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureCube.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformMisc.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "UnrealClient.h"
#if WITH_EDITOR
#include "AssetCompilingManager.h"
#include "ShaderCompiler.h"
#endif
namespace {
constexpr int TotalFrames=46*30;
bool HoldCrouch=false;
double ReloadBegin=30,ReloadFinish=34;
float Smooth(float X){return FMath::SmoothStep(0.f,1.f,X);}
float Ramp(float T,float Start,float End,float Rate){return Rate*(Smooth((T-Start)/.5f)-Smooth((T-End)/.5f));}
FVector Velocity(double Time) {
    const float T=float(Time);
    return FVector(Ramp(T,2,5,165)+Ramp(T,13,19,350)+Ramp(T,16,19,150)+Ramp(T,34,37,140)+Ramp(T,40,41.7f,130),
        Ramp(T,9,12,160)+Ramp(T,22,24,90),0);
}
FVector Position(double Time) {
    // Integrate this test course at the same fixed step used by the planner.
    static TArray<FVector> Points;
    if(Points.IsEmpty()) {Points.Add(FVector::ZeroVector);for(int I=1;I<TotalFrames+61;++I)Points.Add(Points.Last()+Velocity((I-.5)/30.)/30.);}
    const double F=FMath::Clamp(Time*30,0.,double(Points.Num()-1));
    const int A=FMath::FloorToInt(F),B=FMath::Min(A+1,Points.Num()-1);
    return FMath::Lerp(Points[A],Points[B],F-A);
}
float Yaw(double Time) {return 90*Smooth(float((Time-7)/1.5))-90*Smooth(float((Time-12)/1.));}
armyvisual::State State(double T,bool MG) {
    armyvisual::State S;const FVector V=Velocity(T);const float Angle=FMath::DegreesToRadians(Yaw(T));
    S.forward=float(V.X*FMath::Cos(Angle)+V.Y*FMath::Sin(Angle))/100;
    S.right=float(-V.X*FMath::Sin(Angle)+V.Y*FMath::Cos(Angle))/100;
    S.crouch=Smooth(float((T-21)/.45))-(HoldCrouch?0:Smooth(float((T-25)/.45)));S.phase=T;
    S.aim=Smooth(float((T-25.4)/.6))-Smooth(float((T-38)/.55));S.handling.machineGun=MG;
    S.handling.sprinting=T>=16&&T<19;S.handling.coveredPath=T>=9&&T<12;
    S.handling.winded=T>=38;S.handling.staminaAvailable=true;S.handling.stamina=T>=19?.15f:1.f;
    S.handling.movingFire=T>=34&&T<38;
    // Retain the latest event after a burst ends so recovery is not cut off.
    for(const double Begin:{26.,34.}) {
        const double End=Begin==26?(MG?30.:29.7):38.;
        for(double Shot=Begin;Shot<End;Shot+=MG?.12:1.25)
            if(Shot<=T+.000001&&!(Shot>=ReloadBegin&&Shot<ReloadFinish))S.handling.lastShot=Shot;
    }
    S.handling.reloadStart=ReloadBegin;S.handling.reloadEnd=ReloadFinish;
    if(T>=40&&T<42.2){S.handling.vaulting=true;S.handling.vaultProgress=float((T-40)/2.2);S.handling.vaultHeight=1;}
    if(T>=40)S.handling.vaultLandsAt=42.2;
    if(T>=44)S.outAt=44;
    return S;
}
FString Stage(double T) {
    if(T>=ReloadBegin&&T<ReloadFinish)return TEXT("Reload / reacquire");
    if(T<2)return TEXT("Ready");if(T<7)return TEXT("Walk / stop");if(T<9)return TEXT("Turn in place");
    if(T<13)return TEXT("Covered path / directional movement");if(T<16)return TEXT("Run");if(T<21)return TEXT("Sprint / decelerate");
    if(T<26)return TEXT("Crouch / move / rise");if(T<30)return TEXT("Aim / fire / recoil / bolt");
    if(T<34)return TEXT("Reload / reacquire");if(T<38)return TEXT("Moving fire");if(T<40)return TEXT("Winded recovery");
    if(T<42.2)return TEXT("Vault / free hand contact");if(T<44)return TEXT("Land / recover");return TEXT("Death / weapon drop");
}
FVector Offset(int I){return FVector(0,(I-1.5)*230,0);}
}
AGaspCombatReview::AGaspCombatReview(){PrimaryActorTick.bCanEverTick=true;DefaultPawnClass=nullptr;HUDClass=AGaspCombatReviewHUD::StaticClass();}
void AGaspCombatReview::BeginPlay() {
    Super::BeginPlay();
    HoldCrouch=FParse::Param(FCommandLine::Get(),TEXT("ArmyHoldCrouch"));
    FParse::Value(FCommandLine::Get(),TEXT("ArmyReloadBegin="),ReloadBegin);
    FParse::Value(FCommandLine::Get(),TEXT("ArmyReloadFinish="),ReloadFinish);
    if(ReloadBegin<0||ReloadFinish<=ReloadBegin||ReloadFinish>44){UE_LOG(LogTemp,Error,TEXT("Invalid review reload interval"));FPlatformMisc::RequestExitWithStatus(false,1);return;}
    FParse::Value(FCommandLine::Get(),TEXT("ArmySourceClip="),SourceClipName);
    for(int I=0;I<4;++I) {
        auto* V=GetWorld()->SpawnActor<ASoldierVisual>();
        if(!V->Initialize(0,I>=2,(I%2)==1)||!V->UsesGasp()){UE_LOG(LogTemp,Error,TEXT("Armed GASP review requires complete motion assets"));return;}
        Soldiers.Add(V);
        if(!SourceClipName.IsEmpty()) {
            const FString Family=I>=2?TEXT("Male"):TEXT("Female");
            const FString Folder=SourceClipName.StartsWith(TEXT("A_"))?TEXT("Legacy/")+Family+TEXT("/"):TEXT("Motion/")+Family+TEXT("/Animations/");
            auto* Clip=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/")+Folder+SourceClipName));
            if(!Clip){UE_LOG(LogTemp,Error,TEXT("Missing audit source %s"),*SourceClipName);return;}
            SourceClips.Add(Clip);
            V->SetCoatDetail(false); // Raw skeletal pose; no cloth from the scripted review state.
        }
    }
    auto* Floor=GetWorld()->SpawnActor<AStaticMeshActor>(FVector(2000,1000,-6),FRotator::ZeroRotator);
    Floor->GetStaticMeshComponent()->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Cube")));Floor->SetActorScale3D(FVector(120,120,.1));
    auto* FloorMat=UMaterialInstanceDynamic::Create(LoadObject<UMaterialInterface>(nullptr,TEXT("/Engine/BasicShapes/BasicShapeMaterial")),Floor);
    FloorMat->SetVectorParameterValue(TEXT("Color"),FLinearColor(.16f,.19f,.23f));Floor->GetStaticMeshComponent()->SetMaterial(0,FloorMat);
    // Fixed one-metre ground marks make a tracking-camera render useful for
    // judging planted feet. They are visual guides and never collision surfaces.
    auto* GridBase=LoadObject<UMaterialInterface>(nullptr,TEXT("/Game/Characters/FemaleRifle/M_femaleazureblackleather"));
    auto* GridMat=UMaterialInstanceDynamic::Create(GridBase?GridBase:FloorMat->GetMaterial(),Floor);
    GridMat->SetVectorParameterValue(TEXT("Tint"),FLinearColor(.12f,.145f,.17f));
    for(int Axis=0;Axis<2;++Axis)for(int N=-20;N<=60;++N) {
        const FVector At=Axis?FVector(2000,N*100,-.7):FVector(N*100,2000,-.7);
        auto* Mark=GetWorld()->SpawnActor<AStaticMeshActor>(At,FRotator::ZeroRotator);
        Mark->GetStaticMeshComponent()->SetStaticMesh(Floor->GetStaticMeshComponent()->GetStaticMesh());
        Mark->GetStaticMeshComponent()->SetMaterial(0,GridMat);
        Mark->GetStaticMeshComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        Mark->GetStaticMeshComponent()->SetCastShadow(false);
        Mark->SetActorScale3D(Axis?FVector(80,.012,.001):FVector(.012,80,.001));
    }
    for(int I=0;I<4;++I) {
        Soldiers[I]->SetTraversalLandmarks(Position(40)+Offset(I),Position(42.2)+Offset(I));
        const FVector Center=(Position(40)+Position(42.2))*.5+Offset(I)+FVector(0,0,50);
        auto* Wall=GetWorld()->SpawnActor<AStaticMeshActor>(Center,FRotator::ZeroRotator);
        ReviewObstacles.Add(Wall);
        Wall->GetStaticMeshComponent()->SetStaticMesh(Floor->GetStaticMeshComponent()->GetStaticMesh());Wall->SetActorScale3D(FVector(.2,1.1,1));
        auto* Mat=UMaterialInstanceDynamic::Create(FloorMat->GetMaterial(),Wall);Mat->SetVectorParameterValue(TEXT("Color"),FLinearColor(.2f,.25f,.3f));Wall->GetStaticMeshComponent()->SetMaterial(0,Mat);
    }
    if(SourceClipName.IsEmpty()) {
    FString Report=TEXT("frame,body,weapon,stage,wrist_error_cm,foot_min_z,weapon_yaw_deg,selected_motion\n");
    float Worst=0,Reconstruction=0,AimError=0,RootError=0,PlantError=0,BoltError=0,ReloadError=0,BoxError=0,MGCoverError=0,MGChargeError=0;FString Queries;
    int BoltSamples[4]={},ReloadSamples[4]={},BoxSamples[4]={},MGCoverSamples[4]={},MGChargeSamples[4]={};bool AuthoredAssetsPresent=true;
    for(const auto& Soldier:Soldiers) {
        const auto* V=Soldier.Get();
        AuthoredAssetsPresent&=V->AuthoredWeaponReload!=nullptr&&(V->IsMachineGun||(V->AuthoredWeaponShot!=nullptr&&V->AuthoredWeaponCarry!=nullptr));
    }
    FVector PreviousFeet[4][2],PreviousHips[4],PreviousRawFeet[4][2],PreviousRawHips[4];float CrouchFootStep=0,CrouchHipStep=0;
    FString Continuity=TEXT("frame,body,weapon,crouch_foot_step_cm,crouch_hip_step_cm,raw_foot_step_cm,raw_hip_step_cm,pose\n");
    FVector PreviousElbows[4][2];float ReloadElbowStep=0,ReloadSurfaceError=0;
    FString ArmContinuity=TEXT("frame,body,weapon,reload_phase,left_elbow_step_cm,right_elbow_step_cm\n");
    FString ArmGeometry=TEXT("frame,body,weapon,bone,x,y,z\n");
    FString BoxContacts=TEXT("frame,body,phase,error_cm,palm,dock,hand,shoulder\n");
    int ClothVertices=0;bool ClothFinite=true;
    const double Start=FPlatformTime::Seconds();
    for(int F=0;F<=TotalFrames;++F)for(int I=0;I<4;++I) {
        const double T=F/30.;auto* V=Soldiers[I].Get();
        FTransformTrajectory Trajectory;
        for(float Dt:{-1.f,-.6f,-.4f,-.2f,0.f,.1f,.2f,.3f,.4f,.5f,.6f,.7f,.8f,.9f,1.f,1.1f,1.2f,1.3f}) {
            FTransformTrajectorySample P;P.TimeInSeconds=Dt;const double At=T-1./30+Dt;
            P.Position=Position(At)+Offset(I);P.Facing=FRotator(0,Yaw(At)-90,0).Quaternion();Trajectory.Samples.Add(P);
        }
        const FTransform Transform(FRotator(0,Yaw(T),0),Position(T)+Offset(I));
        V->SetActorTransform(Transform);
        if(!V->AdvanceMotion(T>=21&&(HoldCrouch||T<25),Transform,Trajectory,T>=16&&T<19,true,T>=34&&T<38))return;
        V->Present(State(T,V->IsMachineGun),T);
        auto* Coat=CastChecked<USoldierClothComponent>(V->Body);
        ClothFinite&=Coat->CoatIsFinite();
        if(F==0)ClothVertices+=Coat->CoatVertexCount();
        auto* CurrentAnim=CastChecked<USoldierAnimInstance>(V->Body->GetAnimInstance());
        if(F==960&&!V->IsMachineGun) {
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("RightHandMiddle1")),.65);
            UE_LOG(LogTemp,Display,TEXT("RELOAD_GEOMETRY body=%d phase=%.3f contact=%.3f visible=%.3f palm_in_gun=%s wrist_in_gun=%s"),I,CurrentAnim->Handling.reloadPhase,CurrentAnim->Handling.reloadContact,CurrentAnim->Handling.clip,*V->Rifle->GetComponentTransform().InverseTransformPosition(Palm).ToString(),*V->Rifle->GetComponentTransform().InverseTransformPosition(V->Body->GetSocketLocation(TEXT("RightHand"))).ToString());
        }
        const FVector Elbows[]={V->Body->GetSocketTransform(TEXT("LeftForeArm"),RTS_Component).GetLocation(),
                                V->Body->GetSocketTransform(TEXT("RightForeArm"),RTS_Component).GetLocation()};
        if(F>0&&(CurrentAnim->Handling.reloadPhase>=0||(T>=ReloadBegin-.15&&T<=ReloadFinish+.15))) {
            const double LeftStep=FVector::Distance(Elbows[0],PreviousElbows[I][0]);
            const double RightStep=FVector::Distance(Elbows[1],PreviousElbows[I][1]);
            ReloadElbowStep=FMath::Max(ReloadElbowStep,float(FMath::Max(LeftStep,RightStep)));
            ArmContinuity+=FString::Printf(TEXT("%d,%s,%s,%.6f,%.6f,%.6f\n"),F,I>=2?TEXT("male"):TEXT("female"),I%2?TEXT("MG"):TEXT("rifle"),CurrentAnim->Handling.reloadPhase,LeftStep,RightStep);
            for(const TCHAR* Bone:{TEXT("Hips"),TEXT("Spine"),TEXT("Spine2"),TEXT("LeftArm"),TEXT("LeftForeArm"),TEXT("LeftHand"),TEXT("WeaponGrip_L"),TEXT("RightArm"),TEXT("RightForeArm"),TEXT("RightHand")}) {
                const FVector P=V->Body->GetSocketTransform(Bone,RTS_Component).GetLocation();
                ArmGeometry+=FString::Printf(TEXT("%d,%s,%s,%s,%.6f,%.6f,%.6f\n"),F,I>=2?TEXT("male"):TEXT("female"),I%2?TEXT("MG"):TEXT("rifle"),Bone,P.X,P.Y,P.Z);
            }
        }
        for(int J=0;J<2;++J)PreviousElbows[I][J]=Elbows[J];
        const FVector Feet[]={V->Body->GetSocketTransform(TEXT("LeftFoot"),RTS_Component).GetLocation(),V->Body->GetSocketTransform(TEXT("RightFoot"),RTS_Component).GetLocation()};
        const FVector Hip=V->Body->GetSocketTransform(TEXT("Hips"),RTS_Component).GetLocation();
        FVector RawFeet[2]={FVector::ZeroVector,FVector::ZeroVector},RawHip=FVector::ZeroVector;
        if(T>=21&&T<25) {
            const auto SavedGrip=CurrentAnim->GripAlpha;const bool SavedContacts=CurrentAnim->ContactsEnabled,SavedRoot=CurrentAnim->RootOffsetEnabled;
            CurrentAnim->GripAlpha=0;CurrentAnim->ContactsEnabled=false;CurrentAnim->RootOffsetEnabled=false;
            V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
            RawFeet[0]=V->Body->GetSocketTransform(TEXT("LeftFoot"),RTS_Component).GetLocation();RawFeet[1]=V->Body->GetSocketTransform(TEXT("RightFoot"),RTS_Component).GetLocation();
            RawHip=V->Body->GetSocketTransform(TEXT("Hips"),RTS_Component).GetLocation();
            CurrentAnim->GripAlpha=SavedGrip;CurrentAnim->ContactsEnabled=SavedContacts;CurrentAnim->RootOffsetEnabled=SavedRoot;
            V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
        }
        if(F>0&&T>=21.5&&T<24.9) {
            const float FootStep=FMath::Max(float(FVector::Distance(Feet[0],PreviousFeet[I][0])),float(FVector::Distance(Feet[1],PreviousFeet[I][1])));
            const float HipStep=float(FVector::Distance(Hip,PreviousHips[I]));
            CrouchFootStep=FMath::Max(CrouchFootStep,FootStep);CrouchHipStep=FMath::Max(CrouchHipStep,HipStep);
            const float RawFootStep=FMath::Max(float(FVector::Distance(RawFeet[0],PreviousRawFeet[I][0])),float(FVector::Distance(RawFeet[1],PreviousRawFeet[I][1])));
            Continuity+=FString::Printf(TEXT("%d,%s,%s,%.6f,%.6f,%.6f,%.6f,%s\n"),F,I>=2?TEXT("male"):TEXT("female"),I%2?TEXT("MG"):TEXT("rifle"),FootStep,HipStep,RawFootStep,float(FVector::Distance(RawHip,PreviousRawHips[I])),*V->PoseDescription());
        }
        for(int J=0;J<2;++J)PreviousFeet[I][J]=Feet[J];PreviousHips[I]=Hip;
        if(T>=21&&T<25){for(int J=0;J<2;++J)PreviousRawFeet[I][J]=RawFeet[J];PreviousRawHips[I]=RawHip;}
        if(CurrentAnim->VaultPlant>.999f)PlantError=FMath::Max(PlantError,float(FVector::Distance(V->Body->GetSocketTransform(TEXT("LeftHand"),RTS_Component).GetLocation(),CurrentAnim->VaultHandTarget)));
        if(!V->IsMachineGun&&V->EquipmentProfile&&CurrentAnim->Handling.boltContact>.999f) {
            ++BoltSamples[I];
            const FVector Palm=CurrentAnim->AuthoredHandling?
                (V->Body->GetSocketLocation(TEXT("RightHandThumb4"))+V->Body->GetSocketLocation(TEXT("RightHandIndex4")))*.5:
                FMath::Lerp(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("RightHandMiddle1")),.65);
            FVector MeshKnob=V->EquipmentProfile->BoltKnob;
            MeshKnob.X=FMath::Abs(MeshKnob.X); // Component scale supplies the operating-side reflection.
            BoltError=FMath::Max(BoltError,float(FVector::Distance(Palm,V->Bolt->GetComponentTransform().TransformPosition(MeshKnob))));
        }
        if(!V->IsMachineGun&&V->EquipmentProfile&&CurrentAnim->Handling.reloadContact>.999f&&CurrentAnim->Handling.clip>0) {
            ++ReloadSamples[I];
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("RightHandMiddle1")),.65);
            const FVector Clip=V->Rifle->GetComponentTransform().TransformPosition(V->EquipmentProfile->ReloadClipPosition(CurrentAnim->Handling.reloadPhase));
            ReloadError=FMath::Max(ReloadError,float(FVector::Distance(Clip,V->ReloadProp->GetComponentLocation())));
            if(CurrentAnim->ArticulatedRiflePouch) {
                // This action changes from pinching the rail to pressing the
                // top cartridge. Check the actual fingertip after that regrip.
                if(CurrentAnim->Handling.reloadPhase>=.535f) {
                    const FVector Top=Clip+V->Rifle->GetComponentTransform().TransformVectorNoScale(FVector(0,0,V->EquipmentProfile->ReloadStackHalfHeight));
                    ReloadError=FMath::Max(ReloadError,float(FVector::Distance(V->Body->GetSocketLocation(TEXT("RightHandThumb4")),Top)));
                    if(V->ReloadProp->GetStaticMesh()) {
                        const FBox Bounds=V->ReloadProp->GetStaticMesh()->GetBoundingBox();
                        const FVector Surface=V->ReloadProp->GetComponentTransform().TransformPosition(FVector(Bounds.Min.X,0,0));
                        ReloadSurfaceError=FMath::Max(ReloadSurfaceError,float(FVector::Distance(V->Body->GetSocketLocation(TEXT("RightHandThumb4")),Surface)));
                    }
                }
            } else ReloadError=FMath::Max(ReloadError,float(FVector::Distance(Palm,Clip+V->Rifle->GetComponentTransform().TransformVectorNoScale(V->EquipmentProfile->ReloadPalmOffset))));
        }
        if(V->IsMachineGun&&CurrentAnim->AuthoredHandling&&CurrentAnim->Handling.reloadPhase>=.225f&&CurrentAnim->Handling.reloadPhase<=.60f&&V->ReloadProp->IsVisible()) {
            ++BoxSamples[I];
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("LeftHand")),V->Body->GetSocketLocation(TEXT("LeftHandMiddle1")),.65);
            const FVector Dock=V->ReloadProp->GetComponentTransform().TransformPosition(V->EquipmentProfile->AmmunitionBoxGrip);
            BoxError=FMath::Max(BoxError,float(FVector::Distance(Palm,Dock)));
            BoxContacts+=FString::Printf(TEXT("%d,%d,%.4f,%.4f,%s,%s,%s,%s\n"),F,I,CurrentAnim->Handling.reloadPhase,float(FVector::Distance(Palm,Dock)),*Palm.ToString(),*Dock.ToString(),*V->Body->GetSocketLocation(TEXT("LeftHand")).ToString(),*V->Body->GetSocketLocation(TEXT("LeftArm")).ToString());
        }
        if(V->IsMachineGun&&V->MGFeedCover->GetStaticMesh()&&CurrentAnim->Handling.reloadPhase>=0) {
            const float U=CurrentAnim->Handling.reloadPhase;
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("LeftHand")),V->Body->GetSocketLocation(TEXT("LeftHandMiddle1")),.65);
            if((U>=.09f&&U<=.155f)||(U>=.775f&&U<=.83f)) {
                ++MGCoverSamples[I];
                const FVector Contact=V->MGFeedCover->GetComponentTransform().TransformPosition(FVector(-5.5,-12.8,0));
                MGCoverError=FMath::Max(MGCoverError,float(FVector::Distance(Palm,Contact)));
            }
            if(U>=.875f&&U<=.935f) {
                ++MGChargeSamples[I];
                const FVector Contact=V->Bolt->GetComponentTransform().TransformPosition(FVector(-.7,0,0));
                MGChargeError=FMath::Max(MGChargeError,float(FVector::Distance(Palm,Contact)));
            }
        }
        // Compare cached native-stack reconstruction before applying weapon layers.
        if(F%30==0) {
            if(I==0)Queries+=FString::Printf(TEXT("frame=%d "),F)+CastChecked<USoldierMotionInstance>(V->MotionDriver->GetAnimInstance())->DescribeQuery();
            auto* Anim=CastChecked<USoldierAnimInstance>(V->Body->GetAnimInstance());
            const float Grip=Anim->GripAlpha;Anim->GripAlpha=0;V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
            // Traversal/landing intentionally replace locomotion. Everywhere
            // else, verify the cached orientation and knee planes as well.
            if(T<40||(T>=42.85&&T<44))for(const FName Bone:{FName(TEXT("Hips")),FName(TEXT("Spine")),FName(TEXT("Spine2")),FName(TEXT("LeftLeg")),FName(TEXT("RightLeg")),FName(TEXT("LeftFoot")),FName(TEXT("RightFoot"))}) {
                Reconstruction=FMath::Max(Reconstruction,float(FVector::Distance(V->Body->GetSocketLocation(Bone),V->MotionDriver->GetSocketLocation(Bone))));
            }
            Anim->GripAlpha=Grip;V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
        }
        for(const auto& Bone:V->Body->GetComponentSpaceTransforms())if(Bone.ContainsNaN()){UE_LOG(LogTemp,Error,TEXT("Non-finite GASP combat pose"));return;}
        const float Grip=T>=44?0:T>=40&&T<42.2?float(FVector::Distance(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("WeaponGrip_R")))):V->GripError();Worst=FMath::Max(Worst,Grip);
        const float WeaponYaw=FMath::FindDeltaAngleDegrees(Yaw(T),V->Rifle->GetComponentTransform().TransformVectorNoScale(FVector::RightVector).Rotation().Yaw);
        // Check the firing instant. Bolt/reload intentionally leave the sight
        // line; requiring the muzzle to aim throughout would forbid handling.
        if(T>=26&&T<30&&FMath::Abs(T-State(T,V->IsMachineGun).handling.lastShot)<.0001)AimError=FMath::Max(AimError,FMath::Abs(WeaponYaw));
        RootError=FMath::Max(RootError,V->MotionFrames.Last().Root.GetTranslation().Size());
        if(F%6==0) {
            const auto& Samples=V->MotionFrames.Last().Samples;
            const FString Selected=Samples.IsEmpty()?TEXT("none"):Samples.Last().Sequence->GetName();
            Report+=FString::Printf(TEXT("%d,%s,%s,%s,%.5f,%.5f,%.5f,%s\n"),F,I>=2?TEXT("male"):TEXT("female"),I%2?TEXT("MG"):TEXT("rifle"),*Stage(T),Grip,
                FMath::Min(V->Body->GetSocketLocation(TEXT("LeftFoot")).Z,V->Body->GetSocketLocation(TEXT("RightFoot")).Z),FMath::FindDeltaAngleDegrees(Yaw(T),V->Rifle->GetComponentTransform().TransformVectorNoScale(FVector::RightVector).Rotation().Yaw),*Selected);
        }
    }
    bool SeekEqual=true,QueryPreservesPose=true;
    for(int J=0;J<Soldiers.Num();++J)for(double At:{28.45,40.7,41.5,42.3}) {
        auto* Visual=Soldiers[J].Get();
        auto PresentAt=[&](double T){Visual->SetActorTransform(FTransform(FRotator(0,Yaw(T),0),Position(T)+Offset(J)));Visual->Present(State(T,Visual->IsMachineGun),T);};
        PresentAt(At);const auto Before=Visual->Body->GetComponentSpaceTransforms();const FTransform BeforeActor=Visual->GetActorTransform();
        const uint32 BeforeCloth=CastChecked<USoldierClothComponent>(Visual->Body)->CoatSignature();
        const FVector Muzzle=Visual->SampleMuzzle(nullptr,J,State(4.25,Visual->IsMachineGun),4.25,FTransform(FRotator(0,Yaw(4.25),0),Position(4.25)+Offset(J)));
        QueryPreservesPose&=!Muzzle.ContainsNaN()&&BeforeActor.Equals(Visual->GetActorTransform(),.00001)&&BeforeCloth==CastChecked<USoldierClothComponent>(Visual->Body)->CoatSignature();
        for(int I=0;I<Before.Num();++I)QueryPreservesPose&=Before[I].Equals(Visual->Body->GetComponentSpaceTransforms()[I],.00001);
        PresentAt(4.25);PresentAt(At);
        for(int I=0;I<Before.Num();++I)SeekEqual&=Before[I].Equals(Visual->Body->GetComponentSpaceTransforms()[I],.00001);
        SeekEqual&=BeforeActor.Equals(Visual->GetActorTransform(),.00001);
    }
    const FString Folder=FPaths::ProjectSavedDir()/TEXT("AnimationReview");IFileManager::Get().MakeDirectory(*Folder,true);
    FFileHelper::SaveStringToFile(Report,*(Folder/TEXT("gasp-combat.csv")));
    FFileHelper::SaveStringToFile(Queries,*(Folder/TEXT("gasp-queries.txt")));
    FFileHelper::SaveStringToFile(Continuity,*(Folder/TEXT("gasp-crouch-continuity.csv")));
    FFileHelper::SaveStringToFile(ArmContinuity,*(Folder/TEXT("gasp-arm-continuity.csv")));
    FFileHelper::SaveStringToFile(ArmGeometry,*(Folder/TEXT("gasp-arm-geometry.csv")));
    FFileHelper::SaveStringToFile(BoxContacts,*(Folder/TEXT("gasp-box-contacts.csv")));
    const bool ContactsExercised=BoltSamples[0]>0&&BoltSamples[2]>0&&ReloadSamples[0]>0&&ReloadSamples[2]>0&&BoxSamples[1]>0&&BoxSamples[3]>0&&MGCoverSamples[1]>0&&MGCoverSamples[3]>0&&MGChargeSamples[1]>0&&MGChargeSamples[3]>0;
    const bool Passed=AuthoredAssetsPresent&&ContactsExercised&&SeekEqual&&QueryPreservesPose&&Worst<2&&Reconstruction<.2&&AimError<1&&RootError<12.01&&ClothFinite&&ClothVertices>0&&PlantError<2&&BoltError<1&&ReloadError<1&&ReloadSurfaceError<.3f&&BoxError<1&&MGCoverError<1&&MGChargeError<1;
    const FString Summary=FString::Printf(TEXT("frames=%d bodies=4 worst_wrist_cm=%.6f native_stack_reconstruction_cm=%.6f seek_equal=%d generation_seconds=%.3f aim_error_deg=%.5f root_offset_cm=%.3f cloth_vertices=%d cloth_finite=%d vault_plant_cm=%.4f query_preserves_pose=%d bolt_contact_cm=%.4f passed=%d\n"),TotalFrames+1,Worst,Reconstruction,int(SeekEqual),FPlatformTime::Seconds()-Start,AimError,RootError,ClothVertices,int(ClothFinite),PlantError,int(QueryPreservesPose),BoltError,int(Passed));
    const FString FullSummary=FString::Printf(TEXT("authored_assets=%d contacts_exercised=%d bolt_samples=%d,%d reload_samples=%d,%d mg_box_samples=%d,%d mg_box_contact_cm=%.4f crouch_foot_step_cm=%.4f crouch_hip_step_cm=%.4f reload_contact_cm=%.4f reload_surface_gap_cm=%.4f reload_elbow_step_cm=%.4f "),int(AuthoredAssetsPresent),int(ContactsExercised),BoltSamples[0],BoltSamples[2],ReloadSamples[0],ReloadSamples[2],BoxSamples[1],BoxSamples[3],BoxError,CrouchFootStep,CrouchHipStep,ReloadError,ReloadSurfaceError,ReloadElbowStep)+FString::Printf(TEXT("mg_cover_contact_cm=%.4f mg_charge_contact_cm=%.4f mg_cover_samples=%d,%d mg_charge_samples=%d,%d "),MGCoverError,MGChargeError,MGCoverSamples[1],MGCoverSamples[3],MGChargeSamples[1],MGChargeSamples[3])+Summary;
    FFileHelper::SaveStringToFile(FullSummary,*(Folder/TEXT("gasp-combat-check.txt")));UE_LOG(LogTemp,Display,TEXT("GASP_COMBAT_CHECK %s"),*FullSummary);
    if(FParse::Param(FCommandLine::Get(),TEXT("ArmyMotionValidate"))){FPlatformMisc::RequestExitWithStatus(false,Passed?0:1);return;}
    }
    auto* Sun=GetWorld()->SpawnActor<ADirectionalLight>(FVector::ZeroVector,FRotator(-45,-75,0));
    Sun->GetLightComponent()->SetMobility(EComponentMobility::Movable);Sun->GetLightComponent()->SetIntensity(3);
    CastChecked<UDirectionalLightComponent>(Sun->GetLightComponent())->ForwardShadingPriority=1;Sun->GetLightComponent()->MarkRenderStateDirty();
    auto* Fill=GetWorld()->SpawnActor<ADirectionalLight>(FVector::ZeroVector,FRotator(-25,100,0));
    Fill->GetLightComponent()->SetMobility(EComponentMobility::Movable);Fill->GetLightComponent()->SetIntensity(1.1f);Fill->GetLightComponent()->SetCastShadows(false);
    auto* Sky=GetWorld()->SpawnActor<ASkyLight>();auto* Ambient=Sky->GetLightComponent();
    Ambient->SourceType=SLS_SpecifiedCubemap;Ambient->SetMobility(EComponentMobility::Movable);
    Ambient->Cubemap=LoadObject<UTextureCube>(nullptr,TEXT("/Engine/MapTemplates/Sky/DaylightAmbientCubemap.DaylightAmbientCubemap"));
    Ambient->bLowerHemisphereIsBlack=false;Ambient->SetIntensity(.7f);Ambient->SetCastShadows(false);Ambient->MarkRenderStateDirty();
    Camera=GetWorld()->SpawnActor<ACameraActor>();Camera->GetCameraComponent()->ProjectionMode=ECameraProjectionMode::Orthographic;
    Camera->GetCameraComponent()->OrthoWidth=1150;
    auto& PP=Camera->GetCameraComponent()->PostProcessSettings;PP.bOverride_AutoExposureMinBrightness=PP.bOverride_AutoExposureMaxBrightness=true;
    PP.AutoExposureMinBrightness=PP.AutoExposureMaxBrightness=1;PP.bOverride_MotionBlurAmount=true;PP.MotionBlurAmount=0;
    GetWorld()->GetFirstPlayerController()->SetViewTarget(Camera);
#if WITH_EDITOR
    // A capture must not record cached/fallback materials while a changed shader
    // or imported static mesh is still compiling asynchronously.
    if(FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewCapture"))) {
        FAssetCompilingManager::Get().FinishAllCompilation();
        if(GShaderCompilingManager)GShaderCompilingManager->FinishAllCompilation();
    }
#endif
    Ready=true;
}
void AGaspCombatReview::Tick(float Dt) {
    Super::Tick(Dt);Elapsed+=Dt;
    if(!Ready){if(Elapsed>15)FPlatformMisc::RequestExitWithStatus(false,1);return;}
    const bool Capture=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewCapture"));
#if WITH_EDITOR
    if(Capture&&(FAssetCompilingManager::Get().GetNumRemainingAssets()>0||
        (GShaderCompilingManager&&GShaderCompilingManager->IsCompiling())))return;
#endif
    if(Capture&&FScreenshotRequest::IsScreenshotRequested())return;
    const bool Still=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewStill"));
    float RequestedTime=27;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspTime="),RequestedTime);
    float StartTime=0,EndTime=46;
    FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspStart="),StartTime);
    FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspEnd="),EndTime);
    EndTime=FMath::Clamp(EndTime,StartTime+1.f/30,46.f);
    const double T=Still?RequestedTime:StartTime+(Capture?Frame/30.:FMath::Fmod(double(Elapsed),double(EndTime-StartTime)));
    for(const auto& Obstacle:ReviewObstacles)Obstacle->SetActorHiddenInGame(T<39);
    for(int I=0;I<4;++I){auto* V=Soldiers[I].Get();V->SetActorTransform(FTransform(FRotator(0,Yaw(T),0),Position(T)+Offset(I)));V->Present(State(T,V->IsMachineGun),T);}
    Label=Stage(T);FVector Center=Position(T)+FVector(0,0,95);
    if(!SourceClips.IsEmpty()) {
        for(int I=0;I<4;++I) {
            auto* V=Soldiers[I].Get();auto* Anim=CastChecked<USoldierAnimInstance>(V->Body->GetAnimInstance());
            auto* Clip=SourceClips[I].Get();Anim->Samples.Reset();
            FArmyPoseSample Sample;Sample.Sequence=Clip;Sample.Time=FMath::Fmod(T,Clip->GetPlayLength());Sample.Weight=1;Sample.ExtractRoot=true;Anim->Samples.Add(Sample);
            Anim->ContactsEnabled=false;Anim->RootOffsetEnabled=false;Anim->VaultPlant=0;Anim->GripAlpha=0;
            V->SetActorTransform(FTransform(FRotator::ZeroRotator,Offset(I)));
            V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
            FTransform Gun=V->Body->GetSocketTransform(TEXT("WeaponSocket_R"));Gun.SetScale3D(FVector::OneVector);V->Rifle->SetWorldTransform(Gun);
            V->Rifle->SetVisibility(SourceClipName.StartsWith(TEXT("A_")));V->Bolt->SetVisibility(false);V->ReloadProp->SetVisibility(false);
        }
        Label=TEXT("RAW SOURCE | ")+SourceClipName;Center=FVector(0,0,95);
    }
    int Body=-1;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspReviewBody="),Body);
    if(Body>=0&&Body<4) {
        Center+=Offset(Body);
        float Width=390,FocusHeight=95;
        FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCameraWidth="),Width);
        FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspFocusHeight="),FocusHeight);
        Center.Z+=FocusHeight-95;Camera->GetCameraComponent()->OrthoWidth=FMath::Clamp(Width,80.f,600.f);
        float Angle=43;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCameraYaw="),Angle);
        const float Radians=FMath::DegreesToRadians(Angle);
        float Height=130;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCameraHeight="),Height);
        Camera->SetActorLocation(Center+FVector(950*FMath::Cos(Radians),950*FMath::Sin(Radians),Height));
        for(int I=0;I<4;++I)Soldiers[I]->SetActorHiddenInGame(I!=Body);
    } else Camera->SetActorLocation(Center+FVector(1100,260,240));
    Camera->SetActorRotation((Center-Camera->GetActorLocation()).Rotation());
    if(Capture&&Elapsed>3) {
        FString Dir=FPaths::ProjectSavedDir()/TEXT("Screenshots/GaspCombat");FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCaptureDir="),Dir);
        IFileManager::Get().MakeDirectory(*Dir,true);
        if(Frame>=(Still?1:FMath::CeilToInt((EndTime-StartTime)*30))){FFileHelper::SaveStringToFile(TEXT("Animation diagnostic capture. Visual approval is separate.\n"),*(Dir/TEXT("capture-complete.txt")));FPlatformMisc::RequestExit(false);return;}
        FScreenshotRequest::RequestScreenshot(Dir/FString::Printf(TEXT("combat-%04d.png"),Frame),true,false);++Frame;
    }
}
void AGaspCombatReviewHUD::DrawHUD(){
    Super::DrawHUD();const auto* M=GetWorld()->GetAuthGameMode<AGaspCombatReview>();if(!M||!Canvas)return;
    DrawText(TEXT("GASP | ARMED MOTION REVIEW"),FLinearColor::White,30,25,nullptr,1.3f);
    DrawText(M->Ready?M->Label:TEXT("Preparing continuous motion decisions"),FLinearColor(.6,.85,1),30,58);
    DrawText(TEXT("Male machine gun / Male rifle / Female machine gun / Female rifle"),FLinearColor::White,30,Canvas->SizeY-45);
    if(FParse::Param(FCommandLine::Get(),TEXT("ArmyContactMarkers"))) {
        DrawText(TEXT("DIAGNOSTIC: projected bone tips, including occluded points"),FLinearColor::Yellow,30,85);
        int Body=0;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspReviewBody="),Body);
        if(M->Soldiers.IsValidIndex(Body)) {
            const auto* V=M->Soldiers[Body].Get();
            const TCHAR* Digits[]={TEXT("Thumb"),TEXT("Index"),TEXT("Middle")};
            const FLinearColor Colors[]={FLinearColor::Red,FLinearColor::Yellow,FLinearColor(0,.8,1)};
            for(int D=0;D<3;++D) {
                FVector Previous;
                for(int J=1;J<=4;++J) {
                    const FVector P=Canvas->Project(V->Body->GetSocketLocation(FName(FString::Printf(TEXT("RightHand%s%d"),Digits[D],J))));
                    if(J>1)DrawLine(Previous.X,Previous.Y,P.X,P.Y,Colors[D],2);
                    DrawRect(Colors[D],P.X-2,P.Y-2,4,4);Previous=P;
                }
                DrawText(Digits[D],Colors[D],Previous.X+12,Previous.Y-45+D*23);
            }
            if(!V->IsMachineGun&&V->ReloadProp->GetStaticMesh()) {
                // +90 degrees around local Y makes the mesh's minimum X the
                // top cartridge. Display its actual surface independently of
                // the profile contact target, even when the glove hides it.
                const FBox Bounds=V->ReloadProp->GetStaticMesh()->GetBoundingBox();
                const FVector P=Canvas->Project(V->ReloadProp->GetComponentTransform().TransformPosition(FVector(Bounds.Min.X,0,0)));
                DrawRect(FLinearColor::Green,P.X-3,P.Y-3,6,6);
                DrawText(TEXT("Top cartridge surface"),FLinearColor::Green,P.X+15,P.Y+20);
            }
        }
    }
}
