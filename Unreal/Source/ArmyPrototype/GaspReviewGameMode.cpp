#include "GaspReviewGameMode.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "Engine/Canvas.h"
#include "Engine/DirectionalLight.h"
#include "Engine/SkyLight.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"
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
const TCHAR* ClipPaths[]={
    TEXT("Idle/M_Neutral_Stand_Idle_Loop"),TEXT("Walk/M_Neutral_Walk_Start_F_Lfoot"),
    TEXT("Walk/M_Neutral_Walk_Loop_F"),TEXT("Walk/M_Neutral_Walk_Stop_F_Lfoot"),
    TEXT("Walk/M_Neutral_Walk_Reface_Start_F_R_090"),TEXT("Run/M_Neutral_Run_Loop_F"),
    TEXT("Sprint/M_Neutral_Sprint_Loop_F"),TEXT("Idle/M_Neutral_Crouch_Idle_Loop"),
    TEXT("Crouch/M_Neutral_Crouch_Loop_F"),TEXT("Idle/M_Neutral_Stand_Turn_090_R")};
constexpr int ClipCount=UE_ARRAY_COUNT(ClipPaths);
}
AGaspReviewGameMode::AGaspReviewGameMode() {
    PrimaryActorTick.bCanEverTick=true;DefaultPawnClass=nullptr;HUDClass=AGaspReviewHUD::StaticClass();
}
void AGaspReviewGameMode::BeginPlay() {
    Super::BeginPlay();
    const TCHAR* MeshPaths[]={TEXT("/Game/Characters/UEFN_Mannequin/Meshes/SKM_UEFN_Mannequin"),
        TEXT("/Game/Characters/GASP/Bodies/SK_Female_GASP"),TEXT("/Game/Characters/GASP/Bodies/SK_Male_GASP")};
    for(int BodyIndex=0;BodyIndex<3;++BodyIndex) {
        auto* Actor=GetWorld()->SpawnActor<AActor>();
        auto* Body=NewObject<USkeletalMeshComponent>(Actor);Actor->SetRootComponent(Body);Body->RegisterComponent();
        Body->SetSkeletalMesh(LoadObject<USkeletalMesh>(nullptr,MeshPaths[BodyIndex]));
        if(!Body->GetSkeletalMeshAsset()){UE_LOG(LogTemp,Error,TEXT("GASP review missing mesh"));return;}
        Body->SetDisablePostProcessBlueprint(true);
        Body->SetAnimationMode(EAnimationMode::AnimationSingleNode);
        Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        Body->VisibilityBasedAnimTickOption=EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
        Body->SetComponentTickEnabled(false);Bodies.Add(Body);
        for(const TCHAR* ClipPath:ClipPaths) {
            const FString Name=FPaths::GetCleanFilename(ClipPath);
            const FString Path=BodyIndex==0?FString(TEXT("/Game/Characters/UEFN_Mannequin/Animations/"))+ClipPath:
                FString(TEXT("/Game/Characters/GASP/"))+(BodyIndex==1?TEXT("Female/"):TEXT("Male/"))+TEXT("GASP_")+Name;
            auto* Motion=LoadObject<UAnimSequence>(nullptr,*Path);
            if(!Motion){UE_LOG(LogTemp,Error,TEXT("GASP review missing clip %s"),*Path);return;}
            // The sample clips enable root-motion extraction. For this review,
            // retain their raw root orientation so turns are visible, then center
            // only XY translation below. Transient copies never change source assets.
            Motion=DuplicateObject<UAnimSequence>(Motion,GetTransientPackage());
            Motion->bEnableRootMotion=false;Motion->bForceRootLock=false;
            Motions.Add(Motion);
        }
    }
    auto* Floor=GetWorld()->SpawnActor<AStaticMeshActor>(FVector(0,0,-6),FRotator::ZeroRotator);
    Floor->GetStaticMeshComponent()->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Engine/BasicShapes/Cube")));
    Floor->SetActorScale3D(FVector(30,30,.1));
    auto* Sun=GetWorld()->SpawnActor<ADirectionalLight>(FVector::ZeroVector,FRotator(-45,-75,0));
    Sun->GetLightComponent()->SetMobility(EComponentMobility::Movable);
    Sun->GetLightComponent()->SetIntensity(3);CastChecked<UDirectionalLightComponent>(Sun->GetLightComponent())->ForwardShadingPriority=1;Sun->GetLightComponent()->MarkRenderStateDirty();
    auto* Fill=GetWorld()->SpawnActor<ADirectionalLight>(FVector::ZeroVector,FRotator(-25,100,0));
    Fill->GetLightComponent()->SetMobility(EComponentMobility::Movable);
    Fill->GetLightComponent()->SetIntensity(1.1f);Fill->GetLightComponent()->SetCastShadows(false);
    auto* Sky=GetWorld()->SpawnActor<ASkyLight>();
    auto* Ambient=Sky->GetLightComponent();Ambient->SourceType=SLS_SpecifiedCubemap;
    Ambient->SetMobility(EComponentMobility::Movable);
    Ambient->Cubemap=LoadObject<UTextureCube>(nullptr,TEXT("/Engine/MapTemplates/Sky/DaylightAmbientCubemap.DaylightAmbientCubemap"));
    Ambient->bLowerHemisphereIsBlack=false;Ambient->SetIntensity(.7f);Ambient->SetCastShadows(false);Ambient->MarkRenderStateDirty();
    const FVector Center(0,0,95);
    auto* Camera=GetWorld()->SpawnActor<ACameraActor>(Center+FVector(160,1050,180),FRotator::ZeroRotator);
    Camera->SetActorRotation((Center-Camera->GetActorLocation()).Rotation());
    Camera->GetCameraComponent()->ProjectionMode=ECameraProjectionMode::Orthographic;
    Camera->GetCameraComponent()->OrthoWidth=850;
    auto& PP=Camera->GetCameraComponent()->PostProcessSettings;
    PP.bOverride_AutoExposureMinBrightness=PP.bOverride_AutoExposureMaxBrightness=true;
    PP.AutoExposureMinBrightness=PP.AutoExposureMaxBrightness=1;
    PP.bOverride_MotionBlurAmount=true;PP.MotionBlurAmount=0;
    GetWorld()->GetFirstPlayerController()->SetViewTarget(Camera);
    Ready=true;
}
void AGaspReviewGameMode::Tick(float DeltaSeconds) {
    Super::Tick(DeltaSeconds);Elapsed+=DeltaSeconds;
    if(!Ready){if(Elapsed>15)FPlatformMisc::RequestExitWithStatus(false,1);return;}
    const bool Capture=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewCapture"));
    const bool Still=FParse::Param(FCommandLine::Get(),TEXT("ArmyGaspReviewStill"));
    if(Capture&&FScreenshotRequest::IsScreenshotRequested())return;
    int Requested=-1;FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspClip="),Requested);
    // Original clip seconds: no time stretching to make short and long clips equal.
    // Idle is sampled for three seconds; every other clip plays in full.
    TArray<int> SegmentFrames;
    int TotalFrames=0;
    for(int I=0;I<ClipCount;++I) {
        const float Duration=(I==0||I==7)?3.f:Motions[I]->GetPlayLength();
        SegmentFrames.Add(FMath::CeilToInt(Duration*30));TotalFrames+=SegmentFrames.Last();
    }
    int Frame=Capture?CaptureFrame:FMath::FloorToInt(Elapsed*30);
    int Clip=Requested>=0?FMath::Clamp(Requested,0,ClipCount-1):0;
    if(Requested>=0)Frame%=SegmentFrames[Clip];
    else {Frame%=TotalFrames;while(Frame>=SegmentFrames[Clip])Frame-=SegmentFrames[Clip++];}
    const float ClipTime=Still?Motions[Clip]->GetPlayLength()*.45f:Frame/30.f;
    ClipLabel=FPaths::GetCleanFilename(ClipPaths[Clip]);
    for(int B=0;B<Bodies.Num();++B) {
        auto* Body=Bodies[B].Get();auto* Motion=Motions[B*ClipCount+Clip].Get();
        if(CurrentClip!=Clip)Body->SetAnimation(Motion);
        auto* Instance=Body->GetSingleNodeInstance();
        Instance->SetPosition(FMath::Min(ClipTime,Motion->GetPlayLength()),false);
        Body->TickAnimation(0,false);Body->RefreshBoneTransforms();
        // Center horizontal root travel for an anatomy comparison, preserving vertical motion.
        const FVector Root=Body->GetComponentSpaceTransforms()[0].GetTranslation();
        Body->SetWorldLocation(FVector((B-1)*240-Root.X,-Root.Y,0));
        for(const FTransform& Bone:Body->GetComponentSpaceTransforms())if(Bone.ContainsNaN()) {
            UE_LOG(LogTemp,Error,TEXT("GASP review non-finite bone"));Ready=false;return;
        }
    }
    CurrentClip=Clip;
    if(Capture&&Elapsed>3) {
        FString Dir=FPaths::ProjectSavedDir()/TEXT("Screenshots/GaspReview");
        FParse::Value(FCommandLine::Get(),TEXT("ArmyGaspCaptureDir="),Dir);
        IFileManager::Get().MakeDirectory(*Dir,true);
        const int Frames=Still?1:(Requested>=0?SegmentFrames[Clip]:TotalFrames);
        if(CaptureFrame>=Frames) {
            FFileHelper::SaveStringToFile(TEXT("Captured retarget anatomy study. Root centered; original playback speed; cuts between clips. Not a transition/foot-lock acceptance test.\n"),*(Dir/TEXT("capture-complete.txt")));
            FPlatformMisc::RequestExit(false);return;
        }
        FScreenshotRequest::RequestScreenshot(Dir/FString::Printf(TEXT("gasp-%04d.png"),CaptureFrame),true,false);++CaptureFrame;
    }
}
void AGaspReviewHUD::DrawHUD() {
    Super::DrawHUD();const auto* Mode=GetWorld()->GetAuthGameMode<AGaspReviewGameMode>();if(!Mode||!Canvas)return;
    DrawText(TEXT("GASP 5.8 | RETARGET ANATOMY STUDY"),FLinearColor::White,30,25,nullptr,1.25f);
    DrawText(Mode->Ready?Mode->ClipLabel:TEXT("Loading / missing assets - inspect log"),FLinearColor(.6f,.85f,1.f),30,55);
    DrawText(TEXT("Original speed | root centered | cuts between clips | transitions and weapons pending"),FLinearColor(.8f,.8f,.8f),30,82);
    const TCHAR* Labels[]={TEXT("EPIC SOURCE"),TEXT("FEMALE SOLDIER"),TEXT("MALE SOLDIER")};
    for(int I=0;I<3;++I)DrawText(Labels[I],FLinearColor::White,Canvas->SizeX*(.22f+.28f*I)-60,Canvas->SizeY-65,nullptr,1.1f);
}
