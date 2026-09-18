#pragma once
#include "CommandSim.h"
#include "PlatoonSim.h"
namespace army {
enum class OrganisationKind { GunCentric, Section, Teams, Rush };
enum class AttritionRule { GunNest, HaltAndMerge, SingleElement };
struct ElementTemplate {const char* name;Role leader;int minStrength;};
struct SquadOrganisation {
    const char* name;std::array<ElementTemplate,2> elements;
    int collapseBelow;AttritionRule collapse;bool gunNeverSilent;
    float assistantDelay,riflemanDelay;bool requiresPlatoonOrder;
};
const SquadOrganisation& Organisation(OrganisationKind);
std::array<int,SquadSize> AssignElements(const std::vector<Soldier>&,OrganisationKind);
void MakeDrillEncounter(const Config&,int,Map&,Frame&);
void StepDrillEncounter(int,Frame&);
#ifdef ARMY_TEST_CONTROLS
bool TestRadioAction(const Soldier&,const Soldier&,const std::vector<Soldier>&,const Map&,const Config&,DrillPlan&,Diagnostics*,float);
#endif
bool BeginContactAction(const Soldier&,const Soldier&,const std::vector<Soldier>&,const Map&,const Config&,DrillPlan&,Diagnostics*,float);
bool UpdateSquadAction(const Soldier&,const Soldier&,const std::vector<Soldier>&,const Map&,const Config&,DrillPlan&,Diagnostics*,float,bool,bool,bool);

void UpdateSquadBroadcasts(const Soldier&,const std::vector<Soldier>&,DrillPlan&,Diagnostics*,float,bool);
void UpdateDrillPlan(const Soldier&,const std::vector<Soldier>&,const Map&,const Config&,const std::vector<Vec3>&,const std::vector<int>&,SquadCommand&,Diagnostics*,float);
std::vector<PlannedOrder> DrillOrders(const Soldier&,const std::vector<Soldier>&,const SquadCommand&,float);

inline int CommandSupport(const SquadCommand& c,bool typed){return c.battleDrill.initialized?c.battleDrill.support:typed?c.accepted.support:c.support;}
}
