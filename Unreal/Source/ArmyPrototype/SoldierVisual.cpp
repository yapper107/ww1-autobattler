#include "SoldierVisual.h"
#include "Engine/Texture.h"
#include "SoldierAnimInstance.h"
#include "SoldierMotionInstance.h"
#include "SoldierClothComponent.h"
#include "WeaponAnimationProfile.h"
#include "MachineGunMechanism.h"
#include "TraversalAnimationProfile.h"
#include "PoseSearch/PoseSearchDatabase.h"
#if WITH_EDITOR
#include "PoseSearch/PoseSearchDerivedData.h"
#endif
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Engine/StaticMesh.h"
#include "Animation/AnimSequence.h"
#include "AnimationRuntime.h"
#include "Materials/MaterialInstanceDynamic.h"

ASoldierVisual::ASoldierVisual() {
    PrimaryActorTick.bCanEverTick=false;
    RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("GroundRoot"));
    Body=CreateDefaultSubobject<USoldierClothComponent>(TEXT("Soldier"));Body->SetupAttachment(RootComponent);
    Body->SetRelativeRotation(FRotator(0,-90,0)); // Standard FBX import faces +Y; game faces +X.
    Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);Body->SetAnimationMode(EAnimationMode::AnimationBlueprint);
    Body->VisibilityBasedAnimTickOption=EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    Body->bEnableUpdateRateOptimizations=false;
    MotionDriver=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MotionPlanner"));
    MotionDriver->SetAllowClothActors(false);
    MotionDriver->SetupAttachment(RootComponent);MotionDriver->SetAbsolute(true,true,true);
    MotionDriver->SetCollisionEnabled(ECollisionEnabled::NoCollision);MotionDriver->SetVisibility(false);
    MotionDriver->SetCastShadow(false);MotionDriver->bEnableUpdateRateOptimizations=false;
    MotionDriver->VisibilityBasedAnimTickOption=EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    MotionDriver->SetComponentTickEnabled(false);
    Rifle=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rifle"));Rifle->SetupAttachment(RootComponent);Rifle->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    Bolt=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bolt"));Bolt->SetupAttachment(Rifle);Bolt->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    ReloadProp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReloadProp"));ReloadProp->SetupAttachment(Rifle);ReloadProp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MGFeedCover=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MGFeedCover"));MGFeedCover->SetupAttachment(Rifle);MGFeedCover->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MGFeedBelt=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MGFeedBelt"));MGFeedBelt->SetupAttachment(Rifle);MGFeedBelt->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MGAmmoPouch=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MGAmmoPouch"));MGAmmoPouch->SetupAttachment(Body);MGAmmoPouch->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RiflePouch=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RiflePouch"));RiflePouch->SetupAttachment(RootComponent);
    RiflePouchFlap=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RiflePouchFlap"));RiflePouchFlap->SetupAttachment(RootComponent);
    RifleCharger=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RifleCharger"));RifleCharger->SetupAttachment(RootComponent);
    RifleCharger->SetCollisionEnabled(ECollisionEnabled::NoCollision);RifleCharger->SetVisibility(false);
    for(auto* Part:{RiflePouch.Get(),RiflePouchFlap.Get()}){Part->SetCollisionEnabled(ECollisionEnabled::NoCollision);Part->SetVisibility(false);}
}
bool ASoldierVisual::AssetsAvailable() {
    return LoadObject<USkeletalMesh>(nullptr,TEXT("/Game/Characters/FemaleRifle/SK_Female_Rifle.SK_Female_Rifle"))!=nullptr;
}
bool ASoldierVisual::Initialize(int Team,bool Male,bool MachineGun) {
    IsMale=Male;IsMachineGun=MachineGun;
    const FString GaspBody=Male?TEXT("Male"):TEXT("Female");
    StandingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing")));
    CrouchingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch")));
    StandingMovingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_moving")));
    CrouchingMovingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch_moving")));
    StandingStartingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_starting")));
    CrouchingStartingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch_starting")));
    StandingStoppingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_stopping")));
    CrouchingStoppingDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch_stopping")));
    for(const TCHAR* Gait:{TEXT("walk"),TEXT("run"),TEXT("sprint")})
        for(const TCHAR* Sector:{TEXT(""),TEXT("_f"),TEXT("_fr"),TEXT("_r"),TEXT("_br"),TEXT("_b"),TEXT("_bl"),TEXT("_l"),TEXT("_fl")})
            StandingGaitStoppingDatabases.Add(LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_stopping_")+Gait+Sector),nullptr,LOAD_NoWarn));
    for(const TCHAR* Stance:{TEXT("standing"),TEXT("crouch")})
        for(const TCHAR* Angle:{TEXT("045"),TEXT("090"),TEXT("135"),TEXT("180")})
            for(const TCHAR* Side:{TEXT("_L"),TEXT("_R")})
                TurningAngleDatabases.Add(LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_")+Stance+TEXT("_turning_")+Angle+Side),nullptr,LOAD_NoWarn));
    StandingIdleDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_idle")));
    CrouchingIdleDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch_idle")));
    StandingTurningDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_standing_turning")),nullptr,LOAD_NoWarn);
    CrouchingTurningDatabase=LoadObject<UPoseSearchDatabase>(nullptr,*(TEXT("/Game/Characters/GASP/Motion/")+GaspBody+TEXT("/PSD_crouch_turning")),nullptr,LOAD_NoWarn);
    bGasp=StandingDatabase&&CrouchingDatabase&&!FParse::Param(FCommandLine::Get(),TEXT("ArmyLegacyAnimation"));
    if(bGasp) {
        if(!MachineGun) {
            AuthoredWeaponShot=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/A_Rifle_ShotBolt")),nullptr,LOAD_NoWarn);
            AuthoredWeaponCarry=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/A_Rifle_LowReady")),nullptr,LOAD_NoWarn);
        }
        else AuthoredMGShot=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/A_MG_Shot")),nullptr,LOAD_NoWarn);
        AuthoredWeaponReload=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+(MachineGun?TEXT("/A_MG_Reload"):TEXT("/A_Rifle_Reload"))),nullptr,LOAD_NoWarn);
        VaultProfile=LoadObject<UTraversalAnimationProfile>(nullptr,*(TEXT("/Game/Characters/GASP/Actions/")+GaspBody+TEXT("/DA_Vault")));
        // In an uncooked editor game, loading a database starts its DDC build
        // asynchronously. A replay must not cache an empty first decision.
#if WITH_EDITOR
        using namespace UE::PoseSearch;
        for(const UPoseSearchDatabase* Database:{StandingDatabase.Get(),CrouchingDatabase.Get(),StandingMovingDatabase.Get(),CrouchingMovingDatabase.Get(),
            StandingStartingDatabase.Get(),CrouchingStartingDatabase.Get(),StandingStoppingDatabase.Get(),CrouchingStoppingDatabase.Get(),StandingIdleDatabase.Get(),CrouchingIdleDatabase.Get(),StandingTurningDatabase.Get(),CrouchingTurningDatabase.Get()})
            if(Database)
            if(FAsyncPoseSearchDatabasesManagement::RequestAsyncBuildIndex(Database,ERequestAsyncBuildFlag::NewRequest|ERequestAsyncBuildFlag::WaitForCompletion)!=EAsyncBuildIndexResult::Success)return false;
        for(const auto& Database:TurningAngleDatabases)if(Database)
            if(FAsyncPoseSearchDatabasesManagement::RequestAsyncBuildIndex(Database,ERequestAsyncBuildFlag::NewRequest|ERequestAsyncBuildFlag::WaitForCompletion)!=EAsyncBuildIndexResult::Success)return false;
        for(const auto& Database:StandingGaitStoppingDatabases)if(Database)
            if(FAsyncPoseSearchDatabasesManagement::RequestAsyncBuildIndex(Database,ERequestAsyncBuildFlag::NewRequest|ERequestAsyncBuildFlag::WaitForCompletion)!=EAsyncBuildIndexResult::Success)return false;
#endif
        const FString ProfilePath=TEXT("/Game/Characters/GASP/Equipment/DA_")+FString(MachineGun?TEXT("MachineGun"):TEXT("Rifle"));
        EquipmentProfile=LoadObject<UWeaponAnimationProfile>(nullptr,*ProfilePath);
        if(!EquipmentProfile) {
            EquipmentProfile=NewObject<UWeaponAnimationProfile>(this);
            if(MachineGun){EquipmentProfile->MovingLeanDegrees=6;EquipmentProfile->ManualBolt=false;EquipmentProfile->SpineWeight=.75f;}
        }
    }
    auto* Mesh=LoadObject<USkeletalMesh>(nullptr,bGasp?*(TEXT("/Game/Characters/GASP/Bodies/SK_")+GaspBody+TEXT("_GASP")):
        Male?TEXT("/Game/Characters/Male/SK_Male.SK_Male"):TEXT("/Game/Characters/FemaleRifle/SK_Female_Rifle.SK_Female_Rifle"));
    if(!Mesh)return false;
    // These unweighted control bones must survive the required-bone reduction too.
    for(const auto Name:{TEXT("Weapon_Free"),TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("WeaponMuzzle")}) {
        const FName SocketName=FName(FString(TEXT("Required_"))+Name);
        if(!Mesh->FindSocket(SocketName)) {
            auto* Socket=NewObject<USkeletalMeshSocket>(Mesh);Socket->SocketName=SocketName;Socket->BoneName=Name;Socket->bForceAlwaysAnimated=true;Mesh->GetMeshOnlySocketList().Add(Socket);
        }
    }
    Body->SetSkeletalMesh(Mesh);Body->SetRelativeScale3D(FVector::OneVector);
    Rifle->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,MachineGun?TEXT("/Game/Characters/FemaleRifle/SM_MachineGun.SM_MachineGun"):TEXT("/Game/Characters/FemaleRifle/SM_Rifle.SM_Rifle")));
    Bolt->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Game/Characters/FemaleRifle/SM_Bolt.SM_Bolt")));
    ReloadProp->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,MachineGun?TEXT("/Game/Characters/FemaleRifle/SM_MGBox.SM_MGBox"):TEXT("/Game/Characters/FemaleRifle/SM_ReloadClip.SM_ReloadClip")));
    if(bGasp&&MachineGun) {
        auto LoadPart=[](const TCHAR* Name){return LoadObject<UStaticMesh>(nullptr,*(FString(TEXT("/Game/Characters/GASP/Equipment/SM_MG_"))+Name),nullptr,LOAD_NoWarn);};
        auto* GunBody=LoadPart(TEXT("Body"));auto* Cover=LoadPart(TEXT("Cover"));auto* Belt=LoadPart(TEXT("Belt"));
        auto* Box=LoadPart(TEXT("Box"));auto* Handle=LoadPart(TEXT("ChargingHandle"));auto* Pouch=LoadPart(TEXT("AmmoPouch"));
        if(GunBody&&Cover&&Belt&&Box&&Handle&&Pouch) {
            Rifle->SetStaticMesh(GunBody);MGFeedCover->SetStaticMesh(Cover);MGFeedBelt->SetStaticMesh(Belt);
            ReloadProp->SetStaticMesh(Box);Bolt->SetStaticMesh(Handle);MGAmmoPouch->SetStaticMesh(Pouch);
            const int32 Hip=Mesh->GetRefSkeleton().FindBoneIndex(TEXT("Hips"));
            PouchBindHipInverse=FAnimationRuntime::GetComponentSpaceTransformRefPose(Mesh->GetRefSkeleton(),Hip).Inverse();
        }
    }
    if(!Body->GetSkeletalMeshAsset()||!Rifle->GetStaticMesh())return false;
    for(const auto& C:armyvisual::Clips) {
        FString Name=UTF8_TO_TCHAR(C.name);
        const FString Folder=bGasp?TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/"):
            Male?TEXT("/Game/Characters/Male/"):TEXT("/Game/Characters/FemaleRifle/");
        auto* Clip=LoadObject<UAnimSequence>(nullptr,*(Folder+Name+TEXT(".")+Name));
        if(!Clip){UE_LOG(LogTemp,Error,TEXT("Missing character clip %s"),*Name);return false;}
        Clips.Add(Clip);
    }
    if(MachineGun) {
        MachineGunAim=LoadObject<UAnimSequence>(nullptr,bGasp?*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/A_mg_aiming")):
            Male?TEXT("/Game/Characters/Male/A_mg_aiming.A_mg_aiming"):TEXT("/Game/Characters/FemaleRifle/A_mg_aiming.A_mg_aiming"));
        if(bGasp)if(auto* Ready=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/GASP/Legacy/")+GaspBody+TEXT("/A_MG_Ready")),nullptr,LOAD_NoWarn))MachineGunAim=Ready;
        if(!MachineGunAim)return false;
    }
    Body->SetAnimInstanceClass(USoldierAnimInstance::StaticClass());
    Body->SetComponentTickEnabled(false); // Evaluated explicitly at battle time, including paused seeks.
    Body->ClothTickFunction.SetTickFunctionEnable(false);
    if(bGasp) {
        Body->SetDisablePostProcessBlueprint(true);
        MotionDriver->SetSkeletalMesh(Mesh);MotionDriver->SetDisablePostProcessBlueprint(true);
        MotionDriver->SetAnimInstanceClass(USoldierMotionInstance::StaticClass());
        MotionDriver->SetComponentTickEnabled(false);
    }
    if(Team==1) {
        for(int I=0;I<Body->GetNumMaterials();++I) {
            const FString Name=Body->GetMaterial(I)->GetName();FLinearColor Tint=FLinearColor::White;bool Swap=true;
            if(Name.Contains(TEXT("maleatlas"))) {
                auto* M=Body->CreateDynamicMaterialInstance(I);
                M->SetTextureParameterValue(TEXT("BaseColorTexture"),LoadObject<UTexture>(nullptr,TEXT("/Game/Characters/Male/T_Male_Ember.T_Male_Ember")));
            }
            if(Name.Contains(TEXT("coat")))Tint=FLinearColor::FromSRGBColor(FColor(112,38,28));
            else if(Name.Contains(TEXT("collar")))Tint=FLinearColor::FromSRGBColor(FColor(162,65,35));
            else if(Name.Contains(TEXT("trousers")))Tint=FLinearColor::FromSRGBColor(FColor(67,44,40));
            else if(Name.Contains(TEXT("helmet")))Tint=FLinearColor::FromSRGBColor(FColor(78,30,29));
            else Swap=false;
            if(Swap){auto* M=Body->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),Tint);}
        }
        for(int I=0;I<Rifle->GetNumMaterials();++I)if(Rifle->GetMaterial(I)->GetName().Contains(TEXT("cyan"))||Rifle->GetMaterial(I)->GetName().Contains(TEXT("crystal"))||Rifle->GetMaterial(I)->GetName().Contains(TEXT("arcaneblue"))) {
            auto* M=Rifle->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor::FromSRGBColor(FColor(245,98,23)));
        }
    }
    if(Team==1)for(int I=0;I<MGFeedBelt->GetNumMaterials();++I)if(MGFeedBelt->GetMaterial(I)&&MGFeedBelt->GetMaterial(I)->GetName().Contains(TEXT("arcaneblue"))) {
        auto* M=MGFeedBelt->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor::FromSRGBColor(FColor(245,98,23)));
    }
    if(Team==1)for(int I=0;I<ReloadProp->GetNumMaterials();++I)if(ReloadProp->GetMaterial(I)->GetName().Contains(TEXT("cyan"))) {
        auto* M=ReloadProp->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor::FromSRGBColor(FColor(245,98,23)));
    }
    if(!MachineGun)for(int I=0;I<ReloadProp->GetNumMaterials();++I)ReloadProp->CreateDynamicMaterialInstance(I);
    if(bGasp&&!MachineGun) {
        auto* Bag=LoadObject<UStaticMesh>(nullptr,Male?TEXT("/Game/Characters/GASP/Equipment/SM_MaleRiflePouch"):TEXT("/Game/Characters/GASP/Equipment/SM_RiflePouch"),nullptr,LOAD_NoWarn);
        auto* Flap=LoadObject<UStaticMesh>(nullptr,Male?TEXT("/Game/Characters/GASP/Equipment/SM_MaleRiflePouchFlap"):TEXT("/Game/Characters/GASP/Equipment/SM_RiflePouchFlap"),nullptr,LOAD_NoWarn);
        auto* Mask=LoadObject<UMaterialInterface>(nullptr,Male?TEXT("/Game/Characters/GASP/Equipment/M_maleatlasArticulatedPouch"):TEXT("/Game/Characters/GASP/Equipment/M_WebbingArticulatedPouch"),nullptr,LOAD_NoWarn);
        const int32 Hip=Mesh->GetRefSkeleton().FindBoneIndex(TEXT("Hips"));
        if(Bag&&Flap&&Mask&&Hip!=INDEX_NONE) {
            PouchBindHipInverse=FAnimationRuntime::GetComponentSpaceTransformRefPose(Mesh->GetRefSkeleton(),Hip).Inverse();
            int32 MaskedSlots=0;
            for(int I=0;I<Body->GetNumMaterials();++I) {
                if(Body->GetMaterial(I)->GetName().Contains(Male?TEXT("maleatlas"):TEXT("webbing"))) {
                    Body->SetMaterial(I,Mask);++MaskedSlots;
                    if(Male&&Team==1)Body->CreateDynamicMaterialInstance(I)->SetTextureParameterValue(TEXT("BaseColorTexture"),LoadObject<UTexture>(nullptr,TEXT("/Game/Characters/Male/T_Male_Ember")));
                }
            }
            if(MaskedSlots>0&&ensureMsgf(Mask->GetBlendMode()==BLEND_Masked,TEXT("Articulated pouch requires a masked webbing material"))) {
                RiflePouch->SetStaticMesh(Bag);RiflePouchFlap->SetStaticMesh(Flap);
                PouchHinge=Male?FVector(-15.7858327,9.8804981,118.3663845):FVector(-13.3,4.3,108.4);
                RifleCharger->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Game/Characters/GASP/Equipment/SM_RifleCharger"),nullptr,LOAD_NoWarn));
                RiflePouch->SetVisibility(true);RiflePouchFlap->SetVisibility(true);
            }
        }
    }
    return true;
}
void ASoldierVisual::Present(const armyvisual::State& State,double Time) {
    auto* Anim=Cast<USoldierAnimInstance>(Body->GetAnimInstance());if(!Anim)return;
    Anim->DeathEntryPose.Reset();Anim->DeathEntryWeight=0;
    TArray<FTransform> EntryPose;
    const double DeathAge=State.outAt<0?-1:Time-State.outAt;
    if(bGasp&&DeathAge>=0&&DeathAge<.15) {
        // PresentationState retains the last living handling/stance. Evaluate
        // that exact entry on demand so direct seeks and muzzle queries agree
        // with ordinary forward playback, without advancing cloth twice.
        auto Live=State;Live.outAt=-1;
        TGuardValue<bool> Query(bPoseQuery,true);
        Present(Live,State.outAt);
        EntryPose=Body->GetBoneSpaceTransforms();
    }
    LastState=State;LastTime=Time;
    Anim->DeathEntryPose=MoveTemp(EntryPose);
    Anim->DeathEntryWeight=Anim->DeathEntryPose.IsEmpty()?0:1-FMath::SmoothStep(0.f,.15f,float(DeathAge));
    Anim->Samples.Reset();
    Anim->ContactsEnabled=false;
    Anim->RootOffsetEnabled=false;
    Anim->VaultPlant=0;
    if(bGasp&&!MotionFrames.IsEmpty()&&!State.handling.vaulting&&State.prone<.1f) {
        const float Death=State.outAt<0?0.f:FMath::Clamp(float((Time-State.outAt)/.15),0.f,1.f);
        if(Death<1) {
            ReadMotion(State.outAt<0?Time:FMath::Min(Time,double(State.outAt)),Anim->Samples);
            for(auto& S:Anim->Samples)S.Weight*=1-Death;
        }
        if(Death>0)for(const auto& S:armyvisual::Samples(State,Time)) {
            if(!FString(UTF8_TO_TCHAR(armyvisual::Clips[S.clip].name)).Contains(TEXT("death")))continue;
            FArmyPoseSample Sample;Sample.Sequence=Clips[S.clip];Sample.Weight=S.weight;Sample.Time=S.time;Anim->Samples.Add(Sample);
        }
    }
    else for(const auto& S:armyvisual::Samples(State,Time)) {
        FArmyPoseSample Sample;Sample.Sequence=Clips[S.clip];Sample.Weight=S.weight;Sample.Time=S.time;Anim->Samples.Add(Sample);
    }
    Anim->GripAlpha=armyvisual::Grip(State,Time);
    auto Input=State.handling;Input.machineGun=IsMachineGun;
    if(bGasp&&!MotionFrames.IsEmpty()) {
        const double F=FMath::Max(Time,0.)*30;
        const int A=FMath::Clamp(FMath::FloorToInt(F),0,MotionFrames.Num()-1),B=FMath::Min(A+1,MotionFrames.Num()-1);
        Input.movingFireWeight=FMath::Lerp(MotionFrames[A].MovingFireCarry,MotionFrames[B].MovingFireCarry,float(F-FMath::FloorToDouble(F)));
    }
    armyvisual::HandlingSettings Settings;
    if(EquipmentProfile) {
        Settings.kickCentimetres=EquipmentProfile->KickCentimetres;Settings.kickDegrees=EquipmentProfile->KickDegrees;
        Settings.recoverySeconds=EquipmentProfile->RecoverySeconds;Settings.manualBolt=EquipmentProfile->ManualBolt;
        Settings.boltStartSeconds=EquipmentProfile->BoltStartSeconds;
    }
    auto BaseHandling=Input;
    if(IsMachineGun&&AuthoredMGShot)BaseHandling.lastShot=-1000; // authored impulses replace procedural recoil
    Anim->Handling=armyvisual::Handling(BaseHandling,Time,State.aim,State.outAt>=0,Settings);
    Anim->ArmedReference.Reset();
    Anim->AuthoredBurst.Reset();
    Anim->AuthoredHandling=false;
    Anim->ArticulatedRiflePouch=RiflePouch->GetStaticMesh()!=nullptr;
    Anim->AuthoredHandlingAlpha=0;
    Anim->AuthoredPelvisOffset=FVector::ZeroVector;
    Anim->AuthoredMGPelvisWeight=0;
    Anim->WeaponReady=FMath::Clamp(State.aim,0.f,1.f);
    if(bGasp&&State.outAt<0) {
        const double ShotAge=Time-Input.lastShot;
        // Keep a completed shot in the shoulder through its bolt cycle, then
        // release smoothly. Negative ages are future events, not handling.
        const float ShotReady=ShotAge>=0?1-FMath::SmoothStep(Input.cycleSeconds,Input.cycleSeconds+.35f,float(ShotAge)):0;
        const float ReloadReady=Input.reloadStart>=0&&Time>=Input.reloadStart?
            1-FMath::SmoothStep(float(Input.reloadEnd),float(Input.reloadEnd+.35),float(Time)):0;
        Anim->WeaponReady=FMath::Max(Anim->WeaponReady,FMath::Max(ShotReady,ReloadReady));
        const float Ready=1-Anim->WeaponReady;
        float Sprint=Input.sprinting?1.f:0.f;
        if(!MotionFrames.IsEmpty()) {
            const double F=FMath::Max(Time,0.)*30;const int A=FMath::Clamp(FMath::FloorToInt(F),0,MotionFrames.Num()-1),B=FMath::Min(A+1,MotionFrames.Num()-1);
            Sprint=FMath::Lerp(MotionFrames[A].SprintCarry,MotionFrames[B].SprintCarry,float(F-FMath::FloorToDouble(F)));
        }
        const float CarryWeight=1-Anim->Handling.traversal;
        // Rifle carry comes from the authored relaxed pose. MG keeps its own
        // calibrated grip reference and equipment-specific support height.
        const FVector Carry=FMath::Lerp(IsMachineGun?EquipmentProfile->ReadyOffset*Ready:FVector::ZeroVector,EquipmentProfile->SprintOffset,Sprint)*CarryWeight;
        Anim->Handling.gun.x+=float(Carry.X);Anim->Handling.gun.y+=float(Carry.Y);Anim->Handling.gun.z+=float(Carry.Z);
        Anim->Handling.pitch+=FMath::Lerp(IsMachineGun?EquipmentProfile->ReadyPitch*Ready:0.f,EquipmentProfile->SprintPitch,Sprint)*CarryWeight;
        if(!Input.vaulting)Anim->Handling.upper=1;
        const float Crouch=FMath::Clamp(State.crouch,0.f,1.f);
        for(int Stance=0;Stance<2;++Stance)for(int Aimed=0;Aimed<2;++Aimed) {
            const float Weight=(Stance?Crouch:1-Crouch)*(Aimed?Anim->WeaponReady:1-Anim->WeaponReady);
            if(Weight<.00001f)continue;
            const char* Names[2][2]={{"A_idle","A_idle_aiming"},{"A_idle_crouching","A_idle_crouching_aiming"}};
            FArmyPoseSample Sample;Sample.Sequence=IsMachineGun?MachineGunAim.Get():Clips[armyvisual::Find(Names[Stance][Aimed])].Get();Sample.Weight=Weight;
            if(!IsMachineGun&&!Aimed&&AuthoredWeaponCarry)Sample.Sequence=AuthoredWeaponCarry;
            Sample.Time=FMath::Fmod(FMath::Max(0.,Time),double(Sample.Sequence->GetPlayLength()));Anim->ArmedReference.Add(Sample);
        }
        const auto ActionLayers=armyvisual::AuthoredLayers(Input,Time,AuthoredWeaponShot!=nullptr,AuthoredWeaponReload!=nullptr);
        if(ActionLayers.shotActive||ActionLayers.reloadActive) {
            for(auto& S:Anim->ArmedReference)S.Weight*=ActionLayers.ReferenceWeight();
            auto AddAction=[&](UAnimSequence* Clip,float Phase,float Weight) {
                if(Weight<=0)return;
                FArmyPoseSample Sample;Sample.Sequence=Clip;Sample.Time=Phase*Clip->GetPlayLength();Sample.Weight=Weight;
                Anim->ArmedReference.Add(Sample);
            };
            AddAction(AuthoredWeaponShot,ActionLayers.shotPhase,ActionLayers.shotWeight);
            AddAction(AuthoredWeaponReload,ActionLayers.reloadPhase,ActionLayers.reloadWeight);
            Anim->AuthoredHandling=true;
            Anim->AuthoredHandlingAlpha=ActionLayers.shotWeight+ActionLayers.reloadWeight;
            // Both the pose and the visible mechanism use the same interrupted
            // action mixture. Never insert a reference-pose detour at reload.
            auto& H=Anim->Handling;H.gun={};H.right={};H.left={};H.pitch=H.gunYaw=H.gunRoll=0;
            H.torsoPitch=H.torsoYaw=H.torsoRoll=H.headPitch=H.headYaw=0;
            auto Envelope=[](float U,float A,float B,float C,float D){return armyvisual::Smooth((U-A)/(B-A))*(1-armyvisual::Smooth((U-C)/(D-C)));};
            const auto Shot=armyvisual::AuthoredRifleMechanism(ActionLayers.shotPhase,false);
            const auto Reload=armyvisual::AuthoredRifleMechanism(ActionLayers.reloadPhase,true);
            auto Mechanism=[&](float S,float R){return IsMachineGun?0.f:S*ActionLayers.shotWeight+R*ActionLayers.reloadWeight;};
            H.boltOpen=Mechanism(Shot.boltOpen,Reload.boltOpen);
            H.boltBack=Mechanism(Shot.boltBack,Reload.boltBack);
            H.boltContact=Mechanism(Shot.boltContact,Reload.boltContact);
            H.reloadContact=Mechanism(0,Reload.reloadContact);
            if(ActionLayers.reloadActive&&!IsMachineGun)H.clip=ActionLayers.reloadPhase>=(RiflePouch->GetStaticMesh()?.345f:.295f)&&ActionLayers.reloadPhase<.70f?1.f:0.f;
            H.rightSupport=1-Mechanism(1-Shot.rightSupport,1-Reload.rightSupport);
            H.leftSupport=IsMachineGun?1-Envelope(ActionLayers.reloadPhase,.18f,.20f,.67f,.685f)*ActionLayers.reloadWeight:1;
            Anim->ArticulatedMG=MGFeedCover->GetStaticMesh()!=nullptr;
            if(IsMachineGun&&!AuthoredMGShot&&ActionLayers.reloadActive) {
                // Retain the end of the latest burst as the authored reload
                // enters. Clearing recoil on the request frame snapped the
                // supporting elbow before the authored action had any weight.
                auto RecoilInput=Input;RecoilInput.reloadStart=RecoilInput.reloadEnd=-1;
                const auto Recoil=armyvisual::Handling(RecoilInput,Time,State.aim,false,Settings);
                const float Residual=1-ActionLayers.reloadWeight;
                H.gun={Recoil.gun.x*Residual,Recoil.gun.y*Residual,Recoil.gun.z*Residual};
                H.pitch=Recoil.pitch*Residual;
                H.torsoPitch=Recoil.torsoPitch*Residual;H.torsoYaw=Recoil.torsoYaw*Residual;H.headPitch=Recoil.headPitch*Residual;
            }
            const float Stationary=(1-armyvisual::Smooth(float(std::hypot(State.forward,State.right))/.35f))*(1-FMath::Clamp(State.crouch,0.f,1.f));
            const float ShotLoad=Envelope(ActionLayers.shotPhase,.10f,.22f,.72f,.94f)*ActionLayers.shotWeight;
            const float ReloadLoad=Envelope(ActionLayers.reloadPhase,0,.16f,.90f,1.f)*ActionLayers.reloadWeight;
            Anim->AuthoredPelvisOffset=IsMachineGun?FVector::ZeroVector:(FVector(.8,0,0)*ShotLoad+FVector(1.8,1.4,-1.2)*ReloadLoad)*Stationary;
            Anim->AuthoredMGPelvisWeight=IsMachineGun?Stationary:0.f;
        }
        if(IsMachineGun&&AuthoredMGShot&&!Input.sprinting&&!Input.vaulting) {
            auto AddImpulse=[&](double ShotTime) {
                const double Age=Time-ShotTime;
                if(Age<0||Age>=AuthoredMGShot->GetPlayLength())return;
                FArmyPoseSample Sample;Sample.Sequence=AuthoredMGShot;Sample.Time=Age;
                Sample.Weight=1-ActionLayers.reloadWeight;
                if(Sample.Weight>0)Anim->AuthoredBurst.Add(Sample);
            };
            for(int I=0;I<Input.recoilShotCount;++I)AddImpulse(Input.recoilShots[size_t(I)]);
            if(Input.recoilShotCount==0)AddImpulse(Input.lastShot);
        }
    }
    if(IsMachineGun&&State.outAt<0&&!Input.vaulting)Anim->Handling.upper=1.f;
    Anim->StandingAim=IsMachineGun?MachineGunAim.Get():Clips[armyvisual::Find("A_idle_aiming")].Get();Anim->MachineGun=IsMachineGun;Anim->ModelScale=1.f;
    Anim->EquipmentProfile=EquipmentProfile;Anim->AimYaw=AimYaw;Anim->AimPitch=AimPitch;Anim->LookYaw=LookYaw;Anim->LookPitch=LookPitch;
    Anim->MoveSpeed=std::hypot(State.forward,State.right);Anim->PoseTime=Time;
    if(bGasp&&!MotionFrames.IsEmpty()&&State.outAt<0&&!State.handling.vaulting&&State.prone<.1f) {
        const double Frame=FMath::Max(Time,0.)*30;const int A=FMath::Clamp(FMath::FloorToInt(Frame),0,MotionFrames.Num()-1),B=FMath::Min(A+1,MotionFrames.Num()-1);
        const float Alpha=A==B?0:float(Frame-FMath::FloorToDouble(Frame));
        Anim->ContactsEnabled=MotionFrames[A].Contacts&&MotionFrames[B].Contacts;
        Anim->RootOffsetEnabled=true;
        Anim->MotionRoot.Blend(FTransform(MotionFrames[A].Root),FTransform(MotionFrames[B].Root),Alpha);
        Anim->ContactPelvis.Blend(FTransform(MotionFrames[A].Pelvis),FTransform(MotionFrames[B].Pelvis),Alpha);
        Anim->ContactLeftFoot.Blend(FTransform(MotionFrames[A].LeftFoot),FTransform(MotionFrames[B].LeftFoot),Alpha);
        Anim->ContactRightFoot.Blend(FTransform(MotionFrames[A].RightFoot),FTransform(MotionFrames[B].RightFoot),Alpha);
        Anim->ContactLeftKnee=FVector(FMath::Lerp(MotionFrames[A].LeftKnee,MotionFrames[B].LeftKnee,Alpha));
        Anim->ContactRightKnee=FVector(FMath::Lerp(MotionFrames[A].RightKnee,MotionFrames[B].RightKnee,Alpha));
        for(int I=0;I<3;++I)Anim->ContactSpine[I].Blend(FTransform(MotionFrames[A].Spine[I]),FTransform(MotionFrames[B].Spine[I]),Alpha);
    }
    if(HasVaultAnimation()&&Input.vaulting&&State.outAt<0&&VaultProfile->Animation) {
        const float P=FMath::Clamp(Input.vaultProgress,0.f,1.f);
        const float T=FMath::Lerp(VaultProfile->StartSeconds,VaultProfile->LandSeconds,P);
        auto RootAt=[&](float At){return VaultProfile->Animation->ExtractRootTrackTransform(FAnimExtractContext(At,false),nullptr);};
        const FTransform SourceRoot=RootAt(T),StartRoot=RootAt(VaultProfile->StartSeconds),EndRoot=RootAt(VaultProfile->LandSeconds);
        const double Y=SourceRoot.GetLocation().Y,Wall=VaultProfile->SourceObstacleForward;
        const float Across=Y<Wall?.5f*float((Y-StartRoot.GetLocation().Y)/FMath::Max(1.,Wall-StartRoot.GetLocation().Y)):
            .5f+.5f*float((Y-Wall)/FMath::Max(1.,EndRoot.GetLocation().Y-Wall));
        const FVector Ground=FMath::Lerp(VaultTakeoff,VaultLanding,FMath::Clamp(Across,0.f,1.f));
        const FVector Direction=VaultLanding-VaultTakeoff;
        if(!Direction.IsNearlyZero()){SetActorLocation(Ground);SetActorRotation(FRotator(0,Direction.Rotation().Yaw,0));}
        FArmyPoseSample Sample;Sample.Sequence=VaultProfile->Animation;Sample.Time=T;Sample.ExtractRoot=true;Sample.Weight=FMath::SmoothStep(0.f,.14f,P);
        Anim->Samples.Reset();if(!MotionFrames.IsEmpty())ReadMotion(Time,Anim->Samples);
        for(auto& S:Anim->Samples)S.Weight*=1-Sample.Weight;
        Anim->Samples.Add(Sample);
        const float Height=Input.vaultHeight*100;
        Anim->RootOffsetEnabled=true;Anim->MotionRoot=FTransform(FVector(0,0,FMath::Max(0.,SourceRoot.GetLocation().Z)*Height/VaultProfile->SourceObstacleHeight));
        Anim->ContactsEnabled=false;
        Anim->VaultPlant=FMath::SmoothStep(VaultProfile->PlantBegin,VaultProfile->PlantFull,T)*(1-FMath::SmoothStep(VaultProfile->PlantRelease,VaultProfile->PlantEnd,T));
        const float MidDistance=float(Direction.Size2D())*(.5f-FMath::Clamp(Across,0.f,1.f));
        Anim->VaultHandTarget=FVector(IsMale?28:26,MidDistance,Height+3+VaultTakeoff.Z-Ground.Z);
    }
    if(HasVaultAnimation()&&State.outAt<0&&Input.vaultLandsAt>=0) {
        const double LandingAge=Time-Input.vaultLandsAt;
        UAnimSequence* Landing=Anim->MoveSpeed>3?VaultProfile->LandingRunning.Get():Anim->MoveSpeed>.25f?VaultProfile->LandingWalking.Get():VaultProfile->LandingStanding.Get();
        const float Contact=Anim->MoveSpeed>3?VaultProfile->RunningContactSeconds:Anim->MoveSpeed>.25f?VaultProfile->WalkingContactSeconds:VaultProfile->StandingContactSeconds;
        if(Landing&&LandingAge>=-.15&&LandingAge<.65) {
            const float Weight=LandingAge<0?FMath::SmoothStep(-.15f,0.f,float(LandingAge)):
                1-FMath::SmoothStep(.25f,.65f,float(LandingAge));
            for(auto& S:Anim->Samples)S.Weight*=1-Weight;
            FArmyPoseSample Land;Land.Sequence=Landing;Land.Time=FMath::Clamp(Contact+LandingAge,0.,double(Landing->GetPlayLength()));Land.Weight=Weight;Land.ExtractRoot=true;Anim->Samples.Add(Land);
            // The authored compression must survive the locomotion contact cache.
            // Release the landing pose before restoring the planner's foot plants.
            Anim->ContactsEnabled=false;
            Anim->Handling.upper*=1-.65f*Weight;
        }
    }
    Body->TickAnimation(0.f,false);Body->RefreshBoneTransforms();Body->UpdateComponentToWorld();
    if(RiflePouch->GetStaticMesh()) {
        // Equipment follows the exact same pelvis as the rigid belt vertices.
        // A local webbing mask replaces one pouch without rebuilding the mesh's
        // cloth bindings. The remainder of the webbing retains its material.
        const FTransform BindToWorld=PouchBindHipInverse*Body->GetSocketTransform(TEXT("Hips"));
        RiflePouch->SetWorldTransform(BindToWorld);
        const float U=Anim->Handling.reloadPhase;
        const float Open=U<0?0.f:FMath::SmoothStep(.255f,.295f,U)*(1-FMath::SmoothStep(.405f,.480f,U));
        const FTransform Flap(FQuat(FVector::ForwardVector,FMath::DegreesToRadians(110*Open)),PouchHinge);
        RiflePouchFlap->SetWorldTransform(Flap*BindToWorld);
    }
    if(bGasp&&!bPoseQuery)CastChecked<USoldierClothComponent>(Body)->AdvanceCoat(Time);
    const bool Released=State.outAt>=0&&Time-State.outAt>=11./60.;
    FTransform Gun=Body->GetSocketTransform(Released?TEXT("Weapon_Free"):TEXT("WeaponSocket_R"),RTS_World);
    // FBX bone axes and the separately exported mesh share the same scene conversion.
    Gun.SetScale3D(FVector::OneVector); // Skeleton carries FBX metre-to-cm scale; static mesh is already cm.
    Rifle->SetWorldTransform(Gun);
    const bool ArticulatedMG=IsMachineGun&&MGFeedCover->GetStaticMesh();
    Bolt->SetVisibility(!IsMachineGun||ArticulatedMG);
    if(!ArticulatedMG) {
        Bolt->SetRelativeLocation((EquipmentProfile?EquipmentProfile->BoltRest:FVector(2.5,-24,13))-FVector(0,(EquipmentProfile?EquipmentProfile->BoltTravel:8)*Anim->Handling.boltBack,0));
        Bolt->SetRelativeRotation(FRotator((EquipmentProfile?EquipmentProfile->BoltOpenDegrees:60)*Anim->Handling.boltOpen,0,0));
        Bolt->SetRelativeScale3D(FVector(EquipmentProfile&&EquipmentProfile->BoltKnob.X<0?-1.f:1.f,1,1));
    }
    ReloadProp->SetVisibility(IsMachineGun||Anim->Handling.clip>0);
    RifleCharger->SetVisibility(false);
    if(IsMachineGun) {
        const float U=Anim->AuthoredHandling&&Anim->Handling.reloadPhase>=0?Anim->Handling.reloadPhase:0.f;
        if(Anim->AuthoredHandling&&Anim->Handling.reloadPhase>=0) {
            auto Prop=Body->GetSocketTransform(TEXT("Weapon_Free"));Prop.SetScale3D(FVector::OneVector);
            const float Grasp=ArticulatedMG?armymg::BoxGrasp(U):FMath::SmoothStep(.18f,.20f,U)*(1-FMath::SmoothStep(.60f,.62f,U));
            const FVector Palm=FMath::Lerp(Body->GetSocketLocation(TEXT("LeftHand")),Body->GetSocketLocation(TEXT("LeftHandMiddle1")),.65);
            const FVector Contact=EquipmentProfile?EquipmentProfile->AmmunitionBoxGrip:FVector(-3.5,-12,7.5);
            Prop.AddToTranslation((Palm-Prop.TransformPosition(Contact))*Grasp);
            ReloadProp->SetWorldTransform(Prop);
        } else ReloadProp->SetRelativeTransform(FTransform(FVector(Anim->Handling.left.x,Anim->Handling.left.y,Anim->Handling.left.z)));
        if(ArticulatedMG) {
            MGFeedCover->SetRelativeTransform(armymg::Cover(U));
            Bolt->SetRelativeTransform(FTransform(armymg::ChargingHandle(U)));
            MGFeedBelt->SetVisibility(armymg::BeltVisible(U));ReloadProp->SetVisibility(armymg::BoxVisible(U));
            FTransform Belt=ReloadProp->GetComponentTransform();Belt.Blend(Belt,Gun,FMath::SmoothStep(.65f,.715f,U));MGFeedBelt->SetWorldTransform(Belt);
            const auto BindToWorld=PouchBindHipInverse*Body->GetSocketTransform(TEXT("Hips"));
            const FVector BindPoint=IsMale?EquipmentProfile->MGAmmoPouchMale:EquipmentProfile->MGAmmoPouchFemale;
            MGAmmoPouch->SetWorldTransform(FTransform(BindPoint)*BindToWorld);
        }
    }
    else {
        FTransform Prop=Body->GetSocketTransform(TEXT("RightHand"));Prop.SetScale3D(FVector::OneVector);ReloadProp->SetWorldTransform(Prop);
        if(EquipmentProfile&&Anim->Handling.clip>0) {
            const FVector Wrist=Body->GetSocketLocation(TEXT("RightHand"));
            const FVector Knuckle=Body->GetSocketLocation(TEXT("RightHandMiddle1"));
            const FVector Row=(Knuckle-Wrist).GetSafeNormal();
            // Hold the end of the strip at the fingers. Centering the whole
            // stack inside the palm hid the ammunition inside the bulky glove.
            Prop.SetLocation(Knuckle+Row*EquipmentProfile->ReloadStackHalfHeight);
            Prop.SetRotation(FRotationMatrix::MakeFromXY(Row,Gun.TransformVectorNoScale(FVector::RightVector)).ToQuat());
            if(RifleCharger->GetStaticMesh()) {
                // The upper end of the charger belongs between the actual
                // thumb/index tips. The old knuckle offset put the strip on
                // the wrong side of the glove and did not represent a grip.
                const FVector Pinch=(Body->GetSocketLocation(TEXT("RightHandThumb4"))+Body->GetSocketLocation(TEXT("RightHandIndex4")))*.5;
                const auto Hand=Body->GetSocketTransform(TEXT("RightHand"));
                Prop.SetRotation(FRotationMatrix::MakeFromXY(-Row,Hand.GetUnitAxis(EAxis::X)).ToQuat());
                Prop.SetLocation(Pinch-Prop.TransformVectorNoScale(FVector(3.4,-1.4,0)));
            }
            const FTransform HeldCharger=Prop;
            const FTransform Insert(Gun.GetRotation()*FQuat(FVector::RightVector,PI*.5),Gun.TransformPosition(EquipmentProfile->ReloadClipPosition(Anim->Handling.reloadPhase)));
            // Once aligned, the rounds belong to the receiver while the thumb
            // presses them in. They must not return to the withdrawing hand.
            const float Phase=Anim->Handling.reloadPhase;
            const float Feeding=FMath::SmoothStep(.455f,.49f,Phase);
            Prop.Blend(Prop,Insert,FMath::Max(Anim->Handling.reloadContact,Feeding));ReloadProp->SetWorldTransform(Prop);
            if(RifleCharger->GetStaticMesh()) {
                const FTransform Dock(Gun.GetRotation()*FQuat(FVector::RightVector,PI*.5),Gun.TransformPosition(EquipmentProfile->ReloadClipPosition(0)));
                FTransform Charger=HeldCharger;Charger.Blend(HeldCharger,Dock,Feeding);
                RifleCharger->SetWorldTransform(Charger);RifleCharger->SetVisibility(true);
            }
            const float Limit=Phase<.5f?100.f:EquipmentProfile->ReloadStackHalfHeight*(1-2*FMath::SmoothStep(.50f,.70f,Phase));
            // Once the feed plane has passed every vertex, remove the draw as
            // well as masking it. Keeping an entirely masked moving primitive
            // alive left a one-frame fragment during the hand's withdrawal.
            if(ReloadProp->GetStaticMesh()&&Limit<ReloadProp->GetStaticMesh()->GetBoundingBox().Min.X)
                ReloadProp->SetVisibility(false);
            for(int I=0;I<ReloadProp->GetNumMaterials();++I)if(auto* Material=Cast<UMaterialInstanceDynamic>(ReloadProp->GetMaterial(I)))
                Material->SetScalarParameterValue(TEXT("FeedLimit"),Limit);
        }
        if(RifleCharger->GetStaticMesh()&&Anim->AuthoredHandling&&Anim->Handling.reloadPhase>=.70f&&Anim->Handling.reloadPhase<.97f) {
            // The empty rail remains in the charger guide after feeding. The
            // forward bolt stroke displaces it; it is never another loaded strip.
            const float U=Anim->Handling.reloadPhase;
            FTransform Empty(Gun.GetRotation()*FQuat(FVector::RightVector,PI*.5),Gun.TransformPosition(EquipmentProfile->ReloadClipPosition(0)));
            const float Age=FMath::Max(0.f,U-.805f)*float(FMath::Max(.01,Input.reloadEnd-Input.reloadStart));
            Empty.AddToTranslation(Gun.TransformVectorNoScale(FVector(80*Age,30*Age,125*Age))+FVector(0,0,-490*Age*Age));
            Empty.SetRotation(Empty.GetRotation()*FQuat(FVector::RightVector,Age*12));
            RifleCharger->SetWorldTransform(Empty);RifleCharger->SetVisibility(true);
        }
    }
}
FString ASoldierVisual::PoseDescription() const {
    const auto* Anim=Cast<USoldierAnimInstance>(Body->GetAnimInstance());
    FString Text=FString(IsMale?TEXT("Male "):TEXT("Female "))+(IsMachineGun?TEXT("MG "):TEXT("rifle "));
    if(!Anim)return Text+TEXT("no evaluated pose");
    Text+=UTF8_TO_TCHAR(Anim->Handling.name);Text+=bGasp?TEXT(" | GASP | "):TEXT(" | legacy | ");
    TMap<UAnimSequence*,float> Weights;
    for(const auto& S:Anim->Samples)if(S.Sequence)Weights.FindOrAdd(S.Sequence)+=S.Weight;
    TArray<UAnimSequence*> Ordered;Weights.GetKeys(Ordered);
    Ordered.Sort([&](const UAnimSequence& A,const UAnimSequence& B){return Weights[const_cast<UAnimSequence*>(&A)]>Weights[const_cast<UAnimSequence*>(&B)];});
    for(auto* Clip:Ordered)if(Weights[Clip]>.05f)Text+=FString::Printf(TEXT("%s %.0f%%  "),*Clip->GetName(),Weights[Clip]*100);
    return Text;
}
float ASoldierVisual::GripError() const {
    const auto* Anim=Cast<USoldierAnimInstance>(Body->GetAnimInstance());
    if(Anim&&Anim->GripAlpha<.999f)return 0; // Released hands have no gun constraint.
    float Error=float(FVector::Distance(Body->GetSocketLocation(TEXT("RightHand")),Body->GetSocketLocation(TEXT("WeaponGrip_R"))));
    if(!Anim||Anim->Handling.leftIK>.999f)Error=FMath::Max(Error,float(FVector::Distance(Body->GetSocketLocation(TEXT("LeftHand")),Body->GetSocketLocation(TEXT("WeaponGrip_L")))));
    else if(Anim->VaultPlant>.999f)Error=FMath::Max(Error,float(FVector::Distance(Body->GetSocketTransform(TEXT("LeftHand"),RTS_Component).GetLocation(),Anim->VaultHandTarget)));
    return Error;
}
FVector ASoldierVisual::MuzzlePosition() const{return Body->GetSocketLocation(TEXT("WeaponMuzzle"));}

FString ASoldierVisual::ValidatePresentation() {
    auto* Anim=CastChecked<USoldierAnimInstance>(Body->GetAnimInstance());
    FString Report,WorstPose;float Worst=0;int Evaluations=0;
    for(const auto Name:{TEXT("LeftHand"),TEXT("RightHand"),TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("Weapon_Free")})
        if(Body->GetBoneIndex(Name)==INDEX_NONE)return FString(TEXT("FAIL missing bone "))+Name;
    for(int Index=0;Index<Clips.Num();++Index) {
        for(float F:{0.f,.33f,.66f,1.f}) {
            FArmyPoseSample Sample;Sample.Sequence=Clips[Index];Sample.Weight=1;Sample.Time=Clips[Index]->GetPlayLength()*F;
            Anim->Samples={Sample};Anim->GripAlpha=0;Body->TickAnimation(0,false);Body->RefreshBoneTransforms();
            for(const auto& T:Body->GetComponentSpaceTransforms())if(T.ContainsNaN())return TEXT("FAIL non-finite imported pose");
            ++Evaluations;
        }
    }
    for(float Speed:{0.f,.1f,1.755f,2.8f,4.389f,5.5f,6.583f})for(float Crouch:{0.f,.5f,1.f})
    for(int Angle=0;Angle<360;Angle+=45)for(float Phase:{0.f,.25f,.5f,.75f}) {
        armyvisual::State S;S.forward=Speed*FMath::Cos(FMath::DegreesToRadians(float(Angle)));S.right=Speed*FMath::Sin(FMath::DegreesToRadians(float(Angle)));S.crouch=Crouch;S.aim=.5;S.phase=Phase;
        Present(S,1.25);
        for(const auto& T:Body->GetComponentSpaceTransforms())if(T.ContainsNaN())return TEXT("FAIL non-finite blended pose");
        for(const auto Side:{TEXT("L"),TEXT("R")}) {
            const FName Hand=Side[0]=='L'?TEXT("LeftHand"):TEXT("RightHand");
            const FName Target=Side[0]=='L'?TEXT("WeaponGrip_L"):TEXT("WeaponGrip_R");
            const float Error=FVector::Distance(Body->GetSocketLocation(Hand),Body->GetSocketLocation(Target));
            if(Error>Worst){Worst=Error;WorstPose=FString::Printf(TEXT("blend speed=%.3f crouch=%.1f angle=%d phase=%.2f side=%s"),Speed,Crouch,Angle,Phase,Side);}
        }
        ++Evaluations;
    }
    for(float Speed:{0.f,1.755f})for(float Crouch:{0.f,1.f})for(int Step=0;Step<180;++Step) {
        armyvisual::State S;S.forward=Speed;S.crouch=Crouch;S.aim=1;S.phase=Step/60.;
        S.handling.machineGun=IsMachineGun;S.handling.lastShot=0;S.handling.reloadStart=1.5;S.handling.reloadEnd=4;
        Present(S,Step/45.);if(GripError()>Worst){Worst=GripError();WorstPose=FString::Printf(TEXT("handling speed=%.3f crouch=%.1f time=%.3f"),Speed,Crouch,Step/45.);}++Evaluations;
    }
    armyvisual::State State;State.forward=1.755;State.phase=.25;
    Present(State,2);const auto Before=Body->GetComponentSpaceTransforms();const FTransform Gun=Rifle->GetComponentTransform();
    State.forward=-3;State.phase=.7;Present(State,15);State.forward=1.755;State.phase=.25;Present(State,2);
    bool Same=Before.Num()==Body->GetComponentSpaceTransforms().Num();
    for(int I=0;I<Before.Num()&&Same;++I)Same=Before[I].Equals(Body->GetComponentSpaceTransforms()[I],.00001f);
    Same=Same&&Gun.Equals(Rifle->GetComponentTransform(),.00001f);
    // Upper-body handling must not replace the locomotion hips or feet.
    State.aim=1;State.handling.lastShot=1.5;Present(State,2);
    TArray<FTransform> Legs;for(const auto Name:{TEXT("Hips"),TEXT("LeftFoot"),TEXT("RightFoot")})Legs.Add(Body->GetSocketTransform(Name,RTS_Component));
    Anim->StandingAim=nullptr;Body->TickAnimation(0,false);Body->RefreshBoneTransforms();
    bool LegsSame=true;int Leg=0;for(const auto Name:{TEXT("Hips"),TEXT("LeftFoot"),TEXT("RightFoot")})LegsSame=LegsSame&&Legs[Leg++].Equals(Body->GetSocketTransform(Name,RTS_Component),.00001);
    State.handling.lastShot=-1000;Present(State,2);
    const float MuzzleError=FVector::Distance(Rifle->GetComponentTransform().TransformPosition((IsMachineGun?FVector(-.5800765,47.973645,9.777343):FVector(1.5,50,11.5))),MuzzlePosition());
    armyvisual::State Fallen;Fallen.outAt=2;Present(Fallen,6);
    const auto FallenPose=Body->GetComponentSpaceTransforms();const FTransform FallenGun=Rifle->GetComponentTransform();
    Present(Fallen,10);bool Frozen=FallenGun.Equals(Rifle->GetComponentTransform(),.00001f);
    for(int I=0;I<FallenPose.Num();++I)Frozen=Frozen&&FallenPose[I].Equals(Body->GetComponentSpaceTransforms()[I],.00001f);
    const bool Dropped=Rifle->GetComponentLocation().Equals(Body->GetSocketLocation(TEXT("Weapon_Free")),.001f);
    Present(State,2);
    const auto Bounds=Body->CalcBounds(Body->GetComponentTransform());
    Report=FString::Printf(TEXT("%s evaluations=%d clips=%d bones=%d worst_blended_wrist_cm=%.5f rewind_equal=%d body_bounds_cm=%s rifle_scale=%s\n"),LegsSame&&Same&&Worst<2.f&&Frozen&&Dropped&&MuzzleError<.05f?TEXT("PASS"):TEXT("FAIL"),Evaluations,Clips.Num(),Body->GetNumBones(),Worst,int(Same),*Bounds.BoxExtent.ToString(),*Rifle->GetComponentScale().ToString());
    Report+=TEXT("worst_pose=")+WorstPose+TEXT("\n");
    Report+=FString::Printf(TEXT("locomotion_hips_and_feet_unchanged=%d\n"),LegsSame);
    Report+=FString::Printf(TEXT("muzzle_alignment_cm=%.5f death_frozen=%d weapon_follows_drop_track=%d\n"),MuzzleError,Frozen,Dropped);
    for(const auto Name:{TEXT("Hips"),TEXT("WeaponSocket_R"),TEXT("WeaponMuzzle"),TEXT("LeftHand"),TEXT("WeaponGrip_L")})Report+=FString(Name)+TEXT(" ")+Body->GetSocketTransform(Name,RTS_Component).ToString()+TEXT("\n");
    return Report;
}

void ASoldierVisual::ResetMotion() {
    MotionFrames.Reset();
    if(bGasp)MotionDriver->InitAnim(true);
}
bool ASoldierVisual::AdvanceMotion(bool Crouch,const FTransform& Transform,const FTransformTrajectory& Trajectory,bool Sprint,bool Grounded,bool MovingFire) {
    if(!bGasp)return false;
    auto* Planner=Cast<USoldierMotionInstance>(MotionDriver->GetAnimInstance());
    if(!Planner)return false;
    const float Speed=MotionFrames.IsEmpty()?0:float(FVector::Dist2D(Transform.GetLocation(),MotionDriver->GetComponentLocation())*30);
    float FutureSpeed=0;
    const FTransformTrajectorySample* FutureA=nullptr;
    for(const auto& P:Trajectory.Samples) {
        if(P.TimeInSeconds>=.39f&&!FutureA)FutureA=&P;
        else if(FutureA&&P.TimeInSeconds>=.69f){FutureSpeed=float(FVector::Dist2D(P.Position,FutureA->Position)/(P.TimeInSeconds-FutureA->TimeInSeconds));break;}
    }
    // Context selection precedes pose similarity: a steady moving soldier must
    // not select a kneeling stop tail merely because its pose is inexpensive.
    // Starts and braking retain the complete database and authored transitions.
    const bool Cruising=Speed>25&&FutureSpeed>25&&FMath::Abs(Speed-FutureSpeed)<FMath::Max(20.f,Speed*.2f);
    auto* Moving=Crouch?CrouchingMovingDatabase.Get():StandingMovingDatabase.Get();
    auto* Starting=Crouch?CrouchingStartingDatabase.Get():StandingStartingDatabase.Get();
    auto* Stopping=Crouch?CrouchingStoppingDatabase.Get():StandingStoppingDatabase.Get();
    if(!Crouch&&!MotionFrames.IsEmpty()) {
        // A late pose in a sprint stop can cheaply match a walking trajectory
        // even though its weight transfer is wrong. Finish the gait actually
        // being played. This also keeps a decelerating runner from switching
        // to a walking stop merely because its current speed has fallen.
        const FArmyPoseSample* Dominant=nullptr;
        for(const auto& S:MotionFrames.Last().Samples)
            if(S.Sequence&&(!Dominant||S.Weight>Dominant->Weight))Dominant=&S;
        if(Dominant) {
            const FString Name=Dominant->Sequence->GetName();
            const TCHAR* Markers[]={TEXT("_Walk_"),TEXT("_Run_"),TEXT("_Sprint_")};
            const FVector Travel=Transform.InverseTransformVectorNoScale(Transform.GetLocation()-MotionDriver->GetComponentLocation());
            const int Sector=((FMath::RoundToInt(FMath::RadiansToDegrees(FMath::Atan2(Travel.Y,Travel.X))/45.)+8)%8)+1;
            for(int I=0;I<3;++I)if(Name.Contains(Markers[I])&&StandingGaitStoppingDatabases.IsValidIndex(I*9)&&StandingGaitStoppingDatabases[I*9]) {
                const int Directed=I*9+Sector;
                // Choose the nearest source travel direction before pose/foot
                // selection. A diagonal stop for straight travel required a
                // large orientation correction that unwound at foot plant.
                // A gait with no such direction retains its general fallback.
                Stopping=StandingGaitStoppingDatabases.IsValidIndex(Directed)&&StandingGaitStoppingDatabases[Directed]?
                    StandingGaitStoppingDatabases[Directed].Get():StandingGaitStoppingDatabases[I*9].Get();break;
            }
        }
    }
    auto* Idle=Crouch?CrouchingIdleDatabase.Get():StandingIdleDatabase.Get();
    const float RotationSpeed=MotionFrames.IsEmpty()?0.f:FMath::FindDeltaAngleDegrees(MotionDriver->GetComponentRotation().Yaw+90,Transform.Rotator().Yaw)*30;
    const float FutureTurn=FutureA?FMath::FindDeltaAngleDegrees(Transform.Rotator().Yaw-90,FutureA->Facing.Rotator().Yaw):0.f;
    const bool Turning=Grounded&&Speed<10&&FutureSpeed<10&&(FMath::Abs(RotationSpeed)>10||FMath::Abs(FutureTurn)>5);
    auto* Turn=Crouch?CrouchingTurningDatabase.Get():StandingTurningDatabase.Get();
    Planner->Database=Crouch?CrouchingDatabase.Get():StandingDatabase.Get();
    if(FutureSpeed>Speed+25&&Starting)Planner->Database=Starting;
    else if(Speed>FutureSpeed+25&&Stopping)Planner->Database=Stopping;
    else if(Cruising&&Moving)Planner->Database=Moving;
    else if(Speed<10&&FutureSpeed<10&&Idle)Planner->Database=Idle;
    if(Turning&&Turn) {
        // Select the size of the planned heading change before matching the
        // support foot. A short 45-degree turn cannot explain a full right angle.
        float PlannedTurn=FutureTurn;
        for(const auto& P:Trajectory.Samples)if(P.TimeInSeconds>0) {
            const float Angle=FMath::FindDeltaAngleDegrees(Transform.Rotator().Yaw-90,P.Facing.Rotator().Yaw);
            if(FMath::Abs(Angle)>FMath::Abs(PlannedTurn))PlannedTurn=Angle;
        }
        const int AngleIndex=(Crouch?8:0)+FMath::Clamp(FMath::RoundToInt(FMath::Abs(PlannedTurn)/45)-1,0,3)*2+(PlannedTurn>0?1:0);
        Planner->Database=TurningAngleDatabases.IsValidIndex(AngleIndex)&&TurningAngleDatabases[AngleIndex]?TurningAngleDatabases[AngleIndex].Get():Turn;
    }
    Planner->Trajectory=Trajectory;
    Planner->Crouching=Crouch;
    // A stationary turn is a new footwork intent. Holding the old stop tail
    // here made both feet rotate with the actor throughout a ninety-degree turn.
    Planner->CanFinishStop=Grounded&&FutureSpeed<25&&!Turning;
    Planner->CanFinishTurn=Grounded&&Speed<10&&FutureSpeed<10;
    Planner->TurnYaw=FMath::Abs(FutureTurn)>5?FutureTurn:FMath::Abs(RotationSpeed)>10?RotationSpeed:0;
    Planner->StopSeconds=-1;
    if(Grounded&&Speed>5&&Stopping) {
        const FTransformTrajectorySample* Previous=nullptr;
        for(const auto& P:Trajectory.Samples)if(P.TimeInSeconds>=0) {
            if(Previous) {
                const float Span=P.TimeInSeconds-Previous->TimeInSeconds;
                if(Span>0&&FVector::Dist2D(P.Position,Previous->Position)/Span<5) {
                    Planner->StopSeconds=(P.TimeInSeconds+Previous->TimeInSeconds)*.5f;
                    Planner->Database=Stopping;break;
                }
            }
            Previous=&P;
        }
    }
    Planner->LocomotionSpeed=Speed;
    Planner->LocomotionVelocity=MotionFrames.IsEmpty()?FVector::ZeroVector:(Transform.GetLocation()-MotionDriver->GetComponentLocation())*30;
    Planner->ContactsEnabled=Grounded&&MotionDriver->GetBoneIndex(TEXT("VB FootTarget_Left"))!=INDEX_NONE&&MotionDriver->GetBoneIndex(TEXT("VB FootTarget_Right"))!=INDEX_NONE;
    MotionDriver->SetWorldTransform(FTransform(FRotator(0,-90,0))*Transform);
    MotionDriver->TickAnimation(MotionFrames.IsEmpty()?0.f:1.f/30,false);
    MotionDriver->RefreshBoneTransforms();
    FArmyMotionFrame Frame;
    const float CarryTarget=Sprint?1.f:0.f;
    Frame.SprintCarry=MotionFrames.IsEmpty()?CarryTarget:FMath::Lerp(MotionFrames.Last().SprintCarry,CarryTarget,1.f-FMath::Exp(-1.f/(30*.12f)));
    // Two fixed-step response stages ease both ends of a flag change. Cache
    // them with locomotion so random seeks reproduce the same carry blend.
    const float FireTarget=MovingFire?1.f:0.f,Response=1.f-FMath::Exp(-1.f/(30*.12f));
    Frame.MovingFireIntent=MotionFrames.IsEmpty()?FireTarget:FMath::Lerp(MotionFrames.Last().MovingFireIntent,FireTarget,Response);
    Frame.MovingFireCarry=MotionFrames.IsEmpty()?FireTarget:FMath::Lerp(MotionFrames.Last().MovingFireCarry,Frame.MovingFireIntent,Response);
    if(!Planner->ReadDecision(Frame.Samples)) {
        UE_LOG(LogTemp,Error,TEXT("Motion decision unavailable for %s at frame %d"),*GetName(),MotionFrames.Num());return false;
    }
    Frame.Contacts=Planner->ContactsEnabled;
    Frame.Root=FTransform3f(MotionDriver->GetComponentSpaceTransforms()[0]);
    Frame.Pelvis=FTransform3f(MotionDriver->GetSocketTransform(TEXT("Hips"),RTS_Component));
    Frame.LeftFoot=FTransform3f(MotionDriver->GetSocketTransform(TEXT("LeftFoot"),RTS_Component));
    Frame.RightFoot=FTransform3f(MotionDriver->GetSocketTransform(TEXT("RightFoot"),RTS_Component));
    Frame.LeftKnee=FVector3f(MotionDriver->GetSocketTransform(TEXT("LeftLeg"),RTS_Component).GetLocation());
    Frame.RightKnee=FVector3f(MotionDriver->GetSocketTransform(TEXT("RightLeg"),RTS_Component).GetLocation());
    const FName SpineNames[]={TEXT("Spine"),TEXT("Spine1"),TEXT("Spine2")};
    for(int I=0;I<3;++I)Frame.Spine[I]=FTransform3f(MotionDriver->GetSocketTransform(SpineNames[I],RTS_Component));
    MotionFrames.Add(MoveTemp(Frame));return true;
}
void ASoldierVisual::ReadMotion(double Time,TArray<FArmyPoseSample>& Out) const {
    const double Frame=FMath::Max(Time,0.)*30;
    const int A=FMath::Clamp(FMath::FloorToInt(Frame),0,MotionFrames.Num()-1),B=FMath::Min(A+1,MotionFrames.Num()-1);
    const float Alpha=A==B?0.f:float(Frame-FMath::FloorToDouble(Frame));
    Out.Reset();
    for(const auto& Sample:MotionFrames[A].Samples) {auto S=Sample;S.Weight*=1-Alpha;Out.Add(S);}
    if(Alpha>0)for(const auto& Sample:MotionFrames[B].Samples){auto S=Sample;S.Weight*=Alpha;Out.Add(S);}
}
void ASoldierVisual::SetCoatDetail(bool Enabled) {
    CastChecked<USoldierClothComponent>(Body)->SetCoatDetail(Enabled);
}
bool ASoldierVisual::HasCoatDetail() const{return CastChecked<USoldierClothComponent>(Body)->HasCoatDetail();}
FVector ASoldierVisual::SampleMuzzle(const armyvisual::context::ReplaySource* Source,int Slot,const armyvisual::State& State,double Time,const FTransform& Transform) {
    const auto SavedState=LastState;const double SavedTime=LastTime;const auto SavedTransform=GetActorTransform();
    const FVector2f SavedAim(AimYaw,AimPitch),SavedLook(LookYaw,LookPitch);
    const FVector SavedTakeoff=VaultTakeoff,SavedLanding=VaultLanding;
    TGuardValue<bool> Query(bPoseQuery,true);
    SetActorTransform(Transform);
    if(Source)PresentReplay(*Source,Slot,State,Time);else Present(State,Time);
    const FVector Result=MuzzlePosition();
    AimYaw=SavedAim.X;AimPitch=SavedAim.Y;LookYaw=SavedLook.X;LookPitch=SavedLook.Y;
    VaultTakeoff=SavedTakeoff;VaultLanding=SavedLanding;
    SetActorTransform(SavedTransform);Present(SavedState,SavedTime);
    return Result;
}
void ASoldierVisual::PresentReplay(const armyvisual::context::ReplaySource& Source,int Slot,const armyvisual::State& State,double Time) {
    AimYaw=AimPitch=LookYaw=LookPitch=0;
    auto FacingYaw=[](const armyvisual::context::Sample& S){return FMath::RadiansToDegrees(std::atan2(S.facing.y,S.facing.x));};
    auto AimAngles=[&](const armyvisual::context::Sample& S) {
        if(!S.hasAimPoint)return FVector2f(FacingYaw(S),0);
        const FVector Delta=FVector(S.aimPoint.x-S.position.x,S.aimPoint.y-S.position.y,S.aimPoint.z-S.position.z)-FVector::UpVector*(S.stance==army::Stance::Standing?1.45:.95);
        const FRotator Aim=Delta.Rotation();return FVector2f(Aim.Yaw,Aim.Pitch);
    };
    if(const auto S=Source.At(Slot,Time)) {
        if(S->traversal.active)SetTraversalLandmarks(FVector(S->traversal.takeoff.x,S->traversal.takeoff.y,S->traversal.takeoff.z)*100,FVector(S->traversal.landing.x,S->traversal.landing.y,S->traversal.landing.z)*100);
        const float Facing=FMath::RadiansToDegrees(std::atan2(S->facing.y,S->facing.x));
        LookYaw=FMath::FindDeltaAngleDegrees(Facing,FMath::RadiansToDegrees(std::atan2(S->attention.y,S->attention.x)));
        if(S->hasAimPoint) {
            const FVector Delta=FVector(S->aimPoint.x-S->position.x,S->aimPoint.y-S->position.y,S->aimPoint.z-S->position.z)-(FVector::UpVector*(State.crouch>.5f?.95:1.45));
            const FRotator Aim=Delta.Rotation();AimYaw=FMath::FindDeltaAngleDegrees(Facing,Aim.Yaw);AimPitch=Aim.Pitch;
        }
    }
    if(bGasp) {
        const double End=State.outAt>=0?FMath::Min(Time,State.outAt):Time;
        const int Last=FMath::CeilToInt(FMath::Max(0.,End)*30);
        while(MotionFrames.Num()<=Last) {
            const double At=MotionFrames.Num()/30.;const auto S=Source.At(Slot,At);
            const auto Future=Source.Trajectory(Slot,At-1./30,{-1.,-.6,-.4,-.2,0.,.1,.2,.3,.4,.5,.6,.7,.8,.9,1.,1.1,1.2,1.3});
            if(!S||!Future)break;
            FTransformTrajectory Trajectory;
            for(const auto& P:*Future) {
                FTransformTrajectorySample Sample;Sample.TimeInSeconds=float(P.requestedOffset);
                Sample.Position=FVector(P.position.x,P.position.y,P.position.z)*100;
                Sample.Facing=FRotator(0,FMath::RadiansToDegrees(std::atan2(P.facing.y,P.facing.x))-90,0).Quaternion();
                Trajectory.Samples.Add(Sample);
            }
            const FVector Location=FVector(S->position.x,S->position.y,S->position.z)*100;
            const FRotator Rotation(0,FMath::RadiansToDegrees(std::atan2(S->facing.y,S->facing.x)),0);
            if(MotionGeometry)MotionGeometry(At);
            if(!AdvanceMotion(S->stance!=army::Stance::Standing,FTransform(Rotation,Location),Trajectory,S->sprinting,S->knockHeight<=0&&!S->traversal.active,S->movingFire))break;
            auto& Frame=MotionFrames.Last();Frame.WorldAim=AimAngles(*S);
            Frame.WorldLook=FMath::RadiansToDegrees(std::atan2(S->attention.y,S->attention.x));Frame.AttentionCached=true;
            if(MotionFrames.Num()>1&&MotionFrames[MotionFrames.Num()-2].AttentionCached) {
                const auto& Previous=MotionFrames[MotionFrames.Num()-2];
                const float AimAlpha=1-FMath::Exp(-1.f/(30*FMath::Max(.001f,EquipmentProfile->AimResponseSeconds)));
                const float LookAlpha=1-FMath::Exp(-1.f/(30*FMath::Max(.001f,EquipmentProfile->LookResponseSeconds)));
                Frame.WorldAim.X=FMath::UnwindDegrees(Previous.WorldAim.X+FMath::FindDeltaAngleDegrees(Previous.WorldAim.X,Frame.WorldAim.X)*AimAlpha);
                Frame.WorldAim.Y=FMath::Lerp(Previous.WorldAim.Y,Frame.WorldAim.Y,AimAlpha);
                Frame.WorldLook=FMath::UnwindDegrees(Previous.WorldLook+FMath::FindDeltaAngleDegrees(Previous.WorldLook,Frame.WorldLook)*LookAlpha);
            }
        }
        if(!MotionFrames.IsEmpty())if(const auto S=Source.At(Slot,Time)) {
            const double F=FMath::Max(0.,End)*30;
            const int A=FMath::Clamp(FMath::FloorToInt(F),0,MotionFrames.Num()-1),B=FMath::Min(A+1,MotionFrames.Num()-1);
            if(MotionFrames[A].AttentionCached&&MotionFrames[B].AttentionCached) {
                const float Alpha=A==B?0:float(F-FMath::FloorToDouble(F));
                const auto& Before=MotionFrames[A];const auto& After=MotionFrames[B];
                AimYaw=FMath::FindDeltaAngleDegrees(FacingYaw(*S),Before.WorldAim.X+FMath::FindDeltaAngleDegrees(Before.WorldAim.X,After.WorldAim.X)*Alpha);
                AimPitch=FMath::Lerp(Before.WorldAim.Y,After.WorldAim.Y,Alpha);
                LookYaw=FMath::FindDeltaAngleDegrees(FacingYaw(*S),Before.WorldLook+FMath::FindDeltaAngleDegrees(Before.WorldLook,After.WorldLook)*Alpha);
            }
        }
    }
    if(RestoreGeometry)RestoreGeometry();
    auto Presentation=State;
    if(const auto S=Source.At(Slot,Time))Presentation.handling.vaultLandsAt=S->traversal.landsAt;
    if(IsMachineGun&&AuthoredMGShot) {
        Presentation.handling.recoilShotCount=0;
        const double RecoilTime=State.outAt>=0?FMath::Min(Time,double(State.outAt)):Time;
        if(const auto Shots=Source.ShotTimesBetween(Slot,RecoilTime-AuthoredMGShot->GetPlayLength(),RecoilTime))
            for(double Shot:*Shots)armyvisual::AddRecoilShot(Presentation.handling,Shot);
    }
    Present(Presentation,Time);
}
