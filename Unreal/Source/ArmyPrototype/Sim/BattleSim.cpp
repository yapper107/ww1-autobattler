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
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <queue>
#include <sstream>

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
float MapContact(const Map& map,Vec3 from,Vec3 to) {
    if(map.queryProfile)++map.queryProfile->collision;
    if(map.prepared)return IndexedContact(map,from,to,false);
    float first=2;size_t building=0;
    for(size_t i=0;i<map.obstacles.size();++i) {
        if(building<map.buildings.size()&&i==map.buildings[building].firstObstacle) {
            const auto& b=map.buildings[building++];
            Obstacle bounds{b.center,b.half+Vec3{0.23f,0.23f,0},true,false,UpperFloor*2};
            if(b.obstacleCount&&SegmentObstacle(from,to,bounds)<0){i+=b.obstacleCount-1;continue;}
        }
        float hit=SegmentObstacle(from,to,map.obstacles[i]);if(hit>=0)first=std::min(first,hit);
    }
    return first<=1?first:-1;
}
static bool IndexedClear3D(const Map& map,Vec3 from,Vec3 to,float){return IndexedContact(map,from,to,true)<0;}
bool ClearLine3D(const Map& map,Vec3 from,Vec3 to) {
    if(map.queryProfile)++map.queryProfile->sight;
    if(map.prepared)return MemoisedSegment(map,from,to,-1,0,IndexedClear3D);
    // Visibility needs any blocker, while a projectile needs the closest hit.
    size_t building=0;
    for(size_t i=0;i<map.obstacles.size();++i) {
        if(building<map.buildings.size()&&i==map.buildings[building].firstObstacle) {
            const auto& b=map.buildings[building++];
            Obstacle bounds{b.center,b.half+Vec3{0.23f,0.23f,0},true,false,UpperFloor*2};
            if(b.obstacleCount&&SegmentObstacle(from,to,bounds)<0){i+=b.obstacleCount-1;continue;}
        }
        if(SegmentObstacle(from,to,map.obstacles[i])>=0)return false;
    }
    return true;
}
float BodyHeight(Stance stance) {return stance==Stance::Crouched?0.9f:1.85f;}
bool ProtectedAt(const Map& map,Vec3 position,Vec3 threat,Stance stance) {
    Vec3 dir=Normal(position-threat),side{-dir.y,dir.x};
    // Test both shoulders and the centre at head and torso height.
    for(float offset:{-0.4f,0.f,0.4f}) for(float fraction:{0.5f,0.96f}) {
        Vec3 p=position+side*offset;
        Vec3 body{p.x,p.y,p.z+BodyHeight(stance)*fraction},enemyEye{threat.x,threat.y,threat.z+1.7f};
        // Actual cover must lie between the soldier and threat, close enough to
        // shelter behind. A distant obstruction is concealment, not local cover.
        Vec3 nearEnd=body+(enemyEye-body)*std::min(1.f,3.f/std::max(0.01f,Distance(body,enemyEye)));
        if(ClearLine3D(map,body,nearEnd))return false;
    }
    return true;
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
        "Exposed to fire. Seeking nearby shelter before resuming orders.","Holding protected cover. A firing angle can wait.","At the assigned waypoint. Waiting for the next squad order.","Yielding at a doorway or stairs. Keeping the passage clear.","Moving while the other fireteam covers.","Covering the other fireteam. Holding this firing position.","Assigned window team. Supporting the squad from the building."};
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
        s.stats=GenerateStats(c.statProfiles[s.team],roster,c.equalTroops?i%TeamSize:i);
        s.maxHealth=100*StatScale(s.stats.Get(Stat::Toughness));s.health=s.maxHealth;
        EquipWeapon(s,{s.squad%SquadsPerTeam==0&&slot==SquadSize-1&&(s.team==1||c.supportWeapon)?WeaponId::MachineGun:WeaponId::Rifle,{}});
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
float AimSeconds(const Soldier& s) {
    return 0.45f/(s.gun.ergonomics*StatScale(s.stats.Get(Stat::Dexterity)))*(1+3*s.suppression)*(s.health<55?1.3f:1.f);
}
float ShotSpread(const Soldier& s) {return s.gun.baseDeviation+0.040f/(s.gun.sightQuality*StatScale(s.stats.Get(Stat::Perception)))+s.suppression*0.10f;}
float VerticalSpread(const Soldier& s) {return 0.014f/(s.gun.sightQuality*StatScale(s.stats.Get(Stat::Perception)))+s.suppression*0.024f;}
float ReportDelay(float base,const Soldier& sender) {return base/StatScale(sender.stats.Get(Stat::Wisdom));}
void UpdateAim(Soldier& s,int target,Vec3 point,float dt) {
    if(target<0||s.action!=Action::Fire||s.suppression>=0.8f) {s.aim=0;s.aimTarget=-1;return;}
    if(s.aimTarget!=target)s.aim=0;
    else if(Distance(s.aimPoint,point)>1.5f)s.aim*=0.5f;
    s.aimTarget=target;s.aimPoint=point;
    s.aim=Clamp(s.aim+std::max(0.f,dt)/AimSeconds(s),0,1);
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
    const float muzzle=s.position.z+(s.stance==Stance::Crouched?0.72f:1.5f);
    const bool automatic=s.gun.action==WeaponAction::Automatic;
    for(int id=0;id<UnitCount;++id) {
        const auto& ct=s.allies[id];float age=time-ct.observedAt;
        if(id==s.id||!ct.known||age<0||age>1.5f)continue;
        for(float ahead:{0.f,automatic?0.7f:0.25f}) {
            Vec3 p=ct.position+s.allyVelocity[id]*std::min(1.5f,age+ahead+Distance(s.position,ct.position)/s.gun.muzzleVelocity);
            Vec3 offset=p-s.position;float along=offset.x*direction.x+offset.y*direction.y;
            if(along<0||along>std::min(110.f,range+25))continue;
            // Solid terrain protects a friendly hidden beyond it. This uses only
            // that friendly's observed/predicted position, never enemy truth.
            if(!ClearLine3D(map,{s.position.x,s.position.y,muzzle},{p.x,p.y,ct.position.z+(ct.aimHeight-ct.position.z)*0.75f}))continue;
            const float width=0.55f+along*ShotSpread(s)+(automatic?0.6f:0.15f)+age*0.2f;
            const float lateral=std::abs(offset.x*direction.y-offset.y*direction.x);
            float height=muzzle+(aim.z-muzzle)*along/range;
            float verticalWidth=along*VerticalSpread(s)*0.5f+0.25f;
            if(height-verticalWidth>ct.aimHeight||height+verticalWidth<ct.position.z)continue;
            risk=std::max(risk,std::max(0.f,1-lateral/width));
        }
    }
    if(s.cognition&&s.supportSector.shooter==s.id&&time>=s.supportSector.observedAt&&time-s.supportSector.observedAt<=8){
        for(const auto& friendly:s.supportSector.friendlies){
            const float age=time-friendly.observedAt;if(age<0||age>8||friendly.soldier==s.id)continue;
            // Received movement intent bounds where an unseen friendly can be;
            // do not pretend the reported position is a fresh personal sighting.
            Vec3 delta=friendly.destination-friendly.position;
            const float length=Length(delta),travel=std::min(length,(age+.7f)*3.15f);
            for(float ahead:{0.f,travel}){
                Vec3 p=friendly.position+(length>.01f?delta*(ahead/length):Vec3{}),offset=p-s.position;
                const float along=offset.x*direction.x+offset.y*direction.y;
                if(along<0||along>std::min(110.f,range+25))continue;
                if(!ClearLine3D(map,{s.position.x,s.position.y,muzzle},p+Vec3{0,0,1.3f}))continue;
                const float lateral=std::abs(offset.x*direction.y-offset.y*direction.x);
                const float width=.55f+along*ShotSpread(s)+.6f+std::min(2.f,age*.35f);
                risk=std::max(risk,std::max(0.f,1-lateral/width));
            }
        }
    }
    return risk;
}
bool ShouldHoldFire(const Soldier& s,float risk) {return risk>=(s.gun.action==WeaponAction::Automatic?0.25f:0.45f);}
FireSolution SelectFireSolution(const Soldier& s,const Map& map,float time) {
    FireSolution best;float score=1e9f;
    if(s.assignment.drillInstance>0&&s.assignment.teamPlan.liftFire)return best;
    const bool support=s.assignment.task==Task::Overwatch||s.assignment.task==Task::BoundCover||(s.machineGun&&s.assignment.task==Task::RearGuard);
    const Vec3 muzzle{s.position.x,s.position.y,s.position.z+(s.stance==Stance::Crouched?0.72f:1.5f)};
    const bool sectorCurrent=s.assignment.id&&time>=s.supportSector.observedAt&&time-s.supportSector.observedAt<=8;
    auto requested=[&](int enemy){return s.cognition&&support&&((s.assignment.execution.rifleSupport&&s.assignment.execution.supportThreat==enemy)||
        (sectorCurrent&&!s.supportSector.lifted&&std::any_of(s.supportSector.threats.begin(),s.supportSector.threats.end(),[&](const SupportThreat& t){return t.enemy==enemy;})));};
    auto remembered=[&](int enemy){
        Contact ct=s.contacts[enemy];const auto& report=s.reports[enemy];
        if(support&&(s.cognition?report.observedAt>ct.observedAt:report.known&&(!ct.known||report.observedAt>ct.observedAt))){ct=report;if(s.cognition)ct.visible=false;}
        if(s.cognition){ct.clearedAt=std::max(s.contacts[enemy].clearedAt,report.clearedAt);ct.known=TrackConfidence(ct,time)>.15f;}
        return ct;
    };
    auto usable=[&](const Contact& ct,int enemy){
        if(!s.cognition)return ct.known&&time-ct.observedAt<=6;
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
    const int preferred=priorities.empty()?-1:priorities[(s.rounds/6)%priorities.size()];
    for(int i=0;i<UnitCount;++i) {
        Contact ct=remembered(i);
        if(!ct.known)continue;
        if(support&&sectorCurrent&&s.supportSector.lifted&&std::any_of(s.supportSector.threats.begin(),s.supportSector.threats.end(),[&](const SupportThreat& threat){return threat.enemy==i;}))continue;
        if(s.assignment.id&&s.assignment.teamPlan.liftFire&&Distance(ct.position,s.assignment.teamPlan.liftedSector)<12&&Distance(ct.position,s.position)>15)continue;
        if(support) {if(!usable(ct,i))continue;}
        else if(time-ct.observedAt>(ct.visible?ReactionSeconds(s,ReactionKind::Sight)+.4f+(s.cognition?ct.detectionDelay:0.f):2.f))continue;
        Vec3 target=aimPoint(ct,i);
        float distance=Distance(s.position,ct.position);
        if(distance>100||distance<0.5f)continue;
        if(!support&&ct.visible&&!ClearLine3D(map,muzzle,target))continue;
        if(support&&!ct.visible&&!ClearLine3D(map,muzzle,target)){
            Vec3 bestEdge=target;float nearestEdge=1e9f;
            for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,ct.position)<4){Vec3 point=cover.peek+Vec3{0,0,1.5f};
                float shift=Distance(point,target);if(shift<nearestEdge&&ClearLine3D(map,muzzle,point)){nearestEdge=shift;bestEdge=point;}}
            if(nearestEdge<1e8f)target=bestEdge;
        }
        if(support||!ct.visible) {
            Vec3 direction=Normal(ct.position-s.position);
            if(!ClearLine3D(map,muzzle,{muzzle.x+direction.x*2,muzzle.y+direction.y*2,muzzle.z}))continue;
        }
        float value=distance+(ct.visible?0.f:12.f)+(i==s.aimTarget?-10.f:0.f);
        if(std::find(priorities.begin(),priorities.end(),i)!=priorities.end())value-=80;
        if(i==preferred)value-=30;
        if(ShouldHoldFire(s,FriendlyFireRisk(s,map,target,time)))value+=1000;
        if(value<score) {score=value;best={i,target,ct.observedAt,support||!ct.visible};}
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
std::vector<Vec3> TaskExecutionPath(const Map& map,const Soldier& s,Vec3 goal,const Tactics& tactics){
    if(s.assignment.id&&s.assignment.hasSlot&&!tactics.emergency){
        const auto& slot=s.assignment.slot;
        const bool localGoal=Distance(goal,slot.peek)<.05f||Distance(goal,slot.shelter)<.05f;
        const bool atSlot=Distance(s.position,slot.shelter)+Distance(s.position,slot.peek)<=Distance(slot.shelter,slot.peek)+1.5f;
        if(localGoal&&atSlot)return FindPath(map,s.position,goal);
    }

    const auto& route=s.assignment.teamPlan.route;
    const bool moving=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank||s.assignment.task==Task::PullBack||s.assignment.task==Task::Rally;
    if(s.assignment.id&&moving&&!tactics.emergency&&Distance(s.position,goal)<3&&ClearLine(map,s.position,goal,.48f))return {goal};
    if(route&&moving&&!tactics.emergency){
        auto path=s.cognition&&(s.assignment.execution.completion==Completion::Occupy||s.assignment.execution.completion==Completion::Observe)?
            FollowFinalApproach(map,*route,s.position,goal):FollowCorridor(map,*route,s.position,goal);
        if(path.empty()&&s.assignment.id&&CorridorDistance(*route,s.position)>4){
            // Rejoin through the route entry after a local interruption, never cut its interior.
            auto join=FindPath(map,s.position,route->start),rest=FollowCorridor(map,*route,route->start,goal);
            if(!join.empty()&&!rest.empty()){join.insert(join.end(),rest.begin(),rest.end());return join;}
        }
        return path;
    }
    return FindPath(map,s.position,goal);
}
struct Runtime { std::vector<Vec3> path;size_t cursor=0;float cooldown=0;Vec3 destination{999,999};Tactics tactics;Assignment lastOrder;FireSolution burst;Vec3 progressPosition{};float nextPathCheck=0,avoidUntil=0;bool trafficWaiting=false;std::vector<Vec3> parkingPath;size_t parkingCursor=0;Vec3 parkingGoal{999,999}; };
struct Projectile { Vec3 p,velocity;int owner;size_t shot;std::array<bool,UnitCount> suppressed{}; bool delivered=false; };
// Decision code receives only self/remembered contacts and friendly positions.
// It has no authoritative enemy roster or hidden enemy positions.
static bool UsefulCover(const Soldier& s,const Map& map,const Tactics& memory,float time) {
    if(!memory.assigned||std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))>1.5f)return false;
    bool angle=false;
    for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<8) {
        if(ct.visible&&!ProtectedAt(map,memory.shelter,ct.position,memory.halfCover?Stance::Crouched:Stance::Standing))return false;
        if(ProtectedAt(map,memory.shelter,ct.position,memory.halfCover?Stance::Crouched:Stance::Standing)&&
            ClearLine3D(map,memory.peek+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))angle=true;
    }
    return angle;
}
Order ChooseOrder(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time,DecisionAlternatives* alternatives) {
    Doctrine d=s.team?c.emberDoctrine:c.doctrine;
    float sign=s.team?-1.f:1.f;
    Vec3 objective=s.assignment.task==Task::None?s.position:s.assignment.position;
    int threat=-1;float nearest=1e9f;bool visible=false;
    for(int i=0;i<UnitCount;++i) {
        const auto& ct=s.contacts[i]; if(!ct.known||time-ct.observedAt>10) continue;
        float dist=Distance(s.position,ct.position);
        if((ct.visible&&!visible)||(ct.visible==visible&&dist<nearest)) {nearest=dist;threat=i;visible=ct.visible;}
    }
    // Old cover is not an indefinite hold order. Once contact has expired,
    // follow a changed mission unless incoming fire still demands shelter.
    if(threat<0&&s.suppression<0.08f&&memory.assigned&&
        Distance(memory.shelter,objective)>3&&s.assignment.task!=Task::None) {
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
    const bool terrainScreen=s.assignment.id&&!ClearLine3D(map,enemy+Vec3{0,0,1.5f},s.position+Vec3{0,0,BodyHeight(s.stance)*.8f});
    const bool exposed=!terrainScreen&&!ProtectedAt(map,s.position,enemy,s.stance);
    // A firing edge is deliberately exposed, but has a remembered shelter to duck
    // into. Open-ground firing has no such refuge and must trigger self-preservation.
    const bool nearShelter=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<1.5f&&
        ProtectedAt(map,memory.shelter,enemy,memory.halfCover?Stance::Crouched:Stance::Standing);
    const bool openFire=exposed&&!nearShelter&&s.suppression>0.08f;
    const bool exposedStop=visible&&exposed&&!nearShelter&&(s.action==Action::Fire||s.action==Action::Hold);
    const bool protectHold=(s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||rearGuard)&&Distance(s.position,objective)<1.5f&&exposed&&!memory.assigned;
    const bool usefulCover=UsefulCover(s,map,memory,time);
    if(alternatives&&usefulCover)alternatives->Add(memory.shelter,-1,"retain useful current cover");
    const bool assignedHold=s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||s.assignment.task==Task::Overwatch||s.assignment.task==Task::Window||rearGuard;
    if(usefulCover||(nearShelter&&threat>=0&&(!visible||assignedHold)))memory.expires=std::max(memory.expires,time+12);
    const bool contactExposure=visible&&exposed&&!nearShelter&&
        (s.assignment.task==Task::Advance||s.assignment.task==Task::Hold||s.assignment.task==Task::Rally||s.assignment.task==Task::None);
    if(memory.emergency&&memory.assigned&&ProtectedAt(map,memory.shelter,enemy,memory.halfCover?Stance::Crouched:Stance::Standing)&&
        (pressure||(threat>=0&&(s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover||rearGuard)&&Distance(memory.shelter,objective)<8)))memory.expires=std::max(memory.expires,time+3);
    if(memory.emergency&&time>=memory.expires&&!pressure){memory.assigned=false;memory.emergency=false;}
    const bool localSafety=(pressure&&exposed)||openFire||exposedStop||contactExposure||protectHold||(memory.emergency&&memory.assigned&&time<memory.expires);
    const bool maneuverArrival=s.assignment.task==Task::BoundMove||s.assignment.task==Task::Flank;
    if(maneuverArrival&&!memory.assigned&&Distance(s.position,objective)<1.5f){
        for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,objective)<.75f&&ClearLine(map,cover.shelter,cover.peek,.48f)){
            memory={};memory.assigned=true;memory.halfCover=cover.crouch;memory.shelter=cover.shelter;memory.peek=cover.peek;
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
    if(s.assignment.task==Task::ClearLane&&!localSafety) {
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
            const Stance sheltered=cover.crouch?Stance::Crouched:Stance::Standing;
            bool safe=ProtectedAt(map,cover.shelter,enemy,sheltered);
            for(const auto& ct:s.contacts)if(ct.visible&&!ProtectedAt(map,cover.shelter,ct.position,sheltered))safe=false;
            if(!safe)continue;
            memory={};memory.assigned=true;memory.halfCover=cover.crouch;memory.shelter=cover.shelter;memory.peek=cover.peek;
            if(!cover.crouch)for(int step=1;step<=60;++step){Vec3 trial=cover.shelter+(cover.peek-cover.shelter)*(step/60.f);
                if(ClearLine3D(map,trial+Vec3{0,0,1.5f},enemy+Vec3{0,0,1.45f})){memory.peek=trial;break;}}
            memory.expires=time+180;memory.lastProgress=time;break;
        }
    }
    if(overwatch&&!memory.assigned&&(!localSafety||Distance(s.position,objective)<0.7f)) {
        bool safe=Walkable(map,objective)&&ProtectedAt(map,objective,enemy,Stance::Crouched);
        for(const auto& ct:s.contacts)if(ct.known&&!ProtectedAt(map,objective,ct.position,Stance::Crouched))safe=false;
        if(safe) {
            const float ready=memory.readyAt;
            memory={};memory.assigned=true;memory.halfCover=true;memory.readyAt=ready;
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
        if(memory.defensiveOnly&&threat>=0&&ClearLine3D(map,{memory.peek.x,memory.peek.y,memory.peek.z+1.5f},{enemy.x,enemy.y,s.contacts[threat].aimHeight}))memory.defensiveOnly=false;
        const Stance sheltered=memory.halfCover?Stance::Crouched:Stance::Standing;
        for(const auto& ct:s.contacts) if(ct.visible&&!ProtectedAt(map,memory.shelter,ct.position,sheltered)) flanked=true;
        if(!flanked&&time<memory.expires) {
            const bool sustained=s.machineGun&&overwatch;
            bool threatened=pinned||s.suppression>duckAt;
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
                if(!memory.peeking&&time>=memory.phaseUntil&&time>=s.reloadUntil&&!pinned&&s.suppression<(d==Doctrine::Cautious?0.25f:d==Doctrine::Aggressive?0.5f:0.35f)) {
                    memory.peeking=true;memory.phaseUntil=-1;memory.lastDistance=1e9f;memory.lastProgress=time;
                    memory.roundsAtPeek=s.rounds;memory.healthAtPeek=s.health;
                    return {memory.peek,memory.halfCover?Action::Fire:Action::Cover,sustained?Reason::SuppressiveFire:memory.halfCover?Reason::PopUp:Reason::Peek};
                }
                return {goal,memory.peeking?Action::Fire:Action::Hold,
                    pinned?Reason::Suppressed:memory.peeking?(sustained?Reason::SuppressiveFire:memory.halfCover?Reason::PopUp:Reason::CoverFire):memory.halfCover?Reason::Duck:Reason::Settle,
                    memory.peeking?Stance::Standing:sheltered};
            }
        }
    }
    const bool relocating=memory.assigned;

    memory.assigned=false;
    // Pair genuinely sheltered positions with reachable firing edges. Reserve both.
    Vec3 best{},bestPeek{};bool bestHalf=false,bestDefensive=false;float bestScore=1e9f;
    for(const auto& candidate:CoverPositions(map)) {
            Vec3 p=candidate.shelter,peek=candidate.peek;
            if(localSafety&&!OnStairs(map,s.position)&&std::abs(p.z-s.position.z)>0.5f)continue;
            if(candidate.window&&s.assignment.task!=Task::Window&&s.assignment.task!=Task::Overwatch&&!rearGuard&&!localSafety)continue;
            float travel=Distance(s.position,p);
            if(travel>(localSafety?35.f:candidate.window?30.f:20.f)||!Walkable(map,p))continue;
            const Stance sheltered=candidate.crouch?Stance::Crouched:Stance::Standing;
            auto firingLine=[&](Vec3 at){return ClearLine3D(map,{at.x,at.y,at.z+1.5f},{enemy.x,enemy.y,threat>=0?s.contacts[threat].aimHeight:enemy.z+1.65f});};
            // Stop at the first firing clearance, instead of walking a metre beyond the edge.
            if(!candidate.crouch)for(int step=1;step<=60;++step) {
                Vec3 trial=p+(candidate.peek-p)*(step/60.f);
                if(firingLine(trial)) {peek=trial;break;}
            }
            const bool defensive=!firingLine(peek);
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
            if(score<bestScore&&!FindPath(map,s.position,p).empty()) {bestScore=score;best=p;bestPeek=peek;bestHalf=candidate.crouch;bestDefensive=defensive;}
    }
    if(bestScore<1e8f) {
        memory={};memory.assigned=true;memory.halfCover=bestHalf;memory.shelter=best;memory.peek=bestPeek;memory.lastProgress=time;
        memory.emergency=localSafety;memory.defensiveOnly=bestDefensive;
        memory.expires=time+Distance(s.position,best)/1.5f+(localSafety?6.f:d==Doctrine::Cautious?22.f:d==Doctrine::Aggressive?10.f:16.f);
        return {best,Action::Cover,localSafety?Reason::EmergencyCover:pinned?Reason::Suppressed:flanked?Reason::Flanked:relocating?Reason::Relocate:Reason::Contact};
    }
    if(pinned||(pressure&&exposed)||openFire||exposedStop||contactExposure) {
        Vec3 away=s.position+Normal(s.position-enemy)*5.f;
        away.x=Clamp(away.x,-map.halfWidth+1,map.halfWidth-1);
        away.y=Clamp(away.y,-map.halfHeight+1,map.halfHeight-1);
        if(!FindPath(map,s.position,away).empty())return {away,Action::Retreat,pressure?Reason::Suppressed:Reason::EmergencyCover,Stance::Crouched};
        return {s.position,Action::Hold,Reason::Suppressed,Stance::Crouched};
    }
    if(rearGuard)return {objective,Distance(s.position,objective)>0.7f?Action::Cover:visible?Action::Fire:Action::Hold,Reason::RearFire};
    if(((s.assignment.task==Task::Hold||s.assignment.task==Task::BoundCover)&&Distance(s.position,objective)<1)||s.regrouping)
        return {s.position,visible?Action::Fire:Action::Hold,s.regrouping?Reason::Regroup:Reason::AtWaypoint};
    float preferred=d==Doctrine::Aggressive?15.f:d==Doctrine::Cautious?34.f:26.f;
    if(visible&&nearest<preferred) return {s.position,Action::Fire,Reason::ClearShot};
    return {objective,Action::Advance,visible?Reason::Search:Reason::LostContact};
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
    Vec3 eye=observer.position+Vec3{0,0,observer.stance==Stance::Crouched?0.82f:1.7f};
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
// The organisation flag is a cache of the equipped weapon; no maker may diverge.
void CheckWeaponConsistency(const Frame& f) {
    for(const auto& s:f.soldiers)if(s.machineGun!=(s.gun.action==WeaponAction::Automatic)||s.magazineRemaining>s.gun.magazine)
        throw std::logic_error("Soldier weapon state disagrees with the organisation flag or magazine capacity");
}
bool ResolveDeathmatch(Record& record,const Frame& frame,bool projectilesPending,bool timeLimit) {
    int alive[2]={0,0};for(const auto& s:frame.soldiers)if(s.Active())++alive[s.team];
    if(alive[0]&&alive[1]&&!timeLimit)return false;
    if(projectilesPending&&!timeLimit)return false;
    record.winner=alive[0]==alive[1]?-1:alive[0]>alive[1]?0:1;
    record.conclusion=alive[0]==0&&alive[1]==0?"Both forces eliminated.":
        !alive[0]||!alive[1]?"Opposing force eliminated.":
        record.winner<0?"Time limit: equal surviving soldiers. Draw.":"Time limit: more surviving soldiers wins.";
    return true;
}
Record Simulate(const Config& input,const DiagnosticOptions& options,const std::vector<GeometryEdit>& edits,int encounter) {
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
    auto totalStart=DiagnosticClock::now();
    Config c=input;c.maxSeconds=Clamp(c.maxSeconds,1,600);
    Record r;r.config=c;r.map=c.family==ScenarioFamily::None?MakeBattleMap(c):Map{};Frame f=InitialFrame(c);
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
    r.map.queryProfile=std::make_shared<QueryProfile>();CommandRuntime command;command.reactions.recoveryFixture=c.recoveryFixture;if(encounter>=4||c.family==ScenarioFamily::F1)command.fixedDefender=1;
    command.reportDelay=TypedController(c)?c.reportDelay:MessageDelay;
    if(encounter>=9&&encounter<=43){command.platoon.nextSerial=9001;for(int squad=0;squad<SquadCount;++squad){
        const auto& order=f.soldiers[squad*SquadSize].platoonOrder;command.platoon.lastOrders[squad]=order;
        command.platoon.nextSerial=std::max(command.platoon.nextSerial,order.serial+1);}}
    r.diagnostics=std::make_shared<Diagnostics>();r.diagnostics->options=options;command.diagnostics=r.diagnostics.get();command.reactions.diagnostics=r.diagnostics.get();
    r.frames.reserve(size_t(c.maxSeconds/FrameSeconds)+2);
    CheckWeaponConsistency(f);
    r.frames.push_back(f);Random rng(c.seed);
    std::array<Runtime,UnitCount> run;
    std::vector<Projectile> bullets;TrafficRuntime traffic;auto passages=BuildingPassages(r.map);
    for(auto& a:run) a.cooldown=rng.Next();
    if(c.recoveryFixture)for(const auto& s:f.soldiers)if(s.Active()&&s.squad==0){
        auto& cover=run[s.id].tactics;cover.assigned=cover.halfCover=true;
        cover.shelter=cover.peek=s.position;cover.expires=c.maxSeconds;cover.geometryRevision=r.map.revision;
        float best=1e9f;for(const auto& slot:CoverPositions(r.map))if(Distance(slot.shelter,s.position)<best){best=Distance(slot.shelter,s.position);cover.coverId=slot.id;}
    }
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
                    if(a.cursor<a.path.size()&&!ClearLine(r.map,unit.position,a.path[a.cursor],0.46f)){a.destination={999,999};a.path.clear();a.cursor=0;}
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
        for(auto& s:f.soldiers) s.suppression=std::max(0.f,s.suppression-TickSeconds*SuppressionRecoveryPerSecond*StatScale(s.stats.Get(Stat::Composure)));
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
                        {s.position.x,s.position.y,s.position.z+(s.stance==Stance::Crouched?0.82f:1.7f)},{enemy.position.x,enemy.position.y,enemy.position.z+BodyHeight(enemy.stance)*0.9f});
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
        UpdateCommands(f,r.map,c,command,r.events);
        r.diagnostics->commands+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        {
            for(auto& s:f.soldiers) if(s.Active()&&(tick%12==0||tick==1||run[s.id].tactics.assigned||s.assignment.serial!=run[s.id].lastOrder.serial)) {
                std::vector<Vec3> allies;
                for(const auto& friendUnit:f.soldiers) if(friendUnit.id!=s.id&&friendUnit.team==s.team&&friendUnit.Active()) {
                    allies.push_back(friendUnit.position);
                    const auto& reservation=run[friendUnit.id].tactics;
                    if(reservation.assigned) {allies.push_back(reservation.shelter);allies.push_back(reservation.peek);}
                }
                auto& state=run[s.id];
                if(state.lastOrder.serial!=s.assignment.serial) {
                    if(state.lastOrder.task!=s.assignment.task||Distance(state.lastOrder.position,s.assignment.position)>0.5f) {
                        const bool urgent=s.assignment.task==Task::PullBack||s.assignment.task==Task::Flank||s.assignment.task==Task::ClearLane||s.assignment.task==Task::BoundMove;
                        const bool useful=UsefulCover(WithReports(s,f.time),r.map,state.tactics,f.time);
                        const bool differentDestination=Distance(s.assignment.position,state.tactics.shelter)>3;
                        if(!state.tactics.assigned||((urgent||!useful)&&differentDestination)) {
                            state.tactics={};state.tactics.readyAt=f.time+std::max(0.f,state.cooldown);
                        }
                    }
                    state.lastOrder=s.assignment;
                }
                Soldier understood=WithReports(s,f.time);
                understood.health=s.understoodHealth;understood.suppression=s.understoodSuppression;
                DecisionAlternatives alternatives;
                auto* detail=DetailedFor(r.diagnostics.get(),s.id,s.squad,f.time)?&alternatives:nullptr;
                if(s.assignment.id)PrepareTaskExecution(understood,state.tactics,f.time);
                Order d=s.assignment.id?ExecuteTask(understood,geometryViews?(*geometryViews)[s.id]:r.map,c,allies,state.tactics,f.time,detail):ChooseOrder(understood,geometryViews?(*geometryViews)[s.id]:r.map,c,allies,state.tactics,f.time,detail);
                if(c.recoveryFixture&&s.team==command.fixedDefender){
                    // Fixed defenders may duck and fire at their authored low
                    // cover, but do not invent new positions in the test lane.
                    const Vec3 anchor=r.frames.front().soldiers[s.id].position;
                    const bool duck=understood.suppression>.52f||s.reloadUntil>f.time;
                    d={anchor,duck?Action::Hold:Action::Fire,duck?Reason::Suppressed:Reason::CoverFire,duck?Stance::Crouched:Stance::Standing};
                    state.tactics={};
                }
                if(state.tactics.assigned&&(state.tactics.coverId==0||state.tactics.geometryRevision!=r.map.revision)) {
                    state.tactics.coverId=0;state.tactics.geometryRevision=r.map.revision;
                    if(s.assignment.hasSlot&&CoverExists(r.map,s.assignment.slot.id)&&Distance(state.tactics.shelter,s.assignment.slot.shelter)<.1f)state.tactics.coverId=s.assignment.slot.id;
                    for(const auto& cover:CoverPositions(r.map))if(Distance(cover.shelter,state.tactics.shelter)<0.1f){state.tactics.coverId=cover.id;break;}
                }
                if(s.action!=d.action||s.reason!=d.reason)
                    event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": "+ReasonText(d.reason));
                s.action=d.action;s.reason=d.reason;s.goal=d.goal;s.stance=d.stance;
                if(s.assignment.id)EvaluateTaskExecution(s,r.map,state.tactics,f.time,command.diagnostics);
                if(detail&&!detail->choices.empty()){auto start=DiagnosticClock::now();TraceSoldier(*r.diagnostics,s,f.command[s.squad],r.map,state.tactics,f.time,detail);r.diagnostics->trace+=DiagnosticSeconds(start);}
                auto& a=run[s.id];
                if(Distance(a.destination,d.goal)>0.04f) {
                    a.destination=d.goal;a.path=TaskExecutionPath(r.map,s,d.goal,a.tactics);a.cursor=0;
                    if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,d.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);
                    TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,a.tactics.emergency?"emergency_departure":"path_selected",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                }
            }
        }
        // Rush duration is an execution bound, not the soldier think cadence.
        if(c.drills)for(auto& soldier:f.soldiers)if(soldier.Active()&&soldier.assignment.drillInstance>0&&
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
                Vec3 next=a.cursor<a.path.size()?a.path[a.cursor]:s.goal;
                requests.push_back({&s,next,(s.action!=Action::Fire&&s.action!=Action::Hold)||a.trafficWaiting});}
            auto decisions=CoordinatePassages(r.map,passages,requests,traffic,f.time);
            for(auto& s:f.soldiers)if(s.Active()&&s.team==team){auto& a=run[s.id];const auto& d=decisions[s.id];
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
                    a.path=TaskExecutionPath(r.map,s,s.goal,a.tactics);a.cursor=0;if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,s.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_recovery",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);s.action=Action::Advance;}
            }
        }
        for(auto& s:f.soldiers) if(s.Active()) {
            auto& a=run[s.id];
            if(f.time>=a.nextPathCheck) {
                if(s.action!=Action::Fire&&s.action!=Action::Hold&&Distance(s.position,s.goal)>0.7f&&
                    (a.cursor>=a.path.size()||Distance(s.position,a.progressPosition)<0.15f)) {
                    if(TypedController(c)&&Distance(s.position,a.progressPosition)<.15f)a.avoidUntil=f.time+3;
                    a.path=TaskExecutionPath(r.map,s,s.goal,a.tactics);a.cursor=0;if(s.assignment.id&&!a.tactics.emergency&&Distance(s.position,s.goal)>.7f)ReportTaskNavigation(s,!a.path.empty(),f.time,command.diagnostics);TracePath(r.diagnostics.get(),s,r.map,f.time,a.path,"path_recovery",s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0);
                }
                a.progressPosition=s.position;a.nextPathCheck=f.time+2;
            }
            if(a.cursor<a.path.size()&&s.action!=Action::Fire&&s.action!=Action::Hold) {
                if(c.recoveryFixture||TypedController(c))while(a.cursor+1<a.path.size()&&Distance(s.position,a.path[a.cursor])<.35f&&
                    std::abs(s.position.z-a.path[a.cursor+1].z)<.05f&&ClearLine(r.map,s.position,a.path[a.cursor+1],.48f))++a.cursor;
                Vec3 dest=a.path[a.cursor];float dist=Distance(s.position,dest);
                float speed=(s.machineGun?2.55f:3.15f)*(s.health<55?0.72f:1.f)*(1-s.suppression*0.45f)*(s.stance==Stance::Crouched?0.6f:1.f);
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
        }
        r.diagnostics->movement+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        // Swept 3D ballistics at 200 Hz. A round born at this tick boundary starts
        // travelling in the next interval, so a hit can never precede its flight.
        constexpr int Substeps=10;
        constexpr float Step=TickSeconds/Substeps;
        for(int sub=0;sub<Substeps;++sub) for(size_t i=0;i<bullets.size();) {
            auto& b=bullets[i];auto& shot=r.shots[b.shot];
            const float startTime=shot.impactTime;
            if(shot.time>=f.time) {++i;continue;}
            const float dt=std::max(0.f,std::min(f.time,(tick-1)*TickSeconds+(sub+1)*Step)-startTime);
            if(dt<=0){++i;continue;}
            Vec3 next=BallisticPosition(b.p,b.velocity,dt);
            float first=1;int hit=-1;Shot::Impact impact=Shot::Impact::None;
            float terrainHit=MapContact(r.map,b.p,next);
            if(terrainHit>=0&&terrainHit<=first){first=terrainHit;impact=Shot::Impact::Cover;}
            if(next.z<=r.map.groundBase) {float t=(b.p.z-r.map.groundBase)/(b.p.z-next.z);if(t<=first){first=t;impact=Shot::Impact::Ground;}}
            for(const auto& s:f.soldiers) if(s.Active()&&s.id!=b.owner) {
                const Vec3 delta=s.position-beforeMovement[s.id].position;
                Vec3 from=beforeMovement[s.id].position+delta*(float(sub)/Substeps);
                Vec3 to=beforeMovement[s.id].position+delta*(float(sub+1)/Substeps);
                float t=SegmentSoldier(b.p,next,from,to,BodyHeight(s.stance));
                if(t>=0&&t<first){first=t;hit=s.id;impact=Shot::Impact::Soldier;}
            }
            Vec3 end{b.p.x+(next.x-b.p.x)*first,b.p.y+(next.y-b.p.y)*first,b.p.z+(next.z-b.p.z)*first};
            const float endTime=std::min(f.time,startTime+dt*first);
            for(auto& s:f.soldiers) if(s.Active()&&s.team!=f.soldiers[b.owner].team&&!b.suppressed[s.id]) {
                // A round can suppress each soldier once; shelter occludes near misses.
                Vec3 ep{end.x,end.y,end.z};
                if(SegmentDistance(b.p,ep,s.position+Vec3{0,0,BodyHeight(s.stance)*0.7f})<2.2f&&ClearLine3D(r.map,end,{s.position.x,s.position.y,s.position.z+BodyHeight(s.stance)*0.7f})) {
                    s.suppression=Clamp(s.suppression+0.23f/StatScale(s.stats.Get(Stat::Composure)),0,1);b.suppressed[s.id]=true;
                }
            }
            shot.end=end;shot.impactTime=endTime;shot.flight.push_back({endTime,end});
            if(hit>=0) {
                auto& victim=f.soldiers[hit];float damage=32+rng.Next()*25;
                victim.health=std::max(0.f,victim.health-damage);victim.suppression=Clamp(victim.suppression+0.3f/StatScale(victim.stats.Get(Stat::Composure)),0,1);
                shot.hit=true;shot.target=hit;
                event(EventKind::Hit,b.owner,hit,std::string(Name(b.owner))+" hit "+Name(hit));r.events.back().time=endTime;
                if(!victim.Active()) {
                    victim.action=rng.Next()<0.55f?Action::Wounded:Action::Killed;victim.reason=Reason::Down;victim.aim=0;victim.aimTarget=-1;
                    run[hit].tactics.assigned=false;
                    for(auto& contact:victim.contacts) contact.visible=false;
                    event(EventKind::Casualty,hit,b.owner,std::string(Name(hit))+(victim.action==Action::Killed?" killed in action":" incapacitated"));
                    r.events.back().time=endTime;
                }
            }
            if(impact==Shot::Impact::None&&(endTime-shot.time>1||std::abs(end.x)>r.map.halfWidth+3||std::abs(end.y)>r.map.halfHeight+3)) impact=Shot::Impact::OutOfBounds;
            shot.impact=impact;
            auto& shooter=f.soldiers[b.owner];
            if(!b.delivered&&shot.aimedEnemy>=0&&SegmentDistance(b.p,end,shot.aimedAt)<6&&ClearLine3D(r.map,(c.recoveryFixture||TypedController(c))?shot.flight.front().position:shot.start,end+(((c.recoveryFixture||TypedController(c))?shot.flight.front().position:shot.start)-end)*.001f)) {
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
                RememberDelivery(shooter,report);
            }
            if(impact!=Shot::Impact::None)bullets.erase(bullets.begin()+i);
            else {b.p=next;b.velocity.z-=9.81f*dt;++i;}
        }
        r.diagnostics->ballistics+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        // Fire at the end of the interval, after resolving incoming rounds.
        for(auto& s:f.soldiers) if(s.Active()) {
            auto& a=run[s.id];
            a.cooldown-=TickSeconds;
            // A reload is only ever started by an empty magazine, so fixtures that
            // drive reloadUntil directly to silence a soldier keep working.
            if(s.magazineRemaining<=0&&f.time>=s.reloadUntil)s.magazineRemaining=s.gun.magazine;
            // Fire only after stopping: movement and settling are deliberate commitments.
            if(s.action!=Action::Fire||s.suppression>=0.8f||f.time<s.reloadUntil) {UpdateAim(s,-1,{},TickSeconds);a.burst={};s.areaFire=false;s.holdingFire=false;s.friendlyRisk=0;continue;}
            const Vec3 muzzle{s.position.x,s.position.y,s.position.z+(s.stance==Stance::Crouched?0.72f:1.5f)};
            const bool automatic=s.gun.action==WeaponAction::Automatic;
            const float dexterity=StatScale(s.stats.Get(Stat::Dexterity));
            const bool sustained=automatic&&(s.assignment.task==Task::Overwatch||s.assignment.task==Task::RearGuard||(s.assignment.drillInstance>0&&s.assignment.teamPlan.assaultAreaFire&&s.assignment.task==Task::BoundCover));
            if((s.assignment.drillInstance>0&&s.assignment.teamPlan.liftFire)||f.time-a.burst.observedAt>6||(s.assignment.id&&s.assignment.teamPlan.liftFire&&Distance(a.burst.point,s.assignment.teamPlan.liftedSector)<12))a.burst={};
            FireSolution solution=SelectFireSolution(s,r.map,f.time);
            if(sustained&&a.burst.enemy>=0&&f.time-a.burst.observedAt<=6)solution=a.burst;
            if(solution.enemy<0) {UpdateAim(s,-1,{},TickSeconds);a.burst={};s.areaFire=false;s.holdingFire=false;s.friendlyRisk=0;continue;}
            s.friendlyRisk=FriendlyFireRisk(s,r.map,solution.point,f.time);
            if(ShouldHoldFire(s,s.friendlyRisk)) {
                if(!s.holdingFire){s.blockedSince=f.time;event(EventKind::Decision,s.id,-1,std::string(Name(s.id))+": holding fire for friendly troops");}
                if(f.time-s.lastBlockedAt>5)s.blockedSeconds=0;
                s.blockedSeconds+=TickSeconds;s.lastBlockedAt=f.time;
                s.aimPoint={solution.point.x,solution.point.y,solution.point.z-1.5f};
                s.holdingFire=true;UpdateAim(s,-1,{},TickSeconds);a.burst={};continue;
            }
            s.holdingFire=false;
            if(sustained&&a.burst.enemy<0)a.burst=solution;
            s.areaFire=solution.area;
            int target=solution.enemy;
            Vec3 aim{solution.point.x,solution.point.y,solution.point.z-1.5f};
            float best=Length({aim.x-s.position.x,aim.y-s.position.y,0});
            UpdateAim(s,target,aim,TickSeconds);
            if(a.cooldown>0||s.aim<1)continue;
            float spread=ShotSpread(s)+(!automatic&&solution.area?.015f:0.f);
            if(s.action==Action::Advance||s.action==Action::Cover) spread+=0.030f;
            float angle=std::atan2(aim.y-s.position.y,aim.x-s.position.x)+(rng.Next()-0.5f)*2*spread;
            Vec3 direction={std::cos(angle),std::sin(angle)};s.facing=direction;
            const float speed=s.gun.muzzleVelocity;
            // Aim at the last seen torso; small vertical spread and gravity compensation.
            const float flightTime=best/speed;
            float vz=(solution.point.z-muzzle.z)/std::max(0.001f,flightTime)+4.905f*flightTime+(rng.Next()-0.5f)*speed*VerticalSpread(s);
            Shot shot;shot.suppressive=solution.area;shot.aimedAt=solution.point;shot.time=shot.impactTime=f.time;shot.owner=s.id;shot.aimedEnemy=solution.enemy;shot.start=shot.end=s.position;
            shot.flight.push_back({f.time,muzzle});r.shots.push_back(shot);
            bullets.push_back({muzzle,{direction.x*speed,direction.y*speed,vz},s.id,r.shots.size()-1,{}});
            ++s.rounds;s.lastShotAt=f.time;s.aim=sustained?0.98f:automatic?0.8f:s.gun.action==WeaponAction::SemiAuto?0.5f:0.2f;
            s.blockedSeconds=0;s.lastBlockedAt=-100;
            // Cyclic rate is mechanical and never stat-modified; burst structure is behaviour.
            a.cooldown=automatic||s.gun.action==WeaponAction::SemiAuto?s.gun.cyclicSeconds:s.gun.cycleSeconds/dexterity+s.suppression*0.5f;
            if(sustained&&s.rounds%18==0){a.cooldown=1.f;a.burst={};}
            if(automatic&&!sustained&&s.rounds%3==0)a.cooldown=0.6f/(s.gun.ergonomics*dexterity);
            if(--s.magazineRemaining<=0)s.reloadUntil=f.time+s.gun.reloadSeconds/dexterity;
            a.tactics.readyAt=std::max(f.time+a.cooldown,s.reloadUntil);
        }
        r.diagnostics->firing+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        if(options.enabled)for(const auto& s:f.soldiers)TraceSoldier(*r.diagnostics,s,f.command[s.squad],r.map,run[s.id].tactics,f.time);
        r.diagnostics->trace+=DiagnosticSeconds(stageStart);stageStart=DiagnosticClock::now();
        const bool done=ResolveDeathmatch(r,f,!bullets.empty(),tick==maxTicks);
        if((c.recoveryFixture||c.foundations)&&(done||tick==maxTicks))for(auto& s:f.soldiers)SetTaskStatus(s,TaskStatus::Failed,s.Active()?TaskCause::BattleEnded:TaskCause::Casualty,f.time,command.diagnostics);
        if(tick%4==0||done||tick==maxTicks) r.frames.push_back(f);
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
