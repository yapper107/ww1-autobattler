#include "AnimationContext.h"
#include <cassert>
#include <iostream>
#include <memory>
#include <random>

using namespace armyvisual::context;
static bool Near(double a,double b,double epsilon=1e-5){return std::abs(a-b)<epsilon;}
// Successful-fixture convenience wrapper; explicit failure cases use the base API.
class CheckedReplay : public ReplaySource {
public:
    explicit CheckedReplay(const army::Record& record):ReplaySource(record){assert(Valid());}
    Sample At(int slot,double time) const {
        auto value=ReplaySource::At(slot,time);assert(value);return *value;
    }
    std::vector<int> ShotsBetween(int slot,double after,double through) const {
        auto value=ReplaySource::ShotsBetween(slot,after,through);assert(value);return *value;
    }
    std::vector<TrajectoryPoint> Trajectory(int slot,double time,const std::vector<double>& offsets) const {
        auto value=ReplaySource::Trajectory(slot,time,offsets);assert(value);return *value;
    }
};
int main() {
    auto record=std::make_unique<army::Record>();
    record->frames.resize(4);
    for(size_t i=0;i<record->frames.size();++i) {
        auto& f=record->frames[i];f.time=float(i)*.5f;
        for(int slot=0;slot<army::UnitCount;++slot)f.soldiers[size_t(slot)].id=slot;
        f.soldiers[0].position={float(i),0,0};
        f.soldiers[0].aimTarget=3;f.soldiers[0].aimPoint={8,2,1};
    }
    // Deliberately unsorted, sub-snapshot MG events, including simultaneous rounds.
    for(float time:{.375f,.125f,.25f,.25f}) {
        army::Shot shot;shot.owner=0;shot.time=time;record->shots.push_back(shot);
    }
    CheckedReplay replay(*record);
    auto first=replay.At(0,.0625);assert(first.lastShotIndex==-1);
    const auto context=replay.At(0,.25);
    assert(Near(context.position.x,.5)&&Near(context.forwardSpeed,2));
    assert(context.lastShotIndex==3&&context.lastShot==.25);
    assert((replay.ShotsBetween(0,.125,.375)==std::vector<int>{2,3,0}));
    assert(replay.ShotsBetween(0,.375,.125).empty());
    assert(replay.ShotsBetween(0,.25,.25).empty());
    assert(replay.ShotsBetween(1,0,1).empty());
    assert(context.aimPoint.x==8&&Near(context.aimPoint.z,2.5)); // Restore the fire solution's world height.

    // State extraction is invariant to seeks, pause and the caller's frame cadence.
    std::mt19937 rng(17);std::uniform_real_distribution<double> randomTime(-1,3);
    for(int i=0;i<2000;++i) {
        const double time=randomTime(rng);const auto a=replay.At(0,time);
        replay.At(0,randomTime(rng));const auto b=replay.At(0,time);
        assert(a.time==b.time&&a.position.x==b.position.x&&a.forwardSpeed==b.forwardSpeed);
        assert(a.lastShotIndex==b.lastShotIndex&&a.reloadStart==b.reloadStart);
    }
    const auto trajectory=replay.Trajectory(0,.25,{-1,0,.25,2});
    assert(!trajectory[0].available&&Near(trajectory[0].sampledOffset,-.25));
    assert(trajectory[1].available&&Near(trajectory[2].position.x,1));
    assert(!trajectory[3].available&&Near(trajectory[3].sampledOffset,1.25));
    assert(!replay.ReplaySource::At(-1,0));
    assert(!replay.ReplaySource::At(army::UnitCount,0));
    assert(!replay.ReplaySource::At(0,std::numeric_limits<double>::quiet_NaN()));

    // All following records are distinct inputs, never mutated during a live view's use.
    auto other=std::make_unique<army::Record>();other->frames=record->frames;
    auto& a=other->frames[0].soldiers[0];auto& b=other->frames[1].soldiers[0];
    const double radians=3.14159265358979323846/180;
    a.facing={float(std::cos(179*radians)),float(std::sin(179*radians)),0};
    b.facing={float(std::cos(-179*radians)),float(std::sin(-179*radians)),0};
    {CheckedReplay input(*other);assert(input.At(0,.25).facing.x<-.999f);}

    a.facing=b.facing={1,0,0};b.position=a.position;
    a.sprinting=true;a.action=army::Action::Advance;
    {CheckedReplay input(*other);const auto s=input.At(0,.25);assert(s.sprinting&&s.forwardSpeed==0);}
    a.weapon.def=army::WeaponId::MachineGun;a.gun.action=army::WeaponAction::Automatic;
    a.machineGun=false; // Equipment definition drives carry even if legacy flag is stale.
    a.stats.value[size_t(army::Stat::Endurance)]=200;a.stamina=4;
    a.winded=true;a.supportGun=true;
    {CheckedReplay input(*other);const auto s=input.At(0,0);
     assert(s.equipment.family==CarryFamily::HeavyGun&&s.equipment.mechanism==army::WeaponAction::Automatic);
     assert(Near(s.staminaFraction,.25)&&s.winded&&s.supportIntent);}

    a=record->frames[0].soldiers[0];b=record->frames[1].soldiers[0];
    a.stance=army::Stance::Prone;b.stance=army::Stance::Standing;
    a.coveredPath=true;a.suppression=.8f;a.nerve=.6f;
    // An upcoming reload starts at .125, not at the next stored snapshot .5.
    b.gun.reloadSeconds=1.5f;b.reloadUntil=1.625f;
    {CheckedReplay input(*other);assert(!input.At(0,.0625).reloading);
     const auto s=input.At(0,.25);assert(s.reloading&&Near(s.reloadStart,.125));
     assert(s.stance==army::Stance::Prone&&s.coveredPath&&Near(s.suppression,.8));}
    b.weapon.def=army::WeaponId::MachineGun;
    {CheckedReplay input(*other);assert(!input.At(0,.25).reloading);}

    a.vaulting=true;a.vaultProgress=.25f;a.vaultHeight=1.2f;
    a.vaultTakeoff={0,0,0};a.vaultLanding={2,0,0};a.vaultLandsAt=.5;
    b.vaulting=false;b.position={2,0,0};
    {CheckedReplay input(*other);const auto s=input.At(0,.25);
     assert(s.mode==BodyMode::Traversal&&s.position.x==a.position.x&&s.forwardSpeed==0);
     assert(Near(s.traversal.progress,.625)&&s.traversal.landing.x==2);
     assert(!input.Trajectory(0,.25,{0})[0].grounded);}
    a.health=0;a.action=army::Action::Killed;a.movingFire=true;a.sprinting=true;
    {CheckedReplay input(*other);const auto s=input.At(0,.25);
     assert(s.mode==BodyMode::OutOfAction&&!s.traversal.active&&!s.movingFire&&!s.sprinting&&!s.reloading);}

    a=record->frames[0].soldiers[0];b=record->frames[1].soldiers[0];
    a.reason=army::Reason::Knocked;a.stunned=true;a.deafened=true;
    a.knockHeight=.2f;b.knockHeight=.6f;
    {CheckedReplay input(*other);const auto s=input.At(0,.25);
     assert(s.reason==army::Reason::Knocked&&s.stunned&&s.deafened);
     assert(Near(s.knockHeight,.4)&&Near(s.position.z,.4));
     assert(!input.Trajectory(0,.25,{0})[0].grounded);
     assert(Near(s.velocity.z,0));} // Blast height is visual, not ordinary ground locomotion.

    other->frames[1].time=0;assert(!ReplaySource(*other).Valid());
    other->frames.clear();assert(!ReplaySource(*other).Valid());
    assert(!ReplaySource(*other).At(0,0));
    assert(!ReplaySource(*other).ShotsBetween(0,0,1));
    assert(!replay.ReplaySource::Trajectory(0,0,{std::numeric_limits<double>::infinity()}));
    other->frames=record->frames;
    other->frames[0].soldiers[0].stats.value[size_t(army::Stat::Dexterity)]=0;
    assert(!ReplaySource(*other).At(0,0));
    assert(record->frames[0].soldiers[0].position.x==0&&record->shots[0].time==.375f);
    std::cout<<"PASS animation context: exact events, equipment, actual motion, stance/vault/death, reload recovery, 2000 seeks\n";
}
