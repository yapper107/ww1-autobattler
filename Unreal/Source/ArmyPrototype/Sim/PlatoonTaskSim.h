#pragma once
#include "PlatoonSim.h"
namespace army {
// Policy input is one commander's memory and this commander's own intentions.
std::vector<PlannedPlatoonOrder> PlanPlatoonTasks(const Soldier&,const Map&,const Config&,PlatoonTaskState&,Diagnostics*,float);
void MakePlatoonEncounter(const Config&,int,Map&,Frame&);
void StepPlatoonEncounter(int,Frame&);
}
