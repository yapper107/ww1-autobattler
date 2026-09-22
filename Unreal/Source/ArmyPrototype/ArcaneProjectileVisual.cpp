#include "ArcaneProjectileVisual.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/StaticMesh.h"
#include <algorithm>

namespace {
FVector World(army::Vec3 P){return FVector(P.x,P.y,P.z)*100.;}
constexpr float RuneLife=.12f,ImpactLife=.24f;
}
AArcaneProjectileVisual::AArcaneProjectileVisual() {
    RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    for(int Team=0;Team<2;++Team)for(int Part=0;Part<3;++Part) {
        auto* Mesh=CreateDefaultSubobject<UInstancedStaticMeshComponent>(*FString::Printf(TEXT("Effect_%d_%d"),Team,Part));
        Mesh->SetupAttachment(RootComponent);Mesh->SetMobility(EComponentMobility::Movable);
        Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);Mesh->SetCastShadow(false);
        Mesh->NumCustomDataFloats=1;
        Mesh->SetStaticMesh(LoadObject<UStaticMesh>(nullptr,Part==2?TEXT("/Engine/BasicShapes/Cylinder.Cylinder"):TEXT("/Engine/BasicShapes/Sphere.Sphere")));
        Mesh->SetMaterial(0,LoadObject<UMaterialInterface>(nullptr,*FString::Printf(TEXT("/Game/Effects/Arcane/M_%s_%s.M_%s_%s"),Team?TEXT("Ember"):TEXT("Azure"),Part==0?TEXT("Core"):TEXT("Glow"),Team?TEXT("Ember"):TEXT("Azure"),Part==0?TEXT("Core"):TEXT("Glow"))));
        Mesh->SetCanEverAffectNavigation(false);
        Batches.Add(Mesh);ActiveCounts.Add(0);
    }
}
void AArcaneProjectileVisual::Configure(const army::Record& Record) {
    Origins.SetNum(Record.shots.size());OriginReady.Init(0,Record.shots.size());Lookback=RuneLife+ImpactLife;
    for(const auto& Shot:Record.shots)Lookback=FMath::Max(Lookback,Shot.impactTime-Shot.time+ImpactLife);
    Clear();
}
void AArcaneProjectileVisual::FinishFrame() {
    for(int B=0;B<Batches.Num();++B) {
        auto* Batch=Batches[B].Get();
        for(int I=ActiveCounts[B];I<Batch->GetInstanceCount();++I){FTransform T;Batch->GetInstanceTransform(I,T);if(!T.GetScale3D().IsNearlyZero()){T.SetScale3D(FVector::ZeroVector);Batch->UpdateInstanceTransform(I,T,false,false,true);}}
        Batch->MarkRenderInstancesDirty();
    }
}
void AArcaneProjectileVisual::Clear(){for(int& Count:ActiveCounts)Count=0;VisibleShots=0;MuzzleOwners.Reset();FinishFrame();}
void AArcaneProjectileVisual::Instance(int B,const FTransform& Transform,float Fade) {
    auto* Batch=Batches[B].Get();const int I=ActiveCounts[B]++;
    if(I<Batch->GetInstanceCount())Batch->UpdateInstanceTransform(I,Transform,false,false,true);
    else Batch->AddInstance(Transform);
    ensure(Batch->SetCustomDataValue(I,0,Fade,false));
}
void AArcaneProjectileVisual::Orb(int Team,FVector P,float Radius,float Fade,bool Core) {
    if(Fade<=.001f||Radius<=.001f)return;
    Instance(Team*3+(Core?0:1),FTransform(FQuat::Identity,P,FVector(Radius/50.f)),Fade);
}
void AArcaneProjectileVisual::Stroke(int Team,FVector A,FVector B,float Width,float Fade) {
    const FVector Delta=B-A;const float Length=Delta.Size();if(Length<.001f||Fade<=.001f)return;
    Instance(Team*3+2,FTransform(FQuat::FindBetweenNormals(FVector::UpVector,Delta/Length),(A+B)*.5,FVector(Width/100.f,Width/100.f,Length/100.f)),Fade);
}
void AArcaneProjectileVisual::Ring(int Team,FVector C,FVector Axis,float Radius,float Fade,float Spin,bool Glyphs) {
    FVector U,V;Axis.GetSafeNormal().FindBestAxisVectors(U,V);
    auto Point=[&](float Angle,float R){return C+(U*FMath::Cos(Angle)+V*FMath::Sin(Angle))*R;};
    constexpr int Segments=32;
    for(int I=0;I<Segments;++I) {
        const float A=I*2*PI/Segments+Spin,B=(I+1)*2*PI/Segments+Spin;
        Stroke(Team,Point(A,Radius),Point(B,Radius),.7f,Fade);
        if(Glyphs&&I%8<5)Stroke(Team,Point(A,Radius*.72f),Point(B,Radius*.72f),.45f,Fade*.6f);
    }
    if(Glyphs)for(int I=0;I<6;++I) {
        const float A=I*PI/3+Spin;
        Stroke(Team,Point(A-.10f,Radius*.84f),Point(A,Radius*.96f),.65f,Fade);
        Stroke(Team,Point(A,Radius*.96f),Point(A+.10f,Radius*.84f),.65f,Fade);
        Stroke(Team,Point(A,Radius*.76f),Point(A,Radius*.89f),.55f,Fade);
    }
}
void AArcaneProjectileVisual::Impact(int Team,FVector P,FVector D,float Age,float Seed,bool Through) {
    const float Life=Through?.13f:ImpactLife;if(Age<0||Age>=Life)return;
    const float T=Age/Life,Fade=(1-T)*(1-T),Size=Through?.6f:1.f;
    Orb(Team,P,(4+10*T)*Size,Fade);Orb(Team,P,2.8f*Size,Fade,true);
    Ring(Team,P,D,(3+18*T)*Size,Fade*.7f,Seed+T,false);
    FVector U,V;D.GetSafeNormal().FindBestAxisVectors(U,V);
    for(int I=0;I<7;++I) {
        const float Angle=I*2*PI/7+Seed;
        const FVector Out=(U*FMath::Cos(Angle)+V*FMath::Sin(Angle)-D*.35f).GetSafeNormal();
        const FVector Head=P+Out*(4+30*T)*Size+FVector(0,0,-10*T*T);
        Stroke(Team,Head-Out*(3+4*(1-T))*Size,Head,.8f*Size,Fade);
    }
}
void AArcaneProjectileVisual::Present(const army::Record& Record,float Time,TFunctionRef<FVector(const army::Shot&)> Muzzle) {
    for(int& Count:ActiveCounts)Count=0;VisibleShots=0;MuzzleOwners.Reset();
    auto It=std::lower_bound(Record.shots.begin(),Record.shots.end(),Time-Lookback,[](const army::Shot& S,float T){return S.time<T;});
    for(;It!=Record.shots.end()&&It->time<=Time;++It) {
        const auto& S=*It;const float Age=Time-S.time;
        if(S.flight.size()<2||S.owner<0||S.owner>=army::UnitCount||Time>S.impactTime+ImpactLife)continue;
        const int Index=int(It-Record.shots.begin()),Team=S.owner<army::TeamSize?0:1;
        if(!OriginReady[Index]){Origins[Index]=Muzzle(S);OriginReady[Index]=1;}
        const FVector Start=World(S.start),Origin=Origins[Index];
        const FVector Direction=(World(S.flight[1].position)-Start).GetSafeNormal();
        const float Seed=float((Index*73)%97)*.17f;
        if(Age<RuneLife) {
            MuzzleOwners.Add(S.owner);
            const float T=Age/RuneLife,Fade=FMath::Pow(1-T,1.5f);
            Ring(Team,Origin+Direction*3,Direction,12+4*FMath::Sin(T*PI),Fade,Seed+T*.45f,true);
            Orb(Team,Origin,5*(1-T),Fade);Orb(Team,Origin,2.2f,Fade,true);
        }
        auto Position=[&](float At,FVector& P) {
            army::Vec3 Sample;if(!army::ProjectilePosition(S,At,Sample))return false;
            P=World(Sample);
            // Reconcile the visible barrel with the simulation's abstract muzzle
            // over at most the first metre. Terminal contact is always exact.
            const float Span=FMath::Max(.001f,FMath::Min(100.f,float(FVector::Distance(Start,World(S.end)))));
            const float Fraction=FMath::Clamp(float(FVector::Distance(Start,P))/Span,0.f,1.f);
            const float Blend=1-Fraction*Fraction*(3-2*Fraction);
            P+=(Origin-Start)*Blend;return true;
        };
        if(Time<S.impactTime) {
            FVector Head;if(!Position(Time,Head))continue;++VisibleShots;
            const auto& A=S.flight.front();const auto& B=S.flight[1];
            const float Speed=FMath::Max(1.f,float(FVector::Distance(World(A.position),World(B.position)))/FMath::Max(.00001f,B.time-A.time));
            const float TailTime=FMath::Max(S.time,Time-85/Speed);
            FVector Previous;Position(TailTime,Previous);
            for(int J=1;J<=10;++J) {
                FVector Next;Position(FMath::Lerp(TailTime,Time,J/10.f),Next);
                const float W=J/10.f;
                Stroke(Team,Previous,Next,.7f+3.4f*W*W,W*W*.7f);Previous=Next;
            }
            Orb(Team,Head,8,.7f);Orb(Team,Head,2.9f,1,true);
            FVector U,V;Direction.FindBestAxisVectors(U,V);
            for(int J=0;J<3;++J) {
                const float A0=Seed+Age*24+J*2*PI/3;
                const FVector Offset=(U*FMath::Cos(A0)+V*FMath::Sin(A0))*4;
                Stroke(Team,Head+Offset-Direction*13,Head+Offset-Direction*4,.6f,.65f);
            }
        }
        const FVector LastDirection=(World(S.end)-World(S.flight[S.flight.size()-2].position)).GetSafeNormal();
        if(S.impact!=army::Shot::Impact::None&&S.impact!=army::Shot::Impact::OutOfBounds)
            Impact(Team,World(S.end),LastDirection.IsNearlyZero()?Direction:LastDirection,Time-S.impactTime,Seed);
        for(const auto& Victim:S.victims)if(Victim.time<S.impactTime-.001f) {
            army::Vec3 P;if(army::ProjectilePosition(S,Victim.time,P))Impact(Team,World(P),Direction,Time-Victim.time,Seed,true);
        }
    }
    FinishFrame();
}

FString AArcaneProjectileVisual::ValidatePresentation() {
    auto Record=MakeUnique<army::Record>();
    army::Shot Shot;Shot.owner=army::TeamSize;Shot.time=1;Shot.impactTime=1.1f;
    Shot.start={0,0,1};Shot.end={10,0,1};Shot.impact=army::Shot::Impact::Cover;
    Shot.flight={{1,Shot.start},{1.05f,{5,0,1}},{1.1f,Shot.end}};
    Record->shots.push_back(Shot);Configure(*Record);
    int OriginsSampled=0;auto Muzzle=[&](const army::Shot& S){++OriginsSampled;return World(S.start)+FVector(0,10,0);};
    auto Count=[&](){int N=0;for(int C:ActiveCounts)N+=C;return N;};
    auto Snapshot=[&](){TArray<FTransform> Out;for(int B=0;B<Batches.Num();++B)for(int I=0;I<ActiveCounts[B];++I){FTransform T;Batches[B]->GetInstanceTransform(I,T);Out.Add(T);}return Out;};
    Present(*Record,.9f,Muzzle);const bool Unborn=Count()==0&&OriginsSampled==0;
    Present(*Record,1.05f,Muzzle);const auto First=Snapshot();const int FlightCount=Count();
    bool Flight=VisibleShots==1&&FlightCount>0&&OriginsSampled==1;
    for(int I=0;I<3;++I)Flight=Flight&&ActiveCounts[I]==0;
    bool AtRecordedPoint=false;
    for(int I=0;I<ActiveCounts[3];++I){FTransform T;Batches[3]->GetInstanceTransform(I,T);AtRecordedPoint|=T.GetLocation().Equals(FVector(500,0,100),.01f);}
    Present(*Record,1.15f,Muzzle);const bool Contact=VisibleShots==0&&Count()>0;
    Present(*Record,4,Muzzle);const bool Expired=Count()==0;
    Present(*Record,1.05f,Muzzle);const auto Rewound=Snapshot();bool Seek=First.Num()==Rewound.Num()&&OriginsSampled==1;
    for(int I=0;I<First.Num()&&Seek;++I)Seek=First[I].Equals(Rewound[I],.00001f);
    Record->shots[0].victims.push_back({0,1.03f,100});Configure(*Record);
    Present(*Record,1.05f,Muzzle);const bool Through=VisibleShots==1&&Count()>FlightCount;
    Record->shots[0].victims.clear();bool NoFalseImpact=true;
    for(auto Kind:{army::Shot::Impact::None,army::Shot::Impact::OutOfBounds}) {
        Record->shots[0].impact=Kind;Configure(*Record);Present(*Record,1.15f,Muzzle);NoFalseImpact&=Count()==0;
    }
    Record->shots[0].flight.clear();Configure(*Record);Present(*Record,1.05f,Muzzle);const bool EmptySafe=Count()==0;
    const bool Passed=Unborn&&Flight&&AtRecordedPoint&&Contact&&Expired&&Seek&&Through&&NoFalseImpact&&EmptySafe;
    Clear();
    return FString::Printf(TEXT("%s unborn=%d faction_and_flight=%d recorded_position=%d contact=%d expiry=%d rewind=%d through_hit=%d no_false_impact=%d empty_flight=%d\n"),Passed?TEXT("PASS"):TEXT("FAIL"),Unborn,Flight,AtRecordedPoint,Contact,Expired,Seek,Through,NoFalseImpact,EmptySafe);
}
