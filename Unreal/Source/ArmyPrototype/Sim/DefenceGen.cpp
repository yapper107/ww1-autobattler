#include "BattleSim.h"
#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace army {
namespace {
// Placement-only stream: hashed like the stat rolls, so it never consumes the
// battle Random and never depends on the order in which it is called.
uint64_t Mix(uint64_t x){x+=0x9e3779b97f4a7c15ull;x=(x^(x>>30))*0xbf58476d1ce4e5b9ull;x=(x^(x>>27))*0x94d049bb133111ebull;return x^(x>>31);}
uint64_t DefenceHash(uint32_t seed,DefenceLayout layout,int index,int attempt){
    return Mix(Mix(Mix((uint64_t(seed)<<32)^uint64_t(uint32_t(int(layout))))+uint64_t(uint32_t(index))*0x9e3779b97f4a7c15ull)+uint64_t(uint32_t(attempt))*0xbf58476d1ce4e5b9ull);
}
float Unit(uint64_t h){return float(h>>40)/16777216.f;}
float Between(uint64_t h,float lo,float hi){return lo+(hi-lo)*Unit(h);}
Vec3 Flat(Vec3 a){float n=std::sqrt(a.x*a.x+a.y*a.y);return n>1e-4f?Vec3{a.x/n,a.y/n,0}:Vec3{1,0,0};}
float Plan2D(Vec3 a,Vec3 b){return std::hypot(a.x-b.x,a.y-b.y);}
struct Footprint { Vec3 center{},half{}; };
// A building is a floor rectangle on an imported layout, or an authored Building.
std::vector<Footprint> Footprints(const Config& config,const Map& map){
    std::vector<Footprint> out;
    if(config.battlefield)for(const auto& d:config.battlefield->decorations)
        if(d.kind==2||d.kind==4)out.push_back({{d.center.x,d.center.y,0},{d.half.x,d.half.y,0}}); // intact or ruined floor
    // Authored houses only: an imported layout's floors come from its decorations (ARMYMAP 2 `B` footprints are
    // not added here until plan 029 decides their use, so they are never counted twice).
    for(const auto& b:map.buildings)if(b.authoredStairs)out.push_back({{b.center.x,b.center.y,0},{b.half.x,b.half.y,0}});
    return out;
}
bool Inside(const Footprint& f,Vec3 p,float pad){return std::abs(p.x-f.center.x)<f.half.x+pad&&std::abs(p.y-f.center.y)<f.half.y+pad;}
struct Candidate { CoverPosition cover; bool sheltered=false; };
// Usable positions are the ordinary cover catalogue: a walkable shelter with a
// walkable, reachable firing edge. sheltered records protection from the
// attacker's approach; unprotected positions are only used as a disclosed relaxation.
std::vector<Candidate> Usable(const Map& map,Vec3 objective,Vec3 threat,float radius,bool anyFloor){
    std::vector<Candidate> out;
    for(const auto& c:CoverPositions(map)){
        if(!anyFloor&&std::abs(c.shelter.z-objective.z)>.5f)continue;
        const float distance=Plan2D(c.shelter,objective);
        if(distance>radius)continue;
        if(!Walkable(map,c.shelter)||!Walkable(map,c.peek))continue;
        if(Distance(c.shelter,c.peek)>.01f&&!ClearLine(map,c.shelter,c.peek,.48f))continue;
        Candidate item;item.cover=c;
        item.sheltered=ProtectedAt(map,c.shelter,threat,CoverStance(c));
        out.push_back(item);
    }
    std::stable_sort(out.begin(),out.end(),[](const Candidate& a,const Candidate& b){return a.cover.id<b.cover.id;});
    return out;
}
void Shuffle(std::vector<Candidate>& items,uint32_t seed,DefenceLayout layout,int salt){
    for(size_t i=items.size();i>1;--i){
        const size_t j=size_t(DefenceHash(seed,layout,salt+int(i),7)%uint64_t(i));
        std::swap(items[i-1],items[j]);
    }
}
bool Clear(const std::vector<DefencePosition>& taken,Vec3 shelter,float spacing){
    for(const auto& p:taken)if(Plan2D(p.cover.shelter,shelter)<spacing)return false;
    return true;
}
// A defender is meant to stay on a spot. Face-sampled cover on a long wall can put
// the firing edge seven metres from the shelter, which reads as walking about, so
// positions whose firing edge is a step away are seated first.
constexpr float CompactSlot=3.f;
// Prefers protected positions, then relaxes to any cover, in one hashed order;
// within each, compact positions before long ones.
void Seat(const std::vector<Candidate>& pool,std::vector<DefencePosition>& taken,size_t wanted,float spacing,int cluster){
    for(int pass=0;pass<4&&taken.size()<wanted;++pass)
        for(const auto& item:pool){
            if(taken.size()>=wanted)break;
            if((pass<2)!=item.sheltered)continue;
            if((pass%2==0)!=(Distance(item.cover.shelter,item.cover.peek)<=CompactSlot))continue;
            if(!Clear(taken,item.cover.shelter,spacing))continue;
            taken.push_back({item.cover,item.sheltered,cluster});
        }
}
// A walkable point near desired that the attacker can actually reach.
Vec3 Ground(const Map& map,Vec3 from,Vec3 desired){
    std::vector<Vec3> tries;
    if(Walkable(map,desired))tries.push_back(desired);
    for(float radius=3;radius<=27&&tries.size()<6;radius+=3)
        for(int i=0;i<12&&tries.size()<6;++i){
            const float angle=float(i)*.5235988f;
            Vec3 p{desired.x+std::cos(angle)*radius,desired.y+std::sin(angle)*radius,desired.z};
            if(std::abs(p.x)>map.halfWidth-2||std::abs(p.y)>map.halfHeight-2)continue;
            if(Walkable(map,p))tries.push_back(p);
        }
    for(Vec3 p:tries)if(!FindPath(map,from,p).empty())return p;
    return tries.empty()?from:tries.front();
}
}
const char* DefenceLayoutName(DefenceLayout l){return l==DefenceLayout::Building?"building":l==DefenceLayout::Spread?"spread":l==DefenceLayout::Clusters?"clusters":"none";}
DefencePlan PlanStaticDefence(const Config& config,const Map& map,const std::array<Vec3,UnitCount>& deployment){
    DefencePlan plan;plan.occupant.fill(-1);
    plan.layout=config.staticDefence.layout;plan.requested=config.staticDefence.defenders;
    plan.seed=config.staticDefence.seed?config.staticDefence.seed:config.seed;
    if(plan.layout==DefenceLayout::None)return plan;
    if(plan.requested<4||plan.requested>32)throw std::runtime_error("Static defence needs between 4 and 32 defenders");
    const size_t wanted=size_t(plan.requested);
    Vec3 attacker{};for(int id=0;id<TeamSize;++id)attacker=attacker+deployment[id];
    attacker=attacker*(1.f/float(TeamSize));attacker.z=deployment[0].z;
    const float locality=plan.layout==DefenceLayout::Clusters?60.f:plan.layout==DefenceLayout::Building?45.f:45.f;
    const auto& catalog=CoverPositions(map);

    // The defended locality sits on Ember's half, clear of the map edge, where
    // enough real cover exists and the attacker has a route to it.
    bool located=false;
    for(int attempt=0;attempt<96&&!located;++attempt){
        const uint64_t h=DefenceHash(plan.seed,plan.layout,0,attempt);
        Vec3 wish{Between(h,map.halfWidth*.15f,map.halfWidth*.55f),Between(Mix(h),-map.halfHeight*.55f,map.halfHeight*.55f),deployment[0].z};
        const CoverPosition* anchor=nullptr;float nearest=1e9f;
        for(const auto& c:catalog){
            if(c.shelter.x<map.halfWidth*.08f||std::abs(c.shelter.x)>map.halfWidth-8||std::abs(c.shelter.y)>map.halfHeight-8)continue;
            if(std::abs(c.shelter.z-wish.z)>.5f)continue; // The locality sits on the attacker's own floor.
            const float distance=Plan2D(c.shelter,wish);
            if(distance<nearest&&Walkable(map,c.shelter)){nearest=distance;anchor=&c;}
        }
        if(!anchor||nearest>map.halfWidth*.45f)continue;
        size_t nearby=0;for(const auto& c:catalog)nearby+=Plan2D(c.shelter,anchor->shelter)<=locality&&std::abs(c.shelter.z-anchor->shelter.z)<=.5f;
        if(nearby<wanted)continue;
        if(FindPath(map,deployment[0],anchor->shelter).empty())continue;
        plan.objective=anchor->shelter;located=true;
    }
    if(!located)throw std::runtime_error("Static defence found no reachable locality with enough cover on this map");
    // The approach point the defenders are protected from: sixty metres out along
    // the attacker's own axis, never a soldier body.
    plan.threat=plan.objective+Flat(attacker-plan.objective)*60.f;
    plan.threat.x=std::max(-map.halfWidth+1,std::min(map.halfWidth-1,plan.threat.x));
    plan.threat.y=std::max(-map.halfHeight+1,std::min(map.halfHeight-1,plan.threat.y));

    std::vector<DefencePosition> taken;float radius=locality;
    for(int grow=0;grow<4&&taken.size()<wanted;++grow,radius*=1.4f){
        taken.clear();plan.clusters=0;
        if(plan.layout==DefenceLayout::Spread){
            auto pool=Usable(map,plan.objective,plan.threat,radius,false);
            Shuffle(pool,plan.seed,plan.layout,11);
            Seat(pool,taken,wanted,8.f,-1); // Dispersed: eight metres between neighbours.
        }else if(plan.layout==DefenceLayout::Clusters){
            const int groups=std::max(2,(plan.requested+5)/6);
            auto pool=Usable(map,plan.objective,plan.threat,radius,false);
            Shuffle(pool,plan.seed,plan.layout,23);
            std::vector<Vec3> centres;
            for(float apart:{24.f,18.f,13.f}){
                centres.clear();
                for(const auto& item:pool){
                    if(int(centres.size())>=groups)break;
                    size_t neighbours=0;for(const auto& other:pool)neighbours+=Plan2D(other.cover.shelter,item.cover.shelter)<=12.f;
                    if(int(neighbours)<(plan.requested+groups-1)/groups)continue;
                    bool separate=true;for(Vec3 c:centres)separate&=Plan2D(c,item.cover.shelter)>=apart;
                    if(separate)centres.push_back(item.cover.shelter);
                }
                if(int(centres.size())>=groups)break;
            }
            if(centres.empty())continue;
            plan.clusters=int(centres.size());
            for(size_t c=0;c<centres.size()&&taken.size()<wanted;++c){
                const size_t share=std::min(wanted,(wanted*(c+1))/centres.size());
                std::vector<Candidate> local;
                for(const auto& item:pool)if(Plan2D(item.cover.shelter,centres[c])<=12.f)local.push_back(item);
                Seat(local,taken,share,3.f,int(c));
            }
            // Any shortfall stays inside the locality rather than inventing a group.
            Seat(pool,taken,wanted,3.f,plan.clusters-1);
        }else{
            auto pool=Usable(map,plan.objective,plan.threat,std::max(radius,80.f),true);
            auto around=Footprints(config,map);
            const Footprint* chosen=nullptr;float best=1e9f;int index=0;
            for(const auto& f:around){
                if(Plan2D(f.center,plan.objective)>std::max(radius,80.f))continue;
                size_t inside=0;for(const auto& item:pool)inside+=Inside(f,item.cover.shelter,2.f);
                if(!inside)continue;
                const float score=float(wanted-std::min(wanted,inside))*40.f+Plan2D(f.center,plan.objective)+
                    Between(DefenceHash(plan.seed,plan.layout,100+index,0),0,20);
                if(score<best){best=score;chosen=&f;}
                ++index;
            }
            if(!chosen)continue;
            std::vector<Candidate> interior,outside;
            for(const auto& item:pool)(Inside(*chosen,item.cover.shelter,2.f)?interior:outside).push_back(item);
            Shuffle(interior,plan.seed,plan.layout,31);
            std::stable_sort(outside.begin(),outside.end(),[&](const Candidate& a,const Candidate& b){
                return Plan2D(a.cover.shelter,chosen->center)<Plan2D(b.cover.shelter,chosen->center);});
            Seat(interior,taken,wanted,3.f,0);
            Seat(interior,taken,wanted,2.f,0); // Two metres is a last resort, inside the building only.
            Seat(outside,taken,wanted,3.f,1);  // Overflow to the nearest cover around it.
        }
    }
    if(taken.size()<wanted)throw std::runtime_error("Static defence could not seat "+std::to_string(plan.requested)+" defenders; the map offers "+std::to_string(taken.size())+" positions here");
    plan.radius=radius/1.4f;plan.positions=taken;
    for(const auto& p:plan.positions)plan.exposed+=p.sheltered?0:1;

    // Ember slots: whole squads in turn, each squad's sergeant and corporal first,
    // the gun early enough to matter and the platoon staff only if the count needs them.
    std::vector<int> order;
    for(int squad=SquadsPerTeam;squad<SquadCount;++squad){
        const int base=squad*SquadSize;const bool head=squad==SquadsPerTeam;
        order.push_back(base);order.push_back(base+1);
        if(head&&plan.requested>=6)order.push_back(base+7);
        else if(!head&&config.squadMachineGuns)order.push_back(base+7); // every squad's gun is seated early too
        for(int slot:{2,3,4})order.push_back(base+slot);
        if(head){order.push_back(base+5);order.push_back(base+6);if(plan.requested<6)order.push_back(base+7);}
        else {order.push_back(base+5);order.push_back(base+6);if(!config.squadMachineGuns)order.push_back(base+7);}
    }
    for(size_t i=0;i<wanted;++i)plan.occupant[order[i]]=int(i);

    // The attacker receives the locality as its own objective, fanned across it.
    const Vec3 axis=Flat(plan.objective-attacker),lateral{-axis.y,axis.x,0};
    for(int squad=0;squad<SquadsPerTeam;++squad)
        plan.attackerObjectives[squad]=Ground(map,plan.objective,plan.objective+lateral*((float(squad)-1.5f)*15.f));
    plan.note=std::string(DefenceLayoutName(plan.layout))+": "+std::to_string(plan.requested)+" defenders, "+
        std::to_string(plan.exposed)+" without approach protection, radius "+std::to_string(int(plan.radius))+" m";
    return plan;
}
void ApplyStaticDefence(const DefencePlan& plan,const Config& config,Frame& frame){
    if(plan.layout==DefenceLayout::None)return;
    for(auto& s:frame.soldiers){
        const int slot=s.id%SquadSize;
        if(s.team==1){
            if(plan.Defends(s.id)){
                const auto& cover=plan.At(s.id).cover;
                s.position=cover.shelter;s.goal=s.position;
                s.stance=CoverStance(cover);
                s.facing=Flat(plan.threat-s.position);s.look=s.facing;
            }else{s.health=0;s.action=Action::Killed;}
        }
        // Equipment is unchanged by placement, but the organisation flag and the
        // magazine must agree with the weapon on every maker's frame.
        EquipWeapon(s,{(config.squadMachineGuns||s.squad%SquadsPerTeam==0)&&slot==SquadSize-1&&(s.team==1||config.supportWeapon)?WeaponId::MachineGun:WeaponId::Rifle,{}});
    }
    for(int squad=0;squad<SquadCount;++squad)
        frame.command[squad].mission=squad<SquadsPerTeam?plan.attackerObjectives[squad]:plan.objective;
}
}
