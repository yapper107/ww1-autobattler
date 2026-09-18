#include "LeaderSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
#include <stdexcept>
namespace army {
LeaderDials LeaderSettings(const OfficerProfile& p){
    LeaderDials d;
    const float net=.5f*(p.communication+p.adaptability),bad=1-net;
    d.extraDelay=6*bad*bad;d.lossProbability=.35f*bad*bad;
    d.pictureRadius=18*(1-p.judgment)*(1-p.judgment);
    d.enemyScale=std::clamp(1+(1-p.judgment)*(1-2*p.risk),.4f,1.6f);
    d.retreatRatio=.5f+.35f*(.5f-p.risk)*2;
    d.assessmentSeconds=1+20*(1-p.adaptability)*(1-p.adaptability);
    d.initiative=net>=.5f;
    return d;
}
namespace {
uint32_t Mix(uint32_t x){x^=x>>16;x*=0x7feb352du;x^=x>>15;x*=0x846ca68bu;return x^(x>>16);}
void NetTrace(const PlatoonMessage& m,const Soldier& commander,Diagnostics* d,float time,const char* kind,const std::string& reason){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.kind=kind;e.soldier=m.recipient;e.squad=m.recipient/8;e.issuer=m.sender;
    e.order=m.radio?m.broadcast.serial:m.order?m.directive.serial:0;e.goal=m.radio?m.broadcast.objective:m.directive.position;
    e.reason=reason+"; lieutenant="+std::to_string(commander.id);d->entries.push_back(e);
}
}
bool ProfileMessage(PlatoonMessage& m,const Soldier& commander,const Config& config,float time,Diagnostics* diagnostics){
    const auto d=LeaderSettings(commander.officer);
    const uint32_t key=Mix(config.seed^uint32_t(m.sender+1)*7919u^uint32_t(m.recipient+1)*104729u^
        uint32_t(std::lround(m.arrives*1000))^uint32_t(m.radio?m.broadcast.serial:m.order?m.directive.serial:0)^uint32_t(m.lane)*17u);
    const bool drop=float(key%1000000)/1000000.f<d.lossProbability;
    const std::string why="leader net communication="+std::to_string(commander.officer.communication)+
        " adaptability="+std::to_string(commander.officer.adaptability)+" extra delay="+std::to_string(d.extraDelay)+" loss probability="+std::to_string(d.lossProbability);
    if(drop){NetTrace(m,commander,diagnostics,time,m.radio?"radio_dropped":"message_dropped",why);return false;}
    m.arrives+=d.extraDelay;
    NetTrace(m,commander,diagnostics,time,"leader_net",why);
    // Only reports entering the platoon commander's picture are degraded. Identity,
    // source and original observation time remain intact; no true position lookup.
    if(!m.radio&&!m.order&&!m.lane&&m.recipient==commander.id){
        auto blur=[&](Contact& contact,int track){
            if(!contact.known)return;
            const uint32_t h=Mix(uint32_t(track+1)*2654435761u^uint32_t(std::max(0.f,contact.observedAt)/10));
            const float angle=float(h%62832)*.0001f;
            contact.position=contact.position+Vec3{std::cos(angle)*d.pictureRadius,std::sin(angle)*d.pictureRadius};
        };
        for(auto& observation:m.situation.observations)blur(observation.contact,observation.track);
        if(m.situation.enemy>=0)blur(m.situation.contact,m.situation.enemy);
        NetTrace(m,commander,diagnostics,time,"leader_picture","reported positions blurred by "+std::to_string(d.pictureRadius)+" m; identities and observation times retained");
    }
    return true;
}
GeneratedScenario GenerateLeaderScenario(const Config& config){
    auto g=GenerateScenario(config.family,config.genSeed);
    if(!config.equalTroops)return g;
    // Match the existing smaller defender roster, preserving every map/deployment
    // point. No new positions or battle-seed-dependent geometry are introduced.
    for(int squad=0;squad<SquadsPerTeam;++squad)g.squads[squad]=g.squads[squad+SquadsPerTeam];
    g.machineGun[0]=g.machineGun[1]=g.machineGun[1]&&config.supportWeapon;
    for(int id=0;id<UnitCount;++id)if(g.squads[id/8]&(1<<(id%8)))
        if(!Walkable(g.map,g.positions[id])||FindPath(g.map,g.positions[id],g.objective).empty())throw std::runtime_error("Equal-troop comparison has invalid deployment");
    g.description="F1 equal-troop leader comparison: original map/deployments, matched defender roster and weapons";
    return g;
}
}
