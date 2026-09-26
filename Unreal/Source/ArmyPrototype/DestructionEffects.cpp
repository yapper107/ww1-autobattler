#include "DestructionEffects.h"
#include "Math/RandomStream.h"
#include <algorithm>
#include <cmath>
#include <cstring>

namespace {
constexpr double DebrisGravity=9.81;
constexpr double DebrisStep=.03;     // seconds per chord when a flight is traced against the geometry
constexpr float DebrisFade=1.2f;     // seconds a chunk takes to sink away at the end of its life
constexpr double GridCell=4;         // metres
FVector Metres(army::Vec3 P){return FVector(P.x,P.y,P.z);}
army::Vec3 SimVector(const FVector& V){return army::Vec3{float(V.X),float(V.Y),float(V.Z)};}
uint64 FloatBits(float Value){uint32 Bits=0;std::memcpy(&Bits,&Value,sizeof Bits);return Bits;}

// How each kind of event breaks up. Chunk counts scale with the thrown mass (KgEach per chunk) within Least..Most;
// velocities are the event's own plus a spread of Spread + Carry * speed and an upward lift of Lift + LiftCarry * speed.
struct FLook {
    int32 Least=0,Most=0;float KgEach=1,Scale=1,Spread=0,Carry=0,Lift=0,LiftCarry=0;
    int32 Puffs=0;float PuffSize=1,PuffLife=1,PuffOpacity=0;
};
FLook LookOf(army::DestructionKind Kind){
    FLook Look;
    switch(Kind){
    case army::DestructionKind::Cracked:
        Look.Least=2;Look.Most=6;Look.KgEach=3;Look.Scale=.5f;Look.Spread=.8f;Look.Carry=.3f;Look.Lift=.6f;Look.LiftCarry=.1f;
        Look.Puffs=2;Look.PuffSize=.7f;Look.PuffLife=2.f;Look.PuffOpacity=.26f;break;
    case army::DestructionKind::Breached:
        Look.Least=6;Look.Most=40;Look.KgEach=40;Look.Scale=1;Look.Spread=1.5f;Look.Carry=.35f;Look.Lift=1.5f;Look.LiftCarry=.2f;
        Look.Puffs=7;Look.PuffSize=1.6f;Look.PuffLife=4.5f;Look.PuffOpacity=.3f;break;
    case army::DestructionKind::Destroyed:
        Look.Least=8;Look.Most=48;Look.KgEach=60;Look.Scale=1.2f;Look.Spread=1.5f;Look.Carry=.35f;Look.Lift=1.5f;Look.LiftCarry=.2f;
        Look.Puffs=9;Look.PuffSize=2.f;Look.PuffLife=5.5f;Look.PuffOpacity=.32f;break;
    case army::DestructionKind::Collapsed:   // bigger and slower dust for a falling storey
        Look.Least=12;Look.Most=64;Look.KgEach=250;Look.Scale=1.6f;Look.Spread=1;Look.Carry=.3f;Look.Lift=.5f;Look.LiftCarry=.1f;
        Look.Puffs=14;Look.PuffSize=3;Look.PuffLife=8;Look.PuffOpacity=.3f;break;
    case army::DestructionKind::GlassShattered:
        Look.Least=6;Look.Most=24;Look.KgEach=.9f;Look.Scale=1;Look.Spread=2.5f;Look.Carry=.5f;Look.Lift=1;Look.LiftCarry=.1f;
        Look.Puffs=1;Look.PuffSize=.4f;Look.PuffLife=.8f;Look.PuffOpacity=.18f;break;
    case army::DestructionKind::Rubble:      // the rubble itself arrives with the geometry: only its settling dust here
        Look.Puffs=3;Look.PuffSize=1.1f;Look.PuffLife=3.5f;Look.PuffOpacity=.22f;break;
    }
    return Look;
}

// One chunk's flight: chords of the ballistic arc are traced against the geometry of the event's moment. A top bounces
// it (restitution Bounce, keeping 55% of its run) until it lands softly; a wall reflects it, losing most of its speed.
// It then slides to rest under friction Grip, stopping at any wall.
void Fly(armydestruction::FDebrisChunk& Chunk,FVector P,FVector V,float Radius,float Bounce,float Grip,const armydestruction::FDebrisWorld& Scene){
    double Clock=0;FVector Run=FVector::ZeroVector;bool Resting=false;
    for(int32 Leg=0;Leg<5&&!Resting;++Leg){
        Chunk.Legs.Add({float(Clock),P,V});
        double Elapsed=0,Contact=-1;FVector From=P,Face=FVector::UpVector;
        for(int32 Step=0;Step<250&&Contact<0;++Step){
            const double Next=Elapsed+DebrisStep;
            const FVector To=P+V*Next+FVector(0,0,-.5*DebrisGravity*Next*Next);
            float Fraction=0;
            if(Scene.Trace(From,To,Radius,Fraction,Face))Contact=Elapsed+Fraction*DebrisStep;
            From=To;Elapsed=Next;
        }
        if(Contact<0){Clock+=Elapsed;P=From;Run=FVector::ZeroVector;break;}   // still falling after 7.5 s: leave it there
        const FVector Arrival=V+FVector(0,0,-DebrisGravity*Contact);
        P=P+V*Contact+FVector(0,0,-.5*DebrisGravity*Contact*Contact)+Face*.002;Clock+=Contact;
        if(Face.Z>.5){
            const double Up=-Arrival.Z*Bounce;Run=FVector(Arrival.X,Arrival.Y,0)*.55;
            if(Up<.9||Leg==4){Resting=true;break;}
            V=Run+FVector(0,0,Up);Run=FVector::ZeroVector;
        }else{
            const FVector Into=Face*FVector::DotProduct(Arrival,Face);
            V=(Arrival-Into)*.5-Into*.25;
        }
    }
    if(!Resting){   // stopped against a wall or out of legs: drop to whatever lies below
        Chunk.Legs.Add({float(Clock),P,FVector::ZeroVector});
        float Fraction=0;FVector Face;
        if(Scene.Trace(P,P-FVector(0,0,60),Radius,Fraction,Face)){const double Drop=60.*Fraction;Clock+=FMath::Sqrt(2*Drop/DebrisGravity);P.Z-=Drop;}
        Run=FVector::ZeroVector;
    }
    const double Decel=Grip*DebrisGravity;
    double Speed=FMath::Min(Run.Size(),2.5);
    const FVector Heading=Run.GetSafeNormal();
    double Distance=Speed*Speed/(2*Decel);
    if(Distance>.01){
        float Fraction=0;FVector Face;const FVector Lift(0,0,.01);
        if(Scene.Trace(P+Lift,P+Heading*Distance+Lift,Radius,Fraction,Face)){Distance*=Fraction;Speed=FMath::Sqrt(2*Decel*Distance);}
    }
    Chunk.SlideStart=float(Clock);Chunk.SlideFrom=P;Chunk.SlideVelocity=Heading*Speed;Chunk.Friction=float(Decel);
    Chunk.Stop=float(Clock+Speed/Decel);Chunk.Rest=P+Heading*Distance;
}
}

// Linear colours. The scene's sun and sky lift lit surfaces a long way (the works' walls are 0.32 grey), so chunks and
// rubble sit darker than they look; dust is unlit (its colour is what shows), so it is darker again.
FLinearColor armydestruction::DebrisColor(int Material){
    switch(Material){
    case 0: return FLinearColor(.36f,.33f,.27f);    // stone: grey-brown
    case 1: return FLinearColor(.30f,.11f,.07f);    // brick: red-brown
    case 2: return FLinearColor(.24f,.14f,.07f);    // timber: brown
    default: return FLinearColor(.72f,.90f,1.f);    // glass: pale blue
    }
}
FLinearColor armydestruction::DustColor(int Material){
    switch(Material){
    case 0: return FLinearColor(.25f,.235f,.20f);
    case 1: return FLinearColor(.24f,.195f,.165f);
    case 2: return FLinearColor(.22f,.19f,.15f);
    case 4: return FLinearColor(1.f,.66f,.26f);      // a blast's flash
    case 5: return FLinearColor(.085f,.08f,.075f);   // its smoke
    case 6: return FLinearColor(.15f,.12f,.085f);    // its smoke with earth
    default: return FLinearColor(.36f,.41f,.44f);
    }
}
FLinearColor armydestruction::RubbleColor(int Material){
    switch(Material){
    case 0: return FLinearColor(.29f,.27f,.22f);
    case 1: return FLinearColor(.25f,.12f,.08f);
    case 2: return FLinearColor(.20f,.13f,.07f);
    default: return FLinearColor(.40f,.46f,.50f);
    }
}
FLinearColor armydestruction::CrackedColor(const FLinearColor& Color){return FLinearColor(Color.R*.74f+.015f,Color.G*.70f+.008f,Color.B*.66f,Color.A);}

bool armydestruction::SameBox(const army::Obstacle& A,const army::Obstacle& B){
    return A.center.x==B.center.x&&A.center.y==B.center.y&&A.center.z==B.center.z&&A.half.x==B.half.x&&A.half.y==B.half.y&&
        army::ObstacleHeight(A)==army::ObstacleHeight(B);
}
float armydestruction::DecorationHiddenFrom(const std::vector<FCollapse>& Collapses,const FDecorationVisual& Decoration){
    // Floors, roofs and damaged floors (kinds 2-4) inside a collapsing footprint, at or above the collapsing level.
    if(Decoration.Kind>=2)for(const auto& Collapse:Collapses)
        if(std::abs(Decoration.Center.x-Collapse.Center.x)<=Collapse.Half.x+.3f&&std::abs(Decoration.Center.y-Collapse.Center.y)<=Collapse.Half.y+.3f&&
            Decoration.Center.z>=Collapse.Center.z-Collapse.Half.z-.3f)return Collapse.Time;
    return TNumericLimits<float>::Max();
}

FVector armydestruction::FDebrisChunk::PositionAt(float Age) const {
    if(Age>=Stop||Legs.Num()==0)return Rest;
    if(Age>=SlideStart){
        const double Along=Age-SlideStart,Speed=SlideVelocity.Size();
        if(Speed<1e-6)return SlideFrom;
        return SlideFrom+SlideVelocity*Along-SlideVelocity*(.5*Friction*Along*Along/Speed);
    }
    int32 K=Legs.Num()-1;
    while(K>0&&Legs[K].T0>Age)--K;
    const FDebrisLeg& Leg=Legs[K];const double Since=FMath::Max(0.f,Age-Leg.T0);
    return Leg.P+Leg.V*Since+FVector(0,0,-.5*DebrisGravity*Since*Since);
}
FTransform armydestruction::FDebrisChunk::TransformAt(float Age) const {
    FVector Where=PositionAt(Age)*100.;
    FVector Scale=Size;
    const float Left=Life-Age;
    if(Left<DebrisFade){const double Gone=FMath::Clamp(1.f-Left/DebrisFade,0.f,1.f);Scale*=1-Gone;Where.Z-=Gone*Size.Z*50;}
    const FQuat Turn(Axis,Spin*FMath::Min(Age,Stop));
    return FTransform(Turn*Tilt,Where,Scale);
}
void armydestruction::FDustPuff::Sample(float Age,FVector& Centimetres,float& Radius,float& Alpha) const {
    const float Progress=FMath::Clamp(Age/FMath::Max(Life,.01f),0.f,1.f);
    Radius=Grow+(Size-Grow)*(1-FMath::Exp(-4*Progress));
    Alpha=Opacity*FMath::Min(1.f,Age/.08f)*FMath::Pow(1-Progress,1.5f);
    const double Carried=.5*(1-FMath::Exp(-Age/.5f));   // the burst's push dies away in about half a second
    Centimetres=(From+Drift*Carried+FVector(0,0,Rise*Age))*100.;
}

armydestruction::FDebrisWorld::FDebrisWorld(const army::Map& InGeometry):Geometry(InGeometry){
    MinX=-Geometry.halfWidth-GridCell*2;MinY=-Geometry.halfHeight-GridCell*2;
    Columns=FMath::Max(1,int32((Geometry.halfWidth*2+GridCell*4)/GridCell)+1);
    Rows=FMath::Max(1,int32((Geometry.halfHeight*2+GridCell*4)/GridCell)+1);
    Cells.assign(size_t(Columns)*size_t(Rows),std::vector<int32>());
    for(int32 Index=0;Index<int32(Geometry.obstacles.size());++Index){
        const army::Obstacle& O=Geometry.obstacles[size_t(Index)];
        for(int32 Y=CellY(O.center.y-O.half.y);Y<=CellY(O.center.y+O.half.y);++Y)
            for(int32 X=CellX(O.center.x-O.half.x);X<=CellX(O.center.x+O.half.x);++X)Cells[size_t(Y)*size_t(Columns)+size_t(X)].push_back(Index);
    }
}
int32 armydestruction::FDebrisWorld::CellX(double X) const {return int32(FMath::Clamp(FMath::FloorToDouble((X-MinX)/GridCell),0.,double(Columns-1)));}
int32 armydestruction::FDebrisWorld::CellY(double Y) const {return int32(FMath::Clamp(FMath::FloorToDouble((Y-MinY)/GridCell),0.,double(Rows-1)));}
bool armydestruction::FDebrisWorld::Trace(const FVector& A,const FVector& B,float Radius,float& Fraction,FVector& Normal) const {
    double Best=2;
    const double Ground=Geometry.groundBase+Radius;
    if(A.Z<=Ground){Fraction=0;Normal=FVector::UpVector;return true;}
    if(B.Z<Ground){Best=(A.Z-Ground)/(A.Z-B.Z);Normal=FVector::UpVector;}
    const int32 X0=CellX(FMath::Min(A.X,B.X)-Radius),X1=CellX(FMath::Max(A.X,B.X)+Radius);
    const int32 Y0=CellY(FMath::Min(A.Y,B.Y)-Radius),Y1=CellY(FMath::Max(A.Y,B.Y)+Radius);
    for(int32 Y=Y0;Y<=Y1;++Y)for(int32 X=X0;X<=X1;++X)for(const int32 Index:Cells[size_t(Y)*size_t(Columns)+size_t(X)]){
        const army::Obstacle& O=Geometry.obstacles[size_t(Index)];
        const FVector Low(O.center.x-O.half.x-Radius,O.center.y-O.half.y-Radius,O.center.z-Radius);
        const FVector High(O.center.x+O.half.x+Radius,O.center.y+O.half.y+Radius,O.center.z+army::ObstacleHeight(O)+Radius);
        if(A.X>Low.X&&A.X<High.X&&A.Y>Low.Y&&A.Y<High.Y&&A.Z>Low.Z&&A.Z<High.Z)continue;
        double Near=0,Far=1;int32 Axis=-1;bool Miss=false;
        for(int32 K=0;K<3&&!Miss;++K){
            const double Delta=B[K]-A[K];
            if(FMath::Abs(Delta)<1e-9){Miss=A[K]<Low[K]||A[K]>High[K];continue;}
            double Enter=(Low[K]-A[K])/Delta,Leave=(High[K]-A[K])/Delta;
            if(Enter>Leave)Swap(Enter,Leave);
            if(Enter>Near){Near=Enter;Axis=K;}
            Far=FMath::Min(Far,Leave);
            if(Near>Far)Miss=true;
        }
        if(Miss||Axis<0||Near>=Best)continue;
        Best=Near;Normal=FVector::ZeroVector;Normal[Axis]=B[Axis]>A[Axis]?-1.:1.;
    }
    if(Best>1)return false;
    Fraction=float(Best);return true;
}

void armydestruction::SpawnDebris(const army::DestructionEvent& Event,const FDebrisWorld& Scene,std::vector<FDebrisChunk>& Chunks,std::vector<FDustPuff>& Puffs){
    // A seed of the event itself, so the same event always throws the same debris whatever else the record holds.
    uint64 Hash=0x9E3779B97F4A7C15ull^uint64(Event.kind);
    auto Mix=[&Hash](uint64 Value){Hash^=Value+0x9E3779B97F4A7C15ull+(Hash<<6)+(Hash>>2);Hash*=0xBF58476D1CE4E5B9ull;Hash^=Hash>>31;};
    Mix(Event.obstacle);Mix(FloatBits(Event.time));Mix(FloatBits(Event.center.x));Mix(FloatBits(Event.center.y));Mix(FloatBits(Event.center.z));
    FRandomStream Random(int32(uint32(Hash^(Hash>>32))));
    const FLook Look=LookOf(Event.kind);
    const int32 Material=FMath::Clamp(Event.material,0,3);
    // The event's box: centre and half extents. A box without height reads as one metre standing on centre.z.
    FVector Center=Metres(Event.center),Half(FMath::Max(Event.half.x,.02f),FMath::Max(Event.half.y,.02f),Event.half.z);
    if(Half.Z<=.001){Half.Z=.5;Center.Z+=.5;}
    FVector Push=Metres(Event.velocity);
    if(Push.Size()>35)Push*=35/Push.Size();   // the picture stays readable; the direction is kept
    const float Speed=float(Push.Size());
    const bool Cracked=Event.kind==army::DestructionKind::Cracked,Collapse=Event.kind==army::DestructionKind::Collapsed;
    const float Bounce=Material==3?.12f:Material==2?.35f:.25f,Grip=Material==3?.35f:Material==2?.55f:.75f;
    const int32 Count=Look.Most==0?0:FMath::Clamp(FMath::RoundToInt(Event.mass/Look.KgEach),Look.Least,Look.Most);
    const int32 ThinAxis=Half.X<Half.Y?0:1;
    for(int32 N=0;N<Count;++N){
        FDebrisChunk Chunk;Chunk.Start=Event.time;Chunk.Material=Material;
        if(Material==3){const float Wide=Random.FRandRange(.06f,.18f),Tall=Random.FRandRange(.05f,.14f);Chunk.Size=FVector(Wide,Tall,.012f);}
        else if(Material==2){const float Length=Random.FRandRange(.18f,.5f),Width=Random.FRandRange(.03f,.08f),Depth=Random.FRandRange(.02f,.05f);
            Chunk.Size=FVector(Length,Width,Depth)*(.5f+.5f*Look.Scale);}
        else{const float Edge=Random.FRandRange(.08f,.22f)*Look.Scale,Second=Random.FRandRange(.6f,1.f),Third=Random.FRandRange(.45f,.9f);
            Chunk.Size=FVector(Edge,Edge*Second,Edge*Third);}
        const float Radius=.35f*float(Chunk.Size.GetMax());
        const float Ox=Random.FRandRange(-1.f,1.f),Oy=Random.FRandRange(-1.f,1.f),Oz=Random.FRandRange(-1.f,1.f);
        FVector P=Center+FVector(Ox*Half.X,Oy*Half.Y,Oz*Half.Z);
        if(Cracked){   // spalls off the face the wall bends toward
            const double Along=Push[ThinAxis];const float Coin=Random.FRand();
            const double Side=FMath::Abs(Along)>.05?FMath::Sign(Along):(Coin<.5f?-1.:1.);
            P[ThinAxis]=Center[ThinAxis]+Side*(Half[ThinAxis]+Radius+.02);
        }
        P.Z=FMath::Max(P.Z,Center.Z-Half.Z+Radius+.02);   // never under the piece's own foot
        const FVector Scatter=Random.GetUnitVector();const float Reach=Random.FRandRange(.25f,1.f),Rise=Random.FRandRange(0.f,Look.Lift+Look.LiftCarry*Speed);
        FVector V=Push+Scatter*(Reach*(Look.Spread+Look.Carry*Speed))+FVector(0,0,Rise);
        if(Collapse){const float Spill=Random.FRandRange(.5f,3.f);V+=FVector(P.X-Center.X,P.Y-Center.Y,0).GetSafeNormal()*Spill;}
        const FVector TiltAxis=Random.GetUnitVector();const float TiltAngle=Random.FRandRange(0.f,6.2832f);
        Chunk.Tilt=FQuat(TiltAxis,TiltAngle);
        Chunk.Axis=Random.GetUnitVector();Chunk.Spin=Random.FRandRange(3.f,15.f)*(Material==3?1.6f:1.f);
        Fly(Chunk,P,V,Radius,Bounce,Grip,Scene);
        const float Lasting=Random.FRandRange(5.f,10.f);   // plan 033 brief: debris fades after 5-10 s
        Chunk.Life=FMath::Max(Lasting,Chunk.Stop+1.f);
        Chunks.push_back(Chunk);
    }
    for(int32 N=0;N<Look.Puffs;++N){
        FDustPuff Puff;Puff.Material=Material;
        const float Jx=Random.FRandRange(-.8f,.8f),Jy=Random.FRandRange(-.8f,.8f),Jz=Random.FRandRange(-.5f,.5f);
        FVector At=Center+FVector(Jx*Half.X,Jy*Half.Y,Jz*Half.Z);
        if(Collapse){   // dust rolls out at the foot of the fallen storey
            float Fraction=0;FVector Face;const float Above=Random.FRandRange(.3f,1.5f);
            if(Scene.Trace(At,At-FVector(0,0,40),.05f,Fraction,Face))At.Z-=40*Fraction-Above;
        }
        if(Event.kind==army::DestructionKind::Rubble)At.Z=Center.Z+Half.Z+.15;
        if(Event.kind==army::DestructionKind::Breached||Event.kind==army::DestructionKind::Destroyed){
            // A third at the opening, a third carried with the debris, a third blown back on the side of the burst.
            const float Thrown=Random.FRandRange(.5f,1.5f);const int32 Share=N%3;
            if(Share)At+=Push.GetSafeNormal()*(Share==1?Thrown:-.6f*Thrown);}
        FVector Carry=Push*.12;if(Carry.Size()>3)Carry*=3/Carry.Size();
        const FVector Wander=Random.GetUnitVector();
        Puff.From=At;Puff.Drift=Carry+Wander*.3;
        Puff.Size=Look.PuffSize*Random.FRandRange(.7f,1.3f);Puff.Grow=Puff.Size*.3f;
        Puff.Life=Look.PuffLife*Random.FRandRange(.8f,1.2f);Puff.Rise=Random.FRandRange(.1f,.35f);
        Puff.Opacity=Look.PuffOpacity*Random.FRandRange(.8f,1.1f);Puff.Start=Event.time+Random.FRandRange(0.f,.12f);
        for(int32 Lobe=0;Lobe<FDustPuff::LobeCount;++Lobe){
            // Upper lobe lighter, lower lobe darker; each off the centre by up to about half a radius.
            const float Lx=Random.FRandRange(-.4f,.4f),Ly=Random.FRandRange(-.4f,.4f),Scale=Random.FRandRange(.55f,.8f);
            Puff.Lobes[Lobe]=FVector(Lx,Ly,Lobe==0?.3f:Lobe==1?0.f:-.22f);Puff.LobeSize[Lobe]=Scale;Puff.LobeTone[Lobe]=Lobe==0?1.2f:Lobe==1?1.f:.8f;
        }
        Puffs.push_back(Puff);
    }
}

void armydestruction::PaneVisuals(const army::Record& Record,std::vector<FPaneVisual>& Panes){
    Panes.clear();
    TMap<uint64,int32> Index;
    for(const auto& Pane:Record.glassPanes){
        FPaneVisual Shown;Shown.Center=Metres(Pane.center)*100.;Shown.Upper=Pane.center.z>2.9f;
        Shown.Scale=FVector(FMath::Max(Pane.half.x,.006f)*2,FMath::Max(Pane.half.y,.006f)*2,Pane.half.z*2);   // the engine cube is one metre
        Index.Add(Pane.id,int32(Panes.size()));Panes.push_back(Shown);
    }
    for(const auto& Change:Record.destruction)if(Change.kind==army::DestructionKind::GlassShattered)
        if(const int32* Found=Index.Find(Change.obstacle))Panes[size_t(*Found)].BrokenAt=FMath::Min(Panes[size_t(*Found)].BrokenAt,Change.time);
}

bool armydestruction::FGrenadeTrack::PositionAt(float Time,FVector& Where) const {
    if(Samples.empty()||Time<Samples.front().Time||Time>=Gone)return false;
    const size_t K=size_t(std::upper_bound(Samples.begin(),Samples.end(),Time,[](float T,const FGrenadeSample& Sample){return T<Sample.Time;})-Samples.begin())-1;
    const FGrenadeSample& A=Samples[K];
    if(A.Stage==army::GrenadeStage::Held)return false;
    if(A.Stage==army::GrenadeStage::Resting){Where=A.P;return true;}
    auto Arc=[&A](double Since){return A.P+A.V*Since+FVector(0,0,-.5*DebrisGravity*Since*Since);};
    const double Since=Time-A.Time;
    Where=Arc(Since);
    if(K+1<Samples.size()){const FGrenadeSample& B=Samples[K+1];const double Span=B.Time-A.Time;
        // Never below the lower of the two snapshots (the ground or floor it lands on).
        if(Span>1e-4&&B.Stage!=army::GrenadeStage::Held){Where+=(B.P-Arc(Span))*(Since/Span);Where.Z=FMath::Max(Where.Z,FMath::Min(A.P.Z,B.P.Z));}}
    return true;
}
void armydestruction::GrenadeTracks(const army::Record& Record,std::vector<FGrenadeTrack>& Tracks){
    Tracks.clear();
    TMap<int32,int32> Index;
    for(const auto& Frame:Record.frames)for(const auto& Grenade:Frame.grenades){
        const int32* Found=Index.Find(Grenade.id);
        if(!Found){Index.Add(Grenade.id,int32(Tracks.size()));FGrenadeTrack Track;Track.Id=Grenade.id;Track.Type=Grenade.type;Tracks.push_back(Track);Found=Index.Find(Grenade.id);}
        Tracks[size_t(*Found)].Samples.push_back({Frame.time,Grenade.stage,Metres(Grenade.position),Metres(Grenade.velocity)});
    }
    for(const auto& Explosion:Record.explosions)if(const int32* Found=Index.Find(Explosion.id))Tracks[size_t(*Found)].Gone=FMath::Min(Tracks[size_t(*Found)].Gone,Explosion.time);
}
FLinearColor armydestruction::GrenadeColor(army::GrenadeType Type){
    // Fragmentation: an olive-drab iron body; concussion: the Mk 3's fibre body, pale.
    return Type==army::GrenadeType::Concussion?FLinearColor(.46f,.40f,.28f):FLinearColor(.12f,.15f,.06f);
}
void armydestruction::BlastPuffs(const army::GrenadeExplosion& Explosion,std::vector<FDustPuff>& Puffs){
    uint64 Hash=0xD1B54A32D192ED03ull^uint64(uint32(Explosion.id));
    auto Mix=[&Hash](uint64 Value){Hash^=Value+0x9E3779B97F4A7C15ull+(Hash<<6)+(Hash>>2);Hash*=0xBF58476D1CE4E5B9ull;Hash^=Hash>>31;};
    Mix(FloatBits(Explosion.time));Mix(FloatBits(Explosion.position.x));Mix(FloatBits(Explosion.position.y));
    FRandomStream Random(int32(uint32(Hash^(Hash>>32))));
    const bool Concussion=Explosion.type==army::GrenadeType::Concussion;
    const FVector At=Metres(Explosion.position);
    auto Lobes=[&Random](FDustPuff& Puff,float Spread){
        for(int32 Lobe=0;Lobe<FDustPuff::LobeCount;++Lobe){
            const float Lx=Random.FRandRange(-Spread,Spread),Ly=Random.FRandRange(-Spread,Spread),Scale=Random.FRandRange(.6f,.85f);
            Puff.Lobes[Lobe]=FVector(Lx,Ly,Lobe==0?.3f:Lobe==1?0.f:-.22f);Puff.LobeSize[Lobe]=Scale;Puff.LobeTone[Lobe]=Lobe==0?1.2f:Lobe==1?1.f:.8f;}};
    // The flash: a short bright ball, drawn larger than the real fireball of 70-170 g of TNT so it can be seen.
    FDustPuff Flash;Flash.Material=4;Flash.Start=Explosion.time;Flash.Life=Concussion?.24f:.18f;Flash.From=At;
    Flash.Size=Concussion?1.4f:1.1f;Flash.Grow=Flash.Size*.35f;Flash.Opacity=.9f;Lobes(Flash,.15f);Puffs.push_back(Flash);
    // The smoke: dark puffs that swell, drift and rise for a few seconds; a burst on the ground throws earth up with it.
    const int32 Count=Concussion?5:4;
    for(int32 N=0;N<Count;++N){
        FDustPuff Smoke;Smoke.Material=Explosion.ground?6:5;Smoke.Start=Explosion.time+Random.FRandRange(0.f,.06f);
        const FVector Offset=Random.GetUnitVector()*Random.FRandRange(.1f,.5f);
        Smoke.From=At+FVector(Offset.X,Offset.Y,FMath::Abs(Offset.Z)*.6);Smoke.Drift=FVector(Offset.X,Offset.Y,0)*2.+Random.GetUnitVector()*.2;
        Smoke.Size=(Concussion?2.1f:1.7f)*Random.FRandRange(.75f,1.25f);Smoke.Grow=Smoke.Size*.35f;
        Smoke.Life=Random.FRandRange(3.f,5.5f);Smoke.Rise=Random.FRandRange(.25f,.6f);Smoke.Opacity=Random.FRandRange(.3f,.42f);
        Lobes(Smoke,.4f);Puffs.push_back(Smoke);
    }
}

bool armydestruction::FabricateTest(army::Record& Record,int Material,FTestDestruction& Out){
    Out=FTestDestruction();
    if(!Record.geometryVersions.empty()||!Record.destruction.empty()||!Record.glassPanes.empty()){Out.Summary=TEXT("the record already carries geometry changes; nothing fabricated");return false;}
    army::Map Geometry=Record.map;
    // The two-storey building nearest the map centre (every authored house has two storeys).
    int32 HouseIndex=-1;
    for(int32 I=0;I<int32(Geometry.buildings.size());++I){const army::Building& B=Geometry.buildings[size_t(I)];
        if(!(B.authoredStairs||B.floors>=2))continue;
        const army::Building* Best=HouseIndex<0?nullptr:&Geometry.buildings[size_t(HouseIndex)];
        if(!Best||std::abs(B.center.x)+std::abs(B.center.y)<std::abs(Best->center.x)+std::abs(Best->center.y))HouseIndex=I;}
    if(HouseIndex<0){Out.Summary=TEXT("no two-storey building on this map");return false;}
    const army::Building House=Geometry.buildings[size_t(HouseIndex)];
    // Its pieces: an authored house owns a range of obstacles; an imported footprint owns none, so take its building boxes.
    std::vector<army::Obstacle> Pieces;
    const bool Owned=House.authoredStairs&&House.obstacleCount>0;
    for(size_t I=0;I<Geometry.obstacles.size();++I){const army::Obstacle& O=Geometry.obstacles[I];
        const bool Inside=Owned?I>=House.firstObstacle&&I<House.firstObstacle+House.obstacleCount:
            O.building&&std::abs(O.center.x-House.center.x)<=House.half.x+.6f&&std::abs(O.center.y-House.center.y)<=House.half.y+.6f;
        if(Inside&&O.id)Pieces.push_back(O);}
    float Base=TNumericLimits<float>::Max();
    for(const auto& O:Pieces)if(O.blocksMovement&&army::ObstacleHeight(O)>=2.4f)Base=FMath::Min(Base,O.center.z);
    if(Base>1.f){Out.Summary=TEXT("the building has no standing walls");return false;}
    auto Thin=[](const army::Obstacle& Piece){return FMath::Min(Piece.half.x,Piece.half.y);};
    auto Long=[](const army::Obstacle& Piece){return FMath::Max(Piece.half.x,Piece.half.y);};
    auto Outward=[&House](const army::Obstacle& Piece){
        return Piece.half.x<Piece.half.y?FVector(Piece.center.x>=House.center.x?1:-1,0,0):FVector(0,Piece.center.y>=House.center.y?1:-1,0);};
    // Ground-floor walls, longest first: the longest is breached, the longest on another side destroyed, a third side cracks.
    std::vector<army::Obstacle> Walls;
    for(const auto& O:Pieces)if(O.blocksMovement&&std::abs(O.center.z-Base)<.1f&&army::ObstacleHeight(O)>=2.4f&&Thin(O)<=.35f&&Long(O)>=.25f)Walls.push_back(O);
    std::stable_sort(Walls.begin(),Walls.end(),[&Long](const army::Obstacle& A,const army::Obstacle& B){return Long(A)>Long(B);});
    const army::Obstacle* Breach=!Walls.empty()&&Long(Walls[0])>=.6f?&Walls[0]:nullptr;
    const army::Obstacle* Wreck=nullptr;const army::Obstacle* Crack=nullptr;
    for(const auto& W:Walls)if(!Wreck&&(!Breach||W.id!=Breach->id)&&Long(W)>=.6f&&(!Breach||FVector::DotProduct(Outward(W),Outward(*Breach))<.5f))Wreck=&W;
    for(const auto& W:Walls)if((!Breach||W.id!=Breach->id)&&(!Wreck||W.id!=Wreck->id)){
        const bool OtherSide=(!Breach||FVector::DotProduct(Outward(W),Outward(*Breach))<.5f)&&(!Wreck||FVector::DotProduct(Outward(W),Outward(*Wreck))<.5f);
        if(OtherSide){Crack=&W;break;}
        if(!Crack)Crack=&W;
    }
    // Window panes (not obstacles, as in the simulator): from a sill's top to the lintel above it, upper storey first.
    struct FPane { army::Vec3 Center,Half; FVector Out; };
    std::vector<FPane> Panes;
    for(int32 Storey=1;Storey>=0&&Panes.empty();--Storey)for(const auto& Sill:Pieces){
        if(Panes.size()>=3||!Sill.blocksMovement||std::abs(army::ObstacleHeight(Sill)-1.05f)>=.15f||Thin(Sill)>.35f||std::abs(Sill.center.z-(Base+Storey*army::UpperFloor))>=.15f)continue;
        const float Bottom=Sill.center.z+army::ObstacleHeight(Sill);float Top=Bottom+1.3f;
        for(const auto& Lintel:Pieces)if(Lintel.id!=Sill.id&&std::abs(Lintel.center.x-Sill.center.x)<.05f&&std::abs(Lintel.center.y-Sill.center.y)<.05f&&Lintel.center.z>Bottom+.3f)Top=FMath::Min(Top,Lintel.center.z);
        const bool AlongX=Sill.half.x>Sill.half.y;
        FPane Pane;Pane.Center={Sill.center.x,Sill.center.y,(Bottom+Top)*.5f};
        Pane.Half={AlongX?Sill.half.x:.015f,AlongX?.015f:Sill.half.y,(Top-Bottom)*.5f};Pane.Out=Outward(Sill);
        Panes.push_back(Pane);
    }
    std::vector<uint64_t> Upper;float Roofline=Base+army::UpperFloor;
    for(const auto& O:Pieces)if(O.center.z>=Base+2.9f){Upper.push_back(O.id);Roofline=FMath::Max(Roofline,O.center.z+army::ObstacleHeight(O));}

    const float Density=Material==0?2200.f:Material==2?600.f:1900.f;   // kg/m3: stone, timber, brick
    const float CrackAt=3,BreachAt=5,WreckAt=8,GlassAt=10,CollapseAt=12.5f;
    auto Happen=[&Record](float Time,army::DestructionKind Kind,uint64_t Id,army::Vec3 Center,army::Vec3 HalfSize,const FVector& Velocity,float Mass,int Of){
        army::DestructionEvent Change;Change.time=Time;Change.kind=Kind;Change.obstacle=Id;Change.center=Center;Change.half=HalfSize;
        Change.velocity=SimVector(Velocity);Change.material=Of;Change.mass=Mass;Record.destruction.push_back(Change);};
    // Rubble is low cover at the foot of what fell: an added obstacle (its id comes from InvalidateGeometry) and a Rubble event.
    std::vector<army::DestructionEvent> RubbleEvents;
    auto Rubble=[&Geometry,&RubbleEvents,Material](float Time,float X,float Y,float Z,float HalfX,float HalfY,float Height){
        army::Obstacle Heap;Heap.center={X,Y,Z};Heap.half={HalfX,HalfY,0};Heap.building=false;Heap.halfCover=true;Heap.height=Height;Heap.blocksMovement=true;
        Geometry.obstacles.push_back(Heap);
        army::DestructionEvent Settle;Settle.time=Time;Settle.kind=army::DestructionKind::Rubble;Settle.center={X,Y,Z+Height*.5f};
        Settle.half={HalfX,HalfY,Height*.5f};Settle.material=Material;Settle.mass=HalfX*HalfY*4*Height*1500;RubbleEvents.push_back(Settle);};
    auto Commit=[&](float Time,const char* Reason){
        army::InvalidateGeometry(Geometry);
        Record.geometryVersions.push_back(army::GeometryVersion{Time,Geometry,Reason});
        for(const auto& Settle:RubbleEvents)Record.destruction.push_back(Settle);
        RubbleEvents.clear();};
    Record.geometryVersions.push_back(army::GeometryVersion{0.f,Record.map,"initial"});
    FString Done;
    if(Crack){
        const float Height=army::ObstacleHeight(*Crack);
        Happen(CrackAt,army::DestructionKind::Cracked,Crack->id,{Crack->center.x,Crack->center.y,Crack->center.z+Height*.5f},{Crack->half.x,Crack->half.y,Height*.5f},Outward(*Crack)*.8,8,Material);
        Out.Crack=CrackAt;Done+=FString::Printf(TEXT(" crack %llu at %.1fs;"),(unsigned long long)Crack->id,CrackAt);
    }
    if(Breach){
        // A hole through the middle of the wall: the wall becomes the pieces left around it.
        const army::Obstacle Wall=*Breach;const bool AlongX=Wall.half.x>Wall.half.y;
        const float Length=Long(Wall),Height=army::ObstacleHeight(Wall),Foot=Wall.center.z;
        const float Hole=FMath::Min(.7f,Length-.3f),Low=Foot+.35f,High=Foot+FMath::Min(1.95f,Height-.45f);
        auto Piece=[&Wall,AlongX](float From,float To,float Bottom,float Top){
            army::Obstacle Part=Wall;Part.id=0;const float Mid=(From+To)*.5f,Span=(To-From)*.5f;
            if(AlongX){Part.center.x=Wall.center.x+Mid;Part.half.x=Span;}else{Part.center.y=Wall.center.y+Mid;Part.half.y=Span;}
            Part.center.z=Bottom;Part.height=Top-Bottom;return Part;};
        army::ReplaceObstacle(Geometry,Wall.id,Piece(-Length,-Hole,Foot,Foot+Height));
        Geometry.obstacles.push_back(Piece(Hole,Length,Foot,Foot+Height));
        Geometry.obstacles.push_back(Piece(-Hole,Hole,Foot,Low));
        Geometry.obstacles.push_back(Piece(-Hole,Hole,High,Foot+Height));
        const FVector Into=-Outward(Wall);const float Offset=Thin(Wall)+.55f;
        Happen(BreachAt,army::DestructionKind::Breached,Wall.id,{Wall.center.x,Wall.center.y,(Low+High)*.5f},{AlongX?Hole:Wall.half.x,AlongX?Wall.half.y:Hole,(High-Low)*.5f},
            Into*12+FVector(0,0,1.5),Hole*2*(High-Low)*Thin(Wall)*2*Density,Material);
        Rubble(BreachAt,float(Wall.center.x+Into.X*Offset),float(Wall.center.y+Into.Y*Offset),Foot,AlongX?Hole+.25f:.5f,AlongX?.5f:Hole+.25f,.35f);
        Commit(BreachAt,"test breach");
        Out.Breach=BreachAt;Out.BreachOut=Outward(Wall);Done+=FString::Printf(TEXT(" breach %llu at %.1fs;"),(unsigned long long)Wall.id,BreachAt);
    }
    if(Wreck){
        // The whole wall comes down outward: gone, with its rubble outside.
        const army::Obstacle Wall=*Wreck;const bool AlongX=Wall.half.x>Wall.half.y;
        const float Height=army::ObstacleHeight(Wall),Foot=Wall.center.z;const FVector Away=Outward(Wall);const float Offset=Thin(Wall)+.8f;
        army::RemoveObstacle(Geometry,Wall.id);
        Happen(WreckAt,army::DestructionKind::Destroyed,Wall.id,{Wall.center.x,Wall.center.y,Foot+Height*.5f},{Wall.half.x,Wall.half.y,Height*.5f},
            Away*9+FVector(0,0,2),Long(Wall)*2*Height*Thin(Wall)*2*Density,Material);
        Rubble(WreckAt,float(Wall.center.x+Away.X*Offset),float(Wall.center.y+Away.Y*Offset),Foot,AlongX?Long(Wall)+.3f:.75f,AlongX?.75f:Long(Wall)+.3f,.55f);
        Commit(WreckAt,"test wall destroyed");
        Out.Destroyed=WreckAt;Out.DestroyedOut=Away;Done+=FString::Printf(TEXT(" wall %llu destroyed at %.1fs;"),(unsigned long long)Wall.id,WreckAt);
    }
    for(size_t I=0;I<Panes.size();++I){
        // Glass is not geometry: the pane shatters outward and throws glass, nothing else changes.
        const FPane& Pane=Panes[I];const float Area=2*FMath::Max(Pane.Half.x,Pane.Half.y)*2*Pane.Half.z;
        // The pane is in Record::glassPanes as the simulator lists them, so it is drawn whole until it shatters.
        const uint64_t Id=0x7E57000000000000ull+uint64_t(I);Record.glassPanes.push_back({Id,Pane.Center,Pane.Half});
        Happen(GlassAt+.12f*float(I),army::DestructionKind::GlassShattered,Id,Pane.Center,Pane.Half,Pane.Out*14+FVector(0,0,1),Area*.004f*2500,3);
        if(I==0){Out.Glass=GlassAt;Out.GlassOut=Pane.Out;}
    }
    if(!Panes.empty())Done+=FString::Printf(TEXT(" %d panes at %.1fs;"),int(Panes.size()),GlassAt);
    if(!Upper.empty()){
        // The upper storey falls into the ground floor: every piece from the upper slab up goes, rubble fills the rooms.
        for(const uint64_t Id:Upper)army::RemoveObstacle(Geometry,Id);
        const float Lower=Base+3;
        Happen(CollapseAt,army::DestructionKind::Collapsed,Upper.front(),{House.center.x,House.center.y,(Lower+Roofline)*.5f},{House.half.x,House.half.y,(Roofline-Lower)*.5f},
            FVector(0,0,-3),30000,Material);
        const float Hx=House.half.x*.9f,Hy=House.half.y*.9f;
        Rubble(CollapseAt,House.center.x-Hx*.4f,House.center.y-Hy*.2f,Base,Hx*.45f,Hy*.55f,.93f);
        Rubble(CollapseAt,House.center.x+Hx*.45f,House.center.y+Hy*.3f,Base,Hx*.45f,Hy*.5f,1.13f);
        Rubble(CollapseAt,House.center.x+Hx*.05f,House.center.y-Hy*.65f,Base,Hx*.5f,Hy*.3f,.67f);
        Commit(CollapseAt,"test collapse");
        Out.Collapse=CollapseAt;Done+=FString::Printf(TEXT(" %d upper pieces collapse at %.1fs;"),int(Upper.size()),CollapseAt);
    }
    std::stable_sort(Record.destruction.begin(),Record.destruction.end(),[](const army::DestructionEvent& A,const army::DestructionEvent& B){return A.time<B.time;});
    Record.map=Geometry;   // Record::map is the final geometry
    Out.Focus=FVector(House.center.x*100,House.center.y*100,Base*100);
    Out.Ready=Record.geometryVersions.size()>1||!Record.destruction.empty();
    Out.Summary=FString::Printf(TEXT("building at (%.1f, %.1f), material %d:%s %d events, %d geometry versions"),House.center.x,House.center.y,Material,*Done,
        int(Record.destruction.size()),int(Record.geometryVersions.size()));
    return Out.Ready;
}
