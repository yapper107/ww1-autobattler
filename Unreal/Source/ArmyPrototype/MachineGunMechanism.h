#pragma once
#include "CoreMinimal.h"

// Authored normalized phases, matching author_mg_mechanism.py. These are pure
// event-time samples so the articulated equipment also survives backward seeks.
namespace armymg {
inline float Open(float U) {return FMath::SmoothStep(.085f,.16f,U)*(1-FMath::SmoothStep(.77f,.835f,U));}
inline float Charge(float U) {return FMath::SmoothStep(.868f,.903f,U)*(1-FMath::SmoothStep(.905f,.94f,U));}
inline float BoxGrasp(float U) {return FMath::SmoothStep(.20f,.225f,U)*(1-FMath::SmoothStep(.645f,.67f,U));}
inline float PouchContact(float U) {return FMath::SmoothStep(.28f,.32f,U)*(1-FMath::SmoothStep(.485f,.595f,U));}
inline bool BoxVisible(float U) {return !(U>.375f&&U<.415f);}
inline bool BeltVisible(float U) {return U<.18f||U>=.415f;}
inline FTransform Cover(float U) {return FTransform(FQuat(FVector::ForwardVector,FMath::DegreesToRadians(-100*Open(U))),FVector(0,-7.5,13.45));}
inline FVector ChargingHandle(float U) {return FVector(-5.5,-22.5-8.5*Charge(U),12.4);}
}
