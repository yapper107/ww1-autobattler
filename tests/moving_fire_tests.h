// Plan 019 mechanism pair: attackers cross about forty metres of open ground toward
// defenders seated in low cover. The same battle is fought with fire on the move and
// with the feature switched off, under both attacking controllers. Everything is
// reported as counts; only the mechanism itself is asserted (who may fire on the move,
// that the switch is a true off, and that both arms reproduce exactly).
#pragma once
#include "ImportedMap.h"
static std::string CrossingMap(){
    std::ostringstream m;
    m<<"ARMYMAP 1 city 19\nBOUNDS 70 40 0\n";
    uint64_t id=1;
    // The defended locality: two short rows of low blocks, nothing in the approach.
    for(int row=0;row<2;++row)for(int n=0;n<5;++n){
        const float x=30.f+float(row)*6.f,y=-12.f+float(n)*6.f;
        m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 0.7 0.7 1.2 0 1 1\n";
    }
    // One wall behind the position, so the locality is a place and not a field.
    m<<"O "<<id++<<" 44 0 0 0.3 14 3.2 1 0 1\n";
    for(int i=0;i<UnitCount;++i){
        const float side=i<TeamSize?-12.f:40.f,y=-31.f+float(i%TeamSize)*2.f;
        m<<"U "<<i<<' '<<side<<' '<<y<<" 0 "<<(i<TeamSize?24.f:40.f)<<' '<<y<<" 0\n";
    }
    m<<"END\n";
    return m.str();
}
struct CrossingCounts {
    int movingShots=0,movingHits=0,shots=0,attackerHits=0,defenderHits=0;
    int deferredReloads=0,movingFrames=0,attackMoveFrames=0,inRangeFrames=0,haltedInOpen=0,longestBurst=0;
    float defenderSuppressed=0;
    uint64_t digest=0;
};
static CrossingCounts RunCrossing(const std::shared_ptr<const ImportedBattlefield>& map,uint32_t seed,bool movingFire,bool drills){
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=120;c.movingFire=movingFire;c.drills=c.foundations=drills;
    c.staticDefence.layout=DefenceLayout::Spread;c.staticDefence.defenders=6;c.staticDefence.seed=19;
    DiagnosticOptions off;off.enabled=false;
    auto record=std::make_unique<Record>(Simulate(c,off));const auto& r=*record;
    CrossingCounts out;out.digest=GameplayDigest(r);out.shots=int(r.shots.size());
    std::array<int,UnitCount> burst{};
    for(const auto& shot:r.shots){
        if(shot.hit)(shot.target<TeamSize?out.attackerHits:out.defenderHits)+=1;
        if(shot.movingFire){++out.movingShots;out.movingHits+=shot.hit;
            ++burst[size_t(shot.owner)];out.longestBurst=std::max(out.longestBurst,burst[size_t(shot.owner)]);}
        else burst[size_t(shot.owner)]=0;
    }
    // The record samples every four ticks, so one frame is 0.2 s of one soldier.
    for(size_t k=1;k<r.frames.size();++k){
        const float step=r.frames[k].time-r.frames[k-1].time;
        for(const auto& s:r.frames[k].soldiers){
            if(!s.Active())continue;
            if(s.team){if(s.suppression>.4f)out.defenderSuppressed+=step;continue;}
            if(AttackMovement(s)){
                ++out.attackMoveFrames;
                for(const auto& ct:s.contacts)if(ct.known&&ct.visible&&Distance(s.position,ct.position)<=WalkingFireRange(s)){++out.inRangeFrames;break;}
            }
            out.movingFrames+=s.movingFire;out.deferredReloads+=s.reloadDeferred;
            out.haltedInOpen+=s.action==Action::Fire&&s.reason==Reason::ClearShot;
            // The flag is what the firing stage measured; an order activated later in the same sample
            // (a drills mover arriving and being re-tasked) may already be on the frame.
            if(s.movingFire)assert((AttackMovement(s)||r.frames[k].time-s.assignment.activatedAt<.3f)&&(s.magazineRemaining>0||s.reloadDeferred)&&s.suppression<.8f); // the sample in which the magazine empties still carries the flag
        }
    }
    return out;
}
static void MovingFireTests(){
    std::cout.setf(std::ios::unitbuf);
    std::string error;auto crossing=ImportBattlefield(CrossingMap(),error);
    if(!crossing)std::cout<<"MOVING FIRE crossing map rejected: "<<error<<std::endl;
    assert(crossing&&error.empty());
    const uint32_t seeds[3]={101,102,103};
    int drillMovingShots=0,drillMovingFrames=0;
    for(int controller=0;controller<2;++controller){
        CrossingCounts on{},off{};
        for(uint32_t seed:seeds){
            const auto a=RunCrossing(crossing,seed,true,controller!=0),b=RunCrossing(crossing,seed,false,controller!=0);
            // The control never fires on the move, and the pair reproduces exactly.
            assert(b.movingShots==0&&b.movingFrames==0&&b.deferredReloads==0);
            if(seed==seeds[0])assert(b.digest==RunCrossing(crossing,seed,false,controller!=0).digest&&
                                     a.digest==RunCrossing(crossing,seed,true,controller!=0).digest);
            assert((a.digest!=b.digest)==(a.movingFrames>0));
            std::cout<<"MOVING FIRE crossing "<<(controller?"drills":"legacy")<<" seed "<<seed
                     <<": attack-move samples="<<a.attackMoveFrames<<" of them with a visible enemy in walking range="<<a.inRangeFrames
                     <<" walking-fire samples="<<a.movingFrames<<" rounds on the move="<<a.movingShots<<" hitting "<<a.movingHits
                     <<" | defender suppressed "<<a.defenderSuppressed<<"s against "<<b.defenderSuppressed
                     <<"s; attackers hit "<<a.attackerHits<<" against "<<b.attackerHits
                     <<"; defenders hit "<<a.defenderHits<<" against "<<b.defenderHits
                     <<"; shots "<<a.shots<<" against "<<b.shots<<"\n";
            on.movingShots+=a.movingShots;on.movingHits+=a.movingHits;on.shots+=a.shots;on.movingFrames+=a.movingFrames;
            on.attackerHits+=a.attackerHits;on.defenderHits+=a.defenderHits;on.defenderSuppressed+=a.defenderSuppressed;
            on.attackMoveFrames+=a.attackMoveFrames;on.inRangeFrames+=a.inRangeFrames;on.deferredReloads+=a.deferredReloads;
            on.haltedInOpen+=a.haltedInOpen;on.longestBurst=std::max(on.longestBurst,a.longestBurst);
            off.shots+=b.shots;off.attackerHits+=b.attackerHits;off.defenderHits+=b.defenderHits;
            off.defenderSuppressed+=b.defenderSuppressed;off.haltedInOpen+=b.haltedInOpen;
        }
        std::cout<<"MOVING FIRE crossing "<<(controller?"drills":"legacy")<<" total: rounds on the move="<<on.movingShots
                 <<" of "<<on.shots<<" hitting "<<on.movingHits<<"; longest walking burst="<<on.longestBurst
                 <<"; magazines carried empty="<<on.deferredReloads
                 <<"; defender suppressed "<<on.defenderSuppressed<<"s against "<<off.defenderSuppressed
                 <<"s; attackers hit "<<on.attackerHits<<" against "<<off.attackerHits
                 <<"; defenders hit "<<on.defenderHits<<" against "<<off.defenderHits
                 <<"; halted-in-the-open samples "<<on.haltedInOpen<<" against "<<off.haltedInOpen<<"\n";
        if(controller){drillMovingShots=on.movingShots;drillMovingFrames=on.movingFrames;}
    }
    // The mechanism must exist where the controller actually bounds into contact; its
    // size, and legacy's own count, are reported rather than asserted.
    assert(drillMovingShots>0&&drillMovingFrames>0);
    std::cout<<"MOVING FIRE: the crossing pair, the true off switch and determinism PASS\n";
}
