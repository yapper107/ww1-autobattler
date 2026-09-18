#pragma once
#include "BattleSim.h"
namespace army {
// All visual observation producers, including negative evidence, use this gate.
bool InVisualField(const Soldier& observer,Vec3 point,float range);
void UpdateAttention(Soldier& observer,float time,float dt);
ObservationCoverage SenseCoverage(const Soldier& observer,const Map& map,float time);
void ReceiveCoverage(Soldier& observer,const ObservationCoverage& evidence,float time);
int CoverageSamples(unsigned samples);
}
