#include "BattleSim.h"
#include "LeaderSim.h"
#include "DrillSim.h"
#include "PlatoonTaskSim.h"
#include "TaskSim.h"
#include "PerceptionSim.h"
#include "BeliefSim.h"
#include <stdexcept>
#include "Diagnostics.h"
#include "TacticalRouteSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "TrafficSim.h"
#include "FireMovementSim.h"
#include <algorithm>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>
#include <sstream>
#include <unordered_map>
#include <cstring>
#include <memory>

namespace army {
// Let covering fire create a lasting maneuver window across gaps between bursts.
// With no further hits/near misses, full suppression fades in about 6.7 seconds.
static constexpr float SuppressionRecoveryPerSecond=0.15f;
Vec3 operator+(Vec3 a, Vec3 b) { return {a.x+b.x,a.y+b.y,a.z+b.z}; }
Vec3 operator-(Vec3 a, Vec3 b) { return {a.x-b.x,a.y-b.y,a.z-b.z}; }
Vec3 operator*(Vec3 a,float b) { return {a.x*b,a.y*b,a.z*b}; }
static float Dot(Vec3 a,Vec3 b) { return a.x*b.x+a.y*b.y+a.z*b.z; }
float Length(Vec3 a) { return std::sqrt(Dot(a,a)); }
float Distance(Vec3 a,Vec3 b) { return Length(a-b); }
static Vec3 Normal(Vec3 a) { float n=Length(a); return n>0.0001f?a*(1/n):Vec3{1,0}; }
static float Clamp(float v,float lo,float hi) { return std::max(lo,std::min(hi,v)); }
Vec3 BallisticPosition(Vec3 p,Vec3 v,float t) {
    return {p.x+v.x*t,p.y+v.y*t,p.z+v.z*t-4.905f*t*t};
}
constexpr float BodyAbsorption=2000,ExitEnergy=300,EnergyPerHealth=35;
float FlightTime(float distance,float muzzleVelocity,float dragK) {
    if(muzzleVelocity<=0)return 0;
    return dragK>0?(std::exp(dragK*distance)-1)/(dragK*muzzleVelocity):distance/muzzleVelocity;
}
// Deposit is continuous, so damage rises with impact energy and saturates as a
// round over-penetrates. A remainder below the exit threshold cannot leave the
// body, so the round stops and gives up everything it carried.
float DepositedEnergy(float impactEnergy) {
    const float deposit=impactEnergy*(1-std::exp(-BodyAbsorption/std::max(impactEnergy,1e-4f)));
    return impactEnergy-deposit<ExitEnergy?impactEnergy:deposit;
}
float HitSeverity(float roll) {return roll<.80f?1.f:roll<.90f?.5f:roll<.975f?1.5f:2.f;}
float HitDamage(float impactEnergy,float severity) {return DepositedEnergy(impactEnergy)/EnergyPerHealth*severity;}
float ObstacleHeight(const Obstacle& o) { return o.height>0?o.height:o.building?3.34f:o.halfCover?1.15f:2.2f; }
static float SegmentBounds(Vec3 a,Vec3 b,Vec3 low,Vec3 high) {
    float lo=0,hi=1;
    const float p[]={a.x,a.y,a.z},v[]={b.x-a.x,b.y-a.y,b.z-a.z};
    const float mn[]={low.x,low.y,low.z},mx[]={high.x,high.y,high.z};
    for(int k=0;k<3;++k) {
        if(std::abs(v[k])<1e-7f) { if(p[k]<mn[k]||p[k]>mx[k]) return -1; }
        else {
            float t0=(mn[k]-p[k])/v[k],t1=(mx[k]-p[k])/v[k];
            if(t0>t1) std::swap(t0,t1);
            lo=std::max(lo,t0);hi=std::min(hi,t1);if(lo>hi)return -1;
        }
    }
    return lo;
}
float SegmentObstacle(Vec3 a,Vec3 b,const Obstacle& o) {
    const float top=o.center.z+ObstacleHeight(o);
    if((a.z<o.center.z&&b.z<o.center.z)||(a.z>top&&b.z>top))return -1;
    return SegmentBounds(a,b,{o.center.x-o.half.x,o.center.y-o.half.y,o.center.z},
        {o.center.x+o.half.x,o.center.y+o.half.y,top});
}
// Bullets pass through concealment (plan 029): a round's contact is with solid geometry only. On a map
// without concealment no obstacle is skipped, so the answer is unchanged.
float MapContact(const Map& map,Vec3 from,Vec3 to) {
    if(map.queryProfile)++map.queryProfile->collision;
    if(map.prepared)return IndexedContact(map,from,to,false,-1,map.hasConcealment);
    float first=2;size_t building=0;
    for(size_t i=0;i<map.obstacles.size();++i) {
        if(building<map.buildings.size()&&i==map.buildings[building].firstObstacle) {
            const auto& b=map.buildings[building++];
            Obstacle bounds{b.center,b.half+Vec3{0.23f,0.23f,0},true,false,UpperFloor*2};
            if(b.obstacleCount&&SegmentObstacle(from,to,bounds)<0){i+=b.obstacleCount-1;continue;}
        }
        if(map.obstacles[i].concealment)continue;
        float hit=SegmentObstacle(from,to,map.obstacles[i]);if(hit>=0)first=std::min(first,hit);
    }
    return first<=1?first:-1;
}
// The unprepared any-blocker loop; solidOnly skips concealment obstacles.
static bool UnpreparedClear3D(const Map& map,Vec3 from,Vec3 to,bool solidOnly) {
    size_t building=0;
    for(size_t i=0;i<map.obstacles.size();++i) {
        if(building<map.buildings.size()&&i==map.buildings[building].firstObstacle) {
            const auto& b=map.buildings[building++];
            Obstacle bounds{b.center,b.half+Vec3{0.23f,0.23f,0},true,false,UpperFloor*2};
            if(b.obstacleCount&&SegmentObstacle(from,to,bounds)<0){i+=b.obstacleCount-1;continue;}
        }
        if(solidOnly&&map.obstacles[i].concealment)continue;
        if(SegmentObstacle(from,to,map.obstacles[i])>=0)return false;
    }
    return true;
}
static bool IndexedClear3D(const Map& map,Vec3 from,Vec3 to,float){return IndexedContact(map,from,to,true)<0;}
static bool IndexedSolidClear3D(const Map& map,Vec3 from,Vec3 to,float){return IndexedContact(map,from,to,true,-1,true)<0;}
bool ClearLine3D(const Map& map,Vec3 from,Vec3 to) {
    if(map.queryProfile)++map.queryProfile->sight;
    if(map.prepared)return MemoisedSegment(map,from,to,-1,0,IndexedClear3D);
    // Visibility needs any blocker, while a projectile needs the closest hit.
    return UnpreparedClear3D(map,from,to,false);
}
bool ClearLine3DSolid(const Map& map,Vec3 from,Vec3 to) {
    if(!map.hasConcealment)return ClearLine3D(map,from,to);
    if(map.queryProfile)++map.queryProfile->sight;
    if(map.prepared)return MemoisedSegment(map,from,to,-1,2,IndexedSolidClear3D);
    return UnpreparedClear3D(map,from,to,true);
}
float BodyHeight(Stance stance) {return Posture(stance).body;}
static bool ProtectedAtCompute(const Map& map,Vec3 position,Vec3 threat,Stance stance) {
    Vec3 dir=Normal(position-threat),side{-dir.y,dir.x};
    // Test both shoulders and the centre at head and torso height.
    for(float offset:{-0.4f,0.f,0.4f}) for(float fraction:{0.5f,0.96f}) {
        Vec3 p=position+side*offset;
        Vec3 body{p.x,p.y,p.z+BodyHeight(stance)*fraction},enemyEye{threat.x,threat.y,threat.z+1.7f};
        // Actual cover must lie between the soldier and threat, close enough to
        // shelter behind. A distant obstruction is concealment, not local cover; so is a hedge
        // (plan 029: self-preservation reads solid cover only).
        Vec3 nearEnd=body+(enemyEye-body)*std::min(1.f,3.f/std::max(0.01f,Distance(body,enemyEye)));
        if(ClearLine3DSolid(map,body,nearEnd))return false;
    }
    return true;
}
namespace {
// Optimisation (plan 024 round 4): an exact memo of the cover test on prepared maps. The answer
// is a function of the geometry and the bitwise arguments. On a prepared map every line query
// goes through the segment memo, which belongs to exactly one geometry revision (it is replaced
// whenever the revision changes, and InvalidateGeometry drops it); copies of a map share it only
// while they share the geometry. So a segment memo object, while it is valid for the map's
// revision, identifies the geometry, and its object is the owner of an entry here. Each owner is
// pinned by a weak_ptr, so its address can never be reused by another memo while entries may
// name it; owners get a process-unique small id. A collision evicts; a miss recomputes exactly.
struct ProtectionMemo {
    struct Entry { uint32_t key[6]; uint32_t owner; uint32_t state; }; // state: 1 exposed, 2 protected, stance<<2
    static constexpr size_t Bits=16;
    std::vector<Entry> entries;
    struct Owner { uint32_t id; uint64_t revision; };
    std::unordered_map<const void*,Owner> owners;
    std::vector<std::weak_ptr<SegmentMemo>> pins;
    const void* last=nullptr; Owner lastOwner{0,0};
    ProtectionMemo():entries(size_t(1)<<Bits){}
    // The id of a registered owner valid for this revision, or 0.
    uint32_t Find(const void* memo,uint64_t revision) {
        if(!memo)return 0;
        if(memo!=last){auto it=owners.find(memo);if(it==owners.end())return 0;last=memo;lastOwner=it->second;}
        return lastOwner.revision==revision?lastOwner.id:0;
    }
    // Called right after a computation on a prepared map, when map.segments is valid for map.revision.
    uint32_t Register(const Map& map) {
        const void* memo=map.segments.get();if(!memo)return 0;
        if(const uint32_t id=Find(memo,map.revision))return id;
        if(owners.count(memo))return 0; // registered for another revision: never cache under it
        if(pins.size()>=(size_t(1)<<14)){ // bound the pins: forget everything and start again
            std::fill(entries.begin(),entries.end(),Entry{});owners.clear();pins.clear();last=nullptr;lastOwner={0,0};
        }
        pins.push_back(map.segments);const Owner owner{uint32_t(pins.size()),map.revision};
        owners.emplace(memo,owner);last=memo;lastOwner=owner;return owner.id;
    }
};
thread_local ProtectionMemo protectionMemo;
}
bool ProtectedAt(const Map& map,Vec3 position,Vec3 threat,Stance stance) {
    if(!map.prepared)return ProtectedAtCompute(map,position,threat,stance);
    auto& memo=protectionMemo;
    uint32_t key[6];const float words[6]={position.x,position.y,position.z,threat.x,threat.y,threat.z};std::memcpy(key,words,sizeof key);
    const uint32_t posture=uint32_t(stance)<<2;
    uint64_t h=1469598103934665603ull;for(uint32_t k:key)h=(h^k)*1099511628211ull;h=(h^posture)*1099511628211ull;
    h^=h>>32;h*=0x9e3779b97f4a7c15ull;h^=h>>29;
    auto& e=memo.entries[h&((size_t(1)<<ProtectionMemo::Bits)-1)];
    const uint32_t owner=memo.Find(map.segments.get(),map.revision);
    if(owner&&e.owner==owner&&(e.state&~3u)==posture&&(e.state&3)&&std::memcmp(e.key,key,sizeof key)==0)return (e.state&3)==2;
    const bool result=ProtectedAtCompute(map,position,threat,stance);
    if(const uint32_t id=memo.Register(map)){std::memcpy(e.key,key,sizeof key);e.owner=id;e.state=posture|(result?2u:1u);}
    return result;
}
bool ProjectilePosition(const Shot& s,float time,Vec3& p) {
    if(s.flight.empty()||time<s.time||time>s.impactTime) return false;
    auto it=std::upper_bound(s.flight.begin(),s.flight.end(),time,
        [](float t,const Shot::Sample& sample){return t<sample.time;});
    if(it==s.flight.begin())return false;
    auto a=*(it-1);p=a.position;
    if(it!=s.flight.end()) {
        float alpha=(time-a.time)/(it->time-a.time);
        p={p.x+(it->position.x-p.x)*alpha,p.y+(it->position.y-p.y)*alpha,p.z+(it->position.z-p.z)*alpha};
    }
    return true;
}

float SegmentBox(Vec3 a,Vec3 b,const Obstacle& o,float padding) {
    float lo=0,hi=1;
    Vec3 d=b-a;
    for (int k=0;k<2;++k) {
        float p=k?a.y:a.x, v=k?d.y:d.x;
        float c=k?o.center.y:o.center.x, h=(k?o.half.y:o.half.x)+padding;
        if (std::abs(v)<1e-7f) { if(p<c-h||p>c+h) return -1; }
        else {
            float t0=(c-h-p)/v,t1=(c+h-p)/v;
            if(t0>t1) std::swap(t0,t1);
            lo=std::max(lo,t0); hi=std::min(hi,t1);
            if(lo>hi) return -1;
        }
    }
    return lo;
}
const char* Name(int id) {
    static const char* names[]={"Vale","Rook","Soren","Ash","Tern","Iven","Moss","Reed",
        "Bren","Cole","Dane","Ellis","Fenn","Gale","Hale","Rowan",
        "Wren","Knox","Alden","Baird","Corin","Dover","Egan","Frost",
        "Garr","Heath","Isen","Joss","Keir","Leif","Nash","Orr",
        "Voss","Kest","Orin","Flint","Bram","Lark","Holt","Pike",
        "Quill","Renn","Seth","Toll","Uren","Venn","Wade","Yorr",
        "Zane","Arlen","Beck","Cairn","Dax","Errol","Fisk","Gunn",
        "Hess","Irvin","Jory","Kerr","Lorne","Merr","Noll","Osric"};
    return id>=0&&id<UnitCount?names[id]:"Command";
}
const char* ActionName(Action a) {
    static const char* labels[]={"ADVANCING","SEEKING COVER","ENGAGING","FALLING BACK","HOLDING","INCAPACITATED","KILLED"};
    return labels[int(a)];
}
const char* ReasonText(Reason r) {
    static const char* labels[]={"Searching the assigned sector.","Contact ahead. Moving to a protected firing position.",
        "Under heavy fire. Seeking shelter.","Badly wounded. Withdrawing toward friendly lines.",
        "Enemy visible. Firing from current position.","Watching the assigned sector.",
        "Contact lost. Continuing the sector search.","No longer able to fight.",
        "In cover. Settling and observing before peeking.","Moving to the cover edge for a shot.",
        "Watching and firing from cover. Ducking if suppressed.","Position no longer useful. Moving forward.",
        "Known threat can see behind this cover. Relocating.",
        "Ducking behind waist-high cover. Reloading and observing.","Watching over cover or through a window. Ready to fire.","Taking the ordered overwatch position.",
        "Advancing under squad orders.","Holding while the command group sets the plan.","Regrouping with the squad corporal.","Holding overwatch. Suppressing the enemy position.",
        "Wounded. Moving to a protected supporting position.","Wounded but fighting. Providing supporting fire.",
        "Following a quieter flank under squad orders.","No safe flank reported. Pulling back to regroup.","Moving aside to clear a reported friendly firing lane.",
        "Exposed to fire. Seeking nearby shelter before resuming orders.","Holding protected cover. A firing angle can wait.","At the assigned waypoint. Waiting for the next squad order.","Yielding at a doorway or stairs. Keeping the passage clear.","Moving while the other fireteam covers.","Covering the other fireteam. Holding this firing position.","Assigned window team. Supporting the squad from the building.",
        "Caught in the open under fire. Lying flat and firing where a clear line allows.",
        "Vaulting an obstacle on the way. Cannot fire until landed."};
    return labels[int(r)];
}
const char* DoctrineName(Doctrine d) { return d==Doctrine::Cautious?"Cautious":d==Doctrine::Aggressive?"Aggressive":"Balanced"; }
const char* ApproachName(Approach a) { return a==Approach::North?"North flank":a==Approach::South?"South flank":"Direct approach"; }
// Reaction time at initiative 100.
static constexpr float ReferenceReactionSeconds=.425f;
// Encounter fixtures are stat-neutral so their authored timing bounds keep their
// meaning; only full battles roll the talent mixture. Every stat-derived field
// InitialFrame wrote is returned to its stat-100 value, including the wisdom
// scaling of the officer profile (exact unless that scaling clamped at 1).
void NeutraliseStats(Frame& f) {
    for(auto& s:f.soldiers) {
        const float wisdom=StatScale(s.stats.Get(Stat::Wisdom));
        if(wisdom>0)s.officer={std::min(1.f,s.officer.judgment/wisdom),s.officer.risk,std::min(1.f,s.officer.adaptability/wisdom),std::min(1.f,s.officer.communication/wisdom)};
        if(s.health==s.maxHealth)s.health=100;
        s.stats={};s.maxHealth=100;s.reactionBase=ReferenceReactionSeconds;
        s.stamina=StaminaCapacity(s);s.winded=s.sprinting=false;
    }
}
// Built in place: a Frame is 1.5 MB, so the makers must not stack a temporary.
void InitialFrameInto(const Config& c,Frame& f) {
    f.time=0;
    for(auto& s:f.soldiers)s=Soldier{};
    for(auto& squad:f.command)squad=SquadCommand{};
    for(auto& platoon:f.platoon)platoon=PlatoonCommand{};
    const uint32_t roster=c.rosterSeed?c.rosterSeed:c.seed;
    for(int squad=0;squad<SquadCount;++squad) {f.command[squad].leader=squad*SquadSize;f.command[squad].support=(squad+1)*SquadSize-1;}
    for(int i=0;i<UnitCount;++i) {
        auto& s=f.soldiers[i];s.id=i;s.team=i/TeamSize;s.squad=i/SquadSize;
        const int slot=i%SquadSize;const float sign=s.team?-1.f:1.f;
        const float lane=SquadLane(s.squad);
        s.position={-sign*(140.f+(slot/4)*2.f),sign*(lane+(slot%4-1.5f)*3.5f)};
        if(c.terrain==Terrain::Trenches){const float lanes[4]={-44,0,44,58};s.position={-sign*(82.f+slot*1.3f),lanes[s.squad%4],-1.4f};}
        s.goal={0,sign*lane*0.25f};s.facing={sign,0};
        s.cognition=TypedController(c);s.officer=c.officer;
        s.directionalSight=c.foundations&&!(TypedController(c)&&c.fullVision);s.look=s.facing;
        // Talent is hashed from the roster seed, never from the battle RNG.
        const int rosterSlot=c.equalTroops?i%TeamSize:i;
        s.stats=GenerateStats(c.statProfiles[s.team],roster,rosterSlot);
        s.swayPhase=float(SoldierHash(roster,rosterSlot,0)>>40)/16777216.f*6.28318531f;
        s.swayPhase2=float(SoldierHash(roster,rosterSlot,1)>>40)/16777216.f*6.28318531f;
        s.recoilSign=(SoldierHash(roster,rosterSlot,2)&1ull)?1.f:-1.f;
        s.maxHealth=100*StatScale(s.stats.Get(Stat::Endurance));s.health=s.maxHealth;
        s.stamina=StaminaCapacity(s);
        EquipWeapon(s,{(c.squadMachineGuns||s.squad%SquadsPerTeam==0)&&slot==SquadSize-1&&(s.team==1||c.supportWeapon)?WeaponId::MachineGun:WeaponId::Rifle,{}});
        s.role=slot==0?Role::Sergeant:slot==1?Role::Corporal:s.machineGun?Role::MachineGunner:Role::Rifleman;
        if(s.squad%SquadsPerTeam==0&&slot==5)s.role=Role::Lieutenant;
        if(s.squad%SquadsPerTeam==0&&slot==6)s.role=Role::PlatoonSergeant;
        uint32_t value=c.seed+uint32_t(i+1)*2654435761u;value^=value>>16;
        s.reactionBase=ReferenceReactionSeconds/StatScale(s.stats.Get(Stat::Initiative));
        if(c.foundations)s.estimateBias=std::clamp(c.estimateBias+(float(value%201)/100.f-1)*.2f,-1.f,1.f);
        if(c.drills&&c.leaderEffects){
            s.leaderEffects=true;s.initiativeAllowed=LeaderSettings(c.platoonProfiles[s.team]).initiative;
            if(s.role==Role::Lieutenant)s.officer=c.platoonProfiles[s.team];
        }
        // Wisdom is officer skill: judgment, adaptability and communication scale with it; risk does not.
        const float wisdom=StatScale(s.stats.Get(Stat::Wisdom));
        auto skill=[&](float base){return std::clamp(base*wisdom,0.f,1.f);};
        s.officer={skill(s.officer.judgment),s.officer.risk,skill(s.officer.adaptability),skill(s.officer.communication)};
        s.action=Action::Hold;s.reason=Reason::AwaitOrders;
    }
    for(int team=0;team<2;++team){f.platoon[team].leader=team*TeamSize+5;f.platoon[team].sergeant=team*TeamSize+6;}
    if(c.battlefield){
        for(auto& s:f.soldiers){s.position=c.battlefield->positions[s.id];s.goal=c.battlefield->goals[s.id];}
        for(int q=0;q<SquadCount;++q)f.command[q].mission=c.battlefield->goals[q*SquadSize];
    }
}
Frame InitialFrame(const Config& c) {
    Frame f;InitialFrameInto(c,f);return f;
}
void MakeMGEncounter(const Config& config,int variant,Map& map,Frame& frame) {
    map={};map.halfWidth=90;map.halfHeight=85;InitialFrameInto(config,frame);NeutraliseStats(frame);
    map.obstacles={{{-40,0},{.6f,9},false,true},{{9,0},{.6f,8},false,true},
        {{-45,-28},{5,.6f},false,true},{{-28,-35},{5,.6f},false,true},
        {{-12,-31},{5,.6f},false,true},{{3,-23},{5,.6f},false,true},
        {{-26,-15},{6,3},false,false,4.f},{{-8,20},{3,5},false,false,4.f},
        {{-54,15},{.6f,6},false,true},{{22,16},{.6f,6},false,true}};
    if(variant==3)map.obstacles.push_back({{-24,-40},{2,32},false,false,5.f});
    for(auto& s:frame.soldiers) {
        const int slot=s.id%SquadSize;
        if(s.squad!=0&&s.squad!=1&&s.squad!=4){s.health=0;s.action=Action::Killed;continue;}
        if(s.squad==0)s.position={-42.f-float(slot/4)*2.f,float(slot%4-2)*2.f};
        else if(s.squad==1)s.position={-49.f-float(slot/4)*2.f,-32.f+float(slot%4-2)*2.f};
        else s.position={11.f+float(slot/4)*2.f,float(slot%4-2)*2.f};
        s.goal=s.position;
    }
    if(variant>=5){
        map.obstacles={{{-20,-18},{30,1.5f},false,false,3.5f},{{24,-18},{12,1.5f},false,false,3.5f},
            {{-58,0},{.6f,8},false,true},{{28,0},{.6f,8},false,true},
            {{40,-26},{.6f,3},false,true},{{18,-32},{2,.6f},false,true},{{-42,-30},{2,.6f},false,true},{{-16,-30},{2,.6f},false,true}};
        if(variant==7){map.obstacles[0].half.x=23;map.obstacles[1].center.y=-24;}
        for(auto& soldier:frame.soldiers)if(soldier.Active()){
            int slot=soldier.id%8;soldier.position=soldier.team?Vec3{30.f+(slot/4)*2.f,float(slot%4-2)*2.f}:Vec3{-62.f-(slot/4)*2.f,float(slot%4-2)*2.f+(soldier.squad==1?-12.f:0.f)};soldier.goal=soldier.position;
        }
    }
    if(variant==2||variant==6){for(auto& o:map.obstacles)o.center.y=-o.center.y;for(auto& s:frame.soldiers){s.position.y=-s.position.y;s.goal=s.position;}}
    if((config.recoveryFixture||TypedController(config))&&variant>=5){
        // Authored fixture deployment: occupied low cover for the fire base and
        // defenders; the maneuver squad starts in the screened approach lane.
        const float mirror=variant==6?-1.f:1.f;
        for(auto& soldier:frame.soldiers)if(soldier.Active()){
            int slot=soldier.id%SquadSize;
            if(soldier.team)soldier.position={29.2f,mirror*(-7.f+2.f*slot),0};
            else if(soldier.squad==0)soldier.position={-59.2f,mirror*(-7.f+2.f*slot),0};
            else soldier.position={-55.f-float(slot/4)*2.f,mirror*(-24.f-2.f*(slot%4)),0};
            soldier.goal=soldier.position;soldier.stance=Stance::Crouched;
        }
    }
    PrepareGeometry(map);
}
bool AttackMovementTask(Task t) {return t==Task::Advance||t==Task::BoundMove||t==Task::Flank||t==Task::ClearLane;}
bool AttackMovement(const Soldier& s) {
    if(!AttackMovementTask(s.assignment.task)&&!s.assignment.execution.attackMove)return false;
    // A lane clearance walks under Action::Cover; every other shelter, peek, rally or
    // rearward move is excluded by its action or its reason.
    if(s.action==Action::Cover)return s.reason==Reason::ClearLane;
    return s.action==Action::Advance&&s.reason!=Reason::Peek&&s.reason!=Reason::Regroup&&s.reason!=Reason::EmergencyCover;
}
bool FlankHoldsFire(const Soldier& s,float time) {
    // Keep the flank quiet: he opens fire once he has been fired on or is close.
    if(s.assignment.task!=Task::Flank||s.suppression>0.08f||s.health<s.maxHealth)return false;
    for(const auto& ct:s.contacts)if(ct.known&&ct.visible&&time-ct.observedAt<=2&&Distance(s.position,ct.position)<=30)return false;
    return true;
}
bool WalkingFire(const Soldier& s,float time) {return !s.vaulting&&!s.sprinting&&AttackMovement(s)&&s.magazineRemaining>0&&!FlankHoldsFire(s,time);}
// Stamina and the sprint to cover (plan 022). Endurance owns the capacity and the recovery,
// speed the pace; the gunner carries the weight both ways. Nothing here reads the map, an
// enemy body or the Config: the movement stage applies config.stamina.
float StaminaCapacity(const Soldier& s) {return Sprint().capacitySeconds*StatScale(s.stats.Get(Stat::Endurance));}
float SprintPace(const Soldier& s) {return std::max(1.f,(s.machineGun?Sprint().gunnerPace:Sprint().pace)*StatScale(s.stats.Get(Stat::Speed)));}
// The movement stage's own formula, exactly as it always ran, with plan 023 stage C's order pace
// appended at the end behind its switch: off, a battle is bit for bit what it was before the field
// existed, whatever value PlanSquad happened to compute for it.
float MovementSpeed(const Soldier& s,const Config& c) {
    return (s.machineGun?2.55f:3.15f)*(s.health<55?0.72f:1.f)*(1-s.suppression*0.45f)*Posture(s.stance).speed*
        (s.movingFire?s.gun.moving.pace:1.f)*(s.sprinting?SprintPace(s):1.f)*(c.orderPace?s.assignment.pace:1.f);
}
// Full again in recoverySeconds/endurance at rest: a tougher man holds more and refills sooner.
float StaminaRecovery(const Soldier& s) {return StaminaCapacity(s)*StatScale(s.stats.Get(Stat::Endurance))/std::max(.01f,Sprint().recoverySeconds);}
bool CanSprint(const Soldier& s) {return !s.winded&&s.stamina>0&&s.health>=Sprint().woundedHealth;}
// Plan 029 M-C. Everything read is his own: understood health (what the planner and the execution agree
// on), stamina, winded latch, stats, whether he carries the gun, his stance.
VaultClass VaultClassOf(const Soldier& s,const Config& c) {
    if(!c.vaulting)return VaultClass::None;
    const auto& v=Vaulting();
    if(s.understoodHealth<v.woundedHealth||s.stance==Stance::Prone)return VaultClass::None;
    if(c.stamina&&(s.winded||s.stamina<v.lowStamina))return VaultClass::None;
    const bool strong=!s.machineGun&&(s.stats.Get(Stat::Strength)+s.stats.Get(Stat::Dexterity))*.5f>=v.highStat;
    return strong&&(!c.stamina||s.stamina>=v.highStamina)?VaultClass::High:VaultClass::Low;
}
float VaultSeconds(const Soldier& s,VaultClass need) {
    return (need==VaultClass::High?Vaulting().highSeconds:Vaulting().lowSeconds)/StatScale(s.stats.Get(Stat::Dexterity));
}
VaultStep VaultStepFor(const Map& map,const Soldier& s,Vec3 dest,const Config& c,VaultClass* need,float* height) {
    if(!c.vaulting||ClearLine(map,s.position,dest,.46f))return VaultStep::Walk;
    float top=0;const VaultClass needed=VaultCrossing(map,s.position,dest,VaultClass::High,&top);
    if(need)*need=needed;
    if(height)*height=top;
    if(needed==VaultClass::None)return VaultStep::Walk;
    return int(VaultClassOf(s,c))>=int(needed)?VaultStep::Vault:VaultStep::Replan;
}
float VaultLegMetres(const Map& map,Vec3 a,Vec3 b,VaultClass cls) {
    const auto& v=Vaulting();
    // Only a leg no longer than a vault's can be one; the walk test is VaultStepFor's.
    if(cls==VaultClass::None||Distance(a,b)>v.maxLeg+.05f||ClearLine(map,a,b,.46f))return 0;
    const VaultClass need=VaultCrossing(map,a,b,cls);
    return need==VaultClass::None?0.f:(need==VaultClass::High?v.highSeconds:v.lowSeconds)*v.plannerPace;
}
float PathTravel(const Map& map,Vec3 from,const std::vector<Vec3>& path,VaultClass cls) {
    float length=0;Vec3 p=from;
    for(Vec3 q:path){length+=Distance(p,q)+VaultLegMetres(map,p,q,cls);p=q;}
    return length;
}
// Empty lungs cost him his aim and steadiness, fading linearly back as the stamina returns.
// Exactly 1 at full stamina, so a fresh man, and every battle with the feature off, is
// bit-identical to the pre-022 arithmetic.
float StaminaPenalty(const Soldier& s,float atEmpty) {
    const float capacity=StaminaCapacity(s);
    if(capacity<=0||s.stamina>=capacity)return 1.f;
    return 1+(atEmpty-1)*(1-s.stamina/capacity);
}
// One tick of the stamina clock, the only writer of stamina and of the winded latch. He
// spends it only while sprinting, recovers at half the rate while walking and at the full
// rate standing still, empties into winded and comes out of it only when he is FULL again
// (the user's rule).
void StepStamina(Soldier& s,bool sprinting,bool displaced,float seconds,float spend) {
    // A vault (plan 029 M-C) is paid at once; it can empty him, and then he is winded like a sprinter.
    if(spend>0){s.stamina=std::max(0.f,s.stamina-spend);if(s.stamina<=0)s.winded=true;}
    const float capacity=StaminaCapacity(s);
    if(sprinting) {
        s.stamina=std::max(0.f,s.stamina-seconds*(s.machineGun?Sprint().gunnerDrain:1.f));
        if(s.stamina<=0)s.winded=true;
    } else {
        s.stamina=std::min(capacity,s.stamina+seconds*StaminaRecovery(s)*(displaced?Sprint().walkRecovery:1.f));
        if(s.stamina>=capacity)s.winded=false;
    }
}
// The user's rule. A man moving under one of these runs; otherwise he walks and recovers.
bool SprintTrigger(const Soldier& s,bool revealedAhead,float remaining) {
    if(s.action==Action::Fire||s.action==Action::Hold||s.action==Action::Wounded||s.action==Action::Killed)return false;
    // A peek, a duck or a slot adjustment is two metres: he walks those, as the path code
    // leaves them alone, and a seated defender therefore never sprints.
    if(remaining<Sprint().minimumRun)return false;
    if(revealedAhead)return true;                                        // a stretch a known enemy watches
    if(s.assignment.fm.displace&&s.assignment.fm.gun==s.id)return true;  // plan 031 D: the drill's gun displacing to a new station
    if(s.assignment.task==Task::PullBack||s.action==Action::Retreat)return true;  // a squad retreat
    if(s.assignment.execution.rushSeconds>0)return true;                 // the bounded rush of a typed assault
    if(s.action!=Action::Cover)return false;
    if(s.suppression>Caution().underFireSuppression)return true;         // under fire, on his way to cover
    return s.reason==Reason::EmergencyCover||s.reason==Reason::Contact||s.reason==Reason::Suppressed||
        s.reason==Reason::Flanked||s.reason==Reason::Relocate;           // his reaction move into cover
}
float WalkingFireRange(const Soldier& s) {return s.gun.moving.range;}
float MovePenalty(float factor,float scale) {return 1+(factor-1)/std::max(0.01f,scale);}
float AimReady(const Soldier& s) {return s.movingFire?Clamp(s.gun.moving.aimCap,0.05f,1.f):1.f;}
float DuckThreshold(const Config& c,int team){const Doctrine d=team?c.emberDoctrine:c.doctrine;return d==Doctrine::Cautious?0.40f:d==Doctrine::Aggressive?0.65f:0.52f;}
bool NervePinned(const Soldier& s,const Config& c){return c.nerve&&s.nerve>SuppressionRules().pinnedAt;}
float AimSuppression(const Soldier& s){return s.shakenShots>0?std::max(s.suppression,SuppressionRules().shakenSuppression):s.suppression;}
void StepSuppression(Soldier& s,const Config& c,float time,float seconds){
    const float composure=StatScale(s.stats.Get(Stat::Composure));
    // Plan 030 M-S7 (P2 keep-down, P3 neighbours): when he was last above his duck threshold, before this tick's decay.
    if((c.keepDown||c.pinnedNeighbours)&&s.suppression>DuckThreshold(c,s.team))s.aboveDuckAt=time;
    if(c.nerve){
        // S2: nerve reads the fire on him as it stands before this tick's decay. Going from pinned to released
        // shakes his next firstShots rounds.
        const auto& rule=SuppressionRules();const bool was=s.nerve>rule.pinnedAt;
        s.nerve=Clamp(s.suppression>DuckThreshold(c,s.team)?s.nerve+seconds*rule.nerveGain:s.nerve-seconds*rule.nerveDecay*composure,0,1);
        if(was&&s.nerve<=rule.pinnedAt)s.shakenShots=rule.firstShots;
    }
    // S3: rounds still arriving hold his suppression where it is.
    if(c.stackedSuppression&&time-s.lastNearMissAt<SuppressionRules().stackWindow)return;
    s.suppression=std::max(0.f,s.suppression-seconds*SuppressionRecoveryPerSecond*StatScale(s.stats.Get(Stat::Composure)));
}
float AimSeconds(const Soldier& s) {
    const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
    return 0.45f/(s.gun.ergonomics*dexterity)*(1+3*AimSuppression(s))*(s.health<55?1.3f:1.f)*
        (s.movingFire?MovePenalty(s.gun.moving.aimSeconds,dexterity):1.f)*StaminaPenalty(s,Sprint().windedAim)*Posture(s.stance).aim;
}
// The walk widens what the shooter contributes; the weapon's mechanical deviation stays.
// The factor is exactly 1 when he is not moving, so a stationary shot is bit-identical.
static float SpreadWalk(const Soldier& s) {return s.movingFire?MovePenalty(s.gun.moving.spread,StatScale(s.stats.Get(Stat::Composure))):1.f;}
float ShotSpread(const Soldier& s) {
    const float m=SpreadWalk(s);
    return s.gun.baseDeviation+0.040f/(s.gun.sightQuality*StatScale(s.stats.Get(Stat::Perception)))*m+AimSuppression(s)*0.10f*m;
}
float FiredSpread(const Soldier& s,const Config& c,bool walking,bool area){
    const bool automatic=s.gun.action==WeaponAction::Automatic;
    return (ShotSpread(s)+(!automatic&&area?.015f:0.f))*(GunBipodSet(s,c,walking)?c.gunBipodFactor:1.f);
}
float VerticalSpread(const Soldier& s) {
    const float m=SpreadWalk(s);
    return 0.014f/(s.gun.sightQuality*StatScale(s.stats.Get(Stat::Perception)))*m+AimSuppression(s)*0.024f*m;
}
float SwayAmplitude(const Soldier& s) {
    const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
    return 0.010f/(s.gun.ergonomics*dexterity)*Posture(s.stance).sway*(1+2*s.suppression)*
        (s.movingFire?MovePenalty(s.gun.moving.sway,dexterity):1.f)*StaminaPenalty(s,Sprint().windedSway);
}
Vec3 SwayOffset(const Soldier& s,float time) {
    // Two incommensurate periods, so the aim point wanders instead of retracing a closed figure.
    const float a=SwayAmplitude(s);
    return {a*std::sin(6.28318531f*time/2.3f+s.swayPhase),a*std::sin(6.28318531f*time/3.7f+s.swayPhase2),0};
}
float RecoilKick(const Soldier& s) {
    const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
    return s.gun.recoil/(s.gun.ergonomics*dexterity)*Posture(s.stance).recoil*
        (s.movingFire?MovePenalty(s.gun.moving.recoilKick,dexterity):1.f);
}
void ApplyRecoil(Soldier& s) {const float kick=RecoilKick(s);s.recoil.x+=0.3f*s.recoilSign*kick;s.recoil.y+=kick;}
void DecayRecoil(Soldier& s,float seconds) {
    // Rate 4 at the reference weapon and dexterity: a quarter-second time constant, so a bolt
    // shot decays to nothing before the next round and a burst settles near three kicks.
    // A table recovery of 0.5 halves the rate at the reference; the time constant is what
    // the movement penalty stretches, so a better soldier loses less of it. The factor is
    // exactly 1 when he is not moving, so a stationary decay is bit-identical.
    const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
    const float walk=s.movingFire?1.f/MovePenalty(1.f/std::max(0.01f,s.gun.moving.recoilRecovery),dexterity):1.f;
    const float k=std::exp(-seconds*4*s.gun.ergonomics*dexterity*walk);
    s.recoil.x*=k;s.recoil.y*=k;
}
float RecoilHold(const Soldier& s) {
    const auto& t=GunnerCompensation();
    return Clamp(t.share*StatScale(s.stats.Get(Stat::Dexterity))*(1-t.suppressionLoss*s.suppression),0,1);
}
Vec3 HeldRecoil(const Soldier& s) {return s.recoil*(1-s.recoilHold);}
float ReportDelay(float base,const Soldier& sender) {return base/StatScale(sender.stats.Get(Stat::Wisdom));}
void UpdateAim(Soldier& s,int target,Vec3 point,float dt,bool graded) {
    if(target<0||(s.action!=Action::Fire&&!s.movingFire)||(s.suppression>=0.8f&&!graded)) {s.aim=0;s.aimTarget=-1;return;}
    if(s.aimTarget!=target)s.aim=0;
    else if(Distance(s.aimPoint,point)>1.5f)s.aim*=0.5f;
    s.aimTarget=target;s.aimPoint=point;
    // Walking fire never settles: the aim stops at the weapon's moving cap, which is also
    // the readiness threshold, so a man who halts goes on settling to a full aim.
    s.aim=Clamp(s.aim+std::max(0.f,dt)/AimSeconds(s),0,AimReady(s));
}
float FriendlyFireRisk(const Soldier& s,const Map& map,Vec3 aim,float time) {
    Vec3 direction=Normal(Vec3{aim.x-s.position.x,aim.y-s.position.y,0});
    const float range=Length({aim.x-s.position.x,aim.y-s.position.y,0});if(range<0.5f)return 0;
    float risk=0;
    if(s.assignment.drillInstance>0)for(const auto& lane:s.assignment.teamPlan.friendlyAssaultLanes){
        // Received assault intent, not a hidden friendly position. The shared
        // objective disc is covered by the existing close-assault fire contract.
        const Vec3 shot=aim-s.position,other=lane.target-lane.origin;
        const float denominator=shot.x*other.y-shot.y*other.x;
        if(std::abs(denominator)<1e-5f)continue;
        const Vec3 offset=lane.origin-s.position;
        const float along=(offset.x*other.y-offset.y*other.x)/denominator;
        const float cross=(offset.x*shot.y-offset.y*shot.x)/denominator;
        if(along>0&&along<1&&cross>0&&cross<1&&Distance(s.position+shot*along,lane.target)>12)risk=1;
    }
    const float muzzle=s.position.z+Posture(s.stance).muzzle;
    const bool automatic=s.gun.action==WeaponAction::Automatic;
    for(int id=0;id<UnitCount;++id) {
        const auto& ct=s.allies[id];float age=time-ct.observedAt;
        if(id==s.id||!ct.known||age<0||age>1.5f)continue;
        for(float ahead:{0.f,automatic?0.7f:0.25f}) {
            Vec3 p=ct.position+s.allyVelocity[id]*std::min(1.5f,age+ahead+FlightTime(Distance(s.position,ct.position),s.gun.muzzleVelocity,s.gun.dragK));
            Vec3 offset=p-s.position;float along=offset.x*direction.x+offset.y*direction.y;
            if(along<0||along>std::min(110.f,range+25))continue;
            // Solid terrain protects a friendly hidden beyond it. This uses only
            // that friendly's observed/predicted position, never enemy truth. A hedge does not (plan 029).
            if(!ClearLine3DSolid(map,{s.position.x,s.position.y,muzzle},{p.x,p.y,ct.position.z+(ct.aimHeight-ct.position.z)*0.75f}))continue;
            const float width=0.55f+along*ShotSpread(s)+(automatic?0.6f:0.15f)+age*0.2f;
            const float lateral=std::abs(offset.x*direction.y-offset.y*direction.x);
            float height=muzzle+(aim.z-muzzle)*along/range;
            float verticalWidth=along*VerticalSpread(s)*0.5f+0.25f;
            if(height-verticalWidth>ct.aimHeight||height+verticalWidth<ct.position.z)continue;
            risk=std::max(risk,std::max(0.f,1-lateral/width));
        }
    }
    // Received movement intent bounds where an unseen friendly can be: the cognition gun's support
    // sector, and (plan 028 Stage 1e) the ordered mover stations a Legacy covering payload carries.
    const std::vector<FriendlyIntent>* intents=nullptr;
    if(s.cognition&&s.supportSector.shooter==s.id&&time>=s.supportSector.observedAt&&time-s.supportSector.observedAt<=8)intents=&s.supportSector.friendlies;
    else if(FirePayloadLive(s,time)&&s.assignment.fireFriendlies)intents=s.assignment.fireFriendlies.get();
    if(intents){
        for(const auto& friendly:*intents){
            const float age=time-friendly.observedAt;if(age<0||age>8||friendly.soldier==s.id)continue;
            // Received movement intent bounds where an unseen friendly can be;
            // do not pretend the reported position is a fresh personal sighting.
            Vec3 delta=friendly.destination-friendly.position;
            const float length=Length(delta),travel=std::min(length,(age+.7f)*3.15f);
            for(float ahead:{0.f,travel}){
                Vec3 p=friendly.position+(length>.01f?delta*(ahead/length):Vec3{}),offset=p-s.position;
                const float along=offset.x*direction.x+offset.y*direction.y;
                if(along<0||along>std::min(110.f,range+25))continue;
                if(!ClearLine3DSolid(map,{s.position.x,s.position.y,muzzle},p+Vec3{0,0,1.3f}))continue;
                const float lateral=std::abs(offset.x*direction.y-offset.y*direction.x);
                const float width=.55f+along*ShotSpread(s)+.6f+std::min(2.f,age*.35f);
                risk=std::max(risk,std::max(0.f,1-lateral/width));
            }
        }
    }
    return risk;
}
bool ShouldHoldFire(const Soldier& s,float risk) {return risk>=(s.gun.action==WeaponAction::Automatic?0.25f:0.45f);}
int SectorLoud(const Soldier& s,float time){
    if(!s.assignment.fireSector||!FirePayloadLive(s,time))return -1;
    int loud=-1;float at=-1e9f;
    for(const auto& t:*s.assignment.fireSector){if(t.enemy<0||t.enemy>=UnitCount)continue;const float fired=s.contacts[t.enemy].lastFireAt;
        if(time-fired<=PinRules().sectorLoud&&fired<=time&&fired>at){at=fired;loud=t.enemy;}}
    return loud;
}
void ScoreGunThreats(const Soldier& s,const Map& map,float time,float moverWeight,GunSupportMemory& memory){
    const auto& k=GunSupportConstants;
    if(memory.scoredAt!=0&&time>=memory.scoredAt&&time-memory.scoredAt<k.rescore)return;
    memory.scoredAt=std::max(time,1e-3f);memory.overlooks.fill(0);
    for(int e=0;e<UnitCount;++e){
        const Contact& track=s.contacts[e];if(!track.known||time-track.observedAt>k.trackAge)continue;
        const Vec3 eye{track.position.x,track.position.y,track.aimHeight};
        for(int m=s.squad*SquadSize;m<(s.squad+1)*SquadSize;++m){
            Vec3 at;bool moving=false;
            if(m==s.id)at=s.position;
            else{const Contact& mate=s.allies[m];if(!mate.known||time-mate.observedAt>k.mateAge)continue;
                at=mate.position;moving=Length(s.allyVelocity[m])>=k.moverSpeed&&time-mate.observedAt<=k.moverAge;}
            if(Distance(at,track.position)>k.reach)continue;
            if(ClearLine3D(map,eye,at+Vec3{0,0,k.chest}))memory.overlooks[size_t(e)]+=moving?1+moverWeight:1.f;
        }
    }
}
FireSolution SelectFireSolution(const Soldier& s,const Map& map,float time,GunSupportControl* control) {
    FireSolution best;float score=1e9f;
    if(s.assignment.drillInstance>0&&s.assignment.teamPlan.liftFire)return best;
    // Plan 031 G (Soldier::supportGun: Config::gunSupport for his team, Legacy only): his team's machine gunner is a support
    // shooter for every enemy he knows, whatever his task: his own tracks and the reports he has received, under the
    // support shooters' usable and area-aim rules below (a fresh sighting is not needed; an unknown enemy is never fired on).
    const bool baseSupport=s.assignment.task==Task::Overwatch||s.assignment.task==Task::BoundCover||(s.machineGun&&s.assignment.task==Task::RearGuard)||
        (s.supportGun&&s.machineGun);
    const Vec3 muzzle{s.position.x,s.position.y,s.position.z+Posture(s.stance).muzzle};
    const bool sectorCurrent=s.assignment.id&&time>=s.supportSector.observedAt&&time-s.supportSector.observedAt<=8;
    // Plan 028 Stage 1d: a live Legacy covering payload makes him a support shooter for its enemy only.
    const int payload=FirePayloadLive(s,time)?s.assignment.fireEnemy:-1;
    // Plan 030 M-S7 P4 (Config::coverSector; null otherwise): the gun's share of the request's sector. Every threat in it
    // is his as the payload's enemy is (a report he may fire into, a priority), and he works them a burst at a time.
    const std::vector<SupportThreat>* sector=payload>=0&&s.assignment.fireSector&&!s.assignment.fireSector->empty()?s.assignment.fireSector.get():nullptr;
    auto inSector=[&](int enemy){if(!sector)return false;for(const auto& t:*sector)if(t.enemy==enemy)return true;return false;};
    auto supportFor=[&](int enemy){return baseSupport||enemy==payload||inSector(enemy);};
    const bool support=baseSupport;
    auto requested=[&](int enemy){return (s.cognition&&support&&((s.assignment.execution.rifleSupport&&s.assignment.execution.supportThreat==enemy)||
        (sectorCurrent&&!s.supportSector.lifted&&std::any_of(s.supportSector.threats.begin(),s.supportSector.threats.end(),[&](const SupportThreat& t){return t.enemy==enemy;}))))||
        (payload>=0&&enemy==payload)||inSector(enemy);};
    auto remembered=[&](int enemy){
        Contact ct=s.contacts[enemy];const auto& report=s.reports[enemy];
        if(supportFor(enemy)&&(s.cognition?report.observedAt>ct.observedAt:report.known&&(!ct.known||report.observedAt>ct.observedAt))){ct=report;if(s.cognition)ct.visible=false;}
        if(s.cognition){ct.clearedAt=std::max(s.contacts[enemy].clearedAt,report.clearedAt);ct.known=TrackConfidence(ct,time)>.15f;}
        return ct;
    };
    auto usable=[&](const Contact& ct,int enemy){
        // Plan 030 K-1 (Config::retireFallen; never set otherwise): he knows the man he was asked to cover is down.
        if(ct.seenDown&&(enemy==payload||inSector(enemy)))return false;
        // Jordan's ruling 2 (plan 028): an ordered covering shooter may fire into a reported, unseen
        // position only while its uncertainty fits the weapon's spread, as the cognition rule below.
        if(!s.cognition)return ct.known&&(time-ct.observedAt<=6||((enemy==payload||inSector(enemy))&&ct.observedAt<=time&&
            TrackUncertainty(ct,time)<=Distance(s.position,ct.position)*ShotSpread(s)));
        if(!ct.known||ct.observedAt>time||ct.clearedAt>=ct.observedAt)return false;
        if(time-ct.observedAt<=6)return true;
        // A requested enemy position may still be denied after the gun ducks.
        // Bound this by the remembered uncertainty fitting the weapon's beaten
        // area, not by pretending a repeated request is a new enemy sighting.
        return requested(enemy)&&TrackUncertainty(ct,time)<=Distance(s.position,ct.position)*ShotSpread(s);
    };
    auto aimPoint=[&](const Contact& ct,int enemy){
        Vec3 point{ct.position.x+ct.aimOffset.x,ct.position.y+ct.aimOffset.y,ct.aimHeight};
        if(requested(enemy)&&!ClearLine3D(map,muzzle,point)){
            Vec3 edge=ct.position+Vec3{0,0,1.5f};
            if(ClearLine3D(map,muzzle,edge))point=edge;
        }
        return point;
    };
    std::vector<int> priorities;
    if(support&&sectorCurrent&&!s.supportSector.lifted)for(const auto& threat:s.supportSector.threats){
        if(threat.enemy<0||threat.enemy>=UnitCount)continue;
        Contact ct=remembered(threat.enemy);
        if(usable(ct,threat.enemy)&&Distance(s.position,ct.position)<=100&&
            ClearLine3D(map,muzzle,aimPoint(ct,threat.enemy)))priorities.push_back(threat.enemy);
    }
    if(s.cognition&&s.assignment.execution.rifleSupport){
        const int enemy=s.assignment.execution.supportThreat;
        if(enemy>=0&&enemy<UnitCount){Contact ct=remembered(enemy);
            if(usable(ct,enemy)&&Distance(s.position,ct.position)<=100&&ClearLine3D(map,muzzle,aimPoint(ct,enemy)))priorities.insert(priorities.begin(),enemy);}
    }
    if(payload>=0&&!sector){Contact ct=remembered(payload);
        if(usable(ct,payload)&&Distance(s.position,ct.position)<=100&&ClearLine3D(map,muzzle,aimPoint(ct,payload)))priorities.insert(priorities.begin(),payload);}
    int preferred=priorities.empty()?-1:priorities[(s.rounds/6)%priorities.size()];
    // P4: the sector's threats he can fire on, loudest first; the one he just saw fire has the next burst, otherwise
    // they take turns a burst each (18 rounds sustained, 3 otherwise: the fire stage's own bursts).
    std::vector<int> worked;
    if(sector){
        for(const auto& t:*sector){if(t.enemy<0||t.enemy>=UnitCount)continue;Contact ct=remembered(t.enemy);
            if(usable(ct,t.enemy)&&Distance(s.position,ct.position)<=100&&ClearLine3D(map,muzzle,aimPoint(ct,t.enemy)))worked.push_back(t.enemy);}
        priorities.insert(priorities.begin(),worked.begin(),worked.end());
        if(!worked.empty()){
            const int loud=SectorLoud(s,time);
            const int burst=s.gun.action==WeaponAction::Automatic&&(s.assignment.task==Task::Overwatch||s.assignment.task==Task::RearGuard)?18:3;
            preferred=loud>=0&&std::find(worked.begin(),worked.end(),loud)!=worked.end()?loud:worked[size_t(s.rounds/burst)%worked.size()];
        }
    }
    for(int i=0;i<UnitCount;++i) {
        Contact ct=remembered(i);
        if(!ct.known)continue;
        const bool supportHere=supportFor(i);
        if(supportHere&&sectorCurrent&&s.supportSector.lifted&&std::any_of(s.supportSector.threats.begin(),s.supportSector.threats.end(),[&](const SupportThreat& threat){return threat.enemy==i;}))continue;
        if(s.assignment.id&&s.assignment.teamPlan.liftFire&&Distance(ct.position,s.assignment.teamPlan.liftedSector)<12&&Distance(ct.position,s.position)>15)continue;
        if(supportHere) {if(!usable(ct,i))continue;}
        else if(time-ct.observedAt>(ct.visible?ReactionSeconds(s,ReactionKind::Sight)+.4f+(s.cognition?ct.detectionDelay:0.f):2.f))continue;
        Vec3 target=aimPoint(ct,i);
        float distance=Distance(s.position,ct.position);
        if(distance>100||distance<0.5f)continue;
        if(!supportHere&&ct.visible&&!ClearLine3D(map,muzzle,target))continue;
        if(supportHere&&!ct.visible&&!ClearLine3D(map,muzzle,target)){
            Vec3 bestEdge=target;float nearestEdge=1e9f;
            for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,ct.position)<4){Vec3 point=cover.peek+Vec3{0,0,1.5f};
                float shift=Distance(point,target);if(shift<nearestEdge&&ClearLine3D(map,muzzle,point)){nearestEdge=shift;bestEdge=point;}}
            if(nearestEdge<1e8f)target=bestEdge;
        }
        if(supportHere||!ct.visible) {
            Vec3 direction=Normal(ct.position-s.position);
            if(!ClearLine3D(map,muzzle,{muzzle.x+direction.x*2,muzzle.y+direction.y*2,muzzle.z}))continue;
        }
        float value=distance+(ct.visible?0.f:12.f)+(i==s.aimTarget?-10.f:0.f);
        // Plan 031 G (the firing stage's support gun only): the enemy whose known position overlooks more of his squad is
        // preferred, and one he fired on within the rotation window is passed over for the others (the threats in turn).
        float overlookTerm=0;bool rotated=false;
        if(control){
            overlookTerm=control->threatBonus*control->memory->overlooks[size_t(i)];value-=overlookTerm;
            rotated=time-control->memory->firedAt[size_t(i)]<control->rotate;if(rotated)value+=GunSupportConstants.rotatePenalty;
            ++control->candidates;
        }
        if(std::find(priorities.begin(),priorities.end(),i)!=priorities.end())value-=80;
        if(i==preferred)value-=30;
        if(!worked.empty()&&i==preferred)value-=170; // P4: the sector's turn decides, not the distance
        if(ShouldHoldFire(s,FriendlyFireRisk(s,map,target,time)))value+=1000;
        if(value<score) {score=value;best={i,target,ct.observedAt,supportHere||!ct.visible};
            if(control){control->value=value;control->threatTerm=-overlookTerm;control->rotationTerm=rotated?GunSupportConstants.rotatePenalty:0.f;}}
    }
    // Reuse requested bounded area fire (fixture 27), but the authority here is
    // an explicit drills assault-support contract rather than a fresh sighting.
    // Never refresh the contact timestamp or consult the hidden target body.
    const auto& plan=s.assignment.teamPlan;
    if(s.assignment.drillInstance>0&&support&&plan.assaultAreaFire&&!plan.liftFire&&plan.assaultFireEnemy>=0){
        bool visible=false;for(const auto& ct:s.contacts)visible|=ct.known&&ct.visible&&time-ct.observedAt<=1;
        Vec3 target=plan.assaultFireArea+Vec3{0,0,1.5f};
        const float distance=Distance(s.position,plan.assaultFireArea);Vec3 direction=Normal(plan.assaultFireArea-s.position);
        if(!visible&&distance>=.5f&&distance<=std::min(100.f,SightRange(s))&&
           ClearLine3D(map,muzzle,{muzzle.x+direction.x*2,muzzle.y+direction.y*2,muzzle.z})&&
           !ShouldHoldFire(s,FriendlyFireRisk(s,map,target,time)))
            best={plan.assaultFireEnemy,target,s.assignment.issuedAt,true};
    }
    return best;
}
struct Random {
    uint32_t state;
    explicit Random(uint32_t seed):state(seed?seed:1){}
    float Next() { state^=state<<13;state^=state>>17;state^=state<<5;return float(state>>8)/16777216.f; }
};
static float SegmentDistance(Vec3 a,Vec3 b,Vec3 p);
// Threat-aware paths (plan 020). Soldier knowledge only: his own contacts merged with the
// reports he has received, at the position he believes, seen or reported inside the memory
// window. Never an enemy body, never the shot record.
struct KnownThreat { int id=-1; Vec3 position{},eye{}; };
static void KnownThreats(const Soldier& s,float time,std::vector<KnownThreat>& out,uint64_t& known){
    out.clear();known=0;
    for(int i=0;i<UnitCount;++i){
        const Contact* best=nullptr;
        if(s.contacts[i].known&&time-s.contacts[i].observedAt<=Caution().memorySeconds)best=&s.contacts[i];
        if(s.reports[i].known&&time-s.reports[i].observedAt<=Caution().memorySeconds&&(!best||s.reports[i].observedAt>best->observedAt))best=&s.reports[i];
        if(!best)continue;
        out.push_back({i,best->position,{best->position.x,best->position.y,best->aimHeight}});known|=uint64_t(1)<<i;
    }
}
// The user's measure: the seconds the walk would leave him with a clear line to ONE enemy,
// sampled every metre at his own pace. The path's figure is the worst single enemy.
// Plan 022: the pace he will actually have. A sample a known enemy can see is covered at the
// sprint pace while his remaining stamina (budget, in seconds of sprinting) lasts, and at his
// walking pace after that. budget 0 is the pre-022 measure, arithmetic included.
static float RevealedSeconds(const Map& map,Vec3 from,const std::vector<Vec3>& path,const std::vector<KnownThreat>& threats,float pace,float sprintPace,float budget,std::vector<float>* perThreat=nullptr){
    if(perThreat)perThreat->assign(threats.size(),0.f);
    if(threats.empty()||path.empty())return 0;
    std::vector<float> seconds(threats.size(),0.f);std::vector<char> seen(threats.size(),0);Vec3 previous=from;
    for(Vec3 end:path){
        const float length=Distance(previous,end);const int n=std::max(1,int(std::ceil(length/Caution().sampleStep)));
        const float share=length/float(n)/pace;
        for(int k=0;k<n;++k){
            const Vec3 at=previous+(end-previous)*((float(k)+.5f)/float(n)),body{at.x,at.y,at.z+Caution().bodyHeight};
            bool revealed=false;
            for(size_t t=0;t<threats.size();++t){seen[t]=ClearLine3D(map,threats[t].eye,body)?1:0;revealed|=seen[t]!=0;}
            float taken=share;
            if(revealed&&budget>0){taken=length/float(n)/sprintPace;budget-=taken;}
            for(size_t t=0;t<threats.size();++t)if(seen[t])seconds[t]+=taken;
        }
        previous=end;
    }
    float worst=0;for(float value:seconds)worst=std::max(worst,value);
    if(perThreat)*perThreat=seconds;
    return worst;
}
static float PathLength(Vec3 from,const std::vector<Vec3>& path){float total=0;Vec3 previous=from;for(Vec3 end:path){total+=Distance(previous,end);previous=end;}return total;}
// The pace the movement stage would give him; the gunner is slower. Suppression is left out:
// the figure judges the whole crossing, not the instant he starts it.
static float CautionPace(const Soldier& s){return std::max(.5f,(s.machineGun?2.55f:3.15f)*(s.understoodHealth<55?.72f:1.f));}
float PathRevealedSeconds(const Map& map,const Soldier& s,Vec3 from,const std::vector<Vec3>& path,float time,bool stamina){
    std::vector<KnownThreat> threats;uint64_t known=0;KnownThreats(s,time,threats,known);
    const float pace=CautionPace(s),sprint=stamina&&CanSprint(s)?pace*SprintPace(s):pace;
    return RevealedSeconds(map,from,path,threats,pace,sprint,stamina&&CanSprint(s)?s.stamina:0.f);
}
// Plan 022, the trigger the soldier cannot read off his own order: is the next few metres of
// his path in the sight of an enemy he knows? Bounded by the look-ahead, by the believed
// reach of an enemy and by the check cadence of the caller, and it stops at the first line.
static bool RevealedAhead(const Map& map,const Soldier& s,const std::vector<Vec3>& path,size_t cursor,float time){
    if(cursor>=path.size())return false;
    std::vector<KnownThreat> all;uint64_t known=0;KnownThreats(s,time,all,known);
    std::vector<KnownThreat> threats;
    for(const auto& threat:all)if(Distance(s.position,threat.position)<=Sprint().lookThreats)threats.push_back(threat);
    if(threats.empty())return false;
    float left=Sprint().lookAhead;Vec3 previous=s.position;
    for(size_t i=cursor;i<path.size()&&left>0;++i){
        const Vec3 end=path[i];const float length=Distance(previous,end),span=std::min(length,left);
        const int n=std::max(1,int(std::ceil(span/Caution().sampleStep)));
        for(int k=0;k<n;++k){
            const float travel=span*(float(k)+.5f)/float(n);
            const Vec3 at=length>.001f?previous+(end-previous)*(travel/length):previous;
            const Vec3 body{at.x,at.y,at.z+Caution().bodyHeight};
            for(const auto& threat:threats)if(ClearLine3D(map,threat.eye,body))return true;
        }
        left-=length;previous=end;
    }
    return false;
}
// Shortest first, and always the fallback: a failed, budget-exhausted or over-long covered
// search can never leave a soldier without a path or send him across the map.
static std::vector<Vec3> CautiousPath(const Map& map,const Soldier& s,Vec3 goal,const Config& c,float time,PathChoice* choice){
    // Plan 029 M-C: his own walk, at the vault class he has now (None, the old search, when off).
    const VaultClass own=VaultClassOf(s,c);
    auto shortest=FindPath(map,s.position,goal,own);
    if(shortest.empty())return shortest;
    const float pace=CautionPace(s),shortestLength=PathLength(s.position,shortest);
    // The revealed stretches are charged at the pace he will actually have (plan 022).
    const bool sprint=c.stamina&&CanSprint(s);const float sprintPace=sprint?pace*SprintPace(s):pace,budget=sprint?s.stamina:0.f;
    std::vector<KnownThreat> threats;uint64_t known=0;KnownThreats(s,time,threats,known);
    if(choice){choice->known=known;choice->shortestLength=shortestLength;}
    // A walk this short cannot reach the threshold however open it is, and a march with no
    // known enemy near it is the pre-020 path exactly.
    if(threats.empty()||shortestLength/pace<=Caution().revealedSeconds)return shortest;
    bool near=false;
    for(const auto& threat:threats){Vec3 previous=s.position;
        for(Vec3 end:shortest){if(SegmentDistance(previous,end,threat.position)<=Caution().nearPath){near=true;break;}previous=end;}
        if(near)break;}
    if(!near)return shortest;
    std::vector<float> perThreat;
    const float shortestRevealed=RevealedSeconds(map,s.position,shortest,threats,pace,sprintPace,budget,&perThreat);
    if(choice){choice->searched=true;choice->shortestRevealed=shortestRevealed;choice->why="shortest under the threshold";}
    if(shortestRevealed<=Caution().revealedSeconds)return shortest;
    // The cost field carries only the enemies that actually reveal the shortest path: the
    // search is trying to beat them, and every sight line it charges is paid for.
    std::vector<size_t> charged;
    for(size_t t=0;t<threats.size();++t)if(perThreat[t]>Caution().revealedSeconds*.5f)charged.push_back(t);
    if(charged.empty()){size_t worst=0;for(size_t t=1;t<threats.size();++t)if(perThreat[t]>perThreat[worst])worst=t;charged.push_back(worst);}
    if(int(charged.size())>Caution().chargedThreats){
        std::stable_sort(charged.begin(),charged.end(),[&](size_t a,size_t b){return perThreat[a]>perThreat[b];});
        charged.resize(size_t(Caution().chargedThreats));std::sort(charged.begin(),charged.end());
    }
    std::unordered_map<int64_t,bool> cells;
    auto exposedCell=[&](Vec3 p){
        const int64_t key=(int64_t(std::lround(p.z*2))*4096+std::lround(p.y))*4096+std::lround(p.x);
        auto found=cells.find(key);if(found!=cells.end())return found->second;
        bool value=false;const Vec3 body{p.x,p.y,p.z+Caution().bodyHeight};
        for(size_t t:charged)if(ClearLine3D(map,threats[t].eye,body)){value=true;break;}
        cells.emplace(key,value);return value;
    };
    int expanded=0;RouteStatus status=RouteStatus::Unreachable;
    auto covered=FindCostPath(map,s.position,goal,[&](Vec3 p){return exposedCell(p)?1+Caution().sightCharge:1.f;},Caution().budget,expanded,status,own);
    if(covered.empty()){if(choice)choice->why="no covered alternative";return shortest;}
    const float coveredLength=PathLength(s.position,covered);
    if(choice)choice->alternativeLength=coveredLength;
    if(coveredLength>shortestLength*Caution().detour){if(choice)choice->why="covered detour longer than the limit";return shortest;}
    const float coveredRevealed=RevealedSeconds(map,s.position,covered,threats,pace,sprintPace,budget);
    if(choice)choice->alternativeRevealed=coveredRevealed;
    if(coveredRevealed<=Caution().revealedSeconds||coveredRevealed<=shortestRevealed*.5f){
        if(choice){choice->covered=true;choice->why=coveredRevealed<=Caution().revealedSeconds?"covered alternative under the threshold":"covered alternative halves the exposure";}
        return covered;
    }
    if(choice)choice->why="covered alternative no better";
    return shortest;
}
std::vector<Vec3> TaskExecutionPath(const Map& map,const Soldier& s,Vec3 goal,const Tactics& tactics,const Config& c,float time,PathChoice* choice){
    // Emergency shelter and peek moves are two metres long and must be instant; the covered
    // search is for the legs that cross ground.
    // Plan 029 M-C: every leg he walks on his own takes his vault class; the squad corridor does not.
    const VaultClass own=VaultClassOf(s,c);
    auto cautious=[&](Vec3 to){return c.threatAwarePaths&&!tactics.emergency?CautiousPath(map,s,to,c,time,choice):FindPath(map,s.position,to,own);};
    if(s.assignment.id&&s.assignment.hasSlot&&!tactics.emergency){
        const auto& slot=s.assignment.slot;
        const bool localGoal=Distance(goal,slot.peek)<.05f||Distance(goal,slot.shelter)<.05f;
        const bool atSlot=Distance(s.position,slot.shelter)+Distance(s.position,slot.peek)<=Distance(slot.shelter,slot.peek)+1.5f;
        if(localGoal&&atSlot)return FindPath(map,s.position,goal,own);
    }

    const auto& route=s.assignment.teamPlan.route;
    const bool moving=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally;
    if(s.assignment.id&&moving&&!tactics.emergency&&Distance(s.position,goal)<3&&ClearLine(map,s.position,goal,.48f))return {goal};
    if(route&&moving&&!tactics.emergency){
        auto path=s.cognition&&(s.assignment.execution.completion==Completion::Occupy||s.assignment.execution.completion==Completion::Observe)?
            FollowFinalApproach(map,*route,s.position,goal):FollowCorridor(map,*route,s.position,goal);
        if(path.empty()&&s.assignment.id&&CorridorDistance(*route,s.position)>4){
            // Rejoin through the route entry after a local interruption, never cut its interior.
            // The join leg is his own walk, so it takes the cautious path; the corridor does not.
            auto join=cautious(route->start),rest=FollowCorridor(map,*route,route->start,goal);
            if(!join.empty()&&!rest.empty()){join.insert(join.end(),rest.begin(),rest.end());return join;}
        }
        // Without a typed task there is no rejoin: he walks his own cautious path to the goal
        // rather than stand with an order the lane cannot serve.
        if(path.empty()&&!s.assignment.id&&c.offLanePaths)return cautious(goal);
        return path;
    }
    return cautious(goal);
}
struct Runtime { std::vector<Vec3> path;size_t cursor=0;float cooldown=0;float nextSprintCheck=0;bool revealedAhead=false;Vec3 destination{999,999};Tactics tactics;Assignment lastOrder;FireSolution burst;Vec3 progressPosition{};float nextPathCheck=0,avoidUntil=0;bool trafficWaiting=false;std::vector<Vec3> parkingPath;size_t parkingCursor=0;Vec3 parkingGoal{999,999};int burstRounds=0,burstLength=0,bursts=0;
    uint64_t pathKnown=0;CoverRule lastCoverRule=CoverRule::None;
    float riseUntil=0; // plan 029 M-A1 (Config::prone): getting up from prone, frozen and silent until then
    // Plan 029 M-C (Config::vaulting): the vault in progress, its landing, and the reason and stance
    // he had at take-off (given back on landing; he does not think while vaulting).
    float vaultStart=0,vaultEnd=0;Vec3 vaultTo{};Reason vaultReason=Reason::Search;Stance vaultStance=Stance::Standing; };
struct Projectile { Vec3 p,velocity;int owner;size_t shot;float mass=0,dragK=0;std::array<bool,UnitCount> suppressed{},struck{}; bool delivered=false; };
// Decision code receives only self/remembered contacts and friendly positions.
// It has no authoritative enemy roster or hidden enemy positions.
static bool UsefulCover(const Soldier& s,const Map& map,const Tactics& memory,float time) {
    if(!memory.assigned||std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))>1.5f)return false;
    bool angle=false;
    const Stance stance=ShelterStance(memory);
    for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<8) {
        // Once an angle is found only a visible contact can still change the answer (to false).
        if(angle&&!ct.visible)continue;
        // One query serves both tests below: the original asked it twice with identical arguments.
        const bool covered=ProtectedAt(map,memory.shelter,ct.position,stance);
        if(ct.visible&&!covered)return false;
        if(!angle&&covered&&ClearLine3D(map,memory.peek+Vec3{0,0,memory.proneCover?Posture(Stance::Crouched).muzzle:1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))angle=true;
    }
    return angle;
}
bool BetterCoverNearby(const Map& map,const Soldier& s,const std::vector<Vec3>& friends,Tactics& memory,float time,VaultClass cls,bool byPath){
    if(!memory.assigned)return false;
    std::vector<KnownThreat> threats;uint64_t known=0;KnownThreats(s,time,threats,known);
    if(threats.empty())return false;
    auto protects=[&](Vec3 p,Stance posture){int count=0;for(const auto& threat:threats)if(ProtectedAt(map,p,threat.position,posture))++count;return count;};
    const int current=protects(memory.shelter,ShelterStance(memory));
    if(current>=int(threats.size()))return false; // His cover already answers every enemy he knows about.
    const CoverPosition* best=nullptr;int bestCount=current;float bestTravel=1e9f;
    // Plan 029 M-C2 (byPath): the qualifying candidates in (more enemies answered, shorter straight line,
    // catalogue) order; each one's path is asked only while its straight line could still beat the best
    // path so far (a path is never shorter than the line), and the limit is on the path's length.
    struct Qualified {int count;float travel;uint32_t index;};std::vector<Qualified> qualified;
    const auto& covers=CoverPositions(map);
    for(size_t index=0;index<covers.size();++index){const auto& cover=covers[index];
        const float travel=Distance(s.position,cover.shelter);
        if(travel<.5f||travel>Caution().betterCover||!Walkable(map,cover.shelter)||!ClearLine(map,cover.shelter,cover.peek,.48f))continue;
        bool occupied=false;
        for(Vec3 ally:friends)if(Distance(ally,cover.shelter)<2.f||Distance(ally,cover.peek)<1.8f)occupied=true;
        if(occupied)continue;
        const int count=protects(cover.shelter,CoverStance(cover));
        if(count<=current)continue;
        if(byPath){qualified.push_back({count,travel,uint32_t(index)});continue;}
        if(!best||count>bestCount||(count==bestCount&&travel<bestTravel)){best=&cover;bestCount=count;bestTravel=travel;}
    }
    if(byPath){
        std::sort(qualified.begin(),qualified.end(),[](const Qualified& a,const Qualified& b){
            return a.count>b.count||(a.count==b.count&&(a.travel<b.travel||(a.travel==b.travel&&a.index<b.index)));});
        uint32_t bestIndex=0;
        for(const auto& q:qualified){
            if(best&&(q.count<bestCount||q.travel>bestTravel))break;
            const auto& cover=covers[q.index];
            const auto path=FindPath(map,s.position,cover.shelter,cls);if(path.empty())continue;
            const float travel=std::max(q.travel,PathTravel(map,s.position,path,cls));
            if(travel>Caution().betterCover)continue;
            if(!best||travel<bestTravel||(travel==bestTravel&&q.index<bestIndex)){best=&cover;bestCount=q.count;bestTravel=travel;bestIndex=q.index;}
        }
        if(!best)return false;
    }else if(!best||FindPath(map,s.position,best->shelter,cls).empty())return false;
    const float ready=memory.readyAt;memory={};memory.readyAt=ready;
    memory.assigned=true;memory.halfCover=best->crouch;memory.proneCover=best->prone;memory.shelter=best->shelter;memory.peek=best->peek;
    memory.coverId=best->id;memory.geometryRevision=map.revision;memory.lastProgress=time;memory.travelPosition=s.position;
    memory.expires=time+12+bestTravel/1.5f;memory.coverRule=CoverRule::BetterCover;
    return true;
}
int PinnedNeighbours(std::array<Soldier,UnitCount>& soldiers,const Map& map,const Config& c,const std::function<bool(const Soldier&)>& atCover){
    const auto& pin=PinRules();std::array<bool,UnitCount> lifted{};int lifts=0;
    auto settled=[&](const Soldier& q){const Task task=q.assignment.task;
        if(q.vaulting||q.action==Action::Advance||q.action==Action::Retreat)return false;
        if(task==Task::Advance||task==Task::Rally||task==Task::Flank||task==Task::BoundMove||task==Task::ClearLane||task==Task::PullBack)return false;
        return atCover(q);};
    for(const auto& p:soldiers)if(p.Active()&&p.suppression>DuckThreshold(c,p.team))
        for(const auto& q:soldiers)if(q.id!=p.id&&!lifted[q.id]&&q.Active()&&q.squad==p.squad&&Distance(q.position,p.position)<=pin.neighbourRadius&&settled(q)&&
            ClearLine3D(map,p.position+Vec3{0,0,Posture(p.stance).eye},q.position+Vec3{0,0,Posture(q.stance).eye}))lifted[q.id]=true;
    for(auto& q:soldiers)if(lifted[q.id]){const float floor=std::min(c.neighbourEffect,DuckThreshold(c,q.team)-pin.neighbourMargin);
        if(q.suppression<floor){q.suppression=floor;++lifts;}}
    return lifts;
}
bool KeepDownApplies(const Soldier& s,const Config& c,float time){return s.suppression>DuckThreshold(c,s.team)||time-s.aboveDuckAt<=c.keepDownGrace;}
// Plan 030 M-S7 P1 (Config::gradedPeek): the one draw of a settle, counter-based (SplitMix64 of the battle seed, the
// man and the time), so the battle's random stream is never touched: with the rule off nothing is drawn at all.
float SettleDraw(uint32_t seed,int soldier,float time){
    uint64_t x=(uint64_t(seed)<<32)^(uint64_t(uint32_t(soldier))<<24)^uint64_t(uint32_t(std::lround(double(time)*1000)));
    x+=0x9E3779B97F4A7C15ull;x=(x^(x>>30))*0xBF58476D1CE4E5B9ull;x=(x^(x>>27))*0x94D049BB133111EBull;x^=x>>31;
    return float(x>>40)/16777216.f;
}
float GradedPeekChance(const Config& c,float suppression){return std::max(c.peekFloor,std::pow(std::max(0.f,1-suppression),c.peekCurve));}
Order ChooseOrderBase(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time,DecisionAlternatives* alternatives,bool* openGround) {
    Doctrine d=s.team?c.emberDoctrine:c.doctrine;
    const VaultClass own=VaultClassOf(s,c); // plan 029 M-C: his reachability takes his vault class (None when off)
    float sign=s.team?-1.f:1.f;
    Vec3 objective=s.assignment.task==Task::None?s.position:s.assignment.position;
    int threat=-1;float nearest=1e9f;bool visible=false;
    for(int i=0;i<UnitCount;++i) {
        const auto& ct=s.contacts[i]; if(!ct.known||time-ct.observedAt>10) continue;
        float dist=Distance(s.position,ct.position);
        if((ct.visible&&!visible)||(ct.visible==visible&&dist<nearest)) {nearest=dist;threat=i;visible=ct.visible;}
    }
    // Plan 028 Stage 1d: a live covering payload names the enemy he is to fire on. Unless he sees an
    // enemy himself, that is the threat he watches, peeks at and fires on; his duck, pinned and
    // under-fire rules are unchanged.
    const int requestedEnemy=FirePayloadLive(s,time)?s.assignment.fireEnemy:-1;
    if(requestedEnemy>=0&&!visible){const auto& ct=s.contacts[requestedEnemy];
        if(ct.known&&time-ct.observedAt<=10){threat=requestedEnemy;nearest=Distance(s.position,ct.position);}}
    const bool requestedThreat=requestedEnemy>=0&&threat==requestedEnemy;
    // Old cover is not an indefinite hold order. Once contact has expired,
    // follow a changed mission unless incoming fire still demands shelter.
    // A holder's protective shelter may lie up to 8 m from his post (protectHold below). Releasing it at 3 m
    // sent him back to the post, where it was assigned again: a shuttle every 0.4 s with no enemy in sight.
    const bool holdingPost=s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||s.assignment.task==Task::RearGuard;
    if(threat<0&&s.suppression<0.08f&&memory.assigned&&
        Distance(memory.shelter,objective)>(holdingPost&&memory.emergency?8.f:3.f)&&s.assignment.task!=Task::None) {
        const float ready=memory.readyAt;memory={};memory.readyAt=ready;
    }
    if(memory.assigned){
        if(Distance(s.position,memory.travelPosition)>0.25f||s.waitingPassage>=0){memory.lastProgress=time;memory.travelPosition=s.position;}
        if(Distance(s.position,memory.shelter)>1.5f&&time-memory.lastProgress<2)memory.expires=std::max(memory.expires,time+3);
    }
    const bool rearGuard=s.assignment.task==Task::RearGuard;
    const Vec3 enemy=threat>=0?s.contacts[threat].position:s.assignment.sector;
    const float duckAt=d==Doctrine::Cautious?0.40f:d==Doctrine::Aggressive?0.65f:0.52f;
    const bool pressure=s.suppression>duckAt;
    const bool terrainScreen=s.assignment.id&&!ClearLine3DSolid(map,enemy+Vec3{0,0,1.5f},s.position+Vec3{0,0,BodyHeight(s.stance)*.8f}); // a hedge is no screen (plan 029)
    const bool exposed=!terrainScreen&&!ProtectedAt(map,s.position,enemy,s.stance);
    // A firing edge is deliberately exposed, but has a remembered shelter to duck
    // into. Open-ground firing has no such refuge and must trigger self-preservation.
    const bool nearShelter=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<1.5f&&
        ProtectedAt(map,memory.shelter,enemy,ShelterStance(memory));
    const bool openFire=exposed&&!nearShelter&&s.suppression>0.08f;
    const bool exposedStop=visible&&exposed&&!nearShelter&&(s.action==Action::Fire||s.action==Action::Hold);
    const bool protectHold=(s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||rearGuard)&&Distance(s.position,objective)<1.5f&&exposed&&!memory.assigned;
    // The user's rule (plan 020). Under fire is what the soldier himself has: rounds close
    // enough to suppress him within the last second or two. A movement order more than a short
    // walk from his remembered cover releases it when he is NOT under fire, so "I have a useful
    // window here" no longer beats the order and usefulCover cannot renew what he has left; a
    // squad-wide retreat is obeyed whatever the fire. nearShelter above is deliberately read
    // before the release: on the tick he gives up the cover he is still standing in it.
    const bool orderedMove=s.assignment.task==Task::Advance||s.assignment.task==Task::Rally||s.assignment.task==Task::Flank||
        s.assignment.task==Task::BoundMove||s.assignment.task==Task::ClearLane||s.assignment.task==Task::PullBack;
    const bool underFire=pressure||s.suppression>Caution().underFireSuppression;
    // Only a position he has actually reached is released: releasing one he is still walking to
    // would let the cover search re-choose every think and shuttle him between two shelters.
    const bool atShelter=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<1.5f;
    CoverRule verdict=CoverRule::None; // survives the resets the cover search makes below, so the trace still sees it
    if(c.threatAwarePaths&&memory.assigned&&!memory.emergency&&orderedMove&&
        (s.assignment.task==Task::PullBack||(atShelter&&!underFire&&Distance(memory.shelter,objective)>Caution().orderedAway))){
        const float ready=memory.readyAt;const bool retreat=s.assignment.task==Task::PullBack;
        memory={};memory.readyAt=ready;verdict=retreat?CoverRule::ObeyedRetreat:CoverRule::ReleasedByOrder;memory.coverRule=verdict;
    }
    const bool usefulCover=UsefulCover(s,map,memory,time);
    if(alternatives&&usefulCover)alternatives->Add(memory.shelter,-1,"retain useful current cover");
    const bool assignedHold=s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||s.assignment.task==Task::Overwatch||s.assignment.task==Task::Window||rearGuard;
    if(usefulCover||(nearShelter&&threat>=0&&(!visible||assignedHold)))memory.expires=std::max(memory.expires,time+12);
    // Under fire in cover he stays, so the position may not expire out from under him.
    if(c.threatAwarePaths&&underFire&&nearShelter&&memory.assigned)memory.expires=std::max(memory.expires,time+12);
    const bool contactExposure=visible&&exposed&&!nearShelter&&
        (s.assignment.task==Task::Advance||s.assignment.task==Task::Hold||s.assignment.task==Task::Rally||s.assignment.task==Task::None);
    if(memory.emergency&&memory.assigned&&ProtectedAt(map,memory.shelter,enemy,ShelterStance(memory))&&
        (pressure||(holdingPost&&Distance(memory.shelter,objective)<8)))memory.expires=std::max(memory.expires,time+3);
    if(memory.emergency&&time>=memory.expires&&!pressure){memory.assigned=false;memory.emergency=false;}
    const bool localSafety=(pressure&&exposed)||openFire||exposedStop||contactExposure||protectHold||(memory.emergency&&memory.assigned&&time<memory.expires);
    // The one way out of cover while under fire: better cover close by. Otherwise he stays,
    // which the memory block below does once its expiry is renewed above.
    if(c.threatAwarePaths&&underFire&&nearShelter&&orderedMove&&memory.assigned&&!memory.emergency&&!localSafety){
        if(BetterCoverNearby(map,s,friends,memory,time,own,c.vaulting))
            return {memory.shelter,Action::Cover,Reason::Relocate,memory.halfCover?Stance::Crouched:Stance::Standing};
        memory.coverRule=CoverRule::StayedUnderFire;
    }
    const bool maneuverArrival=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank;
    if(maneuverArrival&&!memory.assigned&&Distance(s.position,objective)<1.5f){
        for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,objective)<.75f&&ClearLine(map,cover.shelter,cover.peek,.48f)){
            memory={};memory.coverRule=verdict;memory.assigned=true;memory.halfCover=cover.crouch;memory.proneCover=cover.prone;memory.shelter=cover.shelter;memory.peek=cover.peek;
            memory.coverId=cover.id;memory.geometryRevision=map.revision;memory.lastProgress=time;memory.expires=time+180;
            if(!cover.crouch)for(int step=1;step<=60;++step){Vec3 trial=cover.shelter+(cover.peek-cover.shelter)*(step/60.f);
                if(ClearLine3D(map,trial+Vec3{0,0,1.5f},enemy+Vec3{0,0,1.45f})){memory.peek=trial;break;}}
            break;
        }
    }
    if(s.assignment.task==Task::BoundMove&&!localSafety&&!memory.assigned) {
        memory.assigned=false;
        return {objective,Distance(s.position,objective)>0.7f?Action::Advance:visible?Action::Fire:Action::Hold,Reason::BoundAdvance};
    }
    // A lane clearance is the one movement order that runs with cover assigned, so the cover
    // rule has to stop it explicitly; every other one already waits on !memory.assigned.
    if(s.assignment.task==Task::ClearLane&&!localSafety&&!(c.threatAwarePaths&&underFire&&nearShelter&&memory.assigned)) {
        memory.assigned=false;
        return {objective,Distance(s.position,objective)>0.7f?Action::Cover:visible?Action::Fire:Action::Hold,Reason::ClearLane};
    }
    if((s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||(s.assignment.task==Task::Rally&&!usefulCover))&&!localSafety&&!memory.assigned) {
        memory.assigned=false;const bool fallingBack=s.assignment.task==Task::PullBack;
        if(s.regrouping&&!fallingBack)return {s.position,Action::Hold,Reason::Regroup};
        return {objective,Distance(s.position,objective)>0.7f?(fallingBack?Action::Retreat:Action::Advance):visible?Action::Fire:Action::Hold,
            fallingBack?Reason::SquadPullBack:s.assignment.task==Task::Rally?Reason::Regroup:Reason::SquadFlank};
    }
    const bool overwatch=s.assignment.task==Task::Overwatch||s.assignment.task==Task::Window||(rearGuard&&s.machineGun);
    if(rearGuard&&!localSafety) {
        if(memory.assigned&&Distance(memory.shelter,objective)>6)memory.assigned=false;
        if(!memory.assigned&&Distance(s.position,objective)>0.7f)
            return {objective,Action::Cover,Reason::RearPosition};
    }
    if(s.assignment.task==Task::BoundCover&&!memory.assigned&&(!localSafety||Distance(s.position,objective)<1)) {
        for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,objective)<0.6f) {
            const Stance sheltered=CoverStance(cover);
            bool safe=ProtectedAt(map,cover.shelter,enemy,sheltered);
            for(const auto& ct:s.contacts)if(ct.visible&&!ProtectedAt(map,cover.shelter,ct.position,sheltered))safe=false;
            if(!safe)continue;
            memory={};memory.coverRule=verdict;memory.assigned=true;memory.halfCover=cover.crouch;memory.proneCover=cover.prone;memory.shelter=cover.shelter;memory.peek=cover.peek;
            if(!cover.crouch)for(int step=1;step<=60;++step){Vec3 trial=cover.shelter+(cover.peek-cover.shelter)*(step/60.f);
                if(ClearLine3D(map,trial+Vec3{0,0,1.5f},enemy+Vec3{0,0,1.45f})){memory.peek=trial;break;}}
            memory.expires=time+180;memory.lastProgress=time;break;
        }
    }
    // Plan 028 Stage 4 (Config::coverShift): a shift order names a catalogue cover with a line onto the enemy
    // he is to cover. He takes its shelter and, at a tall wall, the edge that bears on that enemy, as a
    // BoundCover man takes his. Only a shift order carries fireShift.
    if(s.assignment.fireShift&&requestedThreat&&(s.assignment.task==Task::Hold||s.assignment.task==Task::Overwatch)&&
        !memory.assigned&&(!localSafety||Distance(s.position,objective)<1)) {
        for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,objective)<0.1f) {
            const Stance sheltered=CoverStance(cover);
            bool safe=ProtectedAt(map,cover.shelter,enemy,sheltered);
            for(const auto& ct:s.contacts)if(ct.visible&&!ProtectedAt(map,cover.shelter,ct.position,sheltered))safe=false;
            if(!safe)break;
            memory={};memory.coverRule=verdict;memory.assigned=true;memory.halfCover=cover.crouch;memory.proneCover=cover.prone;memory.shelter=cover.shelter;memory.peek=cover.peek;
            if(!cover.crouch)for(int step=1;step<=60;++step){Vec3 trial=cover.shelter+(cover.peek-cover.shelter)*(step/60.f);
                if(ClearLine3D(map,trial+Vec3{0,0,1.5f},{enemy.x,enemy.y,s.contacts[threat].aimHeight})){memory.peek=trial;break;}}
            memory.expires=time+60;memory.lastProgress=time;memory.travelPosition=s.position;break;
        }
    }
    if(overwatch&&!memory.assigned&&(!localSafety||Distance(s.position,objective)<0.7f)) {
        bool safe=Walkable(map,objective)&&ProtectedAt(map,objective,enemy,Stance::Crouched);
        for(const auto& ct:s.contacts)if(ct.known&&!ProtectedAt(map,objective,ct.position,Stance::Crouched))safe=false;
        if(safe) {
            const float ready=memory.readyAt;
            memory={};memory.coverRule=verdict;memory.assigned=true;memory.halfCover=true;memory.readyAt=ready;
            memory.shelter=memory.peek=objective;memory.expires=time+300;memory.lastProgress=time;
        }
    }
    if(threat<0&&!overwatch&&!localSafety&&!memory.assigned) {
        memory.assigned=false;
        if(rearGuard)return {objective,Distance(s.position,objective)>0.7f?Action::Cover:Action::Hold,Reason::RearFire};
        if(s.assignment.task==Task::None)return {s.position,Action::Hold,Reason::AwaitOrders};
        if(s.regrouping)return {s.position,Action::Hold,Reason::Regroup};
        if(Distance(s.position,objective)<0.6f)return {s.position,Action::Hold,Reason::AtWaypoint};
        return {objective,Action::Advance,s.assignment.task==Task::Rally?Reason::Regroup:Reason::OrderedAdvance};
    }
    // Hysteresis avoids bouncing between shelter and fire at one threshold.
    bool pinned=s.suppression>0.72f||(s.reason==Reason::Suppressed&&s.suppression>0.35f);
    bool flanked=false;
    if(memory.assigned) {
        if(memory.defensiveOnly&&threat>=0&&ClearLine3D(map,{memory.peek.x,memory.peek.y,memory.peek.z+(memory.proneCover?Posture(Stance::Crouched).muzzle:1.5f)},{enemy.x,enemy.y,s.contacts[threat].aimHeight}))memory.defensiveOnly=false;
        const Stance sheltered=ShelterStance(memory);
        for(const auto& ct:s.contacts) if(ct.visible&&!ProtectedAt(map,memory.shelter,ct.position,sheltered)) flanked=true;
        if(!flanked&&time<memory.expires) {
            const bool sustained=s.machineGun&&overwatch;
            bool threatened=pinned||s.suppression>duckAt;
            // Plan 030 M-S7 P1 (Config::gradedPeek): a graded peek is not cut short by the fire that is on him: he
            // stays up until he has fired a round, been hit, or peekHold has passed; then the rules as they stand.
            if(c.gradedPeek&&memory.gradedPeek) {
                if(memory.peeking&&s.rounds==memory.roundsAtPeek&&s.health>=memory.healthAtPeek&&time-memory.gradedAt<PinRules().peekHold)threatened=false;
                else memory.gradedPeek=false;
            }
            if(memory.peeking&&(threatened||s.reloadUntil>time)) {
                memory.peeking=false;memory.phaseUntil=time+0.7f;memory.lastProgress=time;memory.lastDistance=1e9f;
            }
            Vec3 goal=memory.peeking?memory.peek:memory.shelter;
            float dist=Distance(s.position,goal);
            if(dist<memory.lastDistance-0.10f) {memory.lastDistance=dist;memory.lastProgress=time;}
            if(dist>0.12f&&time-memory.lastProgress<(memory.emergency?1.5f:4.f)) return {goal,Action::Cover,pinned?Reason::Suppressed:memory.emergency?Reason::EmergencyCover:memory.peeking?Reason::Peek:overwatch?Reason::Overwatch:Reason::Contact,
                memory.halfCover&&dist<1.5f?Stance::Crouched:Stance::Standing};
            if(dist<=0.12f) {
                if(memory.defensiveOnly)return {memory.shelter,Action::Hold,Reason::ProtectedHold,sheltered};
                if(memory.phaseUntil<0)memory.phaseUntil=time;
                if(!memory.peeking&&time>=memory.phaseUntil&&time>=s.reloadUntil&&!pinned&&!NervePinned(s,c)&&s.suppression<(d==Doctrine::Cautious?0.25f:d==Doctrine::Aggressive?0.5f:0.35f)) {
                    memory.peeking=true;memory.phaseUntil=-1;memory.lastDistance=1e9f;memory.lastProgress=time;
                    memory.roundsAtPeek=s.rounds;memory.healthAtPeek=s.health;
                    // At prone cover (a crater rim) he pops up crouched: his crouched muzzle clears the rim (plan 029).
                    return {memory.peek,memory.halfCover?Action::Fire:Action::Cover,sustained?Reason::SuppressiveFire:memory.halfCover?Reason::PopUp:Reason::Peek,PeekStance(memory)};
                }
                // Plan 030 M-S7 P1 (Config::gradedPeek, Jordan's rule 1): above his duck threshold he is not hard-ducked.
                // Each settle he comes up for one round with chance max(peekFloor, (1 - suppression)^peekCurve), one
                // draw a settle; otherwise he stays down another settle. Below the threshold nothing changes, nor for a
                // man holding a movement order (plan 020 holds him in cover under fire; the rule never touches him).
                if(c.gradedPeek&&!orderedMove&&!memory.peeking&&time>=memory.phaseUntil&&time>=s.reloadUntil&&!NervePinned(s,c)&&s.suppression>duckAt) {
                    memory.gradedDrawAt=time;
                    if(SettleDraw(c.seed,s.id,time)<GradedPeekChance(c,s.suppression)) {
                        memory.peeking=true;memory.phaseUntil=-1;memory.lastDistance=1e9f;memory.lastProgress=time;
                        memory.roundsAtPeek=s.rounds;memory.healthAtPeek=s.health;memory.gradedPeek=true;memory.gradedAt=time;
                        return {memory.peek,memory.halfCover?Action::Fire:Action::Cover,sustained?Reason::SuppressiveFire:memory.halfCover?Reason::PopUp:Reason::Peek,PeekStance(memory)};
                    }
                    memory.phaseUntil=time+PinRules().settleSeconds;
                }
                return {goal,memory.peeking?Action::Fire:Action::Hold,
                    pinned?Reason::Suppressed:memory.peeking?(sustained?Reason::SuppressiveFire:memory.halfCover?Reason::PopUp:Reason::CoverFire):memory.halfCover?Reason::Duck:Reason::Settle,
                    memory.peeking?PeekStance(memory):sheltered};
            }
        }
    }
    // Plan 028 Stage 1d: on the post he was tasked from, sheltered from the threat he is to cover and
    // with a line onto it standing, he rises and fires from where he is: nobody moves to get a line.
    if(requestedThreat&&!visible&&!exposed&&!localSafety&&!pinned&&!NervePinned(s,c)&&!flanked&&!memory.assigned&&
        (s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||s.assignment.task==Task::Overwatch||s.assignment.task==Task::Window)&&
        Distance(s.position,objective)<1.5f&&ClearLine3D(map,{s.position.x,s.position.y,s.position.z+1.5f},{enemy.x,enemy.y,s.contacts[threat].aimHeight}))
        return {s.position,Action::Fire,Reason::CoverFire,Stance::Standing};
    const bool relocating=memory.assigned;

    memory.assigned=false;
    // Pair genuinely sheltered positions with reachable firing edges. Reserve both.
    Vec3 best{},bestPeek{};bool bestHalf=false,bestProne=false,bestDefensive=false;float bestScore=1e9f;
    const auto& covers=CoverPositions(map);
    // Plan 029 M-C2 (Config::vaulting): a candidate's travel is the length of his own-class path to it
    // (PathTravel, a vault at its seconds), not the straight line, in its score and its limit. The straight-
    // line score is a lower bound of it, so both searches below stay exact. Off: the straight line.
    const bool byPath=c.vaulting;
    float bestTravel=0;
    auto pathScore=[&](float score,float straight,const std::vector<Vec3>& path,float limit,float& travel){
        travel=std::max(straight,PathTravel(map,s.position,path,own));
        return travel>limit?1e9f:score+(travel-straight)*(localSafety?3.f:0.9f);};
    // Loop-invariant: the soldier's own stair test does not depend on the candidate.
    const bool onStairs=localSafety&&OnStairs(map,s.position);
    const float aimZ=threat>=0?s.contacts[threat].aimHeight:enemy.z+1.65f;
    // At prone cover he fires crouched over the rim (plan 029 M-A2): his firing line starts at the crouched muzzle.
    auto firingLine=[&](Vec3 at,bool prone=false){return ClearLine3D(map,{at.x,at.y,at.z+(prone?Posture(Stance::Crouched).muzzle:1.5f)},{enemy.x,enemy.y,aimZ});};
    if(!alternatives) {
        // Exact reordering of the search below (the traced branch keeps the original loop).
        // The score depends on the shelter only, never on the peek, and the original keeps
        // the first candidate, in catalogue order, with the lowest score among those that
        // pass every test and have a path. Every test is a pure geometric query (memo tables
        // change speed only), so the same candidate is found by visiting candidates in
        // (score, catalogue index) order and stopping at the first that passes every test and
        // has a path. Shelter-only tests run first; the peek walk runs only for the few left.
        struct Ranked {float score;uint32_t index;};
        std::vector<Ranked> ranked;
        const bool advanceBound=s.assignment.task==Task::Advance&&!pinned&&!localSafety;
        const float advanceLimit=advanceBound?Distance(s.position,objective)+1:0.f;
        const float rearLimit=rearGuard&&localSafety?std::max(sign*s.position.x,sign*objective.x)+2:0.f;
        const bool protectBound=protectHold&&!openFire&&!exposedStop&&!pressure;
        const bool stationBound=(overwatch||rearGuard)&&!localSafety;
        for(size_t index=0;index<covers.size();++index) {
            const auto& candidate=covers[index];
            const Vec3 p=candidate.shelter;
            if(localSafety&&!onStairs&&std::abs(p.z-s.position.z)>0.5f)continue;
            if(candidate.window&&s.assignment.task!=Task::Window&&s.assignment.task!=Task::Overwatch&&!rearGuard&&!localSafety)continue;
            const float travel=Distance(s.position,p);
            if(travel>(localSafety?35.f:candidate.window?30.f:20.f))continue;
            const float toObjective=Distance(p,objective);
            if(stationBound&&toObjective>6)continue;
            if(rearGuard&&localSafety&&sign*p.x>rearLimit)continue;
            if(protectBound&&toObjective>8)continue;
            if(advanceBound&&toObjective>advanceLimit)continue;
            float score=(candidate.window?(p.z>1?-8.f:-3.f):0.f)+travel*(localSafety?3.f:0.9f)+toObjective*(localSafety?0.1f:d==Doctrine::Aggressive?1.3f:0.65f);
            if(d==Doctrine::Cautious) score+=std::max(0.f,22-Distance(p,enemy));
            if(!(score<bestScore))continue; // never selectable (the original compares against 1e9)
            ranked.push_back({score,uint32_t(index)});
        }
        std::sort(ranked.begin(),ranked.end(),[](const Ranked& x,const Ranked& y){return x.score<y.score||(x.score==y.score&&x.index<y.index);});
        uint32_t bestIndex=0;
        for(const auto& rank:ranked) {
            if(byPath&&rank.score>bestScore)break; // no path can bring it under the best
            const auto& candidate=covers[rank.index];
            const Vec3 p=candidate.shelter;
            if(!Walkable(map,p))continue;
            bool occupied=false;
            for(Vec3 ally:friends) if(Distance(ally,p)<2.0f) {occupied=true;break;}
            if(occupied)continue;
            const Stance sheltered=CoverStance(candidate);
            if(!ProtectedAt(map,p,enemy,sheltered))continue;
            bool candidateExposed=false;
            for(const auto& ct:s.contacts) if(ct.visible) {
                // ProtectedAt(p,enemy) is already known true; an identical query needs no repeat.
                if(std::memcmp(&ct.position,&enemy,sizeof(Vec3))==0)continue;
                if(!ProtectedAt(map,p,ct.position,sheltered)) {candidateExposed=true;break;}
            }
            if(candidateExposed)continue;
            Vec3 peek=candidate.peek;bool found=false;
            if(!candidate.crouch)for(int step=1;step<=60;++step) {
                Vec3 trial=p+(candidate.peek-p)*(step/60.f);
                if(firingLine(trial)) {peek=trial;found=true;break;}
            }
            // A peek found by the walk has just been tested with this exact query.
            const bool defensive=found?false:!firingLine(peek,candidate.prone);
            if(defensive){if(!localSafety)continue;peek=p;}
            if(!Walkable(map,peek)||!ClearLine(map,p,peek,0.48f))continue;
            for(Vec3 ally:friends) if(Distance(ally,peek)<1.8f) {occupied=true;break;}
            if(occupied)continue;
            if(stationBound&&Distance(peek,objective)>6)continue;
            if(byPath){
                const auto path=FindPath(map,s.position,p,own);if(path.empty())continue;
                float travel=0;const float score=pathScore(rank.score,Distance(s.position,p),path,localSafety?35.f:candidate.window?30.f:20.f,travel);
                if(!(score<1e8f))continue;
                if(score<bestScore||(score==bestScore&&rank.index<bestIndex)){
                    bestScore=score;bestIndex=rank.index;bestTravel=travel;best=p;bestPeek=peek;bestHalf=candidate.crouch;bestProne=candidate.prone;bestDefensive=defensive;}
                continue;
            }
            if(FindPath(map,s.position,p,own).empty())continue;
            bestScore=rank.score;best=p;bestPeek=peek;bestHalf=candidate.crouch;bestProne=candidate.prone;bestDefensive=defensive;
            break;
        }
    } else {
        for(const auto& candidate:covers) {
                Vec3 p=candidate.shelter,peek=candidate.peek;
                if(localSafety&&!onStairs&&std::abs(p.z-s.position.z)>0.5f)continue;
                if(candidate.window&&s.assignment.task!=Task::Window&&s.assignment.task!=Task::Overwatch&&!rearGuard&&!localSafety)continue;
                float travel=Distance(s.position,p);
                if(travel>(localSafety?35.f:candidate.window?30.f:20.f)||!Walkable(map,p))continue;
                const Stance sheltered=CoverStance(candidate);
                // Stop at the first firing clearance, instead of walking a metre beyond the edge.
                if(!candidate.crouch)for(int step=1;step<=60;++step) {
                    Vec3 trial=p+(candidate.peek-p)*(step/60.f);
                    if(firingLine(trial)) {peek=trial;break;}
                }
                const bool defensive=!firingLine(peek,candidate.prone);
                if(defensive){if(!localSafety)continue;peek=p;}
                if(!Walkable(map,peek)||!ProtectedAt(map,p,enemy,sheltered)||
                    !ClearLine(map,p,peek,0.48f)) continue;
                bool occupied=false,candidateExposed=false;
                for(Vec3 ally:friends) if(Distance(ally,p)<2.0f||Distance(ally,peek)<1.8f) occupied=true;
                for(const auto& ct:s.contacts) if(ct.visible&&!ProtectedAt(map,p,ct.position,sheltered)) candidateExposed=true;
                if(occupied||candidateExposed)continue;
                // Reassessment always retains a valid current shelter as a candidate.
                if((overwatch||rearGuard)&&!localSafety&&(Distance(p,objective)>6||Distance(peek,objective)>6))continue;
                if(rearGuard&&localSafety&&sign*p.x>std::max(sign*s.position.x,sign*objective.x)+2)continue;
                if(protectHold&&!openFire&&!exposedStop&&!pressure&&Distance(p,objective)>8)continue;
                if(s.assignment.task==Task::Advance&&!pinned&&!localSafety&&Distance(p,objective)>Distance(s.position,objective)+1)continue;
                float score=(candidate.window?(p.z>1?-8.f:-3.f):0.f)+travel*(localSafety?3.f:0.9f)+Distance(p,objective)*(localSafety?0.1f:d==Doctrine::Aggressive?1.3f:0.65f);
                if(d==Doctrine::Cautious) score+=std::max(0.f,22-Distance(p,enemy));
                if(alternatives)alternatives->Add(p,score,"geometrically suitable; scored before reachability");
                if(byPath){
                    if(!(score<bestScore))continue;
                    const auto path=FindPath(map,s.position,p,own);if(path.empty())continue;
                    float pathTravel=0;const float scored=pathScore(score,travel,path,localSafety?35.f:candidate.window?30.f:20.f,pathTravel);
                    if(scored<bestScore){bestScore=scored;bestTravel=pathTravel;best=p;bestPeek=peek;bestHalf=candidate.crouch;bestProne=candidate.prone;bestDefensive=defensive;}
                    continue;
                }
                if(score<bestScore&&!FindPath(map,s.position,p,own).empty()) {bestScore=score;best=p;bestPeek=peek;bestHalf=candidate.crouch;bestProne=candidate.prone;bestDefensive=defensive;}
        }
    }
    if(bestScore<1e8f) {
        memory={};memory.coverRule=verdict;memory.assigned=true;memory.halfCover=bestHalf;memory.proneCover=bestProne;memory.shelter=best;memory.peek=bestPeek;memory.lastProgress=time;
        memory.emergency=localSafety;memory.defensiveOnly=bestDefensive;
        memory.expires=time+(byPath?bestTravel:Distance(s.position,best))/1.5f+(localSafety?6.f:d==Doctrine::Cautious?22.f:d==Doctrine::Aggressive?10.f:16.f);
        return {best,Action::Cover,localSafety?Reason::EmergencyCover:pinned?Reason::Suppressed:flanked?Reason::Flanked:relocating?Reason::Relocate:Reason::Contact};
    }
    if(pinned||(pressure&&exposed)||openFire||exposedStop||contactExposure) {
        if(openGround)*openGround=true; // plan 029 M-A1: every cover search has failed him here
        Vec3 away=s.position+Normal(s.position-enemy)*5.f;
        away.x=Clamp(away.x,-map.halfWidth+1,map.halfWidth-1);
        away.y=Clamp(away.y,-map.halfHeight+1,map.halfHeight-1);
        if(!FindPath(map,s.position,away,own).empty())return {away,Action::Retreat,pressure?Reason::Suppressed:Reason::EmergencyCover,Stance::Crouched};
        return {s.position,Action::Hold,Reason::Suppressed,Stance::Crouched};
    }
    if(rearGuard)return {objective,Distance(s.position,objective)>0.7f?Action::Cover:visible?Action::Fire:Action::Hold,Reason::RearFire};
    if(((s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover)&&Distance(s.position,objective)<1)||s.regrouping)
        return {s.position,visible?Action::Fire:Action::Hold,s.regrouping?Reason::Regroup:Reason::AtWaypoint};
    float preferred=d==Doctrine::Aggressive?15.f:d==Doctrine::Cautious?34.f:26.f;
    // Fire on the move: a man attacking with a visible enemy inside walking-fire range
    // presses on to his ordered objective and shoots as he goes, instead of stopping
    // where he happens to stand. Outside that range, or on any other movement, he halts
    // and fires as before. The walking order itself is checked once he is moving.
    const bool pressOn=c.movingFire&&visible&&nearest<=WalkingFireRange(s)&&Distance(s.position,objective)>0.7f&&
        AttackMovementTask(s.assignment.task)&&s.magazineRemaining>0&&!FlankHoldsFire(s,time);
    if(visible&&nearest<preferred&&!pressOn) return {s.position,Action::Fire,Reason::ClearShot};
    return {objective,Action::Advance,visible?Reason::Search:Reason::LostContact};
}
Order ChooseOrder(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time,DecisionAlternatives* alternatives) {
    // Plan 031 D: an order of the fire-and-movement drill (its marker is only ever set with Config::fireAndMovement)
    // passes its gate; every other order is decided exactly as before.
    if(s.assignment.fm.gun>=0)return ApplyFireMovement(s,map,c,friends,memory,time,alternatives);
    return ChooseOrderPlain(s,map,c,friends,memory,time,alternatives);
}
Order ChooseOrderPlain(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time,DecisionAlternatives* alternatives) {
    if(!c.prone)return ChooseOrderBase(s,map,c,friends,memory,time,alternatives,nullptr);
    // The cover search resets his memory freely; when he went down is his own.
    const float since=memory.proneSince;bool open=false;
    const Order decided=ChooseOrderBase(s,map,c,friends,memory,time,alternatives,&open);
    memory.proneSince=since;
    return ApplyProne(s,map,c,memory,time,decided,open);
}
// Plan 029 M-A1. Own position, the map and the enemies he knows of (his contacts and the reports he
// has received): never an enemy body.
bool ProneUseful(const Soldier& s,const Map& map,float time) {
    if(OnStairs(map,s.position))return false;
    for(const auto& b:map.buildings)   // inside the outer walls, as ClearLine3D bounds a building
        if(std::abs(s.position.x-b.center.x)<=b.half.x+.23f&&std::abs(s.position.y-b.center.y)<=b.half.y+.23f)return false;
    std::vector<KnownThreat> threats;uint64_t known=0;KnownThreats(s,time,threats,known);
    const auto& rule=Postures();
    for(const auto& threat:threats)if(Distance(s.position,threat.position)<=rule.threatRange&&
        threat.position.z+rule.threatEye-(s.position.z+Posture(Stance::Prone).body)>rule.threatAbove)return false;
    return true;
}
Order ApplyProne(const Soldier& s,const Map& map,const Config& c,Tactics& memory,float time,const Order& decided,bool openGround) {
    if(!c.prone)return decided;
    const auto& rule=Postures();
    const Doctrine d=s.team?c.emberDoctrine:c.doctrine;
    const float duckAt=d==Doctrine::Cautious?0.40f:d==Doctrine::Aggressive?0.65f:0.52f;
    // Lying where he is: he fires only at an enemy he sees over a clear line from his prone muzzle.
    auto down=[&]{
        const Vec3 muzzle=s.position+Vec3{0,0,Posture(Stance::Prone).muzzle};bool line=false;
        for(const auto& ct:s.contacts)if(ct.known&&ct.visible&&
            ClearLine3D(map,muzzle,{ct.position.x+ct.aimOffset.x,ct.position.y+ct.aimOffset.y,ct.aimHeight})){line=true;break;}
        return Order{s.position,line?Action::Fire:Action::Hold,Reason::Prone,Stance::Prone};
    };
    auto rise=[&]{memory.proneSince=-1;return decided;};
    // Plan 029 M-A2: lying at prone cover (a crater rim) he is there by the cover rules, not these: they
    // shelter him prone and pop him up crouched, and he leaves as he would leave any cover. Only when every
    // cover search has failed him does he stay down there under the rules below, as in the open.
    if(s.stance==Stance::Prone&&!openGround){
        for(const auto& cover:CoverPositions(map))if(cover.prone&&Distance(cover.shelter,s.position)<.3f){memory.proneSince=-1;return decided;}
    }
    if(s.stance!=Stance::Prone) {
        memory.proneSince=-1;
        // He goes down only where every cover search has just failed him, when he is pressed (the rise
        // below needs suppression under duckAt-0.2, so going down only above duckAt leaves a band of
        // 0.2 between the two and he cannot flicker), and where lying down would help.
        if(!openGround||s.suppression<=duckAt||!ProneUseful(s,map,time))return decided;
        memory.proneSince=time;
        return down();
    }
    if(memory.proneSince<0)memory.proneSince=time; // a reset lost the clock: start it again
    const bool held=time-memory.proneSince>=rule.minimumSeconds;
    const bool pinned=s.suppression>0.72f;
    bool quiet=s.suppression<duckAt-rule.riseMargin&&!NervePinned(s,c); // plan 030 S2: nerve holds him down
    if(quiet)for(const auto& ct:s.contacts)if(ct.known&&ct.visible&&Distance(s.position,ct.position)<=rule.riseContact){quiet=false;break;}
    if(held&&quiet)return rise();
    // A squad-wide retreat raises him at once, as it takes a man out of cover under fire (plan 020).
    const bool moves=decided.action!=Action::Hold&&decided.action!=Action::Fire&&Distance(s.position,decided.goal)>.7f;
    if(s.assignment.task==Task::PullBack&&moves)return rise();
    // Still pressed with nowhere to go: he stays down.
    if(openGround)return down();
    if(decided.action==Action::Cover&&Distance(s.position,decided.goal)>.12f) {
        if(!pinned) {
            const auto path=FindPath(map,s.position,decided.goal);
            const float length=path.empty()?1e9f:PathLength(s.position,path);
            // Cover within crawling range: he crawls to it lying down.
            if(length<=rule.crawlRange)return {decided.goal,Action::Cover,decided.reason,Stance::Prone};
            // A move to cover beyond it that the emergency search did not make (an ordered post, a better
            // position, a relocation) raises him once he has been down long enough; the emergency search's
            // own far cover does not: he stays down.
            if(held&&!memory.emergency&&!path.empty())return rise();
        }
        const float ready=memory.readyAt,since=memory.proneSince;
        memory={};memory.readyAt=ready;memory.proneSince=since;   // no reservation he will not use
    }
    return down();
}
// Segment against a vertical body cylinder, expressed relative to its moving centre.
static float SegmentBody(Vec3 a,Vec3 b,float height) {
    Vec3 p{a.x,a.y},v{b.x-a.x,b.y-a.y};
    float aa=Dot(v,v),bb=2*Dot(p,v),cc=Dot(p,p)-0.40f*0.40f;
    float lo=0,hi=1;
    if(aa<1e-10f) {if(cc>0)return -1;}
    else {
        float disc=bb*bb-4*aa*cc;if(disc<0)return -1;
        lo=std::max(lo,(-bb-std::sqrt(disc))/(2*aa));
        hi=std::min(hi,(-bb+std::sqrt(disc))/(2*aa));
    }
    float dz=b.z-a.z;
    if(std::abs(dz)<1e-7f) {if(a.z<0||a.z>height)return -1;}
    else {
        float t0=-a.z/dz,t1=(height-a.z)/dz;if(t0>t1)std::swap(t0,t1);
        lo=std::max(lo,t0);hi=std::min(hi,t1);
    }
    return lo<=hi?lo:-1;
}
float SegmentSoldier(Vec3 a,Vec3 b,Vec3 from,Vec3 to,float height) {
    return SegmentBody({a.x-from.x,a.y-from.y,a.z-from.z},{b.x-to.x,b.y-to.y,b.z-to.z},height);
}
static float SegmentDistance(Vec3 a,Vec3 b,Vec3 p) {
    Vec3 d=b-a;float den=Dot(d,d);
    return Distance(p,a+d*(den>0?Clamp(Dot(p-a,d)/den,0,1):0));
}
float SightRange(const Soldier& s){return s.gun.engagementRange*StatScale(s.stats.Get(Stat::Perception));}
Contact SenseEnemy(const Soldier& observer,const Soldier& target,const Map& map,float time) {
    Contact ct;
    if(!observer.Active()||!target.Active()||observer.team==target.team||!InVisualField(observer,target.position,SightRange(observer)))return ct;
    Vec3 eye=observer.position+Vec3{0,0,Posture(observer.stance).eye};
    Vec3 sight=Normal(target.position-observer.position),side{-sight.y,sight.x};
    for(float fraction:{0.90f,0.72f,0.5f})for(float lateral:{0.f,-0.3f,0.3f}) {
        Vec3 offset=side*lateral,p=target.position+offset;
        float z=target.position.z+BodyHeight(target.stance)*fraction;
        if(ClearLine3D(map,eye,{p.x,p.y,z})) {
            ct.detectionDelay=observer.cognition?(.1f+.5f*Distance(observer.position,target.position)/SightRange(observer)+.25f*(1-fraction)+.1f*std::abs(lateral))/StatScale(observer.stats.Get(Stat::Perception)):0;
            ct.known=ct.visible=true;ct.originalObserver=observer.id;ct.position=target.position;ct.observedAt=time;ct.aimHeight=z;ct.aimOffset=offset;ct.automaticWeapon=target.gun.action==WeaponAction::Automatic;if(time-target.lastShotAt<1)ct.lastFireAt=target.lastShotAt;return ct;
        }
    }
    return ct;
}
Contact SenseFall(const Soldier& observer,const Soldier& target,const Map& map,float time) {
    Contact ct;
    if(!observer.Active()||observer.team==target.team||!InVisualField(observer,target.position,SightRange(observer)))return ct;
    Vec3 eye=observer.position+Vec3{0,0,Posture(observer.stance).eye};
    Vec3 sight=Normal(target.position-observer.position),side{-sight.y,sight.x};
    for(float fraction:{0.90f,0.72f,0.5f})for(float lateral:{0.f,-0.3f,0.3f}) {
        Vec3 offset=side*lateral,p=target.position+offset;
        float z=target.position.z+BodyHeight(target.stance)*fraction;
        if(ClearLine3D(map,eye,{p.x,p.y,z})) {
            // He is in sight: whether he is still in the fight is what the observer sees now.
            if(target.Active())return ct;
            ct.known=true;ct.visible=false;ct.seenDown=true;ct.originalObserver=observer.id;ct.position=target.position;ct.observedAt=time;
            ct.aimHeight=z;ct.aimOffset=offset;ct.automaticWeapon=target.gun.action==WeaponAction::Automatic;return ct;
        }
    }
    return ct;
}
// The organisation flag is a cache of the equipped weapon; no maker may diverge.
void CheckWeaponConsistency(const Frame& f) {
    for(const auto& s:f.soldiers)if(s.machineGun!=(s.gun.action==WeaponAction::Automatic)||s.magazineRemaining>s.gun.magazine)
        throw std::logic_error("Soldier weapon state disagrees with the organisation flag or magazine capacity");
}
bool ResolveDeathmatch(Record& record,const Frame& frame,bool projectilesPending,bool timeLimit) {
    int alive[2]={0,0};for(const auto& s:frame.soldiers)if(s.Active())++alive[s.team];
    if(alive[0]&&alive[1]&&!timeLimit)return false;
    if(projectilesPending&&!timeLimit)return false;
    if(record.config.staticDefence.layout!=DefenceLayout::None) {
        // The attack succeeds only by clearing the position; holding it wins, and
        // every surviving Ember soldier is a defender because the rest start dead.
        record.winner=alive[1]?1:alive[0]?0:-1;
        record.conclusion=alive[1]&&alive[0]?"Time limit: the position still has defenders. Ember holds.":
            alive[1]?"Attacking force destroyed; the position holds.":
            alive[0]?"Every defender incapacitated; the position is taken.":"Both forces eliminated.";
        return true;
    }
    record.winner=alive[0]==alive[1]?-1:alive[0]>alive[1]?0:1;
    record.conclusion=alive[0]==0&&alive[1]==0?"Both forces eliminated.":
        !alive[0]||!alive[1]?"Opposing force eliminated.":
        record.winner<0?"Time limit: equal surviving soldiers. Draw.":"Time limit: more surviving soldiers wins.";
    return true;
}
// The covering-fire delivery credit ray: a round that passed near its aim point is credited
// support only if the line from where it was fired to where it now is is clear. Off (Legacy),
// the line starts at the shooter's feet (the typed controllers use the muzzle), so a man firing
// over low cover, or a village's earth complement whose top is at z 0, denies every credit.
// Plan 029 F-E (Config::muzzleCredit): from the muzzle for every controller, and solid-only as
// every other bullet test (ruling A), so a hedge the round went through does not deny it.
bool DeliveryLineClear(const Map& map,const Config& c,const Shot& shot,const Soldier& shooter,Vec3 end) {
    if(!c.muzzleCredit) {
        const Vec3 from=(c.recoveryFixture||TypedController(c))?shot.flight.front().position:shot.start;
        return ClearLine3D(map,from,end+(from-end)*.001f);
    }
    // The flight record's first sample is the muzzle at the moment of firing; a shot without one
    // (none is fired that way today) falls back to the muzzle height of his present stance.
    const Vec3 from=!shot.flight.empty()?shot.flight.front().position:shot.start+Vec3{0,0,Posture(shooter.stance).muzzle};
    return ClearLine3DSolid(map,from,end+(from-end)*.001f);
}
// Plan 031 G evidence (kind gun_support, reason burst; traced runs only, never read back): a support gun begins a burst.
// target; seen: his own track of that man is in sight (otherwise he fires on a known place); track_age: of the position
// fired on; distance: to it on the ground; overlooks: the squadmates that enemy's known position overlooks by the gunner's
// count, and threat_term: what it took off the score (-gunThreatBonus each); last_fired: seconds since his last round on
// it (-1: none this battle), rotation_term: the penalty for a round within gunRotate; score: the chosen candidate's whole
// score (the lowest is chosen); candidates: the enemies scored; previous: his last burst's target (-1: none).
static void TraceGunBurst(Diagnostics* d,const Soldier& s,const SquadCommand& cmd,float time,const FireSolution& target,const GunSupportControl& control,const GunSupportMemory& memory){
    if(!d||!d->options.enabled||target.enemy<0||target.enemy>=UnitCount)return;
    const size_t e=size_t(target.enemy);const float fired=memory.firedAt[e];
    std::ostringstream o;o<<std::setprecision(6)<<",\"target\":"<<target.enemy<<",\"seen\":"<<s.contacts[e].visible<<",\"track_age\":"<<(time-target.observedAt)
        <<",\"distance\":"<<Length({target.point.x-s.position.x,target.point.y-s.position.y,0})<<",\"overlooks\":"<<memory.overlooks[e]
        <<",\"threat_term\":"<<control.threatTerm<<",\"last_fired\":"<<(fired>=0?time-fired:-1.f)<<",\"rotation_term\":"<<control.rotationTerm
        <<",\"score\":"<<control.value<<",\"candidates\":"<<control.candidates<<",\"previous\":"<<memory.lastTarget<<",\"rounds\":"<<s.rounds;
    TraceCoverSupply(d,s,cmd,time,"gun_support","burst",o.str());
}
Record Simulate(const Config& input,const DiagnosticOptions& options,const std::vector<GeometryEdit>& edits,int encounter) {
    if((input.neuralPolicy||input.policyCandidates||input.externalPolicy||input.policySchema)&&
        (input.cognition||input.drills||input.foundations||input.recoveryFixture))
        throw std::invalid_argument("Neural squads require the Legacy executor");
    if(input.externalPolicy!=bool(options.squadActionCallback)||
       (input.externalPolicy&&input.neuralPolicy))
        throw std::invalid_argument("External policy requires an exclusive action callback");
    if(input.policyCandidates!=0&&input.policyCandidates!=30)
        throw std::invalid_argument("Policy candidates must be 0 or 30");
    if(input.neuralPolicy&&input.policyCandidates!=input.neuralPolicy->candidates)
        throw std::invalid_argument("Model and candidate schema do not match");
    if(input.policySchema!=0&&input.policySchema!=4)
        throw std::invalid_argument("Policy schema must be 0 or 4");
    if(input.neuralPolicy&&(input.neuralPolicy->schema>=4)!=(input.policySchema>=4))
        throw std::invalid_argument("Model and policy schema do not match");
    auto geometry=edits;
    if(input.battlefield&&(input.family!=ScenarioFamily::None||encounter||input.recoveryFixture))throw std::invalid_argument("Imported maps cannot combine with generated families or fixtures");
    if(input.family!=ScenarioFamily::None&&(encounter!=0||input.recoveryFixture||input.terrain!=Terrain::FracturedWorks))throw std::invalid_argument("Generated scenarios cannot combine with encounters, recovery or authored terrain");
    if(TypedController(input)&&(!input.foundations||input.reportDelay<0||input.reportDelay>10||!std::isfinite(input.reportDelay)))throw std::invalid_argument("Cognition requires foundations and a report delay between 0 and 10 seconds");
    if(input.leaderEffects&&!input.drills)throw std::invalid_argument("Leader effects require drills");
    if(input.equalTroops&&(!input.leaderEffects||input.family!=ScenarioFamily::F1))throw std::invalid_argument("Equal troops requires F1 leader effects");
    if(input.leaderEffects)for(const auto& profile:input.platoonProfiles)for(float value:{profile.judgment,profile.risk,profile.adaptability,profile.communication})if(!std::isfinite(value)||value<0||value>1)throw std::invalid_argument("Leader profile values must be 0..1");
    if(input.cognition)for(float value:{input.officer.judgment,input.officer.risk,input.officer.adaptability})if(!std::isfinite(value)||value<0||value>1)throw std::invalid_argument("Officer profile values must be 0..1");
    if(input.drills&&(input.cognition||input.recoveryFixture||!(encounter==0||(encounter>=5&&encounter<=7)||(encounter>=44&&encounter<=103))))throw std::invalid_argument("Drills require encounter 0 or 5..7 and exclusive controller selection");
    if(input.foundations&&((encounter!=8&&!(input.cognition&&(encounter==0||(encounter>=5&&encounter<=43)))&&!input.drills)||input.recoveryFixture))throw std::invalid_argument("Foundations policy requires encounter 8 and cannot combine with recovery");
    if(encounter>=9&&encounter<=43&&!input.cognition)throw std::invalid_argument("Cognitive scenarios require --cognition");
    if(encounter==8&&!input.foundations)throw std::invalid_argument("Encounter 8 requires --foundations");
    if(!std::isfinite(input.estimateBias)||std::abs(input.estimateBias)>1)throw std::invalid_argument("Estimate bias must be between -1 and 1");
    for(const auto& profile:input.statProfiles){
        for(float value:{profile.baseShare,profile.lowShare,profile.highShare,profile.baseHalfWidth,profile.lowEdge,profile.highEdge,profile.shape})if(!std::isfinite(value)||value<0)throw std::invalid_argument("Stat distribution values must be finite and non-negative");
        if(std::abs(profile.baseShare+profile.lowShare+profile.highShare-1)>1e-4f)throw std::invalid_argument("Stat distribution shares must sum to 1");
        if(profile.shape<=0||profile.lowEdge>100||profile.highEdge<100)throw std::invalid_argument("Stat distribution tails must bracket 100 with a positive shape");
    }
    if(input.recoveryFixture&&(encounter<5||encounter>7))throw std::invalid_argument("Recovery policy requires controlled encounter 5..7 until its acceptance gates pass");
    if(input.staticDefence.layout!=DefenceLayout::None) {
        if(input.staticDefence.defenders<4||input.staticDefence.defenders>32)throw std::invalid_argument("Static defence requires between 4 and 32 defenders");
        if(input.family!=ScenarioFamily::None||encounter!=0||input.recoveryFixture)throw std::invalid_argument("Static defence requires an imported or authored battlefield without generated families, encounters or fixtures");
        if(input.leaderEffects||input.equalTroops)throw std::invalid_argument("Static defence cannot combine with leader effects or equal troops");
    }
    auto totalStart=DiagnosticClock::now();
    Config c=input;c.maxSeconds=Clamp(c.maxSeconds,1,600);
    Record r;r.config=c;r.map=c.family==ScenarioFamily::None?MakeBattleMap(c):Map{};Frame f=InitialFrame(c);
    // Plan 029: with concealment off a hedge is an ordinary solid. The flag is cleared on this battle's own
    // copy before any query, with every cache the copy shares with the imported map dropped (the revision
    // is kept); `flags` keeps the authored bit for display. A map without concealment is untouched.
    if(!c.concealment&&r.map.hasConcealment){
        for(auto& o:r.map.obstacles)o.concealment=false;
        r.map.hasConcealment=false;r.map.tacticalVisibility.reset();r.map.routeGraph.reset();r.map.spatial.reset();r.map.segments.reset();
        r.map.navigation.reset();r.map.coverCatalog.reset();r.map.coverRevision=0;r.map.rasterStatic.reset();
    }
    // Plan 029 M-A2, the same convention for prone cover. Off: an imported prone record (`C ... crouch=2`) is the
    // crouched cover it always was, cleared on this battle's own copy. On: the copy carries the flag, so the
    // derived catalogue adds prone cover behind low obstacles. Only the cover caches read either; a map with
    // no prone records keeps every cache when the switch is off.
    const bool proneRecords=std::any_of(r.map.windows.begin(),r.map.windows.end(),[](const CoverPosition& w){return w.prone;});
    if(c.prone||proneRecords){
        if(c.prone)r.map.proneCover=true;else for(auto& w:r.map.windows)w.prone=false;
        r.map.coverCatalog.reset();r.map.coverRevision=0;r.map.rasterStatic.reset();
    }
    if(c.family!=ScenarioFamily::None){auto generated=std::make_shared<GeneratedScenario>(GenerateLeaderScenario(c));ApplyScenario(*generated,c,r.map,f);r.generated=generated;}
    if(encounter>0&&encounter<=7){r.encounter=encounter;MakeMGEncounter(c,encounter,r.map,f);}
    if(encounter==8){r.encounter=8;MakeMGEncounter(c,1,r.map,f);}
    if(encounter>=9&&encounter<=43){r.encounter=encounter;MakeCognitiveEncounter(c,encounter,r.map,f);}
    if(encounter>=44&&encounter<=69){if(!c.drills)throw std::invalid_argument("Drill fixtures require --drills");r.encounter=encounter;MakeDrillEncounter(c,encounter,r.map,f);}
    if(encounter>=70&&encounter<=103){r.encounter=encounter;MakePlatoonEncounter(c,encounter,r.map,f);}
    if(encounter==10&&geometry.empty()){
        GeometryEdit change;change.time=2;change.obstacle=r.map.obstacles.front().id;change.remove=false;
        change.replacement={{0,0},{1,90},false,false,4};geometry.push_back(change);
    }
    std::shared_ptr<const DefencePlan> defence;
    if(c.staticDefence.layout!=DefenceLayout::None) {
        std::array<Vec3,UnitCount> deployment{};for(const auto& s:f.soldiers)deployment[s.id]=s.position;
        auto plan=std::make_shared<DefencePlan>(PlanStaticDefence(c,r.map,deployment));
        ApplyStaticDefence(*plan,c,f);
        c.staticDefence.resolved=true;c.staticDefence.objective=plan->objective;c.staticDefence.attackerObjectives=plan->attackerObjectives;
        r.config=c;r.defence=plan;defence=plan;
    }
    r.map.queryProfile=std::make_shared<QueryProfile>();CommandRuntime command;command.reactions.recoveryFixture=c.recoveryFixture;command.reactions.coverReports=c.coverReports&&!c.foundations&&!c.recoveryFixture;command.reactions.quietRelease=c.coverQuietRelease&&!c.foundations&&!c.recoveryFixture;if(encounter>=4||c.family==ScenarioFamily::F1||defence)command.fixedDefender=1;
    const bool retireFallen=RetireFallen(c); // plan 030 K-1: only the perception stage reads it
    command.reportDelay=TypedController(c)?c.reportDelay:MessageDelay;
    if(encounter>=9&&encounter<=43){command.platoon.nextSerial=9001;for(int squad=0;squad<SquadCount;++squad){
        const auto& order=f.soldiers[squad*SquadSize].platoonOrder;command.platoon.lastOrders[squad]=order;
        command.platoon.nextSerial=std::max(command.platoon.nextSerial,order.serial+1);}}
    r.diagnostics=std::make_shared<Diagnostics>();r.diagnostics->options=options;command.diagnostics=r.diagnostics.get();command.reactions.diagnostics=r.diagnostics.get();
    if(options.keepFrames)r.frames.reserve(size_t(c.maxSeconds/FrameSeconds)+2);
    auto recordFrame=[&](const Frame& frame){if(options.frameSink)options.frameSink(r,frame);if(options.keepFrames||r.frames.empty())r.frames.push_back(frame);};
    CheckWeaponConsistency(f);
    // Plan 031 G (Config::gunSupport, Legacy only): the teams whose guns fight as support weapons, and one fire-control memory
    // per soldier for this battle (only a machine gunner's is ever used). Nothing is allocated or set with the switch off.
    std::unique_ptr<std::array<GunSupportMemory,UnitCount>> gunMemories;
    if(GunSupportAny(c)){gunMemories=std::make_unique<std::array<GunSupportMemory,UnitCount>>();for(auto& s:f.soldiers)s.supportGun=GunSupport(c,s.team);}
    recordFrame(f);Random rng(c.seed);
    std::array<Runtime,UnitCount> run;
    std::vector<Projectile> bullets;TrafficRuntime traffic;auto passages=BuildingPassages(r.map);
    for(auto& a:run) a.cooldown=rng.Next();
    if(c.recoveryFixture)for(const auto& s:f.soldiers)if(s.Active()&&s.squad==0){
        auto& cover=run[s.id].tactics;cover.assigned=cover.halfCover=true;
        cover.shelter=cover.peek=s.position;cover.expires=c.maxSeconds;cover.geometryRevision=r.map.revision;
        float best=1e9f;for(const auto& slot:CoverPositions(r.map))if(Distance(slot.shelter,s.position)<best){best=Distance(slot.shelter,s.position);cover.coverId=slot.id;}
    }
    // A defender already occupies its position: hand it the ordinary cover memory so
    // the usual shelter/peek cycle starts immediately instead of searching for cover.
    if(defence)for(const auto& s:f.soldiers)if(s.Active()&&defence->Defends(s.id)) {
        const auto& slot=defence->At(s.id).cover;auto& cover=run[s.id].tactics;
        cover.assigned=true;cover.halfCover=slot.crouch;cover.proneCover=slot.prone;cover.shelter=slot.shelter;cover.peek=slot.peek;
        cover.coverId=slot.id;cover.geometryRevision=r.map.revision;cover.travelPosition=s.position;cover.expires=c.maxSeconds+60;
    }
    // A held position steps straight to its own shelter or firing edge. A routed
    // path may detour around intervening geometry and would carry the defender out
    // of its slot even when the goal itself is inside it.
    auto executionPath=[&](Soldier& s,Vec3 goal,float time)->std::vector<Vec3>{
        if(defence&&defence->Defends(s.id))return {goal};
        PathChoice choice;auto path=TaskExecutionPath(r.map,s,goal,run[s.id].tactics,c,time,&choice);
        run[s.id].pathKnown=choice.known;s.coveredPath=choice.covered;
        if(choice.searched){
            ++r.caution.searched;r.caution.covered+=choice.covered;r.caution.shortestRevealed+=choice.shortestRevealed;
            if(choice.covered){r.caution.coveredRevealed+=choice.alternativeRevealed;
                r.caution.detour+=choice.shortestLength>0?double(choice.alternativeLength/choice.shortestLength):1.0;}
            TracePathChoice(r.diagnostics.get(),s,r.map,time,choice,goal);
        }
        return path;
    };
    if(!geometry.empty())r.geometryVersions.push_back({0,r.map,"initial"});
    std::vector<bool> applied(geometry.size(),false);
    std::unique_ptr<std::array<Map,UnitCount>> geometryViews;
    std::array<std::vector<float>,UnitCount> geometryReceipt;
    std::vector<Obstacle> changedObstacles(geometry.size());
    if(!geometry.empty()){geometryViews=std::make_unique<std::array<Map,UnitCount>>();for(auto& view:*geometryViews)view=r.map;
        for(auto& receipts:geometryReceipt)receipts.assign(geometry.size(),-1);
        command.geometryViews=geometryViews.get();}

    auto event=[&](EventKind kind,int id,int target,const std::string& text) {r.events.push_back({f.time,kind,id,target,text});};
    const int maxTicks=int(c.maxSeconds/TickSeconds);
    for(int tick=1;tick<=maxTicks;++tick) {
        auto stageStart=DiagnosticClock::now();
        f.time=tick*TickSeconds;
        if(c.drills&&encounter>=56&&encounter<=69)StepDrillEncounter(encounter,f);
        if(c.drills&&encounter>=70&&encounter<=103)StepPlatoonEncounter(encounter,f);
        for(size_t g=0;g<geometry.size();++g)if(!applied[g]&&geometry[g].time<=f.time){
            applied[g]=true;const auto& edit=geometry[g];
            for(const auto& obstacle:r.map.obstacles)if(obstacle.id==edit.obstacle)changedObstacles[g]=obstacle;
            bool changed=edit.remove?RemoveObstacle(r.map,edit.obstacle):ReplaceObstacle(r.map,edit.obstacle,edit.replacement);
            if(changed){passages=BuildingPassages(r.map);r.geometryVersions.push_back({f.time,r.map,edit.remove?"obstacle removed":"obstacle replaced"});
                event(EventKind::Decision,-1,-1,"geometry revision "+std::to_string(r.map.revision));
                if(options.enabled){TraceEntry e;e.id=r.diagnostics->nextId++;e.time=f.time;e.geometry=r.map.revision;e.kind="geometry_changed";e.reason=r.geometryVersions.back().reason;r.diagnostics->entries.push_back(e);}
                for(const auto& unit:f.soldiers){auto& a=run[unit.id];
                    // Only a locally encountered loss invalidates tactical cover immediately.
                    if(a.tactics.assigned&&Distance(unit.position,a.tactics.shelter)<2&&!CoverExists(r.map,a.tactics.coverId))a.tactics={};
                    // A vault leg of his own class stays valid (plan 029 M-C; never asked with the switch off).
                    if(a.cursor<a.path.size()&&!ClearLine(r.map,unit.position,a.path[a.cursor],0.46f)&&
                        !(c.vaulting&&VaultCrossing(r.map,unit.position,a.path[a.cursor],VaultClassOf(unit,c))!=VaultClass::None)){a.destination={999,999};a.path.clear();a.cursor=0;}
                }
            }
        }
        if(geometryViews)for(auto& s:f.soldiers)if(s.Active())for(size_t g=0;g<geometry.size();++g)if(applied[g]&&changedObstacles[g].id){
            auto& receipt=geometryReceipt[s.id][g];if(receipt==-2)continue;const auto& obstacle=changedObstacles[g];
            if(receipt<0){Vec3 eye=s.position+Vec3{0,0,1.5f};bool seen=Distance(s.position,obstacle.center)<3;
                if(InVisualField(s,obstacle.center,SightRange(s)))for(float side:{-1.f,1.f})for(float edge:{-1.f,1.f}){
                    Vec3 sample=obstacle.center+Vec3{side*(obstacle.half.x+.1f),edge*(obstacle.half.y+.1f),std::min(1.4f,ObstacleHeight(obstacle))};
                    seen|=InVisualField(s,sample,SightRange(s))&&ClearLine3D(r.map,eye,sample);
                }
                if(seen)receipt=f.time+ReactionSeconds(s,ReactionKind::Report);
            }
            if(receipt>=0&&f.time>=receipt){auto& view=(*geometryViews)[s.id];const auto& edit=geometry[g];
                if(edit.remove)RemoveObstacle(view,edit.obstacle);else ReplaceObstacle(view,edit.obstacle,edit.replacement);
                receipt=-2;++s.knowledgeRevision;
                if(options.enabled){TraceEntry e;e.id=r.diagnostics->nextId++;e.time=f.time;e.soldier=s.id;e.squad=s.squad;e.geometry=r.map.revision;e.kind="geometry_observed";e.reason="local geometry change recognized after observation delay";r.diagnostics->entries.push_back(e);}
            }
        }
        for(auto& s:f.soldiers) {StepSuppression(s,c,f.time,TickSeconds);DecayRecoil(s,TickSeconds);}
        // Plan 030 M-S7 P3 (Config::pinnedNeighbours, Jordan's rule 3): while a man is above his duck threshold, each
        // squadmate within neighbourRadius, at his cover and going nowhere, not holding a movement order, with a line to
        // him, holds at least neighbourEffect suppression: a floor, the same for one pinned man or several, never
        // within neighbourMargin of his own threshold. When the pinned man recovers it decays as any suppression.
        if(c.pinnedNeighbours)r.neighbourLifts+=PinnedNeighbours(f.soldiers,r.map,c,[&](const Soldier& q){
            const auto& m=run[q.id].tactics;
            return m.assigned&&std::min(Distance(q.position,m.shelter),Distance(q.position,m.peek))<1.5f;});
        if(c.foundations)for(auto& observer:f.soldiers)UpdateAttention(observer,f.time,TickSeconds);
        if(tick%4==0) {
            if(TypedController(c))for(const auto& s:f.soldiers){
                auto coverage=SenseCoverage(s,r.map,f.time);if(coverage.observer<0)continue;
                PendingReaction observation;observation.kind=ReactionKind::Coverage;observation.coverage=coverage;
                QueueReaction(s,observation,f.time,command.reactions);
            }
            // Perception is the only AI-facing producer of enemy truth.
            for(auto& s:f.soldiers) if(s.Active()) for(const auto& enemy:f.soldiers) {
                if(enemy.team==s.team) {
                    if(enemy.id==s.id)continue;
                    Contact ct;ct.visible=enemy.Active()&&InVisualField(s,enemy.position,SightRange(s))&&ClearLine3D(r.map,
                        {s.position.x,s.position.y,s.position.z+Posture(s.stance).eye},{enemy.position.x,enemy.position.y,enemy.position.z+BodyHeight(enemy.stance)*0.9f});
                    if(ct.visible){ct.known=true;ct.position=enemy.position;ct.observedAt=f.time;ct.aimHeight=enemy.position.z+BodyHeight(enemy.stance);}
                    auto& wasVisible=command.reactions.sensedVisible[s.id][enemy.id];
                    if(ct.visible||wasVisible) {
                        PendingReaction reaction;reaction.kind=ReactionKind::FriendlySight;reaction.enemy=enemy.id;reaction.contact=ct;
                        const auto& previous=s.allies[enemy.id];
                        if(ct.visible&&previous.known)reaction.velocity=(ct.position-previous.position)*(1.f/std::max(0.2f,f.time-previous.observedAt));
                        QueueReaction(s,reaction,f.time,command.reactions);
                    }
                    wasVisible=ct.visible;continue;
                }
                Contact ct=SenseEnemy(s,enemy,r.map,f.time);
                auto& wasVisible=command.reactions.sensedVisible[s.id][enemy.id];
                // Plan 030 K-1 (Config::retireFallen, Legacy): a man in sight at his last look and gone from it
                // now is looked at again; if the line to him is clear he is seen down (SenseFall).
                if(retireFallen&&wasVisible&&!ct.visible){const Contact down=SenseFall(s,enemy,r.map,f.time);if(down.seenDown)ct=down;}
                if(ct.visible||wasVisible) {
                    PendingReaction reaction;reaction.kind=ReactionKind::Sight;reaction.enemy=enemy.id;reaction.contact=ct;
                    QueueReaction(s,reaction,f.time,command.reactions);
                }
                wasVisible=ct.visible;
            }
        }
        for(const auto& s:f.soldiers)if(s.Active()&&f.time>=command.reactions.nextStressSample[s.id]&&
            (std::abs(s.suppression-s.understoodSuppression)>0.04f||s.health<s.understoodHealth)) {
            PendingReaction reaction;reaction.kind=ReactionKind::UnderFire;reaction.health=s.health;reaction.suppression=s.suppression;
            reaction.position=s.position;
            QueueReaction(s,reaction,f.time,command.reactions);command.reactions.nextStressSample[s.id]=f.time+0.2f;
        }
        r.diagnostics->perception+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        if(tick%4==0)for(auto& observer:f.soldiers)if(observer.Active())ObserveEmptyTracks(observer,r.map,f.time);
        if(TypedController(c))for(const auto& s:f.soldiers){
            const auto& a=run[s.id];float remaining=Distance(s.position,s.assignment.position);
            if(a.lastOrder.id==s.assignment.id&&!a.tactics.emergency&&a.cursor<a.path.size()){
                Vec3 previous=s.position;remaining=0;
                for(size_t point=a.cursor;point<a.path.size();++point){remaining+=Distance(previous,a.path[point]);previous=a.path[point];}
            }
            command.taskRemaining[s.id]=remaining;
        }
        if(c.recoveryFixture||c.foundations)UpdateTaskReports(f,command);
        if(c.foundations&&tick%100==0)for(const auto& observer:f.soldiers)if(observer.Active())TraceBeliefs(r.diagnostics.get(),observer,f.time);
        if(options.trainingStateSink)options.trainingStateSink(f);
        UpdateCommands(f,r.map,c,command,r.events);
        r.diagnostics->commands+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        {
            // A man in the middle of a vault does not think until he has landed (plan 029 M-C; never set when off).
            for(auto& s:f.soldiers) if(s.Active()&&!s.vaulting&&(tick%12==0||tick==1||run[s.id].tactics.assigned||s.assignment.serial!=run[s.id].lastOrder.serial)) {
                std::vector<Vec3> allies;
                for(const auto& friendUnit:f.soldiers) if(friendUnit.id!=s.id&&friendUnit.team==s.team&&friendUnit.Active()) {
                    allies.push_back(friendUnit.position);
                    const auto& reservation=run[friendUnit.id].tactics;
                    if(reservation.assigned) {allies.push_back(reservation.shelter);allies.push_back(reservation.peek);}
                }
                auto& state=run[s.id];
                if(state.lastOrder.serial!=s.assignment.serial) {
                    if(state.lastOrder.task!=s.assignment.task||Distance(state.lastOrder.position,s.assignment.position)>0.5f) {
                        // Plan 031 D: the drill's gun sent to a new station leaves the cover he holds for it (fm is never set when off).
                        const bool urgent=s.assignment.task==Task::PullBack||s.assignment.task==Task::Flank||s.assignment.task==Task::ClearLane||s.assignment.task==Task::BoundMove||
                            (s.assignment.fm.displace&&s.assignment.fm.gun==s.id);
                        const bool useful=UsefulCover(WithReports(s,f.time),r.map,state.tactics,f.time);
                        const bool differentDestination=Distance(s.assignment.position,state.tactics.shelter)>3;
                        // Plan 028 Stage 4 (Config::coverShift): a shift to covered ground with a line onto the
                        // enemy he is to cover gives up the cover he holds, unless he is pinned: plan 020's
                        // better cover close by. Only a shift order carries fireShift.
                        const bool shiftOrder=s.assignment.fireShift&&FirePayloadLive(s,f.time)&&
                            s.understoodSuppression<CoverSupplyConstants.pinnedSuppression&&Distance(s.assignment.position,state.tactics.shelter)>1;
                        if(!state.tactics.assigned||((urgent||!useful)&&differentDestination)||shiftOrder) {
                            // A new order does not stand him up: when he went down is his own (plan 029).
                            const float proneSince=state.tactics.proneSince;
                            state.tactics={};state.tactics.readyAt=f.time+std::max(0.f,state.cooldown);
                            state.tactics.proneSince=proneSince;
                        }
                    }
                    state.lastOrder=s.assignment;
                }
                Soldier understood=WithReports(s,f.time);
                understood.health=s.understoodHealth;understood.suppression=s.understoodSuppression;
                DecisionAlternatives alternatives;
                auto* detail=DetailedFor(r.diagnostics.get(),s.id,s.squad,f.time)?&alternatives:nullptr;
                if(s.assignment.id)PrepareTaskExecution(understood,state.tactics,f.time,c.threatAwarePaths);
                Order d=s.assignment.id?ExecuteTask(understood,geometryViews?(*geometryViews)[s.id]:r.map,c,allies,state.tactics,f.time,detail):ChooseOrder(understood,geometryViews?(*geometryViews)[s.id]:r.map,c,allies,state.tactics,f.time,detail);
                if(c.gradedPeek){r.gradedSettles+=state.tactics.gradedDrawAt==f.time;r.gradedPeeks+=state.tactics.gradedPeek&&state.tactics.gradedAt==f.time;} // plan 030 M-S7 P1
                // Plan 031 D (the marker is only ever set with Config::fireAndMovement): since when he holds for the gate.
                if(s.assignment.fm.gun>=0&&s.assignment.fm.gun!=s.id){if(state.tactics.fmHeldAt==f.time){if(s.fmWaitSince<0)s.fmWaitSince=f.time;}else s.fmWaitSince=-100;}
                else if(s.fmWaitSince>=0)s.fmWaitSince=-100;
                if(c.recoveryFixture&&s.team==command.fixedDefender){
                    // Fixed defenders may duck and fire at their authored low
                    // cover, but do not invent new positions in the test lane.
                    const Vec3 anchor=r.frames.front().soldiers[s.id].position;
                    const bool duck=understood.suppression>.52f||s.reloadUntil>f.time||NervePinned(s,c);
                    d={anchor,duck?Action::Hold:Action::Fire,duck?Reason::Suppressed:Reason::CoverFire,duck?Stance::Crouched:Stance::Standing};
                    state.tactics={};
                }
                if(defence&&defence->Defends(s.id)) {
                    // A static defender never leaves its position. Any goal beyond the
                    // slot's own shelter-to-peek reach - relocation, flanked relocation,
                    // withdrawal, wounded support, emergency cover elsewhere - becomes the
                    // local cycle again. Peeking, firing, ducking, reloading and
                    // suppression are untouched.
                    const auto& slot=defence->At(s.id).cover;
                    if(Distance(d.goal,slot.shelter)>Distance(slot.shelter,slot.peek)+1.f) {
                        const bool duck=understood.suppression>.52f||s.reloadUntil>f.time||d.action==Action::Retreat||NervePinned(s,c);
                        const Stance sheltered=CoverStance(slot);
                        d=duck?Order{slot.shelter,Action::Hold,Reason::Suppressed,sheltered}:
                                Order{slot.peek,Action::Fire,slot.crouch?Reason::PopUp:Reason::CoverFire,slot.prone?Stance::Crouched:Stance::Standing};
                        auto& memory=state.tactics;const float ready=memory.readyAt;
                        memory={};memory.readyAt=ready;memory.assigned=true;memory.halfCover=slot.crouch;memory.proneCover=slot.prone;
                        memory.shelter=slot.shelter;memory.peek=slot.peek;memory.peeking=!duck;memory.phaseUntil=-1;
                        memory.coverId=slot.id;memory.geometryRevision=r.map.revision;memory.lastProgress=f.time;
                        memory.travelPosition=s.position;memory.roundsAtPeek=s.rounds;memory.healthAtPeek=s.health;
                        memory.expires=c.maxSeconds+60;
                    }
                }
                if(state.tactics.assigned&&(state.tactics.coverId==0||state.tactics.geometryRevision!=r.map.revision)) {
                    state.tactics.coverId=0;state.tactics.geometryRevision=r.map.revision;
                    if(s.assignment.hasSlot&&CoverExists(r.map,s.assignment.slot.id)&&Distance(state.tactics.shelter,s.assignment.slot.shelter)<.1f)state.tactics.coverId=s.assignment.slot.id;
                    for(const auto& cover:CoverPositions(r.map))if(Distance(cover.shelter,state.tactics.shelter)<0.1f){state.tactics.coverId=cover.id;break;}
                }
                if(s.action!=d.action||s.reason!=d.reason)
                    event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": "+ReasonText(d.reason));
                const bool wasProne=s.stance==Stance::Prone;
                s.action=d.action;s.reason=d.reason;s.goal=d.goal;s.stance=d.stance;
                // Getting up costs him time (plan 029): he stands where he lay and cannot fire until he is up.
                if(c.prone&&wasProne&&s.stance!=Stance::Prone)state.riseUntil=f.time+Postures().riseSeconds/StatScale(s.stats.Get(Stat::Dexterity));
                // The cover rule is traced when the verdict changes, not every think.
                if(state.tactics.coverRule!=state.lastCoverRule){
                    if(state.tactics.coverRule!=CoverRule::None)TraceCoverRule(r.diagnostics.get(),s,f.time,state.tactics.coverRule,d.goal);
                    state.lastCoverRule=state.tactics.coverRule;
                }
                state.tactics.coverRule=CoverRule::None;
                if(s.assignment.id)EvaluateTaskExecution(s,r.map,state.tactics,f.time,command.diagnostics);
                if(detail&&!detail->choices.empty()){auto start=DiagnosticClock::now();TraceSoldier(*r.diagnostics,s,f.command[s.squad],r.map,state.tactics,f.time,detail);r.diagnostics->trace+=DiagnosticSeconds(start);}
                auto& a=run[s.id];
                if(Distance(a.destination,d.goal)>0.04f) {
                    a.destination=d.goal;a.path=executionPath(s,d.goal,f.time);a.cursor=0;
                    if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,d.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);
                    TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,a.tactics.emergency?"emergency_departure":"path_selected",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                }
            }
        }
        // Rush duration is an execution bound, not the soldier think cadence.
        if(c.drills)for(auto& soldier:f.soldiers)if(soldier.Active()&&!soldier.vaulting&&soldier.assignment.drillInstance>0&&
            soldier.assignment.execution.rushSeconds>0&&!soldier.assignment.execution.paused&&
            f.time-soldier.assignment.activatedAt-soldier.assignment.drillRushPausedSeconds>=soldier.assignment.execution.rushSeconds&&
            (soldier.action==Action::Advance||soldier.action==Action::Retreat)){
            soldier.action=Action::Hold;soldier.stance=Stance::Crouched;soldier.goal=soldier.position;
        }
        r.diagnostics->decisions+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        struct MovementState {Vec3 position;int id,team;bool active;};
        std::array<MovementState,UnitCount> beforeMovement;
        for(const auto& s:f.soldiers)beforeMovement[s.id]={s.position,s.id,s.team,s.Active()};
        // Passage scheduling receives one friendly team at a time. It never
        // reserves against hidden enemies or grants a global enemy occupancy map.
        for(int team=0;team<2;++team) {
            std::vector<TrafficInput> requests;
            for(const auto& s:f.soldiers)if(s.Active()&&s.team==team){const auto& a=run[s.id];
                if(defence&&defence->Defends(s.id))continue; // A held position never yields a passage.
                if(s.vaulting)continue; // nor does a man going over a wall (plan 029 M-C)
                Vec3 next=a.cursor<a.path.size()?a.path[a.cursor]:s.goal;
                requests.push_back({&s,next,(s.action!=Action::Fire&&s.action!=Action::Hold)||a.trafficWaiting});}
            auto decisions=CoordinatePassages(r.map,passages,requests,traffic,f.time);
            for(auto& s:f.soldiers)if(s.Active()&&s.team==team&&!s.vaulting){auto& a=run[s.id];const auto& d=decisions[s.id];
                if(d.waiting) {
                    if(!a.trafficWaiting)event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": yields passage and seeks a holding position");
                    a.trafficWaiting=true;s.waitingPassage=d.passage;s.passageWaitSeconds=f.time-traffic.since[s.id];
                    // A parking move is temporary; the received assignment is preserved.
                    if(Distance(a.parkingGoal,d.holdingPoint)>0.1f){a.parkingGoal=d.holdingPoint;a.parkingPath=FindPath(r.map,s.position,d.holdingPoint);a.parkingCursor=0;}
                    if(a.parkingCursor<a.parkingPath.size()) {
                        Vec3 delta=a.parkingPath[a.parkingCursor]-s.position;float distance=Length(delta);
                        if(distance<0.12f)++a.parkingCursor;
                        else {Vec3 next=s.position+delta*(std::min(distance,1.8f*TickSeconds)/distance);
                            if(Walkable(r.map,next)&&ClearLine(r.map,s.position,next,0.48f))s.position=next;}
                    }
                    s.action=Action::Hold;s.reason=Reason::PassageWait;s.stance=Stance::Crouched;s.aim=0;
                } else if(a.trafficWaiting){a.trafficWaiting=false;a.parkingGoal={999,999};s.waitingPassage=-1;s.passageWaitSeconds=0;
                    if(TypedController(c)&&Distance(s.position,a.progressPosition)<.15f)a.avoidUntil=f.time+3;
                    a.path=executionPath(s,s.goal,f.time);a.cursor=0;if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,s.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_recovery",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);s.action=Action::Advance;}
            }
        }
        // Plan 029 M-C: a man killed or incapacitated in the middle of a vault falls where he took off.
        if(c.vaulting)for(auto& s:f.soldiers)if(!s.Active()&&s.vaulting){s.vaulting=false;s.vaultProgress=0;s.vaultHeight=0;}
        for(auto& s:f.soldiers) if(s.Active()) {
            auto& a=run[s.id];
            const Vec3 stood=s.position;s.sprinting=false;
            // Plan 029 M-C. held: a vault in progress, begun or refused this tick; nothing else moves him.
            // spend: the stamina a vault begun this tick costs, paid at once. Both stay false/0 when off.
            bool held=false;float spend=0;
            if(s.vaulting){
                held=true;s.sprinting=false;s.stance=Stance::Standing;
                s.vaultProgress=std::min(1.f,(f.time-a.vaultStart)/std::max(1e-3f,a.vaultEnd-a.vaultStart));
                if(f.time>=a.vaultEnd-1e-4f){
                    // Landing: on the far side, with the reason and stance he took off with.
                    s.vaulting=false;s.vaultProgress=0;s.vaultHeight=0;
                    if(Walkable(r.map,a.vaultTo)){s.position=a.vaultTo;if(a.cursor<a.path.size()&&Distance(a.path[a.cursor],a.vaultTo)<1e-4f)++a.cursor;}
                    else{a.path.clear();a.cursor=0;} // the far side is gone (a geometry change): he stays and replans
                    s.stance=a.vaultStance;if(s.reason==Reason::Vault)s.reason=a.vaultReason;
                    a.progressPosition=s.position;a.nextPathCheck=f.time+2; // the vault was progress: no stall check at once
                }
            }
            if(a.cursor>=a.path.size())s.coveredPath=false; // the detour is over once he has walked it
            if(!held&&f.time>=a.nextPathCheck) {
                const bool moving=s.action!=Action::Fire&&s.action!=Action::Hold&&Distance(s.position,s.goal)>0.7f;
                if(moving&&(a.cursor>=a.path.size()||Distance(s.position,a.progressPosition)<0.15f)) {
                    if(TypedController(c)&&Distance(s.position,a.progressPosition)<.15f)a.avoidUntil=f.time+3;
                    a.path=executionPath(s,s.goal,f.time);a.cursor=0;if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,s.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_recovery",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                } else if(c.threatAwarePaths&&moving&&!a.tactics.emergency&&a.cursor<a.path.size()) {
                    // The chosen path is kept until the goal changes; the one early replan is an
                    // enemy he did not know about when he chose it who now reveals what is left.
                    std::vector<KnownThreat> threats,fresh;uint64_t known=0;KnownThreats(s,f.time,threats,known);
                    for(const auto& threat:threats)if(!((a.pathKnown>>threat.id)&1))fresh.push_back(threat);
                    std::vector<Vec3> remaining(a.path.begin()+long(a.cursor),a.path.end());
                    const float pace=CautionPace(s);const bool sprint=c.stamina&&CanSprint(s);
                    if(!fresh.empty()&&RevealedSeconds(r.map,s.position,remaining,fresh,pace,sprint?pace*SprintPace(s):pace,sprint?s.stamina:0.f)>Caution().revealedSeconds){
                        a.path=executionPath(s,s.goal,f.time);a.cursor=0;
                        if(s.assignment.id&&!a.tactics.emergency)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);
                        TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_rethreat",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                    }
                }
                a.progressPosition=s.position;a.nextPathCheck=f.time+2;
            }
            if(!held&&a.cursor<a.path.size()&&s.action!=Action::Fire&&s.action!=Action::Hold&&!(c.prone&&f.time<a.riseUntil)) {
                if(c.recoveryFixture||TypedController(c))while(a.cursor+1<a.path.size()&&Distance(s.position,a.path[a.cursor])<.35f&&
                    std::abs(s.position.z-a.path[a.cursor+1].z)<.05f&&ClearLine(r.map,s.position,a.path[a.cursor+1],.48f))++a.cursor;
                const Vec3 dest=a.path[a.cursor];
                // Plan 029 M-C: a leg he cannot walk that is one vault. If his class covers it he goes over,
                // standing, at once and paying for it now; if it needs more than he has left (winded, hurt,
                // short of stamina) he replans at his own class this tick. A static defender never vaults.
                if(c.vaulting&&!(defence&&defence->Defends(s.id))){
                    VaultClass need=VaultClass::None;float height=0;const VaultStep step=VaultStepFor(r.map,s,dest,c,&need,&height);
                    if(step!=VaultStep::Walk){
                        held=true;
                        if(step==VaultStep::Vault){
                            a.vaultStart=f.time;a.vaultEnd=f.time+VaultSeconds(s,need);a.vaultTo=dest;a.vaultReason=s.reason;a.vaultStance=s.stance;
                            s.vaulting=true;s.vaultProgress=0;s.vaultHeight=height;s.vaultTakeoff=s.position;s.vaultLanding=dest;s.vaultLandsAt=a.vaultEnd;s.stance=Stance::Standing;s.reason=Reason::Vault;s.sprinting=false;
                            s.facing=Normal(dest-s.position);
                            if(c.stamina)spend=need==VaultClass::High?Vaulting().highStamina:Vaulting().lowStamina;
                            ++r.vaults;event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": "+ReasonText(Reason::Vault));
                        } else {
                            a.path=executionPath(s,s.goal,f.time);a.cursor=0;
                            if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,s.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);
                            TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_vault_class",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                        }
                    }
                }
            }
            if(!held&&a.cursor<a.path.size()&&s.action!=Action::Fire&&s.action!=Action::Hold&&!(c.prone&&f.time<a.riseUntil)) {
                Vec3 dest=a.path[a.cursor];float dist=Distance(s.position,dest);
                // The sprint (plan 022). The revealed-stretch trigger is measured on its own
                // half-second cadence, never once per tick per enemy; every other trigger is
                // his own order and state. The factor is exactly 1 when he walks.
                if(c.stamina&&f.time>=a.nextSprintCheck){a.revealedAhead=RevealedAhead(r.map,s,a.path,a.cursor,f.time);a.nextSprintCheck=f.time+Sprint().checkSeconds;}
                // A man crawling to cover never sprints (plan 029); nobody else is ever prone.
                s.sprinting=c.stamina&&s.stance!=Stance::Prone&&CanSprint(s)&&SprintTrigger(s,a.revealedAhead,Distance(s.position,s.goal));
                // Walking fire costs pace: the flag is what the firing stage measured at the
                // end of the previous tick, so a man who opens fire slows from the next step.
                float speed=MovementSpeed(s,c);
                Vec3 dir=Normal(dest-s.position);Vec3 next=s.position+dir*std::min(dist,speed*TickSeconds);
                if(TypedController(c)&&f.time<a.avoidUntil&&!OnStairs(r.map,s.position)){
                    // A short, collision-checked sidestep breaks a friendly crowd deadlock.
                    // The assigned destination and route stage remain unchanged.
                    float bestCost=1e9f;Vec3 steering=dir;
                    for(float angle:{0.f,.785398f,-.785398f,1.309f,-1.309f,1.833f,-1.833f}){
                        Vec3 direction{dir.x*std::cos(angle)-dir.y*std::sin(angle),dir.x*std::sin(angle)+dir.y*std::cos(angle),dir.z};
                        Vec3 probe=s.position+direction*std::min(1.2f,dist);
                        if(!Walkable(r.map,probe)||!ClearLine(r.map,s.position,probe,.46f))continue;
                        float cost=Distance(probe,dest);
                        for(const auto& ally:beforeMovement)if(ally.id!=s.id&&ally.team==s.team&&ally.active){float gap=Distance(probe,ally.position);if(gap<1)cost+=8*(1-gap)*(1-gap);}
                        if(cost<bestCost){bestCost=cost;steering=direction;}
                    }
                    dir=steering;next=s.position+dir*std::min(dist,speed*TickSeconds);
                }
                // Soft local separation uses friendly positions, never hidden enemy information.
                Vec3 push{};
                for(const auto& ally:beforeMovement) if(ally.id!=s.id&&ally.team==s.team&&ally.active) {
                    float gap=Distance(s.position,ally.position);
                    if(gap<0.9f&&gap>0.001f) push=push+Normal(s.position-ally.position)*(0.9f-gap)*0.35f;
                }
                push.z=0;if(OnStairs(r.map,s.position)||OnStairs(r.map,next))push={};
                if(Walkable(r.map,next+push)&&ClearLine(r.map,s.position,next+push,0.46f)) next=next+push;
                if(Walkable(r.map,next)&&ClearLine(r.map,s.position,next,0.46f)) {s.position=next;s.facing=dir;}
                if(Distance(s.position,dest)<0.06f&&ClearLine(r.map,s.position,dest,0.48f)) {
                    s.position=dest;++a.cursor; // reach the corner/floor exactly before turning
                }
            }
            if(c.stamina)StepStamina(s,s.sprinting,s.vaulting||Distance(stood,s.position)>1e-4f,TickSeconds,spend);
        }
        r.diagnostics->movement+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        // Swept 3D ballistics at 200 Hz. A round born at this tick boundary starts
        // travelling in the next interval, so a hit can never precede its flight.
        constexpr int Substeps=10;
        constexpr float Step=TickSeconds/Substeps;
        for(int sub=0;sub<Substeps;++sub) for(size_t i=0;i<bullets.size();) {
            auto& b=bullets[i];auto& shot=r.shots[b.shot];
            if(shot.time>=f.time) {++i;continue;}
            // A round that over-penetrates re-runs the rest of the substep from where it
            // left the body; segBegin keeps the soldier sweep interpolated from that point.
            float segBegin=float(sub)/Substeps;
            for(bool flying=true;flying;) {
                const float startTime=shot.impactTime;
                const float dt=std::max(0.f,std::min(f.time,(tick-1)*TickSeconds+(sub+1)*Step)-startTime);
                if(dt<=0){++i;break;}
                Vec3 next=BallisticPosition(b.p,b.velocity,dt);
                float first=1;int hit=-1;Shot::Impact impact=Shot::Impact::None;
                float terrainHit=MapContact(r.map,b.p,next);
                if(terrainHit>=0&&terrainHit<=first){first=terrainHit;impact=Shot::Impact::Cover;}
                if(next.z<=r.map.groundBase) {float t=(b.p.z-r.map.groundBase)/(b.p.z-next.z);if(t<=first){first=t;impact=Shot::Impact::Ground;}}
                // The struck guard is load-bearing: SegmentSoldier returns 0 for a segment that
                // starts inside a body, so a re-run would strike the same victim forever.
                for(const auto& s:f.soldiers) if(s.Active()&&s.id!=b.owner&&!b.struck[s.id]) {
                    const Vec3 delta=s.position-beforeMovement[s.id].position;
                    Vec3 from=beforeMovement[s.id].position+delta*segBegin;
                    Vec3 to=beforeMovement[s.id].position+delta*(float(sub+1)/Substeps);
                    float t=SegmentSoldier(b.p,next,from,to,BodyHeight(s.stance));
                    if(t>=0&&t<first){first=t;hit=s.id;impact=Shot::Impact::Soldier;}
                }
                Vec3 end{b.p.x+(next.x-b.p.x)*first,b.p.y+(next.y-b.p.y)*first,b.p.z+(next.z-b.p.z)*first};
                const float endTime=std::min(f.time,startTime+dt*first);
                for(auto& s:f.soldiers) if(s.Active()&&s.team!=f.soldiers[b.owner].team&&!b.suppressed[s.id]) {
                    // A round can suppress each soldier once; solid shelter occludes near misses (a hedge does not).
                    Vec3 ep{end.x,end.y,end.z};
                    if(SegmentDistance(b.p,ep,s.position+Vec3{0,0,BodyHeight(s.stance)*0.7f})<2.2f&&ClearLine3DSolid(r.map,end,{s.position.x,s.position.y,s.position.z+BodyHeight(s.stance)*0.7f})) {
                        s.suppression=Clamp(s.suppression+0.23f/StatScale(s.stats.Get(Stat::Composure)),0,1);b.suppressed[s.id]=true;
                        if(c.stackedSuppression)s.lastNearMissAt=f.time;
                    }
                }
                shot.end=end;shot.impactTime=endTime;shot.flight.push_back({endTime,end});
                bool exited=false;
                if(hit>=0) {
                    auto& victim=f.soldiers[hit];
                    Vec3 v=b.velocity;v.z-=9.81f*dt*first;v=v*std::exp(-b.dragK*Distance(b.p,end));
                    const float energy=0.5f*b.mass*Dot(v,v),remainder=energy-DepositedEnergy(energy);
                    const float damage=HitDamage(energy,HitSeverity(rng.Next()));
                    victim.health=std::max(0.f,victim.health-damage);victim.suppression=Clamp(victim.suppression+0.3f/StatScale(victim.stats.Get(Stat::Composure)),0,1);
                    if(c.stackedSuppression)victim.lastNearMissAt=f.time;
                    shot.victims.push_back({hit,endTime,energy});b.struck[hit]=true;
                    shot.hit=true;shot.target=shot.victims.front().soldier;
                    event(EventKind::Hit,b.owner,hit,std::string(Name(b.owner))+" hit "+Name(hit));r.events.back().time=endTime;
                    if(!victim.Active()) {
                        victim.action=rng.Next()<0.55f?Action::Wounded:Action::Killed;victim.reason=Reason::Down;victim.aim=0;victim.aimTarget=-1;victim.movingFire=false;victim.sprinting=false;
                        run[hit].tactics.assigned=false;
                        for(auto& contact:victim.contacts) contact.visible=false;
                        event(EventKind::Casualty,hit,b.owner,std::string(Name(hit))+(victim.action==Action::Killed?" killed in action":" incapacitated"));
                        r.events.back().time=endTime;
                    }
                    if(remainder<ExitEnergy)impact=Shot::Impact::Soldier;
                    else {
                        b.p=end;b.velocity=v*(std::sqrt(2*remainder/b.mass)/Length(v));
                        segBegin+=(float(sub+1)/Substeps-segBegin)*first;exited=true;
                    }
                }
                if(impact==Shot::Impact::None&&(endTime-shot.time>1||std::abs(end.x)>r.map.halfWidth+3||std::abs(end.y)>r.map.halfHeight+3)) impact=Shot::Impact::OutOfBounds;
                shot.impact=exited?Shot::Impact::None:impact;
                // Plan 030 S1 (Config::impactSuppression): a round stopped by a solid suppresses the men that solid
                // shelters: within Config::impactRadius of where he shelters (his remembered shelter while he is at it, or where
                // he stands), with the solid between the round and him (tested from impactBack short of the stop, so a
                // round in the ground at his feet is not "his cover"). Once per round per soldier; a near miss above
                // keeps its own rule and weight and is not counted twice.
                if(c.impactSuppression&&!exited&&hit<0&&impact==Shot::Impact::Cover){
                    const auto& rule=SuppressionRules();const int side=f.soldiers[b.owner].team;
                    const float leg=Distance(b.p,end);
                    const Vec3 back=leg>rule.impactBack?end+(b.p-end)*(rule.impactBack/leg):b.p;
                    for(auto& s:f.soldiers)if(s.Active()&&s.team!=side&&!b.suppressed[s.id]){
                        const auto& memory=run[s.id].tactics;const float body=BodyHeight(s.stance);
                        auto near=[&](Vec3 at){return SegmentDistance(at,at+Vec3{0,0,body},end)<=c.impactRadius;};
                        const bool atShelter=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<1.5f;
                        if(!near(s.position)&&!(atShelter&&near(memory.shelter)))continue;
                        if(ClearLine3DSolid(r.map,back,{s.position.x,s.position.y,s.position.z+body*0.7f}))continue;
                        s.suppression=Clamp(s.suppression+rule.impactWeight/StatScale(s.stats.Get(Stat::Composure)),0,1);b.suppressed[s.id]=true;
                        if(c.stackedSuppression)s.lastNearMissAt=f.time;
                        ++r.impactSuppressions;
                    }
                }
                // Plan 030 M-S7 P2 (Config::keepDown, Jordan's rule 2): S1's detection of a round stopped in the cover he
                // shelters behind (at keepDownRadius), which counts only while his suppression is above his duck threshold
                // or was within keepDownGrace: then it adds keepDownWeight / composure, once per round, never twice with a
                // near miss or S1. Below it the round does nothing.
                if(c.keepDown&&!exited&&hit<0&&impact==Shot::Impact::Cover){
                    const auto& rule=SuppressionRules();const float radius=PinRules().keepDownRadius;const int side=f.soldiers[b.owner].team;
                    const float leg=Distance(b.p,end);
                    const Vec3 back=leg>rule.impactBack?end+(b.p-end)*(rule.impactBack/leg):b.p;
                    for(auto& s:f.soldiers)if(s.Active()&&s.team!=side&&!b.suppressed[s.id]){
                        if(!KeepDownApplies(s,c,f.time))continue;
                        const auto& memory=run[s.id].tactics;const float body=BodyHeight(s.stance);
                        auto near=[&](Vec3 at){return SegmentDistance(at,at+Vec3{0,0,body},end)<=radius;};
                        const bool atShelter=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<1.5f;
                        if(!near(s.position)&&!(atShelter&&near(memory.shelter)))continue;
                        if(ClearLine3DSolid(r.map,back,{s.position.x,s.position.y,s.position.z+body*0.7f}))continue;
                        s.suppression=Clamp(s.suppression+c.keepDownWeight/StatScale(s.stats.Get(Stat::Composure)),0,1);b.suppressed[s.id]=true;
                        if(c.stackedSuppression)s.lastNearMissAt=f.time;
                        ++r.keepDownImpacts;
                    }
                }
                auto& shooter=f.soldiers[b.owner];
                if(!b.delivered&&shot.aimedEnemy>=0&&SegmentDistance(b.p,end,shot.aimedAt)<6&&DeliveryLineClear(r.map,c,shot,shooter,end)) {
                    b.delivered=true;
                    FireDelivery report;report.supportWeapon=shooter.machineGun;report.shooter=b.owner;report.enemy=shot.aimedEnemy;
                    for(const auto& old:shooter.deliveries)if(old.shooter==b.owner&&(c.recoveryFixture||(old.enemy==report.enemy&&Distance(old.target,shot.aimedAt)<6)))report=old;
                    report.enemy=shot.aimedEnemy;report.origin=shot.start;report.target=shot.aimedAt;report.observedAt=f.time;
                    if(c.recoveryFixture){
                        report.history.erase(std::remove_if(report.history.begin(),report.history.end(),[&](const DeliveredRound& round){return f.time-round.at>10;}),report.history.end());
                        report.history.push_back({f.time,shot.aimedAt});
                    }
                    for(int k=7;k>0;--k)report.times[k]=report.times[k-1];
                    report.times[0]=f.time;
                    report.firstAt=f.time;report.rounds=0;for(float t:report.times)if(f.time-t<=6){++report.rounds;report.firstAt=std::min(report.firstAt,t);}
                    RememberDelivery(shooter,report,command.reactions.coverReports);
                }
                if(exited)continue; // Delivery was judged on this pass; the round flies on from the body.
                if(impact!=Shot::Impact::None)bullets.erase(bullets.begin()+i);
                else {const float travelled=Distance(b.p,next);b.p=next;b.velocity=b.velocity*std::exp(-b.dragK*travelled);b.velocity.z-=9.81f*dt;++i;}
                flying=false;
            }
        }
        r.diagnostics->ballistics+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        // Fire at the end of the interval, after resolving incoming rounds.
        for(auto& s:f.soldiers) if(s.Active()) {
            auto& a=run[s.id];
            a.cooldown-=TickSeconds;
            s.movingFire=false;
            // A magazine emptied on the move is carried empty; the reload starts at the
            // first halt, which is also the only place it can be started from.
            if(s.reloadDeferred&&s.action!=Action::Advance&&s.action!=Action::Cover&&s.action!=Action::Retreat) {
                s.reloadUntil=f.time+s.gun.reloadSeconds/StatScale(s.stats.Get(Stat::Dexterity));s.reloadDeferred=false;
            }
            // A reload is only ever started by an empty magazine, so fixtures that
            // drive reloadUntil directly to silence a soldier keep working.
            if(s.magazineRemaining<=0&&!s.reloadDeferred&&f.time>=s.reloadUntil)s.magazineRemaining=s.gun.magazine;
            // Fire after stopping, or on the move while attacking on foot (plan 019).
            const bool walking=c.movingFire&&s.stance!=Stance::Prone&&WalkingFire(s,f.time); // a crawler never fires (plan 029)
            // Plan 030 M-S7 P1 (Config::gradedPeek): a man up on a graded peek fires his round whatever the fire on him.
            const bool gradedShot=c.gradedPeek&&a.tactics.gradedPeek;
            if((s.action!=Action::Fire&&!walking)||(s.suppression>=0.8f&&!gradedShot)||f.time<s.reloadUntil||(c.prone&&f.time<a.riseUntil)||s.vaulting) {UpdateAim(s,-1,{},TickSeconds);a.burst={};s.areaFire=false;s.holdingFire=false;s.friendlyRisk=0;continue;}
            // From here the aim model, the friendly-fire cone and the pace read this flag.
            s.movingFire=walking;
            const Vec3 muzzle{s.position.x,s.position.y,s.position.z+Posture(s.stance).muzzle};
            const bool automatic=s.gun.action==WeaponAction::Automatic;
            const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
            // Plan 031 G (Config::gunSupport for his team; Soldier::supportGun is never set otherwise): a support gun keeps his
            // fire-control memory here, and set (not walking) he fires the support pattern: sustained bursts of gunBurst rounds,
            // a pause of gunBeat after each, the next burst's target chosen afresh.
            GunSupportMemory* gunMemory=gunMemories&&s.supportGun&&s.machineGun?&(*gunMemories)[size_t(s.id)]:nullptr;
            const bool supportPattern=gunMemory&&!walking;
            const bool sustained=supportPattern||(automatic&&(s.assignment.task==Task::Overwatch||s.assignment.task==Task::RearGuard||(s.assignment.drillInstance>0&&s.assignment.teamPlan.assaultAreaFire&&s.assignment.task==Task::BoundCover)));
            if((s.assignment.drillInstance>0&&s.assignment.teamPlan.liftFire)||f.time-a.burst.observedAt>6||(s.assignment.id&&s.assignment.teamPlan.liftFire&&Distance(a.burst.point,s.assignment.teamPlan.liftedSector)<12))a.burst={};
            // Plan 030 M-S7 P4 (a sector payload, Config::coverSector only): a threat of the sector he saw fire just now
            // takes the next burst at once, so the burst he is holding on another is broken off.
            if(sustained&&a.burst.enemy>=0&&s.assignment.fireSector){const int loud=SectorLoud(s,f.time);if(loud>=0&&loud!=a.burst.enemy)a.burst={};}
            // Plan 031 G: a support gun's target score reads how many of his squadmates each enemy he tracks overlooks (counted
            // again at most every GunSupportTuning::rescore) and when he last fired on each.
            GunSupportControl gunControl;
            if(gunMemory){ScoreGunThreats(s,r.map,f.time,c.gunMoverWeight,*gunMemory);gunControl.memory=gunMemory;gunControl.rotate=c.gunRotate;gunControl.threatBonus=c.gunThreatBonus;}
            FireSolution solution=SelectFireSolution(s,r.map,f.time,gunMemory?&gunControl:nullptr);
            if(sustained&&a.burst.enemy>=0&&f.time-a.burst.observedAt<=6)solution=a.burst;
            if(solution.enemy<0) {UpdateAim(s,-1,{},TickSeconds);a.burst={};s.areaFire=false;s.holdingFire=false;s.friendlyRisk=0;s.movingFire=false;continue;}
            // Walking fire goes at a man he sees or saw duck in the last two seconds (the same
            // memory a halted rifleman shoots on): keeping that man down is what it is for.
            if(walking&&Distance(s.position,s.contacts[solution.enemy].position)>WalkingFireRange(s)) {
                UpdateAim(s,-1,{},TickSeconds);a.burst={};s.areaFire=false;s.holdingFire=false;s.friendlyRisk=0;s.movingFire=false;continue;
            }
            s.friendlyRisk=FriendlyFireRisk(s,r.map,solution.point,f.time);
            if(ShouldHoldFire(s,s.friendlyRisk)) {
                if(!s.holdingFire){s.blockedSince=f.time;event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": holding fire for friendly troops");}
                if(f.time-s.lastBlockedAt>5)s.blockedSeconds=0;
                s.blockedSeconds+=TickSeconds;s.lastBlockedAt=f.time;
                s.aimPoint={solution.point.x,solution.point.y,solution.point.z-1.5f};
                s.holdingFire=true;UpdateAim(s,-1,{},TickSeconds);a.burst={};s.movingFire=false;continue;
            }
            s.holdingFire=false;
            if(sustained&&a.burst.enemy<0){a.burst=solution;
                // Plan 031 G: a support gun begins a burst (evidence: the count, and a row with the target's terms when traced).
                if(supportPattern){++r.gunSupportBursts;TraceGunBurst(r.diagnostics.get(),s,f.command[s.squad],f.time,solution,gunControl,*gunMemory);gunMemory->lastTarget=solution.enemy;}}
            s.areaFire=solution.area;
            int target=solution.enemy;
            Vec3 aim{solution.point.x,solution.point.y,solution.point.z-1.5f};
            float best=Length({aim.x-s.position.x,aim.y-s.position.y,0});
            UpdateAim(s,target,aim,TickSeconds,gradedShot);
            if(a.cooldown>0||s.aim<AimReady(s))continue;
            // Plan 031 G (Config::gunBipod for his team, Legacy only): a machine gun fired set is on its bipod (FiredSpread).
            const float spread=FiredSpread(s,c,walking,solution.area);
            if(GunBipodSet(s,c,walking))++r.gunBipodRounds;
            // Plan 030 M-S4: an automatic gunner holds against the recoil he felt on his last round.
            const bool compensate=c.gunnerCompensation&&automatic;
            const Vec3 off=SwayOffset(s,f.time)+(compensate?HeldRecoil(s):s.recoil);
            float angle=std::atan2(aim.y-s.position.y,aim.x-s.position.x)+off.x+(rng.Next()-0.5f)*2*spread;
            Vec3 direction={std::cos(angle),std::sin(angle)};s.facing=direction;
            const float speed=s.gun.muzzleVelocity;
            // Aim at the last seen torso; small vertical spread and gravity compensation.
            const float flightTime=FlightTime(best,speed,s.gun.dragK);
            float vz=(solution.point.z-muzzle.z)/std::max(0.001f,flightTime)+4.905f*flightTime+speed*std::tan(off.y)+(rng.Next()-0.5f)*speed*VerticalSpread(s);
            Shot shot;shot.suppressive=solution.area;shot.movingFire=walking;shot.aimedAt=solution.point;shot.time=shot.impactTime=f.time;shot.owner=s.id;shot.aimedEnemy=solution.enemy;shot.start=shot.end=s.position;
            shot.flight.push_back({f.time,muzzle});r.shots.push_back(shot);
            bullets.push_back({muzzle,{direction.x*speed,direction.y*speed,vz},s.id,r.shots.size()-1,s.gun.bulletMass,s.gun.dragK,{},{}});
            ++s.rounds;s.lastShotAt=f.time;if(s.shakenShots>0)--s.shakenShots;ApplyRecoil(s);if(compensate)s.recoilHold=RecoilHold(s);s.aim=sustained?0.98f:automatic?0.8f:s.gun.action==WeaponAction::SemiAuto?0.5f:0.2f;
            // Plan 031 D (Config::fireAndMovement; the marker is only ever set then): a round of the drill's gun fired set at
            // his station on a threat of his sector is heard at once by every man of his squad (the gate's local perception).
            if(s.assignment.fm.gun==s.id&&FmGunRound(s,solution.enemy,f.time)){s.fmFireAt=f.time;for(auto& mate:f.soldiers)if(mate.squad==s.squad&&mate.Active())mate.fmHeardAt=f.time;}
            s.blockedSeconds=0;s.lastBlockedAt=-100;
            // Cyclic rate is mechanical and never stat-modified; burst structure is behaviour.
            a.cooldown=automatic||s.gun.action==WeaponAction::SemiAuto?s.gun.cyclicSeconds:
                s.gun.cycleSeconds/dexterity*(walking?MovePenalty(s.gun.moving.cadence,dexterity):1.f)+s.suppression*0.5f;
            // Plan 031 G: a support gun remembers the round on its target; after gunBurst rounds he pauses gunBeat and drops the
            // burst's target (the next is chosen afresh, the one just fired on now passed over for gunRotate).
            if(supportPattern){if(solution.enemy>=0)gunMemory->firedAt[size_t(solution.enemy)]=f.time;if(s.rounds%std::max(1,c.gunBurst)==0){a.cooldown=c.gunBeat;a.burst={};}}
            else if(sustained&&s.rounds%18==0){a.cooldown=1.f;a.burst={};}
            if(automatic&&!sustained) {
                // Hip bursts of burstMin..burstMax rounds with the usual pause. The length is a
                // deterministic function of the shooter and his burst count: no new random draw.
                if(walking&&s.gun.moving.burstMin>0&&s.gun.moving.burstMax>=s.gun.moving.burstMin) {
                    if(a.burstLength<=0)a.burstLength=s.gun.moving.burstMin+(s.id+a.bursts)%(s.gun.moving.burstMax-s.gun.moving.burstMin+1);
                    if(++a.burstRounds>=a.burstLength){a.cooldown=0.6f/(s.gun.ergonomics*dexterity);a.burstRounds=0;a.burstLength=0;++a.bursts;}
                } else {a.burstRounds=0;a.burstLength=0;if(s.rounds%3==0)a.cooldown=0.6f/(s.gun.ergonomics*dexterity);}
            }
            if(--s.magazineRemaining<=0) {
                if(walking)s.reloadDeferred=true;   // he finishes the rush and reloads at the halt
                else s.reloadUntil=f.time+s.gun.reloadSeconds/dexterity;
            }
            a.tactics.readyAt=std::max(f.time+a.cooldown,s.reloadUntil);
        }
        r.diagnostics->firing+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        if(options.enabled)for(const auto& s:f.soldiers)TraceSoldier(*r.diagnostics,s,f.command[s.squad],r.map,run[s.id].tactics,f.time);
        r.diagnostics->trace+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        const bool done=ResolveDeathmatch(r,f,!bullets.empty(),tick==maxTicks);
        if((c.recoveryFixture||c.foundations)&&(done||tick==maxTicks))for(auto& s:f.soldiers)SetTaskStatus(s,TaskStatus::Failed,s.Active()?TaskCause::BattleEnded:TaskCause::Casualty,f.time,command.diagnostics);
        if(tick%4==0||done||tick==maxTicks) recordFrame(f);
        r.diagnostics->recording+=DiagnosticSeconds(stageStart);
        if(done) break;
    }
    r.duration=f.time;
    if(r.conclusion.empty()) ResolveDeathmatch(r,f,false,true);
    event(EventKind::Result,-1,-1,r.conclusion);
    std::stable_sort(r.events.begin(),r.events.end(),[](const Event& a,const Event& b){return a.time<b.time;});
    r.diagnostics->total=DiagnosticSeconds(totalStart);
    return r;
}
std::string EventLog(const Record& r) {
    std::ostringstream out;out<<"ARMY PROTOTYPE / BATTLE RECORD v1\nSeed: "<<r.config.seed
        <<"\nDoctrine: "<<DoctrineName(r.config.doctrine)<<"\nApproach: "<<ApproachName(r.config.approach)
        <<"\nWinner: "<<(r.winner==0?"Azure":r.winner==1?"Ember":"Draw")<<"\n"<<r.conclusion<<"\n\n";
    out<<std::fixed<<std::setprecision(2);
    for(const auto& e:r.events) out<<e.time<<"s  "<<e.text<<"\n";
    return out.str();
}
}
