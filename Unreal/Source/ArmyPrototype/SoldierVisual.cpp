#include "SoldierVisual.h"
#include "SoldierAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Engine/StaticMesh.h"
#include "Animation/AnimSequence.h"
#include "Materials/MaterialInstanceDynamic.h"

ASoldierVisual::ASoldierVisual() {
    PrimaryActorTick.bCanEverTick=false;
    RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("GroundRoot"));
    Body=CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Soldier"));Body->SetupAttachment(RootComponent);
    Body->SetRelativeRotation(FRotator(0,-90,0)); // Standard FBX import faces +Y; game faces +X.
    Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);Body->SetAnimationMode(EAnimationMode::AnimationBlueprint);
    Body->VisibilityBasedAnimTickOption=EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    Body->bEnableUpdateRateOptimizations=false;
    Rifle=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rifle"));Rifle->SetupAttachment(RootComponent);Rifle->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    MuzzleFlash=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuzzleFlash"));MuzzleFlash->SetupAttachment(Rifle);MuzzleFlash->SetCollisionEnabled(ECollisionEnabled::NoCollision);MuzzleFlash->SetCastShadow(false);
    Bolt=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bolt"));Bolt->SetupAttachment(Rifle);Bolt->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    ReloadProp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReloadProp"));ReloadProp->SetupAttachment(Rifle);ReloadProp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
bool ASoldierVisual::AssetsAvailable() {
    return LoadObject<USkeletalMesh>(nullptr,TEXT("/Game/Characters/FemaleRifle/SK_Female_Rifle.SK_Female_Rifle"))!=nullptr;
}
bool ASoldierVisual::Initialize(int Team,bool Male,bool MachineGun) {
    IsMale=Male;IsMachineGun=MachineGun;
    auto* Mesh=LoadObject<USkeletalMesh>(nullptr,Male?TEXT("/Game/Characters/FemaleRifle/SK_Male_Rifle.SK_Male_Rifle"):TEXT("/Game/Characters/FemaleRifle/SK_Female_Rifle.SK_Female_Rifle"));
    if(!Mesh)return false;
    // These unweighted control bones must survive the required-bone reduction too.
    for(const auto Name:{TEXT("Weapon_Free"),TEXT("WeaponGrip_L"),TEXT("WeaponGrip_R"),TEXT("WeaponMuzzle")}) {
        const FName SocketName=FName(FString(TEXT("Required_"))+Name);
        if(!Mesh->FindSocket(SocketName)) {
            auto* Socket=NewObject<USkeletalMeshSocket>(Mesh);Socket->SocketName=SocketName;Socket->BoneName=Name;Socket->bForceAlwaysAnimated=true;Mesh->GetMeshOnlySocketList().Add(Socket);
        }
    }
    Body->SetSkeletalMesh(Mesh);Body->SetRelativeScale3D(FVector(Male?1.08f:1.f));
    Rifle->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,MachineGun?TEXT("/Game/Characters/FemaleRifle/SM_MachineGun.SM_MachineGun"):TEXT("/Game/Characters/FemaleRifle/SM_Rifle.SM_Rifle")));
    MuzzleFlash->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Game/Characters/FemaleRifle/SM_MuzzleFlash.SM_MuzzleFlash")));
    Bolt->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,TEXT("/Game/Characters/FemaleRifle/SM_Bolt.SM_Bolt")));
    ReloadProp->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,MachineGun?TEXT("/Game/Characters/FemaleRifle/SM_MGBox.SM_MGBox"):TEXT("/Game/Characters/FemaleRifle/SM_ReloadClip.SM_ReloadClip")));
    if(!Body->GetSkeletalMeshAsset()||!Rifle->GetStaticMesh())return false;
    for(const auto& C:armyvisual::Clips) {
        FString Name=UTF8_TO_TCHAR(C.name);
        auto* Clip=LoadObject<UAnimSequence>(nullptr,*(TEXT("/Game/Characters/FemaleRifle/")+Name+TEXT(".")+Name));
        if(!Clip){UE_LOG(LogTemp,Error,TEXT("Missing character clip %s"),*Name);return false;}
        Clips.Add(Clip);
    }
    Body->SetAnimInstanceClass(USoldierAnimInstance::StaticClass());
    Body->SetComponentTickEnabled(false); // Evaluated explicitly at battle time, including paused seeks.
    if(Team==1) {
        for(int I=0;I<Body->GetNumMaterials();++I) {
            const FString Name=Body->GetMaterial(I)->GetName();FLinearColor Tint;bool Swap=true;
            if(Name.Contains(TEXT("coat")))Tint=FLinearColor::FromSRGBColor(FColor(112,38,28));
            else if(Name.Contains(TEXT("collar")))Tint=FLinearColor::FromSRGBColor(FColor(162,65,35));
            else if(Name.Contains(TEXT("trousers")))Tint=FLinearColor::FromSRGBColor(FColor(67,44,40));
            else if(Name.Contains(TEXT("helmet")))Tint=FLinearColor::FromSRGBColor(FColor(78,30,29));
            else Swap=false;
            if(Swap){auto* M=Body->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),Tint);}
        }
        for(int I=0;I<Rifle->GetNumMaterials();++I)if(Rifle->GetMaterial(I)->GetName().Contains(TEXT("cyan"))||Rifle->GetMaterial(I)->GetName().Contains(TEXT("crystal"))) {
            auto* M=Rifle->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor::FromSRGBColor(FColor(245,98,23)));
        }
    }
    if(Team==1&&MuzzleFlash->GetNumMaterials()>0){auto* M=MuzzleFlash->CreateDynamicMaterialInstance(0);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor(1,.25,.025));}
    if(Team==1)for(int I=0;I<ReloadProp->GetNumMaterials();++I)if(ReloadProp->GetMaterial(I)->GetName().Contains(TEXT("cyan"))) {
        auto* M=ReloadProp->CreateDynamicMaterialInstance(I);M->SetVectorParameterValue(TEXT("Tint"),FLinearColor::FromSRGBColor(FColor(245,98,23)));
    }
    return true;
}
void ASoldierVisual::Present(const armyvisual::State& State,double Time) {
    LastState=State;LastTime=Time;
    auto* Anim=Cast<USoldierAnimInstance>(Body->GetAnimInstance());if(!Anim)return;
    Anim->Samples.Reset();
    for(const auto& S:armyvisual::Samples(State,Time)) {
        FArmyPoseSample Sample;Sample.Sequence=Clips[S.clip];Sample.Weight=S.weight;Sample.Time=S.time;Anim->Samples.Add(Sample);
    }
    Anim->GripAlpha=armyvisual::Grip(State,Time);
    auto Input=State.handling;Input.machineGun=IsMachineGun;
    Anim->Handling=armyvisual::Handling(Input,Time,State.aim,State.outAt>=0);
    Anim->StandingAim=Clips[armyvisual::Find("A_idle_aiming")];Anim->MachineGun=IsMachineGun;Anim->ModelScale=IsMale?1.08f:1.f;
    Body->TickAnimation(0.f,false);Body->RefreshBoneTransforms();Body->UpdateComponentToWorld();
    const bool Released=State.outAt>=0&&Time-State.outAt>=11./60.;
    FTransform Gun=Body->GetSocketTransform(Released?TEXT("Weapon_Free"):TEXT("WeaponSocket_R"),RTS_World);
    // FBX bone axes and the separately exported mesh share the same scene conversion.
    Gun.SetScale3D(FVector::OneVector); // Skeleton carries FBX metre-to-cm scale; static mesh is already cm.
    Rifle->SetWorldTransform(Gun);
    FTransform Flash=Gun;Flash.SetLocation(MuzzlePosition());MuzzleFlash->SetWorldTransform(Flash);
    const double ShotAge=Time-Input.lastShot;
    MuzzleFlash->SetVisibility(State.outAt<0&&!Input.sprinting&&ShotAge>=0&&ShotAge<.055);
    Bolt->SetVisibility(!IsMachineGun);
    Bolt->SetRelativeLocation(FVector(2.5,-24-8*Anim->Handling.boltBack,13));
    Bolt->SetRelativeRotation(FRotator(60*Anim->Handling.boltOpen,0,0));
    ReloadProp->SetVisibility(IsMachineGun||Anim->Handling.clip>0);
    if(IsMachineGun)ReloadProp->SetRelativeLocation(FVector(Anim->Handling.left.x,Anim->Handling.left.y,Anim->Handling.left.z));
    else {
        FTransform Prop=Body->GetSocketTransform(TEXT("RightHand"));Prop.SetScale3D(FVector::OneVector);ReloadProp->SetWorldTransform(Prop);
    }
}
FString ASoldierVisual::PoseDescription() const {
    const auto Samples=armyvisual::Samples(LastState,LastTime);FString Text=FString(IsMale?TEXT("Male "):TEXT("Female "))+(IsMachineGun?TEXT("MG "):TEXT("rifle "))+UTF8_TO_TCHAR(armyvisual::Handling(LastState.handling,LastTime,LastState.aim,LastState.outAt>=0).name)+TEXT(" | ");
    for(const auto& S:Samples)if(S.weight>.05)Text+=FString::Printf(TEXT("%s %.0f%%  "),UTF8_TO_TCHAR(armyvisual::Clips[S.clip].name),S.weight*100);
    return Text;
}
float ASoldierVisual::GripError() const {
    return FMath::Max(float(FVector::Distance(Body->GetSocketLocation(TEXT("LeftHand")),Body->GetSocketLocation(TEXT("WeaponGrip_L")))),
        float(FVector::Distance(Body->GetSocketLocation(TEXT("RightHand")),Body->GetSocketLocation(TEXT("WeaponGrip_R")))));
}
FVector ASoldierVisual::MuzzlePosition() const{return Body->GetSocketLocation(TEXT("WeaponMuzzle"));}

FString ASoldierVisual::ValidatePresentation() {
    auto* Anim=CastChecked<USoldierAnimInstance>(Body->GetAnimInstance());
    FString Report;float Worst=0;int Evaluations=0;
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
            Worst=FMath::Max(Worst,float(FVector::Distance(Body->GetSocketLocation(Hand),Body->GetSocketLocation(Target))));
        }
        ++Evaluations;
    }
    for(float Speed:{0.f,1.755f})for(float Crouch:{0.f,1.f})for(int Step=0;Step<180;++Step) {
        armyvisual::State S;S.forward=Speed;S.crouch=Crouch;S.aim=1;S.phase=Step/60.;
        S.handling.machineGun=IsMachineGun;S.handling.lastShot=0;S.handling.reloadStart=1.5;S.handling.reloadEnd=4;
        Present(S,Step/45.);Worst=FMath::Max(Worst,GripError());++Evaluations;
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
    const float MuzzleError=FVector::Distance(Rifle->GetComponentTransform().TransformPosition((IsMachineGun?FVector(0,54,16):FVector(1.5,50,11.5))),MuzzlePosition());
    armyvisual::State Fallen;Fallen.outAt=2;Present(Fallen,6);
    const auto FallenPose=Body->GetComponentSpaceTransforms();const FTransform FallenGun=Rifle->GetComponentTransform();
    Present(Fallen,10);bool Frozen=FallenGun.Equals(Rifle->GetComponentTransform(),.00001f);
    for(int I=0;I<FallenPose.Num();++I)Frozen=Frozen&&FallenPose[I].Equals(Body->GetComponentSpaceTransforms()[I],.00001f);
    const bool Dropped=Rifle->GetComponentLocation().Equals(Body->GetSocketLocation(TEXT("Weapon_Free")),.001f);
    Present(State,2);
    const auto Bounds=Body->CalcBounds(Body->GetComponentTransform());
    Report=FString::Printf(TEXT("%s evaluations=%d clips=%d bones=%d worst_blended_wrist_cm=%.5f rewind_equal=%d body_bounds_cm=%s rifle_scale=%s\n"),LegsSame&&Same&&Worst<2.f&&Frozen&&Dropped&&MuzzleError<.05f?TEXT("PASS"):TEXT("FAIL"),Evaluations,Clips.Num(),Body->GetNumBones(),Worst,int(Same),*Bounds.BoxExtent.ToString(),*Rifle->GetComponentScale().ToString());
    Report+=FString::Printf(TEXT("locomotion_hips_and_feet_unchanged=%d\n"),LegsSame);
    Report+=FString::Printf(TEXT("muzzle_alignment_cm=%.5f death_frozen=%d weapon_follows_drop_track=%d\n"),MuzzleError,Frozen,Dropped);
    for(const auto Name:{TEXT("Hips"),TEXT("WeaponSocket_R"),TEXT("WeaponMuzzle"),TEXT("LeftHand"),TEXT("WeaponGrip_L")})Report+=FString(Name)+TEXT(" ")+Body->GetSocketTransform(Name,RTS_Component).ToString()+TEXT("\n");
    return Report;
}
