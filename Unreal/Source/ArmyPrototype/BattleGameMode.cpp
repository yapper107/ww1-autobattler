#include "BattleGameMode.h"
#include "Sim/ReactionSim.h"
#include "Sim/Diagnostics.h"
#include "Sim/ManeuverSim.h"
#include "Sim/CoordinationSim.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Canvas.h"
#include "CanvasItem.h"
#include "RenderUtils.h"
#include "Engine/DirectionalLight.h"
#include "Engine/Engine.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "DrawDebugHelpers.h"
#include "Sim/TacticalRouteSim.h"
#include "HighResScreenshot.h"
#include "Misc/CommandLine.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/Parse.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformMisc.h"
#include "UnrealClient.h"
#include <algorithm>

namespace {
const FLinearColor Ink(0.026f,0.044f,0.052f,0.97f);
const FLinearColor Paper(0.91f,0.94f,0.91f,1);
const FLinearColor Muted(0.50f,0.61f,0.62f,1);
const FLinearColor Azure(0.18f,0.84f,0.77f,1);
const FLinearColor Ember(0.98f,0.39f,0.22f,1);
const FLinearColor Gold(0.90f,0.75f,0.39f,1);
FVector World(army::Vec3 P,float Z=0) {return FVector(P.x*100,P.y*100,P.z*100+Z);}
FString TimeLabel(float T) {int S=FMath::FloorToInt(T);return FString::Printf(TEXT("%02d:%02d"),S/60,S%60);}
}
ABattleGameMode::ABattleGameMode() {
    PrimaryActorTick.bCanEverTick=true;
    HUDClass=ABattleHUD::StaticClass();
    DefaultPawnClass=nullptr;
}
void ABattleGameMode::BeginPlay() {
    Super::BeginPlay();
    // An explicit replay seed lets integration checks exercise rare building use.
    FParse::Value(FCommandLine::Get(),TEXT("ArmySeed="),Settings.seed);
    if(FParse::Param(FCommandLine::Get(),TEXT("ArmyTrenches")))Settings.terrain=army::Terrain::Trenches;
    Preparation=MakeUnique<army::Frame>(army::InitialFrame(Settings));
    Battle.map=army::MakeBattleMap(Settings);
    bSmoke=FParse::Param(FCommandLine::Get(),TEXT("ArmySmokeTest"));
    bCapture=FParse::Param(FCommandLine::Get(),TEXT("ArmyCapture"));
    BuildScene();
    auto* PC=GetWorld()->GetFirstPlayerController();
    PC->bShowMouseCursor=true;PC->bEnableClickEvents=true;
    PC->SetViewTarget(Camera);
    FInputModeGameAndUI Input;Input.SetHideCursorDuringCapture(false);
    Input.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);PC->SetInputMode(Input);
    ShowUnits();
    UE_LOG(LogTemp,Display,TEXT("ARMY_READY: preparation, 64 units, authoritative simulation separate from playback"));
}
AActor* ABattleGameMode::Shape(const TCHAR* MeshPath,FVector Location,FVector Scale,FLinearColor Color) {
    auto* Actor=GetWorld()->SpawnActor<AActor>();SceneActors.Add(Actor);
    auto* Mesh=NewObject<UStaticMeshComponent>(Actor);
    Actor->SetRootComponent(Mesh);Actor->AddInstanceComponent(Mesh);
    Mesh->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,MeshPath));
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Mesh->SetMobility(EComponentMobility::Movable);Mesh->RegisterComponent();
    auto* Mat=UMaterialInstanceDynamic::Create(BaseMaterial,Actor);
    Mat->SetVectorParameterValue(TEXT("Color"),Color);Mesh->SetMaterial(0,Mat);
    Actor->SetActorLocation(Location);Actor->SetActorScale3D(Scale);
    return Actor;
}
void ABattleGameMode::BuildScene() {
    for(auto Actor:SceneActors)if(Actor)Actor->Destroy();SceneActors.Empty();Units.Empty();UpperStructure.Empty();
    BaseMaterial=LoadObject<UMaterialInterface>(nullptr,TEXT("/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial"));
    const TCHAR* Cube=TEXT("/Engine/BasicShapes/Cube.Cube");
    const TCHAR* Cylinder=TEXT("/Engine/BasicShapes/Cylinder.Cylinder");
    Shape(Cube,FVector(0,0,Battle.map.groundBase*100-80),FVector(Battle.map.halfWidth*2+5,Battle.map.halfHeight*2+5,1.3f),FLinearColor(0.045f,0.068f,0.062f));
    Shape(Cube,FVector(0,0,Battle.map.groundBase*100-9),FVector(Battle.map.halfWidth*2,Battle.map.halfHeight*2,0.12f),FLinearColor(0.16f,0.205f,0.17f));
    if(Settings.terrain==army::Terrain::FracturedWorks){
    // A pale gravel road and inset grid give the greybox a readable tactical scale.
    Shape(Cube,FVector(0,0,0),FVector(Battle.map.halfWidth*2-3,6,0.025f),FLinearColor(0.26f,0.28f,0.235f));
    Shape(Cube,FVector(0,0,1),FVector(4,Battle.map.halfHeight*2-3,0.025f),FLinearColor(0.24f,0.26f,0.22f));
    for(int X=-int(Battle.map.halfWidth)+5;X<int(Battle.map.halfWidth);X+=10) Shape(Cube,FVector(X*100,0,2),FVector(0.018f,Battle.map.halfHeight*2-2,0.012f),FLinearColor(0.20f,0.25f,0.20f));
    for(int Y=-int(Battle.map.halfHeight)+5;Y<int(Battle.map.halfHeight);Y+=10) Shape(Cube,FVector(0,Y*100,2),FVector(Battle.map.halfWidth*2-2,0.018f,0.012f),FLinearColor(0.20f,0.25f,0.20f));
    }
    for(const auto& O:Battle.map.obstacles) {
        float Height=army::ObstacleHeight(O);
        auto* Piece=Shape(Cube,World(O.center,Height*50),FVector(O.half.x*2,O.half.y*2,Height),
            O.building?(O.blocksMovement?FLinearColor(0.32f,0.35f,0.33f):FLinearColor(0.30f,0.24f,0.16f)):
            O.halfCover?FLinearColor(0.48f,0.39f,0.21f):Height>=5?FLinearColor(0.23f,0.27f,0.25f):FLinearColor(0.34f,0.38f,0.37f));
        if(O.building&&O.center.z>2.9f)UpperStructure.Add(Piece);
    }
    for(int I=0;I<army::UnitCount;++I) {
        auto* Body=Shape(Cylinder,FVector::ZeroVector,FVector(0.65f,0.65f,1.12f),I<army::TeamSize?Azure:Ember);
        // Root scaling is kept on the mesh so attached head and weapon remain in metres.
        Body->SetActorScale3D(FVector::OneVector);
        auto* RootMesh=Cast<UStaticMeshComponent>(Body->GetRootComponent());
        RootMesh->SetRelativeScale3D(FVector(0.65f,0.65f,1.12f));
        auto AddPart=[&](const TCHAR* Path,FVector Loc,FVector Scale,FLinearColor Color) {
            auto* Part=NewObject<UStaticMeshComponent>(Body);Body->AddInstanceComponent(Part);
            Part->SetupAttachment(Body->GetRootComponent());Part->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,Path));
            Part->SetCollisionEnabled(ECollisionEnabled::NoCollision);Part->RegisterComponent();
            Part->SetRelativeLocation(Loc);Part->SetRelativeScale3D(Scale);
            auto* M=UMaterialInstanceDynamic::Create(BaseMaterial,Body);M->SetVectorParameterValue(TEXT("Color"),Color);Part->SetMaterial(0,M);
        };
        AddPart(TEXT("/Engine/BasicShapes/Sphere.Sphere"),FVector(0,0,76),FVector(0.72f,0.72f,0.40f),FLinearColor(0.16f,0.20f,0.19f));
        AddPart(Cube,FVector(66,0,66),FVector(1.4f,0.18f,0.15f),FLinearColor(0.09f,0.105f,0.10f));
        const auto UnitRank=Preparation->soldiers[I].role;
        if(UnitRank==army::Role::Lieutenant)AddPart(Cube,FVector(0,0,99),FVector(0.48f,0.14f,0.08f),Gold);
        const int Stripes=UnitRank==army::Role::Sergeant||UnitRank==army::Role::PlatoonSergeant?3:UnitRank==army::Role::Corporal?2:0;
        for(int Stripe=0;Stripe<Stripes;++Stripe)AddPart(Cube,FVector((Stripe-(Stripes-1)*0.5f)*13,0,98),FVector(0.07f,0.40f,0.07f),UnitRank==army::Role::PlatoonSergeant?Gold:Paper);
        Units.Add(Body);
    }
    auto* Sun=GetWorld()->SpawnActor<ADirectionalLight>();SceneActors.Add(Sun);
    Sun->GetLightComponent()->SetMobility(EComponentMobility::Movable);
    Sun->SetActorRotation(FRotator(-58,-32,0));
    Sun->GetLightComponent()->SetIntensity(2.2f);
    Sun->GetLightComponent()->SetLightColor(FLinearColor(1.f,0.94f,0.80f));
    auto* Fill=GetWorld()->SpawnActor<ADirectionalLight>();SceneActors.Add(Fill);
    Fill->GetLightComponent()->SetMobility(EComponentMobility::Movable);
    Fill->SetActorRotation(FRotator(-70,145,0));
    Fill->GetLightComponent()->SetIntensity(0.7f);Fill->GetLightComponent()->SetCastShadows(false);
    Camera=GetWorld()->SpawnActor<ACameraActor>();SceneActors.Add(Camera);
    Camera->GetCameraComponent()->ProjectionMode=ECameraProjectionMode::Orthographic;
    Camera->GetCameraComponent()->bConstrainAspectRatio=false;
    Camera->SetActorRotation(FRotator(-60,-90,0));
}
const army::Frame& ABattleGameMode::Frame() const {
    if(bPreparation||Battle.frames.empty()) return *Preparation;
    // Binary search supports seeking to a final snapshot that is off the normal sample interval.
    auto It=std::upper_bound(Battle.frames.begin(),Battle.frames.end(),ReplayTime,
        [](float T,const army::Frame& F){return T<F.time;});
    return It==Battle.frames.begin()?Battle.frames.front():*(It-1);
}
FVector ABattleGameMode::UnitPosition(int Id) const {
    const auto& F=Frame();const auto& S=F.soldiers[Id];army::Vec3 P=S.position;
    if(!bPreparation&&S.Active()) {
        auto It=std::upper_bound(Battle.frames.begin(),Battle.frames.end(),ReplayTime,
            [](float T,const army::Frame& A){return T<A.time;});
        if(It!=Battle.frames.end()&&It->time>F.time) {
            float A=FMath::Clamp((ReplayTime-F.time)/(It->time-F.time),0.f,1.f);
            P=P+(It->soldiers[Id].position-P)*A;
        }
    }
    return World(P,S.Active()?(S.stance==army::Stance::Crouched?34:70):15);
}
bool ABattleGameMode::IsFinished() const {return !bPreparation&&ReplayTime>=Battle.duration;}
void ABattleGameMode::ShowUnits() {
    const auto& F=Frame();
    for(int I=0;I<Units.Num();++I) {
        const auto& S=F.soldiers[I];auto* A=Units[I].Get();
        A->SetActorLocation(UnitPosition(I));
        A->SetActorRotation(FRotator(0,FMath::RadiansToDegrees(FMath::Atan2(S.facing.y,S.facing.x)),0));
        A->SetActorScale3D(S.Active()?FVector(0.88f,0.88f,S.stance==army::Stance::Crouched?0.58f:1.2f):FVector(1.25f,0.65f,0.18f));
    }
}
void ABattleGameMode::RunBattle() {
    const double Start=FPlatformTime::Seconds();
    const bool Reused=!Battle.frames.empty()&&army::SameConfig(Battle.config,Settings);
    if(!Reused)Battle=army::Simulate(Settings);
    ReplayTime=0;bPaused=false;bPreparation=false;
    ReplaySpeed=1;Selected=0;Notice=TEXT("");
    if(Reused){UE_LOG(LogTemp,Display,TEXT("ARMY_REPLAY_REUSED: identical seed and settings, no simulation needed"));return;}
    UE_LOG(LogTemp,Display,TEXT("ARMY_SIM: seed=%u duration=%.2f frames=%d shots=%d winner=%d compute=%.3fs"),
        Settings.seed,Battle.duration,int(Battle.frames.size()),int(Battle.shots.size()),Battle.winner,FPlatformTime::Seconds()-Start);
    FString Dir=FPaths::ProjectSavedDir()/TEXT("BattleReports");IFileManager::Get().MakeDirectory(*Dir,true);
    const double ExportStart=FPlatformTime::Seconds();
    const std::string Run=army::ExportBattle(Battle,TCHAR_TO_UTF8(*Dir),army::BuildIdentifier());
    UE_LOG(LogTemp,Display,TEXT("ARMY_REPORT: %s / export %.3fs / run-to-ready %.3fs"),UTF8_TO_TCHAR(Run.c_str()),FPlatformTime::Seconds()-ExportStart,FPlatformTime::Seconds()-Start);

}
void ABattleGameMode::Seek(float T) {ReplayTime=FMath::Clamp(T,0.f,Battle.duration);ShowUnits();}
void ABattleGameMode::Command(FName Id) {
    if(Id==TEXT("start")) {if(bPreparation)RunBattle();else if(IsFinished()){Seek(0);bPaused=false;}else bPaused=!bPaused;}
    else if(Id==TEXT("setup")) {bPreparation=true;bPaused=false;*Preparation=army::InitialFrame(Settings);}
    else if(Id==TEXT("restart")) {if(!bPreparation){Seek(0);bPaused=false;}}
    else if(Id==TEXT("speed")) ReplaySpeed=ReplaySpeed<0.25f?0.25f:ReplaySpeed<0.5f?0.5f:ReplaySpeed<1?1:ReplaySpeed<2?2:ReplaySpeed<4?4:0.1f;
    else if(Id==TEXT("back")) {if(!bPreparation){Seek(ReplayTime-5);bPaused=true;}}
    else if(Id==TEXT("forward")) {if(!bPreparation){Seek(ReplayTime+5);bPaused=true;}}
    else if(Id==TEXT("stepback")) {if(!bPreparation){Seek(ReplayTime-0.01f);bPaused=true;}}
    else if(Id==TEXT("stepforward")) {if(!bPreparation){Seek(ReplayTime+0.01f);bPaused=true;}}
    else if(Id==TEXT("ember_doctrine")&&bPreparation) Settings.emberDoctrine=army::Doctrine((int(Settings.emberDoctrine)+1)%3);
    else if(Id==TEXT("doctrine")&&bPreparation) Settings.doctrine=army::Doctrine((int(Settings.doctrine)+1)%3);
    else if(Id==TEXT("approach")&&bPreparation) Settings.approach=army::Approach((int(Settings.approach)+1)%3);
    else if(Id==TEXT("support")&&bPreparation) {Settings.supportWeapon=!Settings.supportWeapon;*Preparation=army::InitialFrame(Settings);}
    else if(Id==TEXT("routes")) bRoutes=!bRoutes;
    else if(Id==TEXT("terrain")&&bPreparation){Settings.terrain=Settings.terrain==army::Terrain::Trenches?army::Terrain::FracturedWorks:army::Terrain::Trenches;Battle={};Battle.map=army::MakeBattleMap(Settings);*Preparation=army::InitialFrame(Settings);BuildScene();GetWorld()->GetFirstPlayerController()->SetViewTarget(Camera);ShowUnits();}
    else if(Id==TEXT("seed")&&bPreparation) {++Settings.seed;*Preparation=army::InitialFrame(Settings);}
    else if(Id==TEXT("zoomin")) Zoom=FMath::Max(0.055f,Zoom/1.18f);
    else if(Id==TEXT("zoomout")) Zoom=FMath::Min(1.65f,Zoom*1.18f);
    else if(Id==TEXT("focus")) CameraPan=UnitPosition(Selected);
    else if(Id==TEXT("center")) {CameraPan=FVector::ZeroVector;Zoom=1;CameraYaw=-90;CameraPitch=60;}
    else if(Id==TEXT("floors")) {bShowUpperFloor=!bShowUpperFloor;for(auto& A:UpperStructure)A->SetActorHiddenInGame(!bShowUpperFloor);}
    else if(Id==TEXT("quit")) GetWorld()->GetFirstPlayerController()->ConsoleCommand(TEXT("quit"));
}
void ABattleGameMode::Tick(float Dt) {
    Super::Tick(Dt);RealSeconds+=Dt;
    auto* PC=GetWorld()->GetFirstPlayerController();if(!PC||!Camera)return;
    if(!bPreparation&&!bPaused) ReplayTime=FMath::Min(Battle.duration,ReplayTime+Dt*ReplaySpeed);
    if(!bSmoke) {
        if(PC->WasInputKeyJustPressed(EKeys::SpaceBar)) Command(TEXT("start"));
        if(PC->WasInputKeyJustPressed(EKeys::R)) Command(TEXT("restart"));
        if(PC->WasInputKeyJustPressed(EKeys::N)) Command(TEXT("setup"));
        if(PC->WasInputKeyJustPressed(EKeys::Left)) Command(TEXT("back"));
        if(PC->WasInputKeyJustPressed(EKeys::Right)) Command(TEXT("forward"));
        if(PC->WasInputKeyJustPressed(EKeys::Tab)) Command(TEXT("speed"));
        if(PC->WasInputKeyJustPressed(EKeys::Comma)) Command(TEXT("stepback"));
        if(PC->WasInputKeyJustPressed(EKeys::Period)) Command(TEXT("stepforward"));
        if(PC->WasInputKeyJustPressed(EKeys::F)) Command(TEXT("floors"));
        if(PC->WasInputKeyJustPressed(EKeys::Home)) Command(TEXT("center"));
        if(PC->WasInputKeyJustPressed(EKeys::MouseScrollUp)) Command(TEXT("zoomin"));
        if(PC->WasInputKeyJustPressed(EKeys::MouseScrollDown)) Command(TEXT("zoomout"));
        if(PC->IsInputKeyDown(EKeys::Q))AdjustCamera(-60*Dt,0);
        if(PC->IsInputKeyDown(EKeys::E))AdjustCamera(60*Dt,0);
        if(PC->IsInputKeyDown(EKeys::PageUp))AdjustCamera(0,35*Dt);
        if(PC->IsInputKeyDown(EKeys::PageDown))AdjustCamera(0,-35*Dt);
        if(PC->WasInputKeyJustPressed(EKeys::C)) Command(TEXT("focus"));
        const float PanSpeed=4000*Dt*Zoom;
        const FVector Forward=FRotator(0,CameraYaw,0).Vector();
        const FVector Right=FVector::CrossProduct(FVector::UpVector,Forward);
        if(PC->IsInputKeyDown(EKeys::A))CameraPan-=Right*PanSpeed;
        if(PC->IsInputKeyDown(EKeys::D))CameraPan+=Right*PanSpeed;
        if(PC->IsInputKeyDown(EKeys::W))CameraPan+=Forward*PanSpeed;
        if(PC->IsInputKeyDown(EKeys::S))CameraPan-=Forward*PanSpeed;
    }
    int W,H;PC->GetViewportSize(W,H);float Frac=FMath::Min(0.35f,320.f/FMath::Max(800,W));
    const float FitWidth=Battle.map.halfWidth*240/(1-Frac);
    const float FitHeight=Battle.map.halfHeight*240*FMath::Sin(FMath::DegreesToRadians(CameraPitch))*W/FMath::Max(320,H-280);
    float Width=FMath::Max(FitWidth,FitHeight)*Zoom;
    const FRotator ViewRotation(-CameraPitch,CameraYaw,0);
    const FVector ViewRight=FVector::CrossProduct(FVector::UpVector,FRotator(0,CameraYaw,0).Vector());
    Camera->SetActorRotation(ViewRotation);
    Camera->SetActorLocation(CameraPan-ViewRight*(Width*Frac*0.5f)-ViewRotation.Vector()*22000);
    Camera->GetCameraComponent()->OrthoWidth=Width;
    ShowUnits();
    const auto& F=Frame();
    if(Selected>=0&&Selected<army::UnitCount) {
        if(bRoutes){const auto& Cmd=F.command[F.soldiers[Selected].squad];if(Cmd.route){army::Vec3 Prev=Cmd.route->start;
            for(auto Point:Cmd.route->points){DrawDebugLine(GetWorld(),World(Prev,30),World(Point,30),FColor::Cyan,false,-1,0,5);Prev=Point;}
            DrawDebugSphere(GetWorld(),World(Cmd.waypoint,40),100,12,FColor::Yellow,false,-1,0,4);
        }}
        FVector P=UnitPosition(Selected);P.Z=F.soldiers[Selected].position.z*100+24;
        DrawDebugCircle(GetWorld(),P,95,24,FColor::White,false,-1,0,3,FVector(1,0,0),FVector(0,1,0),false);
    }
    SmokeTest(Dt);
}
void ABattleGameMode::AdjustCamera(float YawDelta,float PitchDelta) {
    CameraYaw=FMath::UnwindDegrees(CameraYaw+YawDelta);
    CameraPitch=FMath::Clamp(CameraPitch+PitchDelta,25.f,80.f);
}
void ABattleGameMode::SmokeTest(float Dt) {
    if(!bSmoke&&!bCapture)return;
    if(bSmoke&&Settings.terrain==army::Terrain::Trenches){
        FString TrenchDir=FPaths::ProjectSavedDir()/TEXT("Screenshots");IFileManager::Get().MakeDirectory(*TrenchDir,true);
        if(SmokeStage==0&&RealSeconds>7){FScreenshotRequest::RequestScreenshot(TrenchDir/TEXT("trench-preparation.png"),true,false);++SmokeStage;}
        else if(SmokeStage==1&&RealSeconds>10){Settings.maxSeconds=120;RunBattle();check(Battle.config.terrain==army::Terrain::Trenches&&Battle.map.groundBase<0);++SmokeStage;}
        else if(SmokeStage==2&&RealSeconds>16){
            bool Below=false,Moving=false;for(const auto& Sample:Battle.frames)for(const auto& Unit:Sample.soldiers)if(Unit.Active()){Below|=Unit.position.z<-1;Moving|=army::Distance(Unit.position,Battle.frames.front().soldiers[Unit.id].position)>3;}
            check(Below&&Moving);Seek(FMath::Min(70.f,Battle.duration));bPaused=true;bRoutes=true;Zoom=.6f;++SmokeStage;
        } else if(SmokeStage==3&&RealSeconds>18){FScreenshotRequest::RequestScreenshot(TrenchDir/TEXT("trench-battle.png"),true,false);++SmokeStage;}
        else if(SmokeStage==4&&RealSeconds>21){FFileHelper::SaveStringToFile(TEXT("Trench map, below-ground rendering, production simulation, movement and replay passed."),*(FPaths::ProjectSavedDir()/TEXT("trench-smoke-test.txt")));FGenericPlatformMisc::RequestExit(false);++SmokeStage;}
        return;
    }
    FString Dir=FPaths::ProjectSavedDir()/TEXT("Screenshots");IFileManager::Get().MakeDirectory(*Dir,true);
    if(SmokeStage==0&&RealSeconds>7) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("01-preparation.png"),true,false);++SmokeStage;}
    if(!bSmoke)return;
    if(SmokeStage==1&&RealSeconds>10) {
        const auto OriginalSettings=Settings;
        Command(TEXT("doctrine"));Command(TEXT("approach"));Command(TEXT("support"));Command(TEXT("seed"));
        check(Settings.doctrine==army::Doctrine::Cautious&&Settings.approach==army::Approach::North&&!Settings.supportWeapon);
        Command(TEXT("support"));check(Settings.supportWeapon); // exercise the option, then test an actual MG
        // The short north-flank win does not exercise the late replay checks.
        // Restore the standard long battle after verifying every preparation control.
        Settings=OriginalSettings;*Preparation=army::InitialFrame(Settings);
        Command(TEXT("start"));check(!Battle.frames.empty()&&!bPreparation);++SmokeStage;
        check(Frame().soldiers.size()==64&&Frame().command.size()==8);
    }
    if(SmokeStage==2&&RealSeconds>16) {
        Seek(FMath::Min(24.f,Battle.duration*0.6f));bPaused=true;
        for(const auto& Unit:Frame().soldiers) if(Unit.team==0&&Unit.Active()){Selected=Unit.id;break;}
        Command(TEXT("forward"));Command(TEXT("back"));Command(TEXT("speed"));
        check(bPaused&&ReplaySpeed==2);
        Command(TEXT("speed"));Command(TEXT("speed"));check(ReplaySpeed==0.1f);
        bool FlightChecked=false;
        for(const auto& Shot:Battle.shots) if(Shot.time>12&&Shot.impactTime-Shot.time>0.03f) {
            Seek((Shot.time+Shot.impactTime)*0.5f);Selected=Shot.owner;
            army::Vec3 P;check(army::ProjectilePosition(Shot,ReplayTime,P));
            check(ReplayTime<Shot.impactTime);
            const float Before=ReplayTime;Command(TEXT("stepforward"));Command(TEXT("stepback"));
            check(FMath::Abs(ReplayTime-Before)<0.0001f&&bPaused);
            FlightChecked=true;break;
        }
        check(FlightChecked);
        ++SmokeStage;
    }
    if(SmokeStage==3&&RealSeconds>17) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("02-battle.png"),true,false);++SmokeStage;}
    if(SmokeStage==4&&RealSeconds>18) {
        for(const auto& Shot:Battle.shots) if(Shot.time>12&&Shot.impactTime-Shot.time>0.03f) {
            Seek(Shot.impactTime+0.06f);ReplaySpeed=1;break;
        }
        ++SmokeStage;
    }
    if(SmokeStage==5&&RealSeconds>19) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("04-visible-trails.png"),true,false);++SmokeStage;}
    if(SmokeStage==6&&RealSeconds>20) {
        bool DuckFound=false,PopFound=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers) {
            if(S.reason==army::Reason::PopUp&&S.Active())PopFound=true;
            if(!DuckFound&&S.reason==army::Reason::Duck&&S.Active()) {
                Seek(F.time);Selected=S.id;Zoom=0.3f;CameraPan=World(S.position);DuckFound=true;
                check(Frame().soldiers[Selected].stance==army::Stance::Crouched);
                check(FMath::Abs(Units[Selected]->GetActorScale3D().Z-0.58f)<0.001f);
            }
        }
        Command(TEXT("focus"));for(int I=0;I<30;++I)Command(TEXT("zoomin"));
        check(FMath::IsNearlyEqual(Zoom,0.055f)&&CameraPan.Equals(UnitPosition(Selected),0.01f));
        AdjustCamera(45,-20);check(CameraYaw==-45&&CameraPitch==40);
        check(DuckFound&&PopFound);++SmokeStage;
    }
    if(SmokeStage==7&&RealSeconds>21) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("05-low-cover.png"),true,false);++SmokeStage;}
    if(SmokeStage==8&&RealSeconds>22) {
        check(FMath::Abs(Camera->GetActorRotation().Yaw+45)<0.01f&&FMath::Abs(Camera->GetActorRotation().Pitch+40)<0.01f);
        Command(TEXT("center"));check(CameraYaw==-90&&CameraPitch==60&&Zoom==1);
        bool Found=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(!Found&&S.machineGun&&S.assignment.task==army::Task::Overwatch&&S.aim>0.05f) {
            Seek(F.time);Selected=S.id;Zoom=0.35f;CameraPan=World(S.position);Found=true;
        }
        check(Found);
        bool NcoOrder=false;for(const auto& E:Battle.events)if(E.kind==army::EventKind::OrderReceived&&E.actor%army::SquadSize==1)NcoOrder=true;
        bool ReactionFound=false;for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(S.pendingReactions>0)ReactionFound=true;
        check(NcoOrder&&ReactionFound);++SmokeStage;
    }
    if(SmokeStage==9&&RealSeconds>23) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("06-command-overwatch.png"),true,false);++SmokeStage;}
    if(SmokeStage==10&&RealSeconds>24) {
        bool Found=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(!Found&&S.Active()&&S.health<100&&S.assignment.task==army::Task::RearGuard&&S.action==army::Action::Fire) {
            Seek(F.time);Selected=S.id;Zoom=0.35f;CameraPan=World(S.position);Found=true;
        }
        check(Found);++SmokeStage;
    }
    if(SmokeStage==11&&RealSeconds>25) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("07-wounded-rear-guard.png"),true,false);++SmokeStage;}
    if(SmokeStage==12&&RealSeconds>26) {
        bool Found=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(!Found&&S.Active()&&S.reason==army::Reason::ProtectedHold) {
            Seek(F.time);Selected=S.id;Zoom=0.35f;CameraPan=World(S.position);Found=true;
        }
        check(Found);++SmokeStage;
    }
    if(SmokeStage==13&&RealSeconds>27) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("08-automatic-shelter.png"),true,false);++SmokeStage;}
    if(SmokeStage==14&&RealSeconds>28) {
        bool Found=false;
        for(const auto& F:Battle.frames)for(const auto& C:F.command)if(!Found&&C.planId>0&&C.hasWaypoint&&C.leader>=0) {
            for(const auto& S:F.soldiers)if(S.Active()&&S.squad==F.soldiers[C.leader].squad&&(S.assignment.task==army::Task::Flank||S.assignment.task==army::Task::BoundMove)&&S.assignment.receivedAt>=F.time-5) {
                Seek(F.time);Selected=S.id;Zoom=0.55f;CameraPan=World(S.position);Found=true;break;
            }
        }
        check(Found);++SmokeStage;
    }
    if(SmokeStage==15&&RealSeconds>29) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("09-squad-progress.png"),true,false);++SmokeStage;}
    if(SmokeStage==16&&RealSeconds>30) {
        bool Found=false,Stairs=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(S.position.z>0.1f&&S.position.z<army::UpperFloor-0.1f&&army::OnStairs(Battle.map,S.position))Stairs=true;
        for(const auto& Shot:Battle.shots)if(!Found&&Shot.start.z>3)for(const auto& Window:Battle.map.windows)if(army::Distance(Shot.start,Window.peek)<0.7f) {
            Seek(Shot.time);Selected=Shot.owner;Zoom=0.3f;CameraPan=World(Shot.start);CameraPitch=40;CameraYaw=-35;Found=true;break;
        }
        check(Found&&Stairs);++SmokeStage;
    }
    if(SmokeStage==17&&RealSeconds>31) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("10-upstairs-window.png"),true,false);++SmokeStage;}
    if(SmokeStage==18&&RealSeconds>32) {
        bool Found=false;
        for(const auto& Shot:Battle.shots)if(!Found&&Shot.start.z<0.1f)for(const auto& Window:Battle.map.windows)if(army::Distance(Shot.start,Window.peek)<0.7f) {
            Seek(Shot.time);Selected=Shot.owner;CameraPan=World(Shot.start);Command(TEXT("floors"));Found=true;break;
        }
        check(Found);++SmokeStage;
    }
    if(SmokeStage==19&&RealSeconds>33) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("11-ground-floor.png"),true,false);++SmokeStage;}
    if(SmokeStage==20&&RealSeconds>34) {
        bool Engaged=false,Window=false,Useful=false;
        for(const auto& F:Battle.frames) {
            for(const auto& S:F.soldiers){Window|=S.assignment.task==army::Task::Window;
                if(!Engaged&&S.Active()&&!S.machineGun&&S.rounds>3&&S.aim>0.2f&&S.position.z<0.1f&&S.action==army::Action::Fire&&F.command[S.squad].engaged){Selected=S.id;Seek(F.time);Engaged=true;}}
            for(const auto& C:F.command)Useful|=C.supportUseful;
        }
        check(Engaged&&Window&&Useful);Command(TEXT("floors"));Command(TEXT("center"));++SmokeStage;
    }
    if(SmokeStage==21&&RealSeconds>35){FScreenshotRequest::RequestScreenshot(Dir/TEXT("14-hold-and-engage.png"),true,false);++SmokeStage;}
    if(SmokeStage==22&&RealSeconds>36) {
        bool Found=false;for(const auto& Frame:Battle.frames){for(const auto& Unit:Frame.soldiers)if(Unit.Active()&&Unit.waitingPassage>=0&&Unit.passageWaitSeconds>0.5f){Selected=Unit.id;Seek(Frame.time);Found=true;break;}if(Found)break;}
        check(Found);Command(TEXT("floors"));++SmokeStage;
    }
    if(SmokeStage==23&&RealSeconds>37){FScreenshotRequest::RequestScreenshot(Dir/TEXT("13-passage-traffic.png"),true,false);++SmokeStage;}
    if(SmokeStage==24&&RealSeconds>38) {
        bool Found=false;
        for(const auto& F:Battle.frames)for(const auto& S:F.soldiers)if(!Found&&S.platoonOrder.serial>0&&S.platoonOrder.activatedAt>S.platoonOrder.receivedAt&&S.platoonOrder.task!=army::PlatoonTask::Support){Seek(F.time);Selected=S.id;Found=true;}
        check(Found&&Battle.config.maxSeconds==360&&Battle.map.halfHeight==150);
        Command(TEXT("floors"));Command(TEXT("center"));++SmokeStage;
    }
    if(SmokeStage==25&&RealSeconds>39) {FScreenshotRequest::RequestScreenshot(Dir/TEXT("15-platoon-orders.png"),true,false);++SmokeStage;}
    if(SmokeStage==26&&RealSeconds>40) {Seek(Battle.duration);FScreenshotRequest::RequestScreenshot(Dir/TEXT("03-results.png"),true,false);++SmokeStage;}
    if(SmokeStage==27&&RealSeconds>42) {
        check(IsFinished());Command(TEXT("restart"));check(!IsFinished()&&ReplayTime==0);
        Command(TEXT("setup"));check(bPreparation);
        const auto* RecordedFrames=Battle.frames.data();Command(TEXT("start"));
        check(!bPreparation&&ReplayTime==0&&Battle.frames.data()==RecordedFrames);
        Command(TEXT("setup"));check(bPreparation);
        UE_LOG(LogTemp,Display,TEXT("ARMY_SMOKE_PASS: 64 soldiers / 8 squads, setup, simulate, pause, seek, slow motion, projectile flight, fine stepping, crouched cover pose, pop-up fire, lieutenant/platoon-sergeant reports, delayed squad flank/support directives, sergeant/corporal orders, rank markers, six-minute battle, MG overwatch aiming, reaction queues, camera orbit/pitch/reset, deathmatch, individual cover, close zoom/focus and sight limits, wounded rear guard fighting, automatic protected shelter, scored squad maneuver orders, stair traversal, upper and ground window firing, floor cutaway, hold-and-engage firefight, window teams, useful support reports, passage yielding, result, restart, cached replay reuse"));
        FFileHelper::SaveStringToFile(TEXT("PASS: prepare / simulate / pause / seek / 0.1x speed / projectile flight / fine stepping / crouched cover pose / pop-up fire / officer-NCO orders / MG overwatch aiming / wounded rear guard / automatic shelter / scored squad maneuver orders / stairs / both floors window firing / floor cutaway / hold and engage / window teams / useful overwatch / passage yielding / result / restart / cached replay / setup\n"),*(FPaths::ProjectSavedDir()/TEXT("smoke-test.txt")));
        ++SmokeStage;Command(TEXT("quit"));
    }
}

void ABattleHUD::Label(const FString& Text,float X,float Y,FLinearColor Color,float Size) {
    DrawText(Text,Color,X*UiScale,Y*UiScale,GEngine->GetSmallFont(),Size*UiScale);
}
void ABattleHUD::Button(FName Id,const FString& Text,float X,float Y,float W,float H,bool Primary) {
    FLinearColor Fill=Primary?Azure:FLinearColor(0.10f,0.17f,0.18f,1);
    float Mx,My;if(PlayerOwner&&PlayerOwner->GetMousePosition(Mx,My)&&Mx>=X*UiScale&&Mx<(X+W)*UiScale&&My>=Y*UiScale&&My<(Y+H)*UiScale)
        Fill=Primary?FLinearColor(0.37f,0.96f,0.86f):FLinearColor(0.17f,0.26f,0.27f);
    DrawRect(Fill,X*UiScale,Y*UiScale,W*UiScale,H*UiScale);
    Label(Text,X+12,Y+(H-15)*0.5f,Primary?Ink:Paper,1.05f);
    AddHitBox(FVector2D(X,Y)*UiScale,FVector2D(W,H)*UiScale,Id,true,10);
}
float ABattleHUD::Wrapped(const FString& Text,float X,float Y,int Columns) {
    TArray<FString> Words;Text.ParseIntoArray(Words,TEXT(" "),true);FString Line;
    for(const auto& Word:Words) {
        if(Line.Len()+Word.Len()+1>Columns) {Label(Line,X,Y,Muted);Y+=18;Line=Word;}
        else {if(!Line.IsEmpty())Line+=TEXT(" ");Line+=Word;}
    }
    if(!Line.IsEmpty()){Label(Line,X,Y,Muted);Y+=18;}return Y;
}
void ABattleHUD::DrawProjectiles(const ABattleGameMode& Game) {
    if(Game.bPreparation)return;
    // Observer overlays retain a fixed pixel width at every camera distance.
    // The fading trail contains only already-travelled trajectory samples.
    for(const auto& Shot:Game.Battle.shots) {
        if(Shot.time>Game.ReplayTime)break;
        if(Shot.flight.size()<2||Game.ReplayTime>Shot.impactTime+0.18f)continue;
        const float FlightTime=FMath::Min(Game.ReplayTime,Shot.impactTime);
        const float Fade=1-FMath::Clamp((Game.ReplayTime-Shot.impactTime)/0.18f,0.f,1.f);
        const FLinearColor Color=Shot.owner<army::TeamSize?FLinearColor(0.25f,1.f,0.90f,Fade):FLinearColor(1.f,0.65f,0.16f,Fade);
        auto Screen=[&](army::Vec3 P){return Project(FVector(P.x*100,P.y*100,P.z*100));};
        // Canvas debug lines are opaque; translucent quads allow a real fade.
        auto Line=[&](FVector A,FVector B,FLinearColor Tint,float Width){
            const FVector2D From(A.X,A.Y),To(B.X,B.Y);
            const FVector2D Delta=To-From;
            if(Delta.SizeSquared()<0.001f)return;
            const FVector2D Offset=FVector2D(-Delta.Y,Delta.X).GetSafeNormal()*(Width*0.5f);
            FCanvasTriangleItem First(From-Offset,From+Offset,To+Offset,GWhiteTexture);
            FCanvasTriangleItem Second(From-Offset,To+Offset,To-Offset,GWhiteTexture);
            First.BlendMode=Second.BlendMode=SE_BLEND_Translucent;
            First.SetColor(Tint);Second.SetColor(Tint);
            Canvas->DrawItem(First);Canvas->DrawItem(Second);
        };
        auto Stroke=[&](FVector A,FVector B,FLinearColor Tint,float Width){
            Line(A,B,FLinearColor(0.015f,0.025f,0.03f,Tint.A),Width+3*UiScale);
            Line(A,B,Tint,Width);
        };
        const float TailTime=FMath::Max(Shot.time,FlightTime-0.022f);
        army::Vec3 Previous;
        if(!army::ProjectilePosition(Shot,TailTime,Previous))continue;
        TArray<FVector> Trail;Trail.Add(Screen(Previous));
        for(int Segment=1;Segment<=8;++Segment) {
            army::Vec3 Next;
            const float Time=FMath::Lerp(TailTime,FlightTime,Segment/8.f);
            if(!army::ProjectilePosition(Shot,Time,Next))break;
            Trail.Add(Screen(Next));Previous=Next;
        }
        for(int Pass=0;Pass<2;++Pass) for(int Segment=1;Segment<Trail.Num();++Segment) {
            FLinearColor Tint=Pass==0?FLinearColor(0.015f,0.025f,0.03f,Fade):Color;
            Tint.A*=0.25f+0.75f*Segment/8.f;
            Line(Trail[Segment-1],Trail[Segment],Tint,(Pass==0?6.f:3.f)*UiScale);
        }
        const FVector Head=Screen(Previous);
        if(Game.ReplayTime<=Shot.impactTime) {
            // An exaggerated bright head makes the moving round legible at battle scale.
            Stroke(Head-FVector(3*UiScale,0,0),Head+FVector(3*UiScale,0,0),FLinearColor(1,1,0.85f,1),4*UiScale);
        } else if(Shot.impact!=army::Shot::Impact::None&&Shot.impact!=army::Shot::Impact::OutOfBounds) {
            const float Radius=(4+8*(1-Fade))*UiScale;
            const FLinearColor Flash=Shot.hit?FLinearColor(1,0.35f,0.12f,Fade):FLinearColor(1,0.94f,0.60f,Fade);
            for(int Ray=0;Ray<4;++Ray) {
                float Angle=Ray*PI/2+PI/4;
                FVector Dir(FMath::Cos(Angle),FMath::Sin(Angle),0);
                Stroke(Head+Dir*Radius*0.35f,Head+Dir*Radius,Flash,2*UiScale);
            }
        }
    }
}
void ABattleHUD::DrawHUD() {
    Super::DrawHUD();auto* G=Cast<ABattleGameMode>(GetWorld()->GetAuthGameMode());if(!G||!Canvas)return;
    UiScale=FMath::Clamp(Canvas->SizeY/900.f,0.72f,1.3f);
    DrawProjectiles(*G);
    float W=Canvas->SizeX/UiScale,H=Canvas->SizeY/UiScale;
    auto Rect=[&](FLinearColor C,float X,float Y,float A,float B){DrawRect(C,X*UiScale,Y*UiScale,A*UiScale,B*UiScale);};
    const auto& F=G->Frame();int Active[2]={0,0},Down[2]={0,0},Killed[2]={0,0};
    for(const auto& S:F.soldiers) {if(S.Active())++Active[S.team];if(S.action==army::Action::Wounded)++Down[S.team];if(S.action==army::Action::Killed)++Killed[S.team];}
    Rect(Ink,18,18,W-36,83);Rect(Azure,18,18,4,83);
    Label(TEXT("F R O N T L I N E"),36,30,Paper,1.65f);
    Label(G->Settings.terrain==army::Terrain::Trenches?TEXT("COMMUNICATION TRENCHES   /   DEATHMATCH"):TEXT("FRACTURED WORKS   /   DEATHMATCH   /   FIRST PLAYABLE"),37,67,Muted,0.90f);
    Label(FString::Printf(TEXT("AZURE   %d / 32"),Active[0]),W-450,35,Azure,1.3f);
    Label(FString::Printf(TEXT("EMBER   %d / 32"),Active[1]),W-238,35,Ember,1.3f);
    Label(TEXT("Observer view - all soldiers visible"),W-450,70,Muted,0.9f);
    Rect(Ink,18,115,292,H-275);
    Label(G->bPreparation?TEXT("PREPARE YOUR FORCE"):TEXT("SOLDIER INSPECTOR"),34,132,Gold,1.15f);
    if(G->bPreparation) {
        Label(TEXT("4 SQUADS x 8 / 32 SOLDIERS"),34,165,Azure);
        Wrapped(TEXT("Deathmatch. Eliminate the opposing force. At six minutes, more surviving soldiers wins; equal survivors draw."),34,194);
        Label(TEXT("AZURE / EMBER DOCTRINE"),34,268,Muted,0.85f);
        Button(TEXT("doctrine"),UTF8_TO_TCHAR(army::DoctrineName(G->Settings.doctrine)),34,289,128,38);
        Button(TEXT("ember_doctrine"),UTF8_TO_TCHAR(army::DoctrineName(G->Settings.emberDoctrine)),166,289,128,38);
        Label(TEXT("APPROACH"),34,342,Muted,0.85f);
        Button(TEXT("approach"),UTF8_TO_TCHAR(army::ApproachName(G->Settings.approach)),34,363,260,38);
        Label(TEXT("EQUIPMENT"),34,416,Muted,0.85f);
        Button(TEXT("support"),G->Settings.supportWeapon?TEXT("1 machine gun / platoon"):TEXT("All rifles"),34,437,260,38);
        Button(TEXT("seed"),FString::Printf(TEXT("Battle seed: %u   +"),G->Settings.seed),34,491,260,34);
        Button(TEXT("terrain"),G->Settings.terrain==army::Terrain::Trenches?TEXT("Map: Communication trenches"):TEXT("Map: Fractured Works"),34,533,260,34);
        Wrapped(TEXT("LT + PSG attached to Squad 1. SGT leads each squad; CPL assists."),34,575);
        Label(TEXT("GOLD: LT bar / PSG 3 stripes"),34,614,Gold,0.78f);
        Label(TEXT("WHITE: SGT 3 / CPL 2 stripes"),34,635,Paper,0.78f);
        Button(TEXT("start"),TEXT("RUN BATTLE    >"),34,H-216,260,40,true);
    } else {
        const auto& S=F.soldiers[G->Selected];
        Label(FString::Printf(TEXT("%02d  /  %s"),S.id%army::SquadSize+1,UTF8_TO_TCHAR(army::Name(S.id))),34,166,S.team?Ember:Azure,1.5f);
        FString RoleLabel= UTF8_TO_TCHAR(army::RoleName(S.role));
        if(F.platoon[S.team].leader==S.id&&S.role!=army::Role::Lieutenant)RoleLabel=FString(UTF8_TO_TCHAR(army::RankTag(S.role)))+TEXT(" / ACTING PLATOON LEADER");
        else if(F.command[S.squad].leader==S.id&&S.role!=army::Role::Sergeant)RoleLabel+=TEXT(" / ACTING COMMANDER");
        RoleLabel+=army::OnStairs(G->Battle.map,S.position)?TEXT(" / STAIRS"):S.position.z>1?TEXT(" / 2ND FLOOR"):S.position.z<-.1f?TEXT(" / TRENCH"):TEXT(" / GROUND");
        Label(RoleLabel,34,199,Muted,0.80f);
        Label(FString::Printf(TEXT("SIGHT %.0fm / ALL DIRECTIONS"),army::SightRange(S)),34,213,Muted,0.70f);
        Label(FString(TEXT("ORDER: "))+UTF8_TO_TCHAR(army::TaskName(S.assignment.task)),34,225,Gold,0.95f);
        if(S.assignment.issuer>=0)Label(FString::Printf(TEXT("From %s / received %.1fs"),UTF8_TO_TCHAR(army::Name(S.assignment.issuer)),S.assignment.receivedAt),34,247,Muted,0.85f);
        Label(FString::Printf(TEXT("HEALTH  %.0f%s"),S.health,S.Active()&&S.health<100?TEXT(" / WOUNDED"):TEXT("")),34,275,Muted,0.85f);
        Rect(Ink,34,294,260,4);Rect(Azure,34,294,260*S.health/100,4);
        Label(FString::Printf(TEXT("SUPPRESSION  %.0f%%"),S.suppression*100),34,307,Muted,0.85f);
        Rect(Ink,34,326,260,4);Rect(Ember,34,326,260*S.suppression,4);
        Label(FString::Printf(TEXT("AIM  %.0f%%   /   %s"),S.aim*100,S.aim>=1?TEXT("READY"):S.aimTarget>=0?TEXT("ACQUIRING"):TEXT("NO FIRING SOLUTION")),34,339,Muted,0.8f);
        Rect(Ink,34,358,260,4);Rect(Gold,34,358,260*S.aim,4);
        Label(UTF8_TO_TCHAR(army::ActionName(S.action)),34,376,Gold,1.05f);
        Label(S.stance==army::Stance::Crouched?TEXT("CROUCHED / LOW PROFILE"):TEXT("STANDING"),34,400,Azure,0.8f);
        float Y=Wrapped(S.holdingFire?TEXT("Holding fire: friendly troops in the firing lane. Requesting clearance if blocked."):UTF8_TO_TCHAR(army::ReasonText(S.reason)),34,423);
        Label(FString::Printf(TEXT("Rounds fired: %d"),S.rounds),34,Y+10,Muted,0.85f);
        Label(S.pendingReactions>0?FString::Printf(TEXT("Registering %s / %.2fs"),UTF8_TO_TCHAR(army::ReactionName(S.reactingTo)),FMath::Max(0.f,S.reactionUntil-F.time)):FString::Printf(TEXT("Reaction time: %.2fs base"),S.reactionBase),34,Y+29,Gold,0.8f);
        Y+=60;Label(TEXT("PERSONAL SIGHTINGS"),34,Y,Paper,0.85f);Y+=22;int Count=0;
        for(int I=0;I<army::UnitCount;++I) if(S.contacts[I].known) {
            ++Count;if(Count>2)continue;const auto& C=S.contacts[I];
            Label(FString::Printf(TEXT("%s / %s / %.1fs ago"),UTF8_TO_TCHAR(army::Name(I)),C.visible?TEXT("visible"):TEXT("last seen"),F.time-C.observedAt),34,Y,C.visible?Ember:Muted,0.85f);Y+=22;
        }
        if(Count==0){Label(TEXT("None."),34,Y,Muted,0.85f);Y+=22;}
        Y+=7;Label(TEXT("REPORTS FROM THE CHAIN"),34,Y,Paper,0.85f);Y+=22;Count=0;
        for(int I=0;I<army::UnitCount;++I)if(S.reports[I].known) {
            ++Count;if(Count>2)continue;
            Label(FString::Printf(TEXT("%s / seen %.1fs ago"),UTF8_TO_TCHAR(army::Name(I)),F.time-S.reports[I].observedAt),34,Y,Muted,0.85f);Y+=22;
        }
        if(Count==0)Label(TEXT("No received contact reports."),34,Y,Muted,0.85f);
        Button(TEXT("setup"),TEXT("<  RETURN TO PREPARATION"),34,H-211,260,34);
    }
    for(const auto& Cover:G->Battle.map.obstacles) if(Cover.halfCover&&!G->IsWideView()) {
        FVector P=Project(World(Cover.center,army::ObstacleHeight(Cover)*100+30));
        if(P.X/UiScale>335&&P.Y/UiScale>120&&P.Y/UiScale<H-170)
            Label(TEXT("LOW"),P.X/UiScale-12,P.Y/UiScale-7,Gold,0.72f);
    }
    // Keep rank tags readable when command staff deploy close together.
    TArray<FBox2D> RankLabels;
    // World-space unit labels are also the inspection hit targets.
    for(int I=0;I<army::UnitCount;++I) {
        FVector P=Project(G->UnitPosition(I)+FVector(0,0,150));
        float X=P.X/UiScale,Y=P.Y/UiScale;
        if(X<324||X>W-20||Y<113||Y>H-164)continue;
        const auto& S=F.soldiers[I];FLinearColor C=S.team?Ember:Azure;
        FString Tag=UTF8_TO_TCHAR(army::RankTag(S.role));
        FString Id=S.Active()?FString::FromInt(S.squad%army::SquadsPerTeam+1)+TEXT(":")+Tag+FString::FromInt(I%army::SquadSize+1):TEXT("x");
        const bool Wide=G->IsWideView();
        const bool ShowLabel=!Wide||S.role==army::Role::Sergeant||S.role==army::Role::Corporal||army::IsPlatoonStaff(S)||F.command[S.squad].leader==I||(!G->bPreparation&&G->Selected==I);
        if(ShowLabel) {
            const float LabelWidth=FMath::Max(28.f,Id.Len()*7.f);FVector2D At(X-4,Y-24);bool Placed=false;
            for(int Attempt=0;Attempt<36&&!Placed;++Attempt) {
                const int Row=Attempt/3,Column=Attempt%3;
                FVector2D Candidate(X-4+(Column==1?LabelWidth+10:Column==2?-LabelWidth-10:0),Y-24+(Row%2?-1.f:1.f)*(Row/2)*18);
                FBox2D Box(Candidate-FVector2D(3,2),Candidate+FVector2D(LabelWidth+3,16));
                bool Overlaps=Box.Min.X<328||Box.Max.X>W-22||Box.Min.Y<113||Box.Max.Y>H-164;
                if(!G->bPreparation&&Box.Max.X>W-294&&Box.Min.Y<604)Overlaps=true;
                for(const auto& Existing:RankLabels)if(Box.Intersect(Existing)){Overlaps=true;break;}
                if(!Overlaps){At=Candidate;RankLabels.Add(Box);Placed=true;}
            }
            if(Placed) {
                if(FVector2D::Distance(At,FVector2D(X-4,Y-24))>5)DrawLine(X*UiScale,Y*UiScale,(At.X+LabelWidth*0.5f)*UiScale,(At.Y+12)*UiScale,Muted,0.7f*UiScale);
                Label(Id,At.X,At.Y,S.Active()?(army::IsPlatoonStaff(S)?Gold:Paper):Muted,0.95f);
                AddHitBox(At*UiScale,FVector2D(LabelWidth,18)*UiScale,FName(*FString::Printf(TEXT("unit%d_label"),I)),true,2);
            }
        }
        const float BarWidth=Wide?8.f:25.f;
        Rect(FLinearColor(0.015f,0.03f,0.03f),X-BarWidth/2,Y-5,BarWidth,3);
        Rect(C,X-BarWidth/2,Y-5,BarWidth*S.health/100,3);
        AddHitBox(FVector2D(X-(Wide?6:17),Y-6)*UiScale,FVector2D(Wide?12:34,22)*UiScale,FName(*FString::Printf(TEXT("unit%d"),I)),true,1);
    }
    Rect(Ink,18,H-146,W-36,128);
    if(G->bPreparation) {
        Label(TEXT("THE MISSION"),36,H-128,Gold,0.95f);
        Label(TEXT("Deathmatch. Find the enemy. Keep your force alive."),36,H-99,Paper,1.15f);
        Label(TEXT("SPACE  start    |    WASD  pan    |    Q/E  orbit    |    PGUP/DN  tilt    |    WHEEL  zoom    |    C  focus soldier    |    HOME  reset camera"),36,H-60,Muted,0.95f);
        Button(TEXT("quit"),TEXT("EXIT"),W-122,H-87,86,34);
    } else {
        Button(TEXT("start"),G->IsFinished()?TEXT("REPLAY"):G->bPaused?TEXT("PLAY"):TEXT("PAUSE"),34,H-130,102,34,true);
        Button(TEXT("back"),TEXT("-5s"),145,H-130,60,34);
        Button(TEXT("forward"),TEXT("+5s"),213,H-130,60,34);
        Button(TEXT("speed"),FString::Printf(TEXT("%.2gx"),G->ReplaySpeed),282,H-130,70,34);
        Button(TEXT("restart"),TEXT("RESTART"),361,H-130,110,34);
        Label(TimeLabel(G->ReplayTime)+TEXT(" / ")+TimeLabel(G->Battle.duration),492,H-121,Paper,1.1f);
        float TX=36,TW=W-72;
        Rect(FLinearColor(0.13f,0.21f,0.22f),TX,H-81,TW,10);
        Rect(Azure,TX,H-81,TW*(G->Battle.duration>0?G->ReplayTime/G->Battle.duration:0),10);
        AddHitBox(FVector2D(TX,H-89)*UiScale,FVector2D(TW,28)*UiScale,TEXT("timeline"),true,10);
        Label(TEXT("SPACE  pause    ARROWS  seek    , / .  step    TAB  speed    R  replay    N  prepare    WASD  pan    Q/E  orbit    PGUP/DN  tilt    WHEEL  zoom    C  focus"),36,H-50,Muted,0.90f);
        // Compact event feed on the battlefield, kept separate from the inspector.
        float EX=334,EY=H-290;int Shown=0;
        for(auto It=G->Battle.events.rbegin();It!=G->Battle.events.rend()&&Shown<4;++It) {
            if(It->time>G->ReplayTime||It->kind==army::EventKind::Decision)continue;
            if(Shown==0)Rect(FLinearColor(0.026f,0.044f,0.052f,0.88f),EX-10,EY-14,FMath::Min(650.f,W-EX-24),117);
            Label(TimeLabel(It->time)+TEXT("  ")+UTF8_TO_TCHAR(It->text.c_str()),EX,EY+Shown*24,It->kind==army::EventKind::Casualty?Ember:Muted,0.95f);++Shown;
        }
        Label(TEXT("DEATHMATCH / SURVIVORS"),W-274,119,Paper,0.9f);
        int Alive[2]={0,0};for(const auto& S:F.soldiers)if(S.Active())++Alive[S.team];
        Rect(Ink,W-278,146,240,36);
        Label(FString::Printf(TEXT("AZURE %d     EMBER %d"),Alive[0],Alive[1]),W-270,154,Paper,0.95f);
        const auto& SelectedUnit=F.soldiers[G->Selected];const auto& Chain=F.command[SelectedUnit.squad];
        Rect(Ink,W-290,197,272,268);
        Label(FString::Printf(TEXT("SQUAD %d COMMAND"),SelectedUnit.squad%army::SquadsPerTeam+1),W-274,210,Gold,0.9f);
        Label(Chain.leader>=0?FString(TEXT("Leader: "))+UTF8_TO_TCHAR(army::Name(Chain.leader)):TEXT("Command disrupted / succession"),W-274,235,Paper,0.9f);
        Label(FString::Printf(TEXT("%s / plan %d"),UTF8_TO_TCHAR(army::SquadPhaseName(Chain.phase)),Chain.planId),W-274,258,Muted,0.85f);
        Label(FString::Printf(TEXT("Support: %s"),Chain.support>=0?UTF8_TO_TCHAR(army::Name(Chain.support)):TEXT("none available")),W-274,281,Muted,0.85f);
        Label(UTF8_TO_TCHAR(army::SupportStateName(Chain.supportState)),W-274,305,Chain.supportUseful?Azure:Muted,0.80f);
        Label(FString::Printf(TEXT("%s / danger %.0f%%"),UTF8_TO_TCHAR(army::ManeuverName(Chain.maneuver)),Chain.danger*100),W-274,331,Gold,0.8f);
        Label(FString::Printf(TEXT("%s / idle %.0fs / replans %d"),UTF8_TO_TCHAR(army::ProgressName(Chain.progress)),Chain.idleSeconds,Chain.planId),W-274,357,Paper,0.75f);
        Label(Chain.teamPlan.bounding?FString::Printf(TEXT("Team %s: %s / bounds %d"),Chain.teamPlan.moving==0?TEXT("A"):TEXT("B"),Chain.teamPlan.released?TEXT("moving"):TEXT("awaiting cover"),Chain.boundsCompleted):FString::Printf(TEXT("Bounds completed: %d"),Chain.boundsCompleted),W-274,382,Paper,0.75f);
        const int WindowCount=int(Chain.teamPlan.windowTeam[0]>=0)+int(Chain.teamPlan.windowTeam[1]>=0);
        Label(FString::Printf(TEXT("Window team: %d / support moves: %d"),WindowCount,Chain.supportRepositions),W-274,407,Muted,0.75f);
        const auto& Platoon=F.platoon[SelectedUnit.team];
        Rect(Ink,W-290,474,272,126);
        Label(TEXT("PLATOON COMMAND"),W-274,484,Gold,0.85f);
        Label(Platoon.leader>=0?FString(TEXT("Leader: "))+UTF8_TO_TCHAR(army::Name(Platoon.leader)):TEXT("Command disrupted"),W-274,505,Paper,0.8f);
        Label(UTF8_TO_TCHAR(army::PlatoonTaskName(Platoon.maneuver)),W-274,526,Gold,0.72f);
        Label(FString::Printf(TEXT("Support S%d / flank S%d / plans %d"),Platoon.supportSquad<0?0:Platoon.supportSquad%army::SquadsPerTeam+1,Platoon.flankSquad<0?0:Platoon.flankSquad%army::SquadsPerTeam+1,Platoon.plans),W-274,547,Muted,0.72f);
        int Reports=0;if(Platoon.leader>=0)for(const auto& Report:F.soldiers[Platoon.leader].platoonReports)if(Report.squad>=0&&F.time-Report.observedAt<15)++Reports;
        Label(FString::Printf(TEXT("Fresh squad reports: %d / 4"),Reports),W-274,570,Muted,0.75f);
        Button(TEXT("routes"),G->bRoutes?TEXT("Hide squad route"):TEXT("Show squad route"),W-274,608,240,30);
        if(G->bRoutes){Rect(Ink,W-290,644,272,96);
            if(Chain.route){Label(FString::Printf(TEXT("Route stage %d / %d"),Chain.routeStage+1,int(Chain.route->stages.size())),W-274,654,Gold,.8f);Wrapped(UTF8_TO_TCHAR(Chain.planReason.c_str()),W-274,676,31);}
            else Label(TEXT("No accepted route / current orders"),W-274,654,Muted,.72f);
            Label(TEXT("Cyan: leader plan / yellow: stage"),W-274,720,Muted,.68f);
        }
        if(SelectedUnit.waitingPassage<0)Label(FString::Printf(TEXT("Local estimate: %.1f vs %.1f"),Chain.friendlyStrength,Chain.enemyStrength),W-274,432,Muted,0.75f);
        if(SelectedUnit.waitingPassage>=0)Label(FString::Printf(TEXT("Yielding passage / %.1fs"),SelectedUnit.passageWaitSeconds),W-274,432,Gold,0.8f);


    }
    if(G->IsFinished()) {
        float X=FMath::Max(335.f,(W+310)*0.5f-245),Y=H*0.28f;
        Rect(Ink,X,Y,480,256);Rect(G->Battle.winner==0?Azure:G->Battle.winner==1?Ember:Gold,X,Y,480,4);
        Label(TEXT("AFTER ACTION REPORT"),X+24,Y+22,Muted,0.95f);
        Label(G->Battle.winner==0?TEXT("AZURE VICTORY"):G->Battle.winner==1?TEXT("EMBER VICTORY"):TEXT("STALEMATE"),X+24,Y+55,Paper,1.8f);
        Wrapped(UTF8_TO_TCHAR(G->Battle.conclusion.c_str()),X+24,Y+98,52);
        Label(FString::Printf(TEXT("AZURE    %d active   %d down   %d killed"),Active[0],Down[0],Killed[0]),X+24,Y+154,Azure,1.05f);
        Label(FString::Printf(TEXT("EMBER    %d active   %d down   %d killed"),Active[1],Down[1],Killed[1]),X+24,Y+183,Ember,1.05f);
        Label(TEXT("Replay the battle or return to preparation to try a new plan."),X+24,Y+223,Muted,0.83f);
    }
}
void ABattleHUD::NotifyHitBoxClick(FName Id) {
    Super::NotifyHitBoxClick(Id);auto* G=Cast<ABattleGameMode>(GetWorld()->GetAuthGameMode());if(!G||G->IsAutomatedTest())return;
    FString Text=Id.ToString();
    if(Text.StartsWith(TEXT("unit"))) {G->Selected=FMath::Clamp(FCString::Atoi(*Text.Mid(4)),0,army::UnitCount-1);return;}
    if(Id==TEXT("timeline")) {
        float X,Y;PlayerOwner->GetMousePosition(X,Y);
        G->Seek((X/UiScale-36)/(Canvas->SizeX/UiScale-72)*G->Battle.duration);G->bPaused=true;return;
    }
    G->Command(Id);
}
