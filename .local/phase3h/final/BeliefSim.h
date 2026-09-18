#pragma once
#include "BattleSim.h"
namespace army {
constexpr float BeliefCellSize=16;
// Derived from personal memory and delivered observations only. Missing cells mean unknown.
std::vector<RegionEstimate> BuildMentalMap(const Soldier& observer,float time);
float BelievedStrength(const Soldier& observer,Vec3 region,float radius,float time);
void ReceiveObservations(Soldier& recipient,const std::vector<ReportedContact>& observations,int relay,float time);
TaskStatus ReportedGoalStatus(const Soldier& leader,float time);
void TraceBeliefs(Diagnostics* diagnostics,const Soldier& observer,float time);
}
