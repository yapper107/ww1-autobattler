#include "GaspCombatReview.h"
#include "SoldierVisual.h"
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
namespace {
constexpr int TotalFrames=46*30;
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
    S.crouch=Smooth(float((T-21)/.45))-Smooth(float((T-25)/.45));S.phase=T;
    S.aim=(T>=26&&T<38)?1.f:0.f;S.handling.machineGun=MG;
    S.handling.sprinting=T>=16&&T<19;S.handling.coveredPath=T>=9&&T<12;
    S.handling.winded=T>=38;S.handling.staminaAvailable=true;S.handling.stamina=T>=19?.15f:1.f;
    S.handling.movingFire=T>=34&&T<38;
    if(T>=26&&T<30)S.handling.lastShot=MG?26+FMath::FloorToDouble((T-26)/.12)*.12:26+FMath::FloorToDouble((T-26)/1.25)*1.25;
    if(T>=34&&T<38)S.handling.lastShot=MG?34+FMath::FloorToDouble((T-34)/.12)*.12:34+FMath::FloorToDouble((T-34)/1.25)*1.25;
    S.handling.reloadStart=30;S.handling.reloadEnd=34;
    if(T>=40&&T<42.2){S.handling.vaulting=true;S.handling.vaultProgress=float((T-40)/2.2);S.handling.vaultHeight=1;}
    if(T>=44)S.outAt=44;
    return S;
}
FString Stage(double T) {
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
    for(int I=0;I<4;++I) {
        auto* V=GetWorld()->SpawnActor<ASoldierVisual>();
        if(!V->Initialize(0,I>=2,(I%2)==1)||!V->UsesGasp()){UE_LOG(LogTemp,Error,TEXT("Armed GASP review requires complete motion assets"));return;}
        Soldiers.Add(V);
    }
    auto* Floor=GetWorld()->SpawnActor<AStaticMeshActor>(FVector(2000,1000,-6),FRotator::ZeroRotator);
    Floor->GetStaticMeshComponent()->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Cube")));Floor->SetActorScale3D(FVector(120,120,.1));
    auto* FloorMat=UMaterialInstanceDynamic::Create(LoadObject<UMaterialInterface>(nullptr,TEXT("/Engine/BasicShapes/BasicShapeMaterial")),Floor);
    FloorMat->SetVectorParameterValue(TEXT("Color"),FLinearColor(.16f,.19f,.23f));Floor->GetStaticMeshComponent()->SetMaterial(0,FloorMat);
    for(int I=0;I<4;++I) {
        Soldiers[I]->SetTraversalLandmarks(Position(40)+Offset(I),Position(42.2)+Offset(I));
        const FVector Center=(Position(40)+Position(42.2))*.5+Offset(I)+FVector(0,0,50);
        auto* Wall=GetWorld()->SpawnActor<AStaticMeshActor>(Center,FRotator::ZeroRotator);
        Wall->GetStaticMeshComponent()->SetStaticMesh(Floor->GetStaticMeshComponent()->GetStaticMesh());Wall->SetActorScale3D(FVector(.2,1.1,1));
        auto* Mat=UMaterialInstanceDynamic::Create(FloorMat->GetMaterial(),Wall);Mat->SetVectorParameterValue(TEXT("Color"),FLinearColor(.2f,.25f,.3f));Wall->GetStaticMeshComponent()->SetMaterial(0,Mat);
    }
    FString Report=TEXT("frame,body,weapon,stage,wrist_error_cm,foot_min_z,weapon_yaw_deg,selected_motion\n");
    float Worst=0,Reconstruction=0,AimError=0,RootError=0,PlantError=0,BoltError=0,ReloadError=0;FString Queries;
    int ClothVertices=0;bool ClothFinite=true;
    const double Start=FPlatformTime::Seconds();
    for(int F=0;F<=TotalFrames;++F)for(int I=0;I<4;++I) {
        const double T=F/30.;auto* V=Soldiers[I].Get();
        FTransformTrajectory Trajectory;
        for(float Dt:{-1.f,-.6f,-.4f,-.2f,0.f,.2f,.4f,.7f,1.f,1.3f}) {
            FTransformTrajectorySample P;P.TimeInSeconds=Dt;const double At=T-1./30+Dt;
            P.Position=Position(At)+Offset(I);P.Facing=FRotator(0,Yaw(At)-90,0).Quaternion();Trajectory.Samples.Add(P);
        }
        const FTransform Transform(FRotator(0,Yaw(T),0),Position(T)+Offset(I));
        V->SetActorTransform(Transform);
        if(!V->AdvanceMotion(T>=21&&T<25,Transform,Trajectory,T>=16&&T<19))return;
        V->Present(State(T,V->IsMachineGun),T);
        auto* Coat=CastChecked<USoldierClothComponent>(V->Body);
        ClothFinite&=Coat->CoatIsFinite();
        if(F==0)ClothVertices+=Coat->CoatVertexCount();
        auto* CurrentAnim=CastChecked<USoldierAnimInstance>(V->Body->GetAnimInstance());
        if(CurrentAnim->VaultPlant>.999f)PlantError=FMath::Max(PlantError,float(FVector::Distance(V->Body->GetSocketTransform(TEXT("LeftHand"),RTS_Component).GetLocation(),CurrentAnim->VaultHandTarget)));
        if(!V->IsMachineGun&&V->EquipmentProfile&&CurrentAnim->Handling.boltContact>.999f) {
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("RightHandMiddle1")),.65);
            BoltError=FMath::Max(BoltError,float(FVector::Distance(Palm,V->Bolt->GetComponentTransform().TransformPosition(V->EquipmentProfile->BoltKnob))));
        }
        if(!V->IsMachineGun&&V->EquipmentProfile&&CurrentAnim->Handling.reloadContact>.999f&&CurrentAnim->Handling.clip>0) {
            const FVector Palm=FMath::Lerp(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("RightHandMiddle1")),.65);
            const FVector Clip=V->Rifle->GetComponentTransform().TransformPosition(V->EquipmentProfile->ReloadClipPosition(CurrentAnim->Handling.reloadPhase));
            ReloadError=FMath::Max(ReloadError,float(FVector::Distance(Clip,V->ReloadProp->GetComponentLocation())));
            ReloadError=FMath::Max(ReloadError,float(FVector::Distance(Palm,Clip+V->Rifle->GetComponentTransform().TransformVectorNoScale(FVector(0,0,3)))));
        }
        // Compare cached native-stack reconstruction before applying weapon layers.
        if(F%30==0) {
            if(I==0)Queries+=FString::Printf(TEXT("frame=%d "),F)+CastChecked<USoldierMotionInstance>(V->MotionDriver->GetAnimInstance())->DescribeQuery();
            auto* Anim=CastChecked<USoldierAnimInstance>(V->Body->GetAnimInstance());
            const float Grip=Anim->GripAlpha;Anim->GripAlpha=0;V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
            if(T<40||(T>=42.2&&T<44))for(const FName Bone:{FName(TEXT("Hips")),FName(TEXT("LeftFoot")),FName(TEXT("RightFoot"))}) {
                Reconstruction=FMath::Max(Reconstruction,float(FVector::Distance(V->Body->GetSocketLocation(Bone),V->MotionDriver->GetSocketLocation(Bone))));
            }
            Anim->GripAlpha=Grip;V->Body->TickAnimation(0,false);V->Body->RefreshBoneTransforms();
        }
        for(const auto& Bone:V->Body->GetComponentSpaceTransforms())if(Bone.ContainsNaN()){UE_LOG(LogTemp,Error,TEXT("Non-finite GASP combat pose"));return;}
        const float Grip=T>=44?0:T>=40&&T<42.2?float(FVector::Distance(V->Body->GetSocketLocation(TEXT("RightHand")),V->Body->GetSocketLocation(TEXT("WeaponGrip_R")))):V->GripError();Worst=FMath::Max(Worst,Grip);
        const float WeaponYaw=FMath::FindDeltaAngleDegrees(Yaw(T),V->Rifle->GetComponentTransform().TransformVectorNoScale(FVector::RightVector).Rotation().Yaw);
        if(T>=26&&T<30)AimError=FMath::Max(AimError,FMath::Abs(WeaponYaw));
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
    const bool Passed=SeekEqual&&QueryPreservesPose&&Worst<2&&Reconstruction<.2&&AimError<1&&RootError<12.01&&ClothFinite&&ClothVertices>0&&PlantError<2&&BoltError<1&&ReloadError<1;
    const FString Summary=FString::Printf(TEXT("frames=%d bodies=4 worst_wrist_cm=%.6f native_stack_reconstruction_cm=%.6f seek_equal=%d generation_seconds=%.3f aim_error_deg=%.5f root_offset_cm=%.3f cloth_vertices=%d cloth_finite=%d vault_plant_cm=%.4f query_preserves_pose=%d bolt_contact_cm=%.4f passed=%d\n"),TotalFrames+1,Worst,Reconstruction,int(SeekEqual),FPlatformTime::Seconds()-Start,AimError,RootError,ClothVertices,int(ClothFinite),PlantError,int(QueryPreservesPose),BoltError,int(Passed));
    const FString FullSummary=FString::Printf(TEXT("reload_contact_cm=%.4f "),ReloadError)+Summary;
    FFileHelper::SaveStringToFile(FullSummary,*(Folder/TEXT("gasp-combat-check.txt")));UE_LOG(LogTemp,Display,TEXT("GASP_COMBAT_CHECK %s"),*FullSummary);
    if(FParse::Param(FCommandLine::Get(),TEXT("ArmyMotionValidate"))){FPlatformMisc::RequestExitWithStatus(false,Passed?0:1);return;}
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
    GetWorld()->GetFirstPlayerController()->SetViewTarget(Camera);Ready=true;
}
void AGaspCombatReview::Tick(float Dt) {
    Super::Tick(Dt);Elapsed+=Dt;
    if(!Ready){if(Elapsed>15)FPlatformMisc::RequestExitWithStatus(false,1);return;}
    const bool Capture=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewCapture"));
    if(Capture&&FScreenshotRequest::IsScreenshotRequested())return;
    const bool Still=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewStill"));
    float RequestedTime=27;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspTime="),RequestedTime);
    const double T=Still?RequestedTime:(Capture?Frame/30.:FMath::Fmod(double(Elapsed),46.));
    for(int I=0;I<4;++I){auto* V=Soldiers[I].Get();V->SetActorTransform(FTransform(FRotator(0,Yaw(T),0),Position(T)+Offset(I)));V->Present(State(T,V->IsMachineGun),T);}
    Label=Stage(T);FVector Center=Position(T)+FVector(0,0,95);
    int Body=-1;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspReviewBody="),Body);
    if(Body>=0&&Body<4) {
        Center+=Offset(Body);Camera->GetCameraComponent()->OrthoWidth=390;
        Camera->SetActorLocation(Center+FVector(700,650,130));
        for(int I=0;I<4;++I)Soldiers[I]->SetActorHiddenInGame(I!=Body);
    } else Camera->SetActorLocation(Center+FVector(1100,260,240));
    Camera->SetActorRotation((Center-Camera->GetActorLocation()).Rotation());
    if(Capture&&Elapsed>3) {
        FString Dir=FPaths::ProjectSavedDir()/TEXT("Screenshots/GaspCombat");FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCaptureDir="),Dir);
        IFileManager::Get().MakeDirectory(*Dir,true);
        if(Frame>=(Still?1:TotalFrames)){FFileHelper::SaveStringToFile(TEXT("Continuous GASP motion with armed soldiers.\n"),*(Dir/TEXT("capture-complete.txt")));FPlatformMisc::RequestExit(false);return;}
        FScreenshotRequest::RequestScreenshot(Dir/FString::Printf(TEXT("combat-%04d.png"),Frame),true,false);++Frame;
    }
}
void AGaspCombatReviewHUD::DrawHUD(){
    Super::DrawHUD();const auto* M=GetWorld()->GetAuthGameMode<AGaspCombatReview>();if(!M||!Canvas)return;
    DrawText(TEXT("GASP | ARMED MOTION REVIEW"),FLinearColor::White,30,25,nullptr,1.3f);
    DrawText(M->Ready?M->Label:TEXT("Preparing continuous motion decisions"),FLinearColor(.6,.85,1),30,58);
    DrawText(TEXT("Male machine gun / Male rifle / Female machine gun / Female rifle"),FLinearColor::White,30,Canvas->SizeY-45);
}
