#pragma once
#include "CoreMinimal.h"
#include "Sim/BattleSim.h"
#include <vector>

// Plan 033, building destruction (Jordan, 25 Sep 2026: "simple debris and dust for now, we prototype"). The simulator
// decides what breaks (Record::destruction and Record::geometryVersions); the game only shows it. Plain C++ (no
// reflection): the scene's obstacle bookkeeping, the debris and dust models and the -ArmyTestDestruction fabricator.
namespace armydestruction {
// DestructionEvent::material: 0 stone, 1 brick, 2 timber, 3 glass. A dust puff may also be a blast's (plan 032): 4 its
// flash, 5 its smoke, 6 smoke with the earth a ground burst throws up.
FLinearColor DebrisColor(int Material);
FLinearColor DustColor(int Material);
FLinearColor RubbleColor(int Material);
// A cracked wall keeps a darker shade from the moment it cracks.
FLinearColor CrackedColor(const FLinearColor& Color);

// One drawn obstacle: its instance in each colour batch it has used (a replaced piece may change colour, so seeking
// back and forth reuses them), the one showing now, and the box it shows.
struct FObstacleSlot { int32 Batch=INDEX_NONE,Instance=INDEX_NONE; };
struct FObstacleVisual {
    TArray<FObstacleSlot,TInlineAllocator<2>> Slots;
    int32 Active=INDEX_NONE;
    uint32 Pass=0;
    army::Obstacle Shown;
};
bool SameBox(const army::Obstacle& A,const army::Obstacle& B);
// A generated map's decoration (road, yard, floor, roof, damaged floor): never an obstacle, but a roof or an upper
// floor goes with the storey that collapses under it.
struct FDecorationVisual {
    int32 Batch=INDEX_NONE,Instance=INDEX_NONE,Kind=0;
    FTransform Transform;
    army::Vec3 Center{};
    float HiddenFrom=TNumericLimits<float>::Max();
    bool Hidden=false;
};
struct FCollapse { float Time=0; army::Vec3 Center{},Half{}; };
float DecorationHiddenFrom(const std::vector<FCollapse>& Collapses,const FDecorationVisual& Decoration);

// The debris flight of one chunk, precomputed once: ballistic legs (bouncing off tops, glancing off walls), a slide,
// then rest. Metres and seconds from the event.
struct FDebrisLeg { float T0=0; FVector P=FVector::ZeroVector,V=FVector::ZeroVector; };
struct FDebrisChunk {
    float Start=0,Life=0,Stop=0;               // event time; seconds shown; seconds after which it no longer moves
    int32 Material=0;
    FVector Size=FVector::OneVector;           // metres (the engine cube is one metre at scale one)
    FQuat Tilt=FQuat::Identity;
    FVector Axis=FVector::UpVector;
    float Spin=0;                              // radians per second while it moves
    TArray<FDebrisLeg,TInlineAllocator<6>> Legs;
    float SlideStart=0,Friction=0;
    FVector SlideFrom=FVector::ZeroVector,SlideVelocity=FVector::ZeroVector,Rest=FVector::ZeroVector;
    FVector PositionAt(float Age) const;       // metres
    FTransform TransformAt(float Age) const;   // centimetres, shrinking into the ground over its last second
};
// A dust puff: a small cloud of three translucent lobes that swells, drifts, rises and fades. The engine material is
// unlit, so the upper lobe is drawn lighter and the lower one darker, as the sun would light it.
struct FDustPuff {
    static constexpr int32 LobeCount=3;
    float Start=0,Life=0;
    int32 Material=0;
    FVector From=FVector::ZeroVector,Drift=FVector::ZeroVector;   // metres, m/s
    float Grow=0,Size=0,Rise=0,Opacity=0;                          // start and final radius (m), rise m/s, peak alpha
    FVector Lobes[LobeCount]={FVector::ZeroVector,FVector::ZeroVector,FVector::ZeroVector};   // offsets in radii
    float LobeSize[LobeCount]={1,1,1},LobeTone[LobeCount]={1,1,1};
    void Sample(float Age,FVector& Centimetres,float& Radius,float& Alpha) const;
};

// One geometry version's obstacles on a coarse grid, for debris to land on and strike.
class FDebrisWorld {
public:
    explicit FDebrisWorld(const army::Map& InGeometry);
    // First contact of the segment A-B (metres) with the ground or an obstacle grown by Radius; Normal is the face
    // struck. A box that already contains A is passed through (a chunk leaving the wall or rubble it started in).
    bool Trace(const FVector& A,const FVector& B,float Radius,float& Fraction,FVector& Normal) const;
    const army::Map& Geometry;
private:
    int32 CellX(double X) const;
    int32 CellY(double Y) const;
    double MinX=0,MinY=0;
    int32 Columns=1,Rows=1;
    std::vector<std::vector<int32>> Cells;
};
// Every chunk and puff of one event, from a seed of the event itself (stable replays).
void SpawnDebris(const army::DestructionEvent& Event,const FDebrisWorld& Scene,std::vector<FDebrisChunk>& Chunks,std::vector<FDustPuff>& Puffs);

// A window pane as drawn: the glass of Record::glassPanes (world centimetres), whole until its GlassShattered event (whose
// obstacle field is the pane's id). Upper: above the ground storey (it goes with the F cutaway).
struct FPaneVisual { FVector Center=FVector::ZeroVector,Scale=FVector::OneVector; float BrokenAt=TNumericLimits<float>::Max(); bool Upper=false; };
void PaneVisuals(const army::Record& Record,std::vector<FPaneVisual>& Panes);

// Plan 032: one grenade as the frames recorded it (Frame::grenades, every 0.2 s). Flying between two snapshots it follows
// its arc from the first, bent to meet the second (so a bounce between them stays smooth); resting it lies still; in a
// hand it is not drawn (the snapshot keeps no hand). It is gone when it goes off.
struct FGrenadeSample { float Time=0; army::GrenadeStage Stage=army::GrenadeStage::Held; FVector P=FVector::ZeroVector,V=FVector::ZeroVector; };
struct FGrenadeTrack {
    int32 Id=0;
    army::GrenadeType Type=army::GrenadeType::Fragmentation;
    float Gone=TNumericLimits<float>::Max();
    std::vector<FGrenadeSample> Samples;   // metres, m/s
    bool PositionAt(float Time,FVector& Where) const;   // metres; false: not in the world then, or in a hand
};
void GrenadeTracks(const army::Record& Record,std::vector<FGrenadeTrack>& Tracks);
FLinearColor GrenadeColor(army::GrenadeType Type);
// Plan 032: an explosion's flash and smoke, from a seed of the explosion itself.
void BlastPuffs(const army::GrenadeExplosion& Explosion,std::vector<FDustPuff>& Puffs);

// -ArmyTestDestruction (a debug switch that stays): on a record without geometry changes, one two-storey building
// gets a crack, a breach, a wall destroyed with rubble, three shattered panes and an upper-storey collapse, as
// DestructionEvents and geometry versions through the mutation interface, so the look can be reviewed before the
// simulator produces them. The soldiers' battle never saw these changes.
struct FTestDestruction {
    bool Ready=false;
    FVector Focus=FVector::ZeroVector;   // the building, world centimetres
    float Crack=-1,Breach=-1,Destroyed=-1,Glass=-1,Collapse=-1;
    FVector BreachOut=FVector(1,0,0),DestroyedOut=FVector(1,0,0),GlassOut=FVector(1,0,0);   // outward wall normals
    FString Summary;
};
bool FabricateTest(army::Record& Record,int Material,FTestDestruction& Out);
}
