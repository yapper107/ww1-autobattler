#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/HUD.h"
#include "Sim/BattleSim.h"
#include "HAL/PlatformProcess.h"
#include "CharacterBlend.h"
#include "BattleGameMode.generated.h"

class ACameraActor;
class UStaticMesh;
class UMaterialInterface;

UCLASS()
class ARMYPROTOTYPE_API ABattleGameMode : public AGameModeBase
{
    GENERATED_BODY()
public:
    ABattleGameMode();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;
    virtual void EndPlay(const EEndPlayReason::Type Reason) override;
    void Command(FName Name);
    void Seek(float Seconds);
    void SetBattleDuration(float Seconds);
    const army::Frame& Frame() const;
    FVector UnitPosition(int Id) const;
    bool IsFinished() const;
    FString AnimationDebugText() const;
    bool bAnimationDebug=false;
    bool IsAutomatedTest() const { return bSmoke; }
    bool IsWideView() const { return Zoom >= 0.65f; }
    army::Config Settings;
    army::Record Battle;
    TUniquePtr<army::Frame> Preparation;
    bool bPreparation = true;
    bool bPaused = false;
    bool bRoutes = false;
    float ReplayTime = 0;
    float ReplaySpeed = 1;
    int Selected = 0;
    int CognitiveScenario = 0;
    FString Notice;
    int MapSelection=0;
private:
    bool SelectMap(int Index);
    void GenerateMap();
    FProcHandle GeneratorProcess;
    int GeneratorSelection=2;
    double GeneratorStartedAt=0;
    void RefreshPreparation();
    void BuildScene();
    void ShowUnits();
    void BuildVisualTimeline();
    std::array<std::vector<double>,army::UnitCount> VisualShots;
    std::vector<std::array<armyvisual::State,army::UnitCount>> VisualTimeline;
    void RunBattle();
    void SmokeTest(float DeltaSeconds);
    void AdjustCamera(float YawDelta, float PitchDelta);
    AActor* Shape(const TCHAR* MeshPath, FVector Location, FVector Scale, FLinearColor Color);
    UPROPERTY() TArray<TObjectPtr<AActor>> SceneActors;
    UPROPERTY() TObjectPtr<ACameraActor> Camera;
    UPROPERTY() TArray<TObjectPtr<AActor>> Units;
    UPROPERTY() TArray<TObjectPtr<AActor>> UpperStructure;
    bool bShowUpperFloor = true;
    UPROPERTY() TObjectPtr<UMaterialInterface> BaseMaterial;
    FVector CameraPan = FVector::ZeroVector;
    float Zoom = 1;
    float CameraYaw = -90, CameraPitch = 60;
    float RealSeconds = 0;
    int SmokeStage = 0;
    bool bSmoke = false;
    bool bDurationSmokeChecked = false;
    bool bCapture = false;
};

UCLASS()
class ARMYPROTOTYPE_API ABattleHUD : public AHUD
{
    GENERATED_BODY()
public:
    virtual void DrawHUD() override;
    virtual void NotifyHitBoxClick(FName BoxName) override;
private:
    void DrawProjectiles(const ABattleGameMode& Game);
    void Label(const FString& Text, float X, float Y, FLinearColor Color, float Size = 1);
    void Button(FName Id, const FString& Text, float X, float Y, float W, float H, bool Primary = false);
    float Wrapped(const FString& Text, float X, float Y, int Columns = 33);
    float UiScale = 1;
    FVector2D CachedCanvasSize = FVector2D::ZeroVector;
    bool bDraggingDuration = false;
};
