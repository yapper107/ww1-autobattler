#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterBlend.h"
#include "AnimationContext.h"
#include "Animation/TrajectoryTypes.h"
#include "SoldierAnimInstance.h"
#include "WeaponDrop.h"
#include "SoldierVisual.generated.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UAnimSequence;
class UPoseSearchDatabase;
class UWeaponAnimationProfile;
class UTraversalAnimationProfile;
class UMaterialInstanceDynamic;
USTRUCT()
struct FArmyMotionFrame {
    GENERATED_BODY()
    UPROPERTY() TArray<FArmyPoseSample> Samples;
    FTransform3f Root, Pelvis,LeftFoot,RightFoot;
    FVector3f LeftKnee,RightKnee;
    FTransform3f Spine[3];
    float SprintCarry=0,MovingFireIntent=0,MovingFireCarry=0;
    FVector2f WorldAim=FVector2f::ZeroVector; // yaw/pitch, independent of actor turning
    float WorldLook=0;
    bool AttentionCached=false;
    bool Contacts=false;
};
UCLASS()
class ARMYPROTOTYPE_API ASoldierVisual : public AActor {
    GENERATED_BODY()
public:
    ASoldierVisual();
    static bool AssetsAvailable();
    bool Initialize(int Team,bool Male=false,bool MachineGun=false);
    void Present(const armyvisual::State& State,double ReplayTime);
    void PresentReplay(const armyvisual::context::ReplaySource& Source,int Slot,const armyvisual::State& State,double ReplayTime);
    bool AdvanceMotion(bool Crouch,const FTransform& Transform,const FTransformTrajectory& Trajectory,bool Sprint=false,bool Grounded=true,bool MovingFire=false);
    // Fixed-step contacts must query the matching destruction revision, then restore the displayed world.
    TFunction<void(double)> MotionGeometry;
    TFunction<void()> RestoreGeometry;
    void ResetMotion();
    bool UsesGasp() const{return bGasp;}
    bool HasVaultAnimation() const{return bGasp&&VaultProfile!=nullptr;}
    void SetTraversalLandmarks(FVector Takeoff,FVector Landing){VaultTakeoff=Takeoff;VaultLanding=Landing;}
    int MotionFrameCount() const{return MotionFrames.Num();}
    FString PoseDescription() const;
    FString ValidatePresentation();
    float GripError() const;
    FVector MuzzlePosition() const;
    FVector SampleMuzzle(const armyvisual::context::ReplaySource* Source,int Slot,const armyvisual::State& State,double Time,const FTransform& Transform);
    void SetCoatDetail(bool Enabled);
    bool HasCoatDetail() const;
    bool HasPhysicalWeaponDrop() const{return !WeaponDrop.Frames.IsEmpty();}
    UPROPERTY(VisibleAnywhere) TObjectPtr<USkeletalMeshComponent> Body;
    UPROPERTY() TObjectPtr<USkeletalMeshComponent> MotionDriver;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingMovingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingMovingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingStartingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingStartingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingStoppingDatabase;
    UPROPERTY() TArray<TObjectPtr<UPoseSearchDatabase>> StandingGaitStoppingDatabases;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingStoppingDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingIdleDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingIdleDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> StandingTurningDatabase;
    UPROPERTY() TObjectPtr<UPoseSearchDatabase> CrouchingTurningDatabase;
    UPROPERTY() TArray<TObjectPtr<UPoseSearchDatabase>> TurningAngleDatabases;
    UPROPERTY() TObjectPtr<UAnimSequence> AuthoredWeaponShot;
    UPROPERTY() TObjectPtr<UAnimSequence> AuthoredMGShot;
    UPROPERTY() TObjectPtr<UAnimSequence> AuthoredWeaponReload;
    UPROPERTY() TObjectPtr<UAnimSequence> AuthoredWeaponCarry;
    UPROPERTY() TArray<FArmyMotionFrame> MotionFrames;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> Rifle;
    UPROPERTY() TArray<TObjectPtr<UAnimSequence>> Clips;
    UPROPERTY() TObjectPtr<UAnimSequence> MachineGunAim;
    UPROPERTY() TObjectPtr<UWeaponAnimationProfile> EquipmentProfile;
    UPROPERTY() TObjectPtr<UTraversalAnimationProfile> VaultProfile;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> Bolt;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> ReloadProp;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> RiflePouch;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> RiflePouchFlap;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> RifleCharger;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> MGFeedCover;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> MGFeedBelt;
    UPROPERTY(VisibleAnywhere) TObjectPtr<UStaticMeshComponent> MGAmmoPouch;
    bool IsMale=false,IsMachineGun=false;
    armyvisual::State LastState;
    double LastTime=0;
private:
    bool bGasp=false;
    bool bPoseQuery=false;
    bool bDropQuery=false;
    FWeaponDrop WeaponDrop;
    float AimYaw=0,AimPitch=0,LookYaw=0,LookPitch=0;
    FVector VaultTakeoff=FVector::ZeroVector,VaultLanding=FVector::ZeroVector;
    FTransform PouchBindHipInverse;
    FVector PouchHinge=FVector(-13.3,4.3,108.4);
    void ReadMotion(double Time,TArray<FArmyPoseSample>& Out) const;
};
