#include "BattleSim.h"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <stdexcept>

namespace army {
namespace {
// Scenario-only stream: never consumes battle Random or depends on Config::seed.
struct FamilyRandom {
    uint64_t state;
    uint64_t Next(){uint64_t z=(state+=0x9e3779b97f4a7c15ull);z=(z^(z>>30))*0xbf58476d1ce4e5b9ull;z=(z^(z>>27))*0x94d049bb133111ebull;return z^(z>>31);}
    int Integer(int lo,int hi){return lo+int(Next()%uint64_t(hi-lo+1));}
    float Real(float lo,float hi){return lo+(hi-lo)*float(Next()>>40)/16777216.f;}
};
int Count(uint8_t mask){int n=0;for(int i=0;i<SquadSize;++i)n+=(mask>>i)&1;return n;}
}
const char* ScenarioFamilyName(ScenarioFamily family){return family==ScenarioFamily::None?"none":family==ScenarioFamily::F1?"F1":family==ScenarioFamily::F2?"F2":family==ScenarioFamily::F3?"F3":"invalid";}
GeneratedScenario GenerateScenario(ScenarioFamily family,uint32_t genSeed){
    if(family!=ScenarioFamily::F1)throw std::invalid_argument("Only generated family F1 is implemented");
    FamilyRandom rng{(uint64_t(family)<<32)^genSeed};GeneratedScenario g;g.family=family;g.genSeed=genSeed;
    g.map.halfWidth=rng.Real(90,140);g.map.halfHeight=rng.Real(85,120);
    const float distance=rng.Real(60,140);g.deployment={Vec3{-distance/2,0},Vec3{distance/2,0}};
    g.objective=g.deployment[1];g.objectiveRadius=10;
    g.corridors=rng.Integer(1,3);g.corridorWidth=rng.Real(6,20);
    // Staggered obstacle bands screen the entire initial deployment. Each mass
    // is <=24 m; openings are 6..20 m and dogleg connectors remain >=6 m.
    const float total=(g.corridors+1)*22.f+g.corridors*g.corridorWidth;
    const float blend=16.f/distance;
    for(int j=0;j<=g.corridors;++j){
        float y=-total/2+11+j*(22+g.corridorWidth);
        g.map.obstacles.push_back({{0,y},{.5f,11},false,false,4});
        if(j<g.corridors){
            float gap=y+11+g.corridorWidth/2;
            float half=g.corridorWidth/2*(1-blend)+7.5f*blend+2;
            g.map.obstacles.push_back({{8,gap*(1-blend)},{.5f,half},false,false,4});
        }
    }
    g.screenPieces=int(g.map.obstacles.size());
    g.lowCover=rng.Integer(3,8);g.tallCover=rng.Integer(0,2);
    for(float x:{-3.7f,1.3f})g.map.obstacles.push_back({g.objective+Vec3{x,0},{.6f,8},false,true,1.3f});
    std::array<Vec3,7> cover{{{-12,-18},{-12,18},{8,-18},{8,18},{15,-6},{15,0},{15,6}}};
    for(int j=6;j>0;--j)std::swap(cover[j],cover[rng.Integer(0,j)]);
    for(int j=0;j<g.lowCover-2;++j)g.map.obstacles.push_back({g.objective+cover[j],{.6f,1.5f},false,true,1.3f});
    for(int j=0;j<g.tallCover;++j)g.map.obstacles.push_back({g.objective+Vec3{8,j?30.f:-30.f},{3,3},false,false,4});
    int attackers=rng.Integer(2,3),defenders=4+2*rng.Integer(0,4);
    g.machineGun={rng.Integer(0,1)!=0,rng.Integer(0,1)!=0};
    if(g.machineGun[1]&&defenders==4)defenders=6; // Preserve staff and a gunner, with parity-paired rifle removals.
    for(int squad=0;squad<attackers;++squad)g.squads[squad]=255;
    g.squads[4]=defenders>=8?255:defenders==6?243:99; // 0/1 and platoon staff 5/6 always present.
    if(defenders>8)g.squads[5]=defenders==10?3:15;
    int defenderIndex=0;
    for(int id=0;id<UnitCount;++id){
        const int squad=id/SquadSize,slot=id%SquadSize,team=id/TeamSize;
        g.positions[id]=g.deployment[team];
        if(!(g.squads[squad]&(1<<slot)))continue;
        if(!team)g.positions[id]=g.deployment[0]+Vec3{-3.f*(slot/2),18.f*(squad-(attackers-1)/2.f)+(slot%2?3.f:-3.f)};
        else {int row=defenderIndex/2;g.positions[id]=g.objective+Vec3{defenderIndex%2?2.5f:-2.5f,3.f*(row-(defenders/2-1)/2.f)};++defenderIndex;}
    }
    g.description="F1 defended position; screened approaches; asymmetric masked armies; no initial contact";
    PrepareGeometry(g.map); // Exactly once, after all authored generator geometry.
    std::string error;if(!ValidateScenario(g,error))throw std::runtime_error("Invalid generated F1: "+error);
    return g;
}
bool ValidateScenario(const GeneratedScenario& g,std::string& error){
    auto fail=[&](const char* why){error=why;return false;};
    if(g.family!=ScenarioFamily::F1)return fail("unsupported family");
    if(!std::isfinite(g.map.halfWidth)||!std::isfinite(g.map.halfHeight))return fail("nonfinite map bounds");
    if(!g.map.prepared||g.map.halfWidth<90||g.map.halfWidth>140||g.map.halfHeight<85||g.map.halfHeight>120)return fail("map bounds/preparation");
    const float distance=Distance(g.deployment[0],g.objective);
    if(!std::isfinite(distance)||!std::isfinite(g.corridorWidth))return fail("nonfinite family parameters");
    if(distance<60||distance>140||g.objectiveRadius!=10||g.corridors<1||g.corridors>3||g.corridorWidth<6||g.corridorWidth>20)return fail("family ranges");
    if(g.lowCover<3||g.lowCover>8||g.tallCover<0||g.tallCover>2)return fail("cover ranges");
    for(size_t i=0;i<g.map.obstacles.size();++i){const auto& a=g.map.obstacles[i];
        if(!std::isfinite(a.center.x)||!std::isfinite(a.center.y)||!std::isfinite(a.half.x)||!std::isfinite(a.half.y)||!std::isfinite(a.height))return fail("nonfinite obstacle");
        if(a.half.x<.5f||a.half.y<.5f||a.half.x>12||a.half.y>12||std::abs(a.center.x)+a.half.x+3>g.map.halfWidth||std::abs(a.center.y)+a.half.y+3>g.map.halfHeight)return fail("obstacle size/bounds");
        for(size_t j=0;j<i;++j){const auto& b=g.map.obstacles[j];float dx=std::max(0.f,std::abs(a.center.x-b.center.x)-a.half.x-b.half.x),dy=std::max(0.f,std::abs(a.center.y-b.center.y)-a.half.y-b.half.y);
            if(std::hypot(dx,dy)<(int(i)<g.screenPieces&&int(j)<g.screenPieces?6.f:3.f))return fail("screen corridor/obstacle corner clearance");}
    }
    for(auto p:g.deployment)if(!Walkable(g.map,p)||FindPath(g.map,p,g.objective).empty())return fail("disconnected deployment area/objective");
    int counts[2]={},squads[2]={};
    for(int q=0;q<SquadCount;++q)if(g.squads[q]){
        if((g.squads[q]&3)!=3)return fail("missing squad leaders");
        if(q%4==0&&(g.squads[q]&96)!=96)return fail("missing platoon staff");
        ++squads[q/4];counts[q/4]+=Count(g.squads[q]);
    }
    if(squads[0]<2||squads[0]>3||squads[1]<1||squads[1]>2||counts[1]<4||counts[1]>12)return fail("army sizes");
    for(int team=0;team<2;++team)if(g.machineGun[team]&&!(g.squads[team*4]&128))return fail("missing gunner");
    for(int id=0;id<UnitCount;++id)if(g.squads[id/8]&(1<<(id%8))){
        const auto p=g.positions[id];if(!std::isfinite(p.x)||!std::isfinite(p.y)||!std::isfinite(p.z))return fail("nonfinite deployment");
        if(!Walkable(g.map,p))return fail("unwalkable deployment");
        if(id>=TeamSize&&(Distance(p,g.objective)>10||!ProtectedAt(g.map,p,g.deployment[0],Stance::Crouched)))return fail("unprotected defender/objective radius");
        if(FindPath(g.map,p,g.objective).empty())return fail("disconnected deployment/objective");
        for(int other=0;other<id;++other)if(g.squads[other/8]&(1<<(other%8))){
            if(Distance(p,g.positions[other])<2)return fail("overlapping deployment");
            if(id/TeamSize!=other/TeamSize&&ClearLine3D(g.map,p+Vec3{0,0,1.5f},g.positions[other]+Vec3{0,0,1.5f}))return fail("initial opposing line of sight");
        }
    }
    error.clear();return true;
}
void ApplyScenario(const GeneratedScenario& g,const Config& config,Map& map,Frame& frame){
    map=g.map;
    for(auto& s:frame.soldiers){const int slot=s.id%8;
        s.position=g.positions[s.id];s.goal=s.position;
        if(!(g.squads[s.squad]&(1<<slot))){s.health=0;s.action=Action::Killed;}
        s.machineGun=s.squad%4==0&&slot==7&&g.machineGun[s.team]&&(s.team==1||config.supportWeapon);
        if(s.role==Role::MachineGunner)s.role=Role::Rifleman;
        if(s.machineGun)s.role=Role::MachineGunner;
        if(s.team)s.stance=Stance::Crouched;
    }
    for(auto& command:frame.command)command.mission=g.objective; // Pre-battle own objective, never an enemy track.
}
uint64_t ScenarioDigest(const GeneratedScenario& g){
    uint64_t h=1469598103934665603ull;auto add=[&](uint32_t v){for(int b=0;b<4;++b)h=(h^((v>>(8*b))&255))*1099511628211ull;};
    auto f=[&](float v){uint32_t bits;std::memcpy(&bits,&v,4);add(bits);};auto v=[&](Vec3 p){f(p.x);f(p.y);f(p.z);};
    add(uint32_t(g.family));add(g.genSeed);f(g.map.halfWidth);f(g.map.halfHeight);v(g.objective);f(g.objectiveRadius);
    for(auto p:g.deployment)v(p);
    for(auto mask:g.squads)add(mask);
    for(bool gun:g.machineGun)add(gun);
    for(auto p:g.positions)v(p);
    add(uint32_t(g.map.obstacles.size()));for(const auto& o:g.map.obstacles){v(o.center);v(o.half);f(o.height);add(o.building);add(o.halfCover);add(o.blocksMovement);}
    return h;
}
}
