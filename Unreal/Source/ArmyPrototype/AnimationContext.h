#pragma once
// Read-only inputs for the proposed GASP adapter. No pose selection or gameplay mutation.
// Values are metres/seconds/radians, not Unreal centimetres. Record must outlive this
// view and remain immutable. Sampling order and wall-clock delta never affect results.
#include "Sim/BattleSim.h"
#include <algorithm>
#include <cmath>
#include <limits>
#include <optional>

namespace armyvisual::context {
enum class CarryFamily { Rifle, HeavyGun, Unsupported };
enum class BodyMode { Grounded, Traversal, OutOfAction };

struct Equipment {
    army::WeaponId item = army::WeaponId::Rifle;
    army::WeaponAction mechanism = army::WeaponAction::Bolt;
    CarryFamily family = CarryFamily::Unsupported;
    int rounds = 0, capacity = 0;
    float cycleSeconds = 0, reloadSeconds = 0;
};

struct Traversal {
    bool active = false;
    float progress = 0, obstacleHeight = 0;
    army::Vec3 takeoff{}, landing{};
    double landsAt = -1;
};

struct Sample {
    double time = 0, sourceTime = 0;
    int soldier = -1;
    BodyMode mode = BodyMode::Grounded;
    army::Stance stance = army::Stance::Standing;
    army::Action action = army::Action::Hold;
    army::Reason reason = army::Reason::Watching;
    army::Vec3 position{}, velocity{}, facing{1,0,0}, attention{1,0,0};
    army::Vec3 aimPoint{}, recoil{};
    float forwardSpeed = 0, rightSpeed = 0;
    float aim = 0, healthFraction = 1, suppression = 0, nerve = 0;
    float staminaSeconds = 0, staminaFraction = 0;
    float knockHeight = 0;
    bool stunned = false, deafened = false, grenadeRush = false;
    bool sprinting = false, winded = false, movingFire = false;
    bool coveredPath = false, holdingFire = false, areaFire = false;
    bool supportIntent = false, hasAimPoint = false;
    // A support-gun order is NOT proof of deployed bipod/surface contact.
    Equipment equipment;
    Traversal traversal;
    double lastShot = -std::numeric_limits<double>::infinity();
    int lastShotIndex = -1; // stable index into Record.shots, not an animation notify
    double reloadStart = -1, reloadEnd = -1;
    bool reloading = false;
};

struct TrajectoryPoint {
    double requestedOffset = 0, sampledOffset = 0;
    army::Vec3 position{}, facing{};
    bool available = false, grounded = false;
};

inline army::Vec3 Lerp(army::Vec3 a, army::Vec3 b, float t) {
    return {a.x+(b.x-a.x)*t,a.y+(b.y-a.y)*t,a.z+(b.z-a.z)*t};
}
inline army::Vec3 Direction(army::Vec3 a, army::Vec3 b, float t) {
    constexpr double pi = 3.14159265358979323846;
    const double yaw=std::atan2(a.y,a.x);
    const double delta=std::remainder(std::atan2(b.y,b.x)-yaw,2*pi);
    return {float(std::cos(yaw+delta*t)),float(std::sin(yaw+delta*t)),0};
}
inline std::optional<Equipment> ReadEquipment(const army::Soldier& s) {
    Equipment e;
    e.item=s.weapon.def; e.mechanism=s.gun.action;
    switch(e.item) {
        case army::WeaponId::Rifle:e.family=CarryFamily::Rifle;break;
        case army::WeaponId::MachineGun:e.family=CarryFamily::HeavyGun;break;
        default:break; // A new item needs an explicit animation profile, not a guessed grip.
    }
    e.rounds=s.magazineRemaining; e.capacity=s.gun.magazine;
    const float dex=army::StatScale(s.stats.Get(army::Stat::Dexterity));
    if(!(dex>0) || !std::isfinite(dex))return std::nullopt;
    e.cycleSeconds=s.gun.cycleSeconds/dex;
    e.reloadSeconds=s.gun.reloadSeconds/dex;
    return e;
}

class ReplaySource {
    const army::Record& record;
    std::array<std::vector<int>,army::UnitCount> shotIndices;
    bool valid = false;
    static bool ValidSlot(int slot) { return slot>=0 && slot<army::UnitCount; }
    static bool ValidTime(double time) { return std::isfinite(time); }
    size_t FrameIndex(double time) const {
        auto it=std::upper_bound(record.frames.begin(),record.frames.end(),time,
            [](double t,const army::Frame& f){return t<f.time;});
        return it==record.frames.begin()?0:size_t(it-record.frames.begin()-1);
    }
public:
    explicit ReplaySource(const army::Record& source):record(source) {
        if(record.frames.empty())return;
        for(size_t i=0;i<record.frames.size();++i)
            if(!std::isfinite(record.frames[i].time) || (i && record.frames[i].time<=record.frames[i-1].time))
                return;
        for(size_t i=0;i<record.shots.size();++i) {
            const auto& shot=record.shots[i];
            if(shot.owner<0 || shot.owner>=army::UnitCount || !std::isfinite(shot.time))
                return;
            shotIndices[size_t(shot.owner)].push_back(int(i));
        }
        for(auto& indices:shotIndices)std::stable_sort(indices.begin(),indices.end(),
            [&](int a,int b){return record.shots[size_t(a)].time<record.shots[size_t(b)].time;});
        valid=true;
    }
    ReplaySource(army::Record&&)=delete;
    bool Valid() const { return valid; }

    std::optional<Sample> At(int slot,double requestedTime) const {
        if(!valid || !ValidSlot(slot) || !ValidTime(requestedTime))return std::nullopt;
        Sample out;
        out.time=std::clamp(requestedTime,double(record.frames.front().time),double(record.frames.back().time));
        const size_t k=FrameIndex(out.time);
        const auto& frame=record.frames[k]; const auto& s=frame.soldiers[size_t(slot)];
        const army::Frame* next=k+1<record.frames.size()?&record.frames[k+1]:nullptr;
        const army::Soldier* n=next?&next->soldiers[size_t(slot)]:nullptr;
        out.sourceTime=frame.time; out.soldier=s.id;
        out.mode=!s.Active()?BodyMode::OutOfAction:s.vaulting?BodyMode::Traversal:BodyMode::Grounded;
        out.stance=s.stance; out.action=s.action;out.reason=s.reason;
        out.knockHeight=s.knockHeight;out.stunned=s.stunned;out.deafened=s.deafened;out.grenadeRush=s.grenadeRush;
        const auto equipment=ReadEquipment(s);
        if(!equipment)return std::nullopt;
        out.equipment=*equipment;
        out.position=s.position; out.facing=Direction(s.facing,s.facing,0);
        const auto look=s.directionalSight?s.look:s.facing;
        out.attention=Direction(look,look,0);
        // Never interpolate across death or a vault's discrete takeoff-to-landing jump.
        if(n && n->id==s.id && s.Active() && n->Active() && !s.vaulting && !n->vaulting) {
            const double dt=next->time-frame.time;
            const float blend=float((out.time-frame.time)/dt);
            out.position=Lerp(s.position,n->position,blend);
            out.knockHeight=s.knockHeight+(n->knockHeight-s.knockHeight)*blend;
            out.facing=Direction(s.facing,n->facing,blend);
            out.attention=Direction(look,n->directionalSight?n->look:n->facing,blend);
            out.velocity={float((n->position.x-s.position.x)/dt),float((n->position.y-s.position.y)/dt),float((n->position.z-s.position.z)/dt)};
        }
        out.position.z+=out.knockHeight;
        out.forwardSpeed=out.velocity.x*out.facing.x+out.velocity.y*out.facing.y;
        out.rightSpeed=-out.velocity.x*out.facing.y+out.velocity.y*out.facing.x;
        out.aim=std::clamp(s.aim,0.f,1.f);
        // BattleSim stores its aim marker 1.5 m below the selected FireSolution.
        // Consumers need the actual world target, not that legacy marker height.
        out.aimPoint=s.aimPoint;out.aimPoint.z+=1.5f;
        out.hasAimPoint=s.aimTarget>=0 || s.areaFire; out.recoil=s.recoil;
        out.healthFraction=s.maxHealth>0?std::clamp(s.health/s.maxHealth,0.f,1.f):0;
        out.suppression=std::clamp(s.suppression,0.f,1.f); out.nerve=std::clamp(s.nerve,0.f,1.f);
        out.staminaSeconds=s.stamina;
        const float capacity=army::Sprint().capacitySeconds*army::StatScale(s.stats.Get(army::Stat::Endurance));
        out.staminaFraction=capacity>0?std::clamp(s.stamina/capacity,0.f,1.f):0;
        out.sprinting=s.sprinting; out.winded=s.winded; out.movingFire=s.movingFire;
        out.coveredPath=s.coveredPath; out.holdingFire=s.holdingFire; out.areaFire=s.areaFire;
        out.supportIntent=s.supportGun;
        out.traversal={s.vaulting,std::clamp(s.vaultProgress,0.f,1.f),s.vaultHeight,s.vaultTakeoff,s.vaultLanding,s.vaultLandsAt};
        // Progress uses recorded landmarks; this does not invent an obstacle/hand contact.
        if(s.vaulting && n && n->id==s.id) {
            const float blend=float((out.time-frame.time)/(next->time-frame.time));
            out.traversal.progress=std::clamp(s.vaultProgress+((n->vaulting?n->vaultProgress:1.f)-s.vaultProgress)*blend,0.f,1.f);
        }
        const auto& indices=shotIndices[size_t(slot)];
        const auto shot=std::upper_bound(indices.begin(),indices.end(),out.time,
            [&](double t,int i){return t<record.shots[size_t(i)].time;});
        if(shot!=indices.begin()) {
            out.lastShotIndex=*std::prev(shot);
            out.lastShot=record.shots[size_t(out.lastShotIndex)].time;
        }
        auto reload=[&](const army::Soldier& candidate) {
            const auto equipment=ReadEquipment(candidate);
            if(!equipment)return false;
            const double end=candidate.reloadUntil;
            const double start=end-equipment->reloadSeconds;
            if(end>0 && start<=out.time && out.time<end) {
                out.reloadStart=start; out.reloadEnd=end; out.reloading=true;
            }
            return true;
        };
        if(!reload(s))return std::nullopt;
        // Reload can begin between saved frames; recover only its authoritative interval,
        // never tomorrow's stance/weapon/aim state. Same equipment and body must persist.
        if(!out.reloading && n && n->id==s.id && n->Active() && s.weapon.def==n->weapon.def && s.gun.action==n->gun.action)
            if(!reload(*n))return std::nullopt;
        if(!s.Active()) {
            out.sprinting=out.movingFire=out.hasAimPoint=out.reloading=false;
            out.reloadStart=out.reloadEnd=-1; out.traversal.active=false;
        }
        return out;
    }

    // Pure interval lookup: the caller owns dispatch/deduplication. Reverse/empty ranges
    // intentionally contain no forward events. Distinct simultaneous shots retain IDs.
    std::optional<std::vector<int>> ShotsBetween(int slot,double after,double through) const {
        if(!valid || !ValidSlot(slot) || !ValidTime(after) || !ValidTime(through))return std::nullopt;
        if(through<=after)return std::vector<int>{};
        const auto& indices=shotIndices[size_t(slot)];
        auto bound=[&](double t){return std::upper_bound(indices.begin(),indices.end(),t,
            [&](double at,int i){return at<record.shots[size_t(i)].time;});};
        return std::vector<int>{bound(after),bound(through)};
    }

    std::optional<std::vector<double>> ShotTimesBetween(int slot,double after,double through) const {
        const auto indices=ShotsBetween(slot,after,through);
        if(!indices)return std::nullopt;
        std::vector<double> times;times.reserve(indices->size());
        for(int index:*indices)times.push_back(record.shots[size_t(index)].time);
        return times;
    }

    std::optional<std::vector<TrajectoryPoint>> Trajectory(int slot,double time,const std::vector<double>& offsets) const {
        if(!valid || !ValidSlot(slot) || !ValidTime(time))return std::nullopt;
        std::vector<TrajectoryPoint> result; result.reserve(offsets.size());
        for(double offset:offsets) {
            if(!ValidTime(offset))return std::nullopt;
            const auto sample=At(slot,time+offset);
            if(!sample)return std::nullopt;
            result.push_back({offset,sample->time-time,sample->position,sample->facing,
                time+offset>=record.frames.front().time && time+offset<=record.frames.back().time,
                sample->mode==BodyMode::Grounded&&sample->knockHeight<=0});
        }
        return result;
    }
};
} // namespace armyvisual::context
