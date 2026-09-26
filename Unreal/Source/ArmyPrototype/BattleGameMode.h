#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/HUD.h"
#include "Sim/BattleSim.h"
#include "HAL/PlatformProcess.h"
#include "CharacterBlend.h"
#include "DestructionEffects.h"
#include "BattleGameMode.generated.h"

class ACameraActor;
class UStaticMesh;
class UMaterialInterface;
class UInstancedStaticMeshComponent;
class ADestructionVisual;

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
    bool IsArtShowcase() const;
    bool IsRifleShowcase() const;
    bool IsMagicShowcase() const;
    float ArtShowcaseTime=0;
    bool ArtShowcaseSlow=false;
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
    // Plan 033: Record::map is the final geometry once a battle has run; the scene starts from the battle's first
    // geometry and shows each geometry version from its time (preparation shows the first).
    const army::Map& InitialGeometry() const;
    const army::Map& ShownGeometry() const;
    bool bCleanView=false; // -ArmyDestructionCapture stills: no HUD, the view centred on the camera target
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
    void ShowArtShowcase();
    void ShowMagicShowcase();
    FVector ShotMuzzle(const army::Shot& Shot);
    UPROPERTY() TObjectPtr<class AArcaneProjectileVisual> ProjectileVisual;
    int ArtCaptureFrame=0;
    bool ArtStageReady=false;
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
    // Plan 033 building destruction (presentation only). Every obstacle is an instance in a colour batch, found by its
    // id, so a geometry version can hide, move or add any one; debris and dust come from Record::destruction.
    void PlaceObstacle(const army::Obstacle& O);
    int32 ObstacleBatch(const FLinearColor& Color,bool Roof);
    FLinearColor ObstacleColor(const army::Obstacle& O,float Time,bool& Roof) const;
    int32 GeometryIndexAt(float Time) const;
    void ShowGeometry();
    void IndexDestruction();
    void ConfigureDestruction();
    void PresentDestruction();
    void DestructionCapture();
    void BlastCapture();
    FString CheckDestruction();
    TMap<uint64,armydestruction::FObstacleVisual> ObstacleVisuals;
    UPROPERTY() TArray<TObjectPtr<UInstancedStaticMeshComponent>> ObstacleBatches;
    TMap<FString,int32> ObstacleBatchKeys;
    TArray<armydestruction::FDecorationVisual> DecorationVisuals;
    TMap<uint64,int32> RubbleMaterials;              // an added obstacle that is rubble: the material it fell from
    TMap<uint64,float> CrackedAt;                    // a cracked wall: when it cracked
    std::vector<armydestruction::FCollapse> Collapses;
    std::vector<float> StyleTimes;                   // cracks and collapses change the picture between versions too
    int32 ShownVersion=-2,ShownStyle=-1;
    uint32 GeometryPass=0;
    UPROPERTY() TObjectPtr<ADestructionVisual> DestructionVisual;
    bool bTestDestruction=false;
    armydestruction::FTestDestruction TestDestruction;
    float BlastShown=0;   // -ArmyBlastCapture: the burst the stills show
};

UCLASS()
class ARMYPROTOTYPE_API ABattleHUD : public AHUD
{
    GENERATED_BODY()
public:
    virtual void DrawHUD() override;
    virtual void NotifyHitBoxClick(FName BoxName) override;
private:
    void Label(const FString& Text, float X, float Y, FLinearColor Color, float Size = 1);
    void Button(FName Id, const FString& Text, float X, float Y, float W, float H, bool Primary = false);
    float Wrapped(const FString& Text, float X, float Y, int Columns = 33);
    float UiScale = 1;
    FVector2D CachedCanvasSize = FVector2D::ZeroVector;
    bool bDraggingDuration = false;
};
